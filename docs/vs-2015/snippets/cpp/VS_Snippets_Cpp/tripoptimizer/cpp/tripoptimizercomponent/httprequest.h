//-----------------------------------------------------------------------
// 
//  Copyright (C) Microsoft Corporation.  All rights reserved.
// 
// 
// THIS CODE AND INFORMATION ARE PROVIDED AS-IS WITHOUT WARRANTY OF ANY
// KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//-----------------------------------------------------------------------
#pragma once
#include "pch.h"

namespace Web
{

namespace Details
{
    // Implementation of IXMLHTTPRequest2Callback used when partial buffers are needed from the response.
    // When only the complete response is needed, use HttpRequestStringCallback instead.
    class HttpRequestBuffersCallback 
        : public Microsoft::WRL::RuntimeClass<
            Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::ClassicCom>, 
            IXMLHTTPRequest2Callback, 
            Microsoft::WRL::FtmBase>
    {
    public:
        HttpRequestBuffersCallback(IXMLHTTPRequest2* r, concurrency::cancellation_token ct) :
            request(r), cancellationToken(ct), responseReceived(false), dataHResult(S_OK)
        {
            // Register a callback function that aborts the HTTP operation when 
            // the cancellation token is canceled.
            if (cancellationToken != concurrency::cancellation_token::none())
            {
                registrationToken = cancellationToken.register_callback([this]() 
                {
                    if (request != nullptr) 
                    {
                        request->Abort();
                    }
                });
            }

            dataEvent = std::unique_ptr<concurrency::task_completion_event<void>>(
                new(std::nothrow) concurrency::task_completion_event<void>());
        }

        // Called when the HTTP request is being redirected to a new URL.
        IFACEMETHODIMP OnRedirect(IXMLHTTPRequest2*, PCWSTR) 
        {
            return S_OK;
        }

        // Called when HTTP headers have been received and processed.
        IFACEMETHODIMP OnHeadersAvailable(IXMLHTTPRequest2*, DWORD statusCode, PCWSTR reasonPhrase)
        {
            HRESULT hr = S_OK;

            // We must not propagate exceptions back to IXHR2.
            try
            {
                this->statusCode = statusCode;
                this->reasonPhrase = reasonPhrase;
                dataEventLock.lock();
                dataEvent->set();
                dataEventLock.unlock();
            }
            catch (Platform::Exception^ ex)
            {
                hr = ex->HResult;
            }
            return hr;
        }

        // Called when a portion of the entity body has been received.
        IFACEMETHODIMP OnDataAvailable(IXMLHTTPRequest2*, ISequentialStream* stream)
        {
            HRESULT hr = S_OK;

            // We must not propagate exceptions back to IXHR2.
            try
            {
                // Store a reference on the stream so it can be accessed by the task.
                dataStream = stream;

                // The work must be done as fast as possible, and must not block this thread,
                // for example, waiting on another event object.  Here we simply set an event
                // that can be processed by another thread.
                dataEventLock.lock();
                dataEvent->set();
                dataEventLock.unlock();
            }
            catch (Platform::Exception^ ex)
            {
                hr = ex->HResult;
            }
            return hr;
        }
        
        // Called when the entire entity response has been received.
        IFACEMETHODIMP OnResponseReceived(IXMLHTTPRequest2* xhr, ISequentialStream* responseStream)
        {
            responseReceived = true;
            return OnDataAvailable(xhr, responseStream);
        }
        
        // Called when an error occurs during the HTTP request.
        IFACEMETHODIMP OnError(IXMLHTTPRequest2*, HRESULT hrError) 
        {
            HRESULT hr = S_OK;

            // We must not propagate exceptions back to IXHR2.
            try
            {
                dataEventLock.lock();
                dataHResult = hrError;
                dataEvent->set();
                dataEventLock.unlock();
            }
            catch (Platform::Exception^ ex)
            {
                hr = ex->HResult;
            }

            return hr;
        }

        // Retrieves the data event for the HTTP operation.
        concurrency::task_completion_event<void> const& GetAndLockDataEvent() 
        {
            dataEventLock.lock();
            return *dataEvent;
        }

        void UnlockDataEvent()
        {
            dataEventLock.unlock();
        }

        HRESULT GetError() const
        {
            return dataHResult;
        }

        int GetStatusCode() const
        {
            return statusCode;
        }

        std::wstring GetReasonPhrase() const
        {
            return reasonPhrase;
        }

        bool IsResponseReceived() const
        {
            return responseReceived;
        }

        // Copy bytes from the sequential stream into the buffer provided until
        // we reach the end of one or the other.
        unsigned int ReadData(byte* value, unsigned int count);

    private:
        ~HttpRequestBuffersCallback()
        {
            // Unregister the callback.
            if (cancellationToken != concurrency::cancellation_token::none())
            {
                cancellationToken.deregister_callback(registrationToken);
            }
        }

        // Signals that the download operation was canceled.
        concurrency::cancellation_token cancellationToken;

        // Used to unregister the cancellation token callback.
        concurrency::cancellation_token_registration registrationToken;

        // The IXMLHTTPRequest2 that processes the HTTP request.
        Microsoft::WRL::ComPtr<IXMLHTTPRequest2> request;

        // Task completion event that is set when data is available or error is triggered.
        std::unique_ptr<concurrency::task_completion_event<void>> dataEvent;
        concurrency::critical_section dataEventLock;

        // We cannot store the error obtained from IXHR2 in the dataEvent since any value there is first-writer-wins,
        // whereas we want a subsequent error to override an initial success.
        HRESULT dataHResult;

        // Referenced pointer to the data stream.
        Microsoft::WRL::ComPtr<ISequentialStream> dataStream;

        // HTTP status code and reason returned by the server.
        int statusCode;
        std::wstring reasonPhrase;

        // Whether the response has been completely received.
        bool responseReceived;
    };
};

// Utility class for performing asynchronous HTTP requests.
class HttpRequest
{
public:
    HttpRequest();

    int GetStatusCode() const
    {
        return statusCode;
    }

    std::wstring GetReasonPhrase() const
    {
        return reasonPhrase;
    }

    bool IsResponseComplete() const
    {
        return responseComplete;
    }

    // The returned task produces a tuple of the status code of the operation
    // and the HTTP response text.
    concurrency::task<std::wstring> GetAsync(
        Windows::Foundation::Uri^ uri, 
        concurrency::cancellation_token cancellationToken = concurrency::cancellation_token::none());

    // The returned task produces a tuple of the status code of the operation
    // and the HTTP response text.
    concurrency::task<std::wstring> PostAsync(
        Windows::Foundation::Uri^ uri, 
        const std::wstring& contentType, 
        IStream* postStream, 
        ULONGLONG size, 
        concurrency::cancellation_token cancellationToken = concurrency::cancellation_token::none());

    concurrency::task<std::wstring> PostAsync(
        Windows::Foundation::Uri^ uri, 
        const std::wstring& str, 
        concurrency::cancellation_token cancellationToken = concurrency::cancellation_token::none());

    concurrency::task<void> SendAsync(
        const std::wstring& method, 
        Windows::Foundation::Uri^ uri, 
        concurrency::cancellation_token cancellationToken = concurrency::cancellation_token::none());

    concurrency::task<void> ReadAsync(
        Windows::Storage::Streams::IBuffer^ buffer, 
        unsigned int offset, 
        unsigned int count);

private:
    // Start a download of the specified URI.
    // The returned task produces a tuple of the status code of the operation
    // and the HTTP response.
    concurrency::task<std::wstring> DownloadAsync(
        const std::wstring& method,
        const std::wstring& uri, 
        concurrency::cancellation_token cancellationToken,
        const std::wstring& contentType,
        IStream* postStream,
        ULONGLONG bytesWritten);

    // Referenced pointer to the callback, if using SendAsync/ReadAsync.
    Microsoft::WRL::ComPtr<Details::HttpRequestBuffersCallback> callback;

    int statusCode;
    std::wstring reasonPhrase;

    // Whether the response has been completely received.
    bool responseComplete;
};

};
