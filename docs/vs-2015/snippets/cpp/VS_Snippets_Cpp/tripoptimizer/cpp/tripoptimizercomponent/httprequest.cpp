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
#include "pch.h"
#include "HttpRequest.h"
#include <robuffer.h>

using namespace std;
using namespace concurrency;
using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Security::Cryptography;
using namespace Windows::Storage::Streams;
using namespace Web;

// Creates a task that completes with the provided result.
template <typename Result>
task<Result> task_from_result(Result result)
{
    return create_task([result]() -> Result { return result; });
}

inline void CheckHResult(HRESULT hResult)
{
    if (hResult == E_ABORT)
    {
        cancel_current_task();
    }
    else if (FAILED(hResult))
    {
        throw Exception::CreateException(hResult);
    }
}

// Implementation of IXMLHTTPRequest2Callback used when only the complete response is needed.
// When processing chunks of response data as they are received, use HttpRequestBuffersCallback instead.
class HttpRequestStringCallback 
    : public RuntimeClass<RuntimeClassFlags<ClassicCom>, IXMLHTTPRequest2Callback, FtmBase>
{
public:
    // <snippet140>
    HttpRequestStringCallback(IXMLHTTPRequest2* r, cancellation_token ct) :
        request(r), cancellationToken(ct)
    {
        // Register a callback function that aborts the HTTP operation when 
        // the cancellation token is canceled.
        if (cancellationToken != cancellation_token::none())
        {
            registrationToken = cancellationToken.register_callback([this]() 
            {
                if (request != nullptr) 
                {
                    request->Abort();
                }
            });
        }
    }
    // </snippet140>

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
        }
        catch (Exception^ ex)
        {
            hr = ex->HResult;
        }

        return hr;
    }

    // Called when a portion of the entity body has been received.
    IFACEMETHODIMP OnDataAvailable(IXMLHTTPRequest2*, ISequentialStream*)
    {
        return S_OK;
    }

    // Called when the entire entity response has been received.
    IFACEMETHODIMP OnResponseReceived(IXMLHTTPRequest2*, ISequentialStream* responseStream)
    {
        wstring wstr;
        HRESULT hr = ReadUtf8StringFromSequentialStream(responseStream, wstr);

        // We must not propagate exceptions back to IXHR2.
        try
        {
            // <snippet120>
            completionEvent.set(make_tuple<HRESULT, wstring>(move(hr), move(wstr)));
            // </snippet120>
        }
        catch (Exception^ ex)
        {
            hr = ex->HResult;
        }

        return hr;
    }

    // Simulate the functionality of DataReader.ReadString().
    // This is needed because DataReader requires IRandomAccessStream and this
    // code has an ISequentialStream that does not have a conversion to IRandomAccessStream like IStream does.
    HRESULT ReadUtf8StringFromSequentialStream(ISequentialStream* readStream, wstring& str)
    {
        // Convert the response to Unicode wstring.
        HRESULT hr;

        // Holds the response as a Unicode string.
        wstringstream ss;

        while (true)
        {
            ULONG cb;
            char buffer[4096];

            // Read the response as a UTF-8 string.  Since UTF-8 characters are 1-4 bytes long,
            // we need to make sure we only read an integral number of characters.  So we'll
            // start with 4093 bytes.
            hr = readStream->Read(buffer, sizeof(buffer) - 3, &cb);
            if (FAILED(hr) || (cb == 0))
            {
                break; // Error or no more data to process, exit loop.
            }

            if (cb == sizeof(buffer) - 3)
            {
                ULONG subsequentBytesRead;
                unsigned int i, cl;

                // Find the first byte of the last UTF-8 character in the buffer.
                for (i = cb - 1; (i >= 0) && ((buffer[i] & 0xC0) == 0x80); i--);

                // Calculate the number of subsequent bytes in the UTF-8 character.
                if (((unsigned char)buffer[i]) < 0x80)
                {
                    cl = 1;
                }
                else if (((unsigned char)buffer[i]) < 0xE0)
                {
                    cl = 2;
                }
                else if (((unsigned char)buffer[i]) < 0xF0)
                {
                    cl = 3;
                }
                else
                {
                    cl = 4;
                }

                // Read any remaining bytes.
                if (cb < i + cl)
                {
                    hr = readStream->Read(buffer + cb, i + cl - cb, &subsequentBytesRead);
                    if (FAILED(hr))
                    {
                        break; // Error, exit loop.
                    }
                    cb += subsequentBytesRead;
                }
            }

            // First determine the size required to store the Unicode string.
            int const sizeRequired = MultiByteToWideChar(CP_UTF8, 0, buffer, cb, nullptr, 0);
            if (sizeRequired == 0)
            {
                // Invalid UTF-8.
                hr = HRESULT_FROM_WIN32(GetLastError());
                break;
            }
            unique_ptr<wchar_t[]> wstr(new(std::nothrow) wchar_t[sizeRequired + 1]);
            if (wstr.get() == nullptr)
            {
                hr = E_OUTOFMEMORY;
                break;
            }

            // Convert the string from UTF-8 to UTF-16LE.  This can never fail, since
            // the previous call above succeeded.
            MultiByteToWideChar(CP_UTF8, 0, buffer, cb, wstr.get(), sizeRequired);
            wstr[sizeRequired] = L'\0'; // Terminate the string.
            ss << wstr.get(); // Write the string to the stream.
        }

        str = SUCCEEDED(hr) ? ss.str() : wstring();
        return (SUCCEEDED(hr)) ? S_OK : hr; // Don't return S_FALSE.
    }
        
    // Called when an error occurs during the HTTP request.
    IFACEMETHODIMP OnError(IXMLHTTPRequest2*, HRESULT hrError) 
    {
        HRESULT hr = S_OK;

        // We must not propagate exceptions back to IXHR2.
        try
        {
            // <snippet121>
            completionEvent.set(make_tuple<HRESULT, wstring>(move(hrError), wstring()));
            // </snippet121>
        }
        catch (Exception^ ex)
        {
            hr = ex->HResult;
        }

        return hr;
    }

    // Retrieves the completion event for the HTTP operation.
    task_completion_event<tuple<HRESULT, wstring>> const& GetCompletionEvent() const
    {
        return completionEvent;
    }

    int GetStatusCode() const
    {
        return statusCode;
    }

    wstring GetReasonPhrase() const
    {
        return reasonPhrase;
    }

private:
    // <snippet141>
    ~HttpRequestStringCallback()
    {
        // Unregister the callback.
        if (cancellationToken != cancellation_token::none())
        {
            cancellationToken.deregister_callback(registrationToken);
        }
    }
    // </snippet141>

    // Signals that the download operation was canceled.
    cancellation_token cancellationToken;

    // Used to unregister the cancellation token callback.
    cancellation_token_registration registrationToken;

    // The IXMLHTTPRequest2 that processes the HTTP request.
    ComPtr<IXMLHTTPRequest2> request;

    // Task completion event that is set when the 
    // download operation completes.
    task_completion_event<tuple<HRESULT, wstring>> completionEvent;

    int statusCode;
    wstring reasonPhrase;
};

// Copy bytes from the sequential stream into the buffer provided until
// we reach the end of one or the other.
unsigned int Web::Details::HttpRequestBuffersCallback::ReadData(
    byte* value, 
    unsigned int count)
{
    // Lock the data event while doing the read, to ensure that any bytes we don't read will
    // result in the correct event getting triggered.
    GetAndLockDataEvent();

    ULONG bytesRead;
    HRESULT hr = dataStream.Get()->Read(value, count, &bytesRead);
    if (SUCCEEDED(hr) && (bytesRead < count))
    {
        // We need to reset the data event, which we can only do by creating a new one.
        // If creating a new one fails, don't throw an exception until after we release the lock.
        dataEvent = unique_ptr<task_completion_event<void>>(
                new(std::nothrow) task_completion_event<void>());
        hr = (dataEvent != nullptr) ? S_OK : E_OUTOFMEMORY;
    }

    UnlockDataEvent();

    CheckHResult(hr);

    return bytesRead;
}

HttpRequest::HttpRequest() : responseComplete(false)
{
}

// <snippet123>
// Start a download of the specified URI using the specified method.  The returned task produces the
// HTTP response text.  The status code and reason can be read with GetStatusCode() and GetReasonPhrase().
task<wstring> HttpRequest::DownloadAsync(PCWSTR httpMethod, PCWSTR uri, cancellation_token cancellationToken,
    PCWSTR contentType, IStream* postStream, uint64 postStreamSizeToSend)
{
    // Create an IXMLHTTPRequest2 object.
    ComPtr<IXMLHTTPRequest2> xhr;
    CheckHResult(CoCreateInstance(CLSID_XmlHttpRequest, nullptr, CLSCTX_INPROC, IID_PPV_ARGS(&xhr)));

    // Create callback.
    auto stringCallback = Make<HttpRequestStringCallback>(xhr.Get(), cancellationToken);
    CheckHResult(stringCallback ? S_OK : E_OUTOFMEMORY);

    auto completionTask = create_task(stringCallback->GetCompletionEvent());

    // Create a request.
    CheckHResult(xhr->Open(httpMethod, uri, stringCallback.Get(), nullptr, nullptr, nullptr, nullptr));

    if (postStream != nullptr && contentType != nullptr)
    {
        CheckHResult(xhr->SetRequestHeader(L"Content-Type", contentType));
    }

    // Send the request.
    CheckHResult(xhr->Send(postStream, postStreamSizeToSend));

    // Return a task that completes when the HTTP operation completes. 
    // We pass the callback to the continuation because the lifetime of the 
    // callback must exceed the operation to ensure that cancellation 
    // works correctly.
    return completionTask.then([this, stringCallback](tuple<HRESULT, wstring> resultTuple)
    {
        // If the GET operation failed, throw an Exception.
        CheckHResult(std::get<0>(resultTuple));

        statusCode = stringCallback->GetStatusCode();
        reasonPhrase = stringCallback->GetReasonPhrase();

        return std::get<1>(resultTuple);
    });
}
// </snippet123>

task<wstring> HttpRequest::GetAsync(Uri^ uri, cancellation_token cancellationToken)
{
    return DownloadAsync(
        L"GET",
        uri->AbsoluteUri->Data(),
        cancellationToken,
        wstring(),
        nullptr,
        0);
}

task<wstring> HttpRequest::PostAsync(Uri^ uri, const wstring& body, cancellation_token cancellationToken)
{
    int length = 0;
    ComPtr<IStream> postStream;
    CheckHResult(CreateStreamOnHGlobal(nullptr, true, &postStream));

    if (body.length() > 0)
    {
        // Get the required buffer size.
        int size = WideCharToMultiByte(CP_UTF8,            // UTF-8
                                       0,                  // Conversion type
                                       body.c_str(),       // Unicode string to convert
                                       (int)body.length(), // Size
                                       NULL,               // Output buffer
                                       0,                  // Output buffer size
                                       nullptr,
                                       nullptr);
        CheckHResult((size != 0) ? S_OK : HRESULT_FROM_WIN32(GetLastError()));

        unique_ptr<char[]> tempData(new char[size]);
        length = WideCharToMultiByte(CP_UTF8,             // UTF-8
                                     0,                   // Conversion type
                                     body.c_str(),        // Unicode string to convert
                                     (int)body.length(),  // Size
                                     tempData.get(),      // Output buffer
                                     size,                // Output buffer size
                                     nullptr,
                                     nullptr);
        CheckHResult((length != 0) ? S_OK : HRESULT_FROM_WIN32(GetLastError()));
        CheckHResult(postStream->Write(tempData.get(), length, NULL));
    }

    return DownloadAsync(L"POST",
                         uri->AbsoluteUri->Data(),
                         cancellationToken,
                         L"text/plain;charset=utf-8",
                         postStream.Get(),
                         length);
}

task<wstring> HttpRequest::PostAsync(
    Uri^ uri, 
    const wstring& contentType, 
    IStream* postStream, 
    ULONGLONG size, 
    cancellation_token cancellationToken)
{
    return DownloadAsync(L"POST",
                         uri->AbsoluteUri->Data(),
                         cancellationToken,
                         contentType,
                         postStream,
                         size);
}

task<void> HttpRequest::SendAsync(
    const wstring& method, 
    Uri^ uri, 
    cancellation_token cancellationToken)
{
    // Create an IXMLHTTPRequest2 object.
    ComPtr<IXMLHTTPRequest2> xhr;
    CheckHResult(CoCreateInstance(CLSID_XmlHttpRequest, nullptr, CLSCTX_INPROC, IID_PPV_ARGS(&xhr)));

    // Create callback.
    auto callback = Make<Details::HttpRequestBuffersCallback>(
        xhr.Get(), 
        cancellationToken);
    CheckHResult(callback ? S_OK : E_OUTOFMEMORY);

    ComPtr<IXMLHTTPRequest2Callback> xhrCallback;
    CheckHResult(callback.As(&xhrCallback));

    // Open and send the request.
    CheckHResult(xhr->Open(method.c_str(),
                           uri->AbsoluteUri->Data(),
                           xhrCallback.Get(),
                           nullptr,
                           nullptr,
                           nullptr,
                           nullptr));
    CheckHResult(xhr->Send(nullptr, 0));

    this->callback = callback;

    responseComplete = false;

    auto dataEvent = callback->GetAndLockDataEvent();
    auto dataTask = create_task(dataEvent);
    callback->UnlockDataEvent();

    // Return a task that completes when the HTTP operation completes.
    // We pass the callback to the continuation because the lifetime of the
    // callback must exceed the operation to ensure that cancellation
    // works correctly.
    return dataTask.then(
        [this, callback](task<void> previousTask)
    {
        // If the read failed, throw an exception.
        previousTask.get();
        CheckHResult(callback->GetError());

        statusCode = callback->GetStatusCode();
        reasonPhrase = callback->GetReasonPhrase();
    });
}

task<void> HttpRequest::ReadAsync(
    Windows::Storage::Streams::IBuffer^ buffer, 
    unsigned int offset, 
    unsigned int count)
{
    if (offset + count > buffer->Capacity)
    {
        throw ref new InvalidArgumentException();
    }

    auto dataEvent = callback->GetAndLockDataEvent();
    auto dataTask = create_task(dataEvent);
    callback->UnlockDataEvent();

    // Return a task that completes when a read completes. 
    // We pass the callback to the continuation because the lifetime of the 
    // callback must exceed the operation to ensure that cancellation 
    // works correctly.
    return dataTask.then(
        [this, buffer, offset, count](task<void> previousTask)
    {
        // If the read failed, throw an exception.
        previousTask.get();
        CheckHResult(callback->GetError());

        // Get a pointer to the location to copy data into.
        ComPtr<IBufferByteAccess> bufferByteAccess;
        CheckHResult(reinterpret_cast<IUnknown*>(buffer)->QueryInterface(IID_PPV_ARGS(&bufferByteAccess)));
        byte* value;
        CheckHResult(bufferByteAccess->Buffer(&value));

        // Copy bytes from the sequential stream into the buffer provided until
        // we reach the end of one or the other.
        buffer->Length = callback->ReadData(value + offset, count);
        if (callback->IsResponseReceived() && (buffer->Length < count))
        {
            responseComplete = true;
        }
    });
}