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
#include "stdafx.h"
#include "HttpRequest.h"
#include <MsXml6.h>

using namespace Concurrency;
using namespace std;
using namespace Utils;
using ATL::CComPtr;

// Downloads the specified URI.
CComPtr<IStream> HttpRequest::Download(const wstring& uri)
{
    CComPtr<IXMLHttpRequest> httpReq;
    CComPtr<IStream> stream;
    VARIANT varStream;

    HRESULT hr;

	// Use IXMLHTTPRequest to read the HTTP stream.
    hr = CoCreateInstance(__uuidof(XMLHTTP60), NULL, CLSCTX_INPROC, __uuidof(IXMLHTTPRequest), (void**)&httpReq);
    SUCCEEDED(hr) ? 0 : throw hr;
    hr = httpReq->open(L"GET", _bstr_t(uri.c_str()), _variant_t(false), _variant_t(), _variant_t());
    SUCCEEDED(hr) ? 0 : throw hr;
    hr = httpReq->send(_variant_t());
    SUCCEEDED(hr) ? 0 : throw hr;
    hr = httpReq->get_responseStream(&varStream);
    SUCCEEDED(hr) ? 0 : throw hr;

    // Get the stream pointer to the response.
    hr = varStream.punkVal->QueryInterface<IStream>(&stream);
    SUCCEEDED(hr) ? 0 : throw hr;

    // Reset the stream pointer.
    LARGE_INTEGER move;
    ZeroMemory(&move, sizeof(LARGE_INTEGER));
    stream->Seek(move, STREAM_SEEK_SET, NULL);
    
    return stream;
}