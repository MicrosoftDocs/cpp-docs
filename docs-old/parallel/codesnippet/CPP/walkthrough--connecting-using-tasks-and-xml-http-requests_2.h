#pragma once
#include "pch.h"

inline void CheckHResult(HRESULT hResult)
{
    if (hResult == E_ABORT)
    {
        concurrency::cancel_current_task();
    }
    else if (FAILED(hResult))
    {
        throw Platform::Exception::CreateException(hResult);
    }
}

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
    HttpRequestBuffersCallback(IXMLHTTPRequest2* httpRequest, 
        concurrency::cancellation_token ct = concurrency::cancellation_token::none()) :
        request(httpRequest), cancellationToken(ct), responseReceived(false), dataHResult(S_OK), statusCode(200)
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

        dataEvent = concurrency::task_completion_event<void>();
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

            concurrency::critical_section::scoped_lock lock(dataEventLock);
            dataEvent.set();
        }
        catch (std::bad_alloc&)
        {
            hr = E_OUTOFMEMORY;
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
            concurrency::critical_section::scoped_lock lock(dataEventLock);
            dataEvent.set();
        }
        catch (std::bad_alloc&)
        {
            hr = E_OUTOFMEMORY;
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
            concurrency::critical_section::scoped_lock lock(dataEventLock);
            dataHResult = hrError;
            dataEvent.set();
        }
        catch (std::bad_alloc&)
        {
            hr = E_OUTOFMEMORY;
        }

        return hr;
    }

    // Create a task that completes when data is available, in an exception-safe way.
    concurrency::task<void> CreateDataTask();

    HRESULT GetError() const
    {
        return dataHResult;
    }

    int GetStatusCode() const
    {
        return statusCode;
    }

    std::wstring const& GetReasonPhrase() const
    {
        return reasonPhrase;
    }

    bool IsResponseReceived() const
    {
        return responseReceived;
    }

    // Copy bytes from the sequential stream into the buffer provided until
    // we reach the end of one or the other.
    unsigned int ReadData(
        _Out_writes_(outputBufferSize) byte* outputBuffer,
        unsigned int outputBufferSize);

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
    concurrency::task_completion_event<void> dataEvent;
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
// This class only supports one outstanding request at a time.
class HttpRequest
{
public:
    HttpRequest();

    int GetStatusCode() const
    {
        return statusCode;
    }

    std::wstring const& GetReasonPhrase() const
    {
        return reasonPhrase;
    }

    // Whether the response has been completely received, if using ReadAsync().
    bool IsResponseComplete() const
    {
        return responseComplete;
    }

    // Start an HTTP GET on the specified URI.  The returned task completes once the entire response
    // has been received, and the task produces the HTTP response text.  The status code and reason
    // can be read with GetStatusCode() and GetReasonPhrase().
    concurrency::task<std::wstring> GetAsync(
        Windows::Foundation::Uri^ uri, 
        concurrency::cancellation_token cancellationToken = concurrency::cancellation_token::none());

    // Start an HTTP POST on the specified URI, using a string body.  The returned task produces the 
    // HTTP response text.  The status code and reason can be read with GetStatusCode() and GetReasonPhrase().
    concurrency::task<std::wstring> PostAsync(
        Windows::Foundation::Uri^ uri,
        PCWSTR contentType,
        IStream* postStream,
        uint64 postStreamSizeToSend,
        concurrency::cancellation_token cancellationToken = concurrency::cancellation_token::none());

    // Start an HTTP POST on the specified URI, using a stream body.  The returned task produces the
    // HTTP response text.  The status code and reason can be read with GetStatusCode() and GetReasonPhrase().
    concurrency::task<std::wstring> PostAsync(
        Windows::Foundation::Uri^ uri,
        const std::wstring& str,
        concurrency::cancellation_token cancellationToken = concurrency::cancellation_token::none());

    // Send a request but don't return the response.  Instead, let the caller read it with ReadAsync().
    concurrency::task<void> SendAsync(
        const std::wstring& httpMethod,
        Windows::Foundation::Uri^ uri,
        concurrency::cancellation_token cancellationToken = concurrency::cancellation_token::none());

    // Read a chunk of data from the HTTP response, up to a specified length or until we reach the end
    // of the response, and store the value in the provided buffer.  This is useful for large content,
    // enabling the streaming of the result.
    concurrency::task<void> ReadAsync(
        Windows::Storage::Streams::IBuffer^ readBuffer,
        unsigned int offsetInBuffer,
        unsigned int requestedBytesToRead);

    static void CreateMemoryStream(IStream **stream);

private:
    // Start a download of the specified URI using the specified method.  The returned task produces the
    // HTTP response text.  The status code and reason can be read with GetStatusCode() and GetReasonPhrase().
    concurrency::task<std::wstring> DownloadAsync(
        PCWSTR httpMethod,
        PCWSTR uri, 
        concurrency::cancellation_token cancellationToken,
        PCWSTR contentType,
        IStream* postStream,
        uint64 postStreamBytesToSend);

    // Referenced pointer to the callback, if using SendAsync/ReadAsync.
    Microsoft::WRL::ComPtr<Details::HttpRequestBuffersCallback> buffersCallback;

    int statusCode;
    std::wstring reasonPhrase;

    // Whether the response has been completely received, if using ReadAsync().
    bool responseComplete;
};

};