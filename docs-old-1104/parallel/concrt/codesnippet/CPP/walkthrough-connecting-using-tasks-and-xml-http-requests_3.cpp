#include "pch.h"
#include "HttpRequest.h"
#include <robuffer.h>
#include <shcore.h>

using namespace concurrency;
using namespace Microsoft::WRL;
using namespace Platform;
using namespace std;
using namespace Web;
using namespace Windows::Foundation;
using namespace Windows::Storage::Streams;

// Implementation of IXMLHTTPRequest2Callback used when only the complete response is needed.
// When processing chunks of response data as they are received, use HttpRequestBuffersCallback instead.
class HttpRequestStringCallback 
    : public RuntimeClass<RuntimeClassFlags<ClassicCom>, IXMLHTTPRequest2Callback, FtmBase>
{
public:
    HttpRequestStringCallback(IXMLHTTPRequest2* httpRequest, 
        cancellation_token ct = concurrency::cancellation_token::none()) :
        request(httpRequest), cancellationToken(ct)
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
        catch (std::bad_alloc&)
        {
            hr = E_OUTOFMEMORY;
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
            completionEvent.set(make_tuple<HRESULT, wstring>(move(hr), move(wstr)));
        }
        catch (std::bad_alloc&)
        {
            hr = E_OUTOFMEMORY;
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
            unique_ptr<char16[]> wstr(new(std::nothrow) char16[sizeRequired + 1]);
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
            completionEvent.set(make_tuple<HRESULT, wstring>(move(hrError), wstring()));
        }
        catch (std::bad_alloc&)
        {
            hr = E_OUTOFMEMORY;
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
    ~HttpRequestStringCallback()
    {
        // Unregister the callback.
        if (cancellationToken != cancellation_token::none())
        {
            cancellationToken.deregister_callback(registrationToken);
        }
    }

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
    _Out_writes_(outputBufferSize) byte* outputBuffer,
    unsigned int outputBufferSize)
{
    // Lock the data event while doing the read, to ensure that any bytes we don't read will
    // result in the correct event getting triggered.
    concurrency::critical_section::scoped_lock lock(dataEventLock);

    ULONG bytesRead;
    CheckHResult(dataStream.Get()->Read(outputBuffer, outputBufferSize, &bytesRead));
    if (bytesRead < outputBufferSize)
    {
        // We need to reset the data event, which we can only do by creating a new one.
        dataEvent = task_completion_event<void>();
    }

    return bytesRead;
}

// Create a task that completes when data is available, in an exception-safe way.
task<void> Web::Details::HttpRequestBuffersCallback::CreateDataTask()
{
    concurrency::critical_section::scoped_lock lock(dataEventLock);
    return create_task(dataEvent, cancellationToken);
}

HttpRequest::HttpRequest() : responseComplete(true), statusCode(200)
{
}

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

// Start an HTTP GET on the specified URI.  The returned task completes once the entire response
// has been received, and the task produces the HTTP response text.  The status code and reason
// can be read with GetStatusCode() and GetReasonPhrase().
task<wstring> HttpRequest::GetAsync(Uri^ uri, cancellation_token cancellationToken)
{
    return DownloadAsync(L"GET",
                         uri->AbsoluteUri->Data(),
                         cancellationToken,
                         nullptr,
                         nullptr,
                         0);
}

void HttpRequest::CreateMemoryStream(IStream **stream)
{
    auto randomAccessStream = ref new Windows::Storage::Streams::InMemoryRandomAccessStream();
    CheckHResult(CreateStreamOverRandomAccessStream(randomAccessStream, IID_PPV_ARGS(stream)));
}

// Start an HTTP POST on the specified URI, using a string body.  The returned task produces the
// HTTP response text.  The status code and reason can be read with GetStatusCode() and GetReasonPhrase().
task<wstring> HttpRequest::PostAsync(Uri^ uri, const wstring& body, cancellation_token cancellationToken)
{
    int length = 0;
    ComPtr<IStream> postStream;
    CreateMemoryStream(&postStream);

    if (body.length() > 0)
    {
        // Get the required buffer size.
        int size = WideCharToMultiByte(CP_UTF8,                         // UTF-8
                                       0,                               // Conversion type
                                       body.c_str(),                    // Unicode string to convert
                                       static_cast<int>(body.length()), // Size
                                       nullptr,                         // Output buffer
                                       0,                               // Output buffer size
                                       nullptr,
                                       nullptr);
        CheckHResult((size != 0) ? S_OK : HRESULT_FROM_WIN32(GetLastError()));

        std::unique_ptr<char[]> tempData(new char[size]);
        length = WideCharToMultiByte(CP_UTF8,                         // UTF-8
                                     0,                               // Conversion type
                                     body.c_str(),                    // Unicode string to convert
                                     static_cast<int>(body.length()), // Size
                                     tempData.get(),                  // Output buffer
                                     size,                            // Output buffer size
                                     nullptr,
                                     nullptr);
        CheckHResult((length != 0) ? S_OK : HRESULT_FROM_WIN32(GetLastError()));
        CheckHResult(postStream->Write(tempData.get(), length, nullptr));
    }

    return DownloadAsync(L"POST",
                         uri->AbsoluteUri->Data(),
                         cancellationToken,
                         L"text/plain;charset=utf-8",
                         postStream.Get(),
                         length);
}

// Start an HTTP POST on the specified URI, using a stream body.  The returned task produces the
// HTTP response text.  The status code and reason can be read with GetStatusCode() and GetReasonPhrase().
task<wstring> HttpRequest::PostAsync(Uri^ uri, PCWSTR contentType, IStream* postStream,
    uint64 postStreamSizeToSend, cancellation_token cancellationToken)
{
    return DownloadAsync(L"POST",
                         uri->AbsoluteUri->Data(),
                         cancellationToken,
                         contentType,
                         postStream,
                         postStreamSizeToSend);
}

// Send a request but don't return the response.  Instead, let the caller read it with ReadAsync().
task<void> HttpRequest::SendAsync(const wstring& httpMethod, Uri^ uri, cancellation_token cancellationToken)
{
    // Create an IXMLHTTPRequest2 object.
    ComPtr<IXMLHTTPRequest2> xhr;
    CheckHResult(CoCreateInstance(CLSID_XmlHttpRequest, nullptr, CLSCTX_INPROC, IID_PPV_ARGS(&xhr)));

    // Create callback.
    buffersCallback = Make<Web::Details::HttpRequestBuffersCallback>(xhr.Get(), cancellationToken);
    CheckHResult(buffersCallback ? S_OK : E_OUTOFMEMORY);

    ComPtr<IXMLHTTPRequest2Callback> xhrCallback;
    CheckHResult(buffersCallback.As(&xhrCallback));

    // Open and send the request.
    CheckHResult(xhr->Open(httpMethod.c_str(),
                           uri->AbsoluteUri->Data(),
                           xhrCallback.Get(),
                           nullptr,
                           nullptr,
                           nullptr,
                           nullptr));

    responseComplete = false;

    CheckHResult(xhr->Send(nullptr, 0));

    // Return a task that completes when the HTTP operation completes.
    // Since buffersCallback holds a reference on the callback, the lifetime of the callback will exceed
    // the operation and ensure that cancellation works correctly.
    return buffersCallback->CreateDataTask().then([this]()
    {
        CheckHResult(buffersCallback->GetError());

        statusCode = buffersCallback->GetStatusCode();
        reasonPhrase = buffersCallback->GetReasonPhrase();
    });
}

// Read a chunk of data from the HTTP response, up to a specified length or until we reach the end
// of the response, and store the value in the provided buffer.  This is useful for large content,
// enabling the streaming of the result.
task<void> HttpRequest::ReadAsync(Windows::Storage::Streams::IBuffer^ readBuffer, unsigned int offsetInBuffer,
    unsigned int requestedBytesToRead)
{
    if (offsetInBuffer + requestedBytesToRead > readBuffer->Capacity)
    {
        throw ref new InvalidArgumentException();
    }

    // Return a task that completes when a read completes. 
    // We pass the callback to the continuation because the lifetime of the 
    // callback must exceed the operation to ensure that cancellation 
    // works correctly.
    return buffersCallback->CreateDataTask().then([this, readBuffer, offsetInBuffer, requestedBytesToRead]()
    {
        CheckHResult(buffersCallback->GetError());

        // Get a pointer to the location to copy data into.
        ComPtr<IBufferByteAccess> bufferByteAccess;
        CheckHResult(reinterpret_cast<IUnknown*>(readBuffer)->QueryInterface(IID_PPV_ARGS(&bufferByteAccess)));
        byte* outputBuffer; // Returned internal pointer, do not free this value.
        CheckHResult(bufferByteAccess->Buffer(&outputBuffer));

        // Copy bytes from the sequential stream into the buffer provided until
        // we reach the end of one or the other.
        readBuffer->Length = buffersCallback->ReadData(outputBuffer + offsetInBuffer, requestedBytesToRead);
        if (buffersCallback->IsResponseReceived() && (readBuffer->Length < requestedBytesToRead))
        {
            responseComplete = true;
        }
    });
}