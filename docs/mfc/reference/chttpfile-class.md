---
description: "Learn more about: CHttpFile Class"
title: "CHttpFile Class"
ms.date: "11/04/2016"
f1_keywords: ["CHttpFile", "AFXINET/CHttpFile", "AFXINET/CHttpFile::CHttpFile", "AFXINET/CHttpFile::AddRequestHeaders", "AFXINET/CHttpFile::EndRequest", "AFXINET/CHttpFile::GetFileURL", "AFXINET/CHttpFile::GetObject", "AFXINET/CHttpFile::GetVerb", "AFXINET/CHttpFile::QueryInfo", "AFXINET/CHttpFile::QueryInfoStatusCode", "AFXINET/CHttpFile::SendRequest", "AFXINET/CHttpFile::SendRequestEx"]
helpviewer_keywords: ["CHttpFile [MFC], CHttpFile", "CHttpFile [MFC], AddRequestHeaders", "CHttpFile [MFC], EndRequest", "CHttpFile [MFC], GetFileURL", "CHttpFile [MFC], GetObject", "CHttpFile [MFC], GetVerb", "CHttpFile [MFC], QueryInfo", "CHttpFile [MFC], QueryInfoStatusCode", "CHttpFile [MFC], SendRequest", "CHttpFile [MFC], SendRequestEx"]
ms.assetid: 399e7c68-bbce-4374-8c55-206e9c7baac6
---
# CHttpFile Class

Provides the functionality to request and read files on an HTTP server.

## Syntax

```
class CHttpFile : public CInternetFile
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[CHttpFile::CHttpFile](#chttpfile)|Creates a `CHttpFile` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CHttpFile::AddRequestHeaders](#addrequestheaders)|Adds headers to the request sent to an HTTP server.|
|[CHttpFile::EndRequest](#endrequest)|Ends a request sent to an HTTP server with the [SendRequestEx](#sendrequestex) member function.|
|[CHttpFile::GetFileURL](#getfileurl)|Gets the URL for the specified file.|
|[CHttpFile::GetObject](#getobject)|Gets the target object of the verb in a request to an HTTP server.|
|[CHttpFile::GetVerb](#getverb)|Gets the verb that was used in a request to an HTTP server.|
|[CHttpFile::QueryInfo](#queryinfo)|Returns the response or request headers from the HTTP server.|
|[CHttpFile::QueryInfoStatusCode](#queryinfostatuscode)|Retrieves the status code associated with an HTTP request and places it in the supplied `dwStatusCode` parameter.|
|[CHttpFile::SendRequest](#sendrequest)|Sends a request to an HTTP server.|
|[CHttpFile::SendRequestEx](#sendrequestex)|Sends a request to an HTTP server using the [Write](../../mfc/reference/cinternetfile-class.md#write) or [WriteString](../../mfc/reference/cinternetfile-class.md#writestring) methods of `CInternetFile`.|

## Remarks

If your Internet session reads data from an HTTP server, you must create an instance of `CHttpFile`.

To learn more about how `CHttpFile` works with the other MFC Internet classes, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[CStdioFile](../../mfc/reference/cstdiofile-class.md)

[CInternetFile](../../mfc/reference/cinternetfile-class.md)

`CHttpFile`

## Requirements

**Header:** afxinet.h

## <a name="addrequestheaders"></a> CHttpFile::AddRequestHeaders

Call this member function to add one or more HTTP request headers to the HTTP request handle.

```
BOOL AddRequestHeaders(
    LPCTSTR pstrHeaders,
    DWORD dwFlags = HTTP_ADDREQ_FLAG_ADD_IF_NEW,
    int dwHeadersLen = -1);

BOOL AddRequestHeaders(
    CString& str,
    DWORD dwFlags = HTTP_ADDREQ_FLAG_ADD_IF_NEW);
```

### Parameters

*pstrHeaders*<br/>
A pointer to a string containing the header or headers to append to the request. Each header must be terminated by a CR/LF pair.

*dwFlags*<br/>
Modifies the semantics of the new headers. Can be one of the following:

- HTTP_ADDREQ_FLAG_COALESCE Merges headers of the same name, using the flag to add the first header found to the subsequent header. For example, "Accept: text/\*" followed by "Accept: audio/\*" results in the formation of the single header "Accept: text/\*, audio/\*". It is up to the calling application to ensure a cohesive scheme with respect to data received by requests sent with coalesced or separate headers.

- HTTP_ADDREQ_FLAG_REPLACE Performs a remove and add to replace the current header. The header name will be used to remove the current header, and the full value will be used to add the new header. If the header-value is empty and the header is found, it is removed. If not empty, the header-value is replaced.

- HTTP_ADDREQ_FLAG_ADD_IF_NEW Only adds the header if it does not already exist. If one exists, an error is returned.

- HTTP_ADDREQ_FLAG_ADD Used with REPLACE. Adds the header if it doesn't exist.

*dwHeadersLen*<br/>
The length, in characters, of *pstrHeaders*. If this is -1L, then *pstrHeaders* is assumed to be zero-terminated and the length is computed.

*str*<br/>
A reference to a [CString](../../atl-mfc-shared/reference/cstringt-class.md) object containing the request header or headers to be added.

### Return Value

Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) may be called to determine the cause of the error.

### Remarks

`AddRequestHeaders` appends additional, free-format headers to the HTTP request handle. It is intended for use by sophisticated clients who need detailed control over the exact request sent to the HTTP server.

> [!NOTE]
> The application can pass multiple headers in *pstrHeaders* or *str* for an `AddRequestHeaders` call using HTTP_ADDREQ_FLAG_ADD or HTTP_ADDREQ_FLAG_ADD_IF_NEW. If the application tries to remove or replace a header using HTTP_ADDREQ_FLAG_REMOVE or HTTP_ADDREQ_FLAG_REPLACE, only one header can be supplied in *lpszHeaders*.

## <a name="chttpfile"></a> CHttpFile::CHttpFile

This member function is called to construct a `CHttpFile` object.

```
CHttpFile(
    HINTERNET hFile,
    HINTERNET hSession,
    LPCTSTR pstrObject,
    LPCTSTR pstrServer,
    LPCTSTR pstrVerb,
    DWORD_PTR dwContext);

CHttpFile(
    HINTERNET hFile,
    LPCTSTR pstrVerb,
    LPCTSTR pstrObject,
    CHttpConnection* pConnection);
```

### Parameters

*hFile*<br/>
A handle to an Internet file.

*hSession*<br/>
A handle to an Internet session.

*pstrObject*<br/>
A pointer to a string containing the `CHttpFile` object.

*pstrServer*<br/>
A pointer to a string containing the name of the server.

*pstrVerb*<br/>
A pointer to a string containing the method to be used when sending the request. Can be POST, HEAD, or GET.

*dwContext*<br/>
The context identifier for the `CHttpFile` object. See **Remarks** for more information about this parameter.

*pConnection*<br/>
A pointer to a [CHttpConnection](../../mfc/reference/chttpconnection-class.md) object.

### Remarks

You never construct a `CHttpFile` object directly; rather call [CInternetSession::OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) or [CHttpConnection::OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest) instead.

The default value for `dwContext` is sent by MFC to the `CHttpFile` object from the [CInternetSession](../../mfc/reference/cinternetsession-class.md) object that created the `CHttpFile` object. When you call `CInternetSession::OpenURL` or `CHttpConnection` to construct a `CHttpFile` object, you can override the default to set the context identifier to a value of your choosing. The context identifier is returned to [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) to provide status on the object with which it is identified. See the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md) for more information about the context identifier.

## <a name="endrequest"></a> CHttpFile::EndRequest

Call this member function to end a request sent to an HTTP server with the [SendRequestEx](#sendrequestex) member function.

```
BOOL EndRequest(
    DWORD dwFlags = 0,
    LPINTERNET_BUFFERS lpBuffIn = NULL,
    DWORD_PTR dwContext = 1);
```

### Parameters

*dwFlags*<br/>
Flags describing the operation. For a list of the appropriate flags, see [HttpEndRequest](/windows/win32/api/wininet/nf-wininet-httpendrequestw) in the Windows SDK.

*lpBuffIn*<br/>
Pointer to an initialized [INTERNET_BUFFERS](/windows/win32/api/wininet/ns-wininet-internet_buffersw) that describes the input buffer used for the operation.

*dwContext*<br/>
The context identifier for the `CHttpFile` operation. See Remarks for more information about this parameter.

### Return Value

Nonzero if successful; otherwise 0. If the call fails, determine the cause of the failure by examining the thrown [CInternetException](../../mfc/reference/cinternetexception-class.md) object.

### Remarks

The default value for *dwContext* is sent by MFC to the `CHttpFile` object from the [CInternetSession](../../mfc/reference/cinternetsession-class.md) object that created the `CHttpFile` object. When you call [CInternetSession::OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) or [CHttpConnection](../../mfc/reference/chttpconnection-class.md) to construct a `CHttpFile` object, you can override the default to set the context identifier to a value of your choosing. The context identifier is returned to [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) to provide status on the object with which it is identified. See article [Internet First Steps: WinInet](../../mfc/wininet-basics.md) for more information about the context identifier.

## <a name="getfileurl"></a> CHttpFile::GetFileURL

Call this member function to get the name of the HTTP file as a URL.

```
virtual CString GetFileURL() const;
```

### Return Value

A [CString](../../atl-mfc-shared/reference/cstringt-class.md) object containing a URL referencing the resource associated with this file.

### Remarks

Use this member function only after a successful call to [SendRequest](#sendrequest) or on a `CHttpFile` object successfully created by [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

## <a name="getobject"></a> CHttpFile::GetObject

Call this member function to get the name of the object associated with this `CHttpFile`.

```
CString GetObject() const;
```

### Return Value

A [CString](../../atl-mfc-shared/reference/cstringt-class.md) object containing the name of the object.

### Remarks

Use this member function only after a successful call to [SendRequest](#sendrequest) or on a `CHttpFile` object successfully created by [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

## <a name="getverb"></a> CHttpFile::GetVerb

Call this member function to get the HTTP verb (or method) associated with this `CHttpFile`.

```
CString GetVerb() const;
```

### Return Value

A [CString](../../atl-mfc-shared/reference/cstringt-class.md) object containing the name of the HTTP verb (or method).

### Remarks

Use this member function only after a successful call to [SendRequest](#sendrequest) or on a `CHttpFile` object successfully created by [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

## <a name="queryinfo"></a> CHttpFile::QueryInfo

Call this member function to return response or request headers from an HTTP request.

```
BOOL QueryInfo(
    DWORD dwInfoLevel,
    LPVOID lpvBuffer,
    LPDWORD lpdwBufferLength,
    LPDWORD lpdwIndex = NULL) const;

BOOL QueryInfo(
    DWORD dwInfoLevel,
    CString& str,
    LPDWORD dwIndex = NULL) const;

BOOL QueryInfo(
    DWORD dwInfoLevel,
    SYSTEMTIME* pSysTime,
    LPDWORD dwIndex = NULL) const;
```

### Parameters

*dwInfoLevel*<br/>
A combination of the attribute to query and the following flags that specify the type of information requested:

- HTTP_QUERY_CUSTOM Finds the header name and returns this value in *lpvBuffer* on output. HTTP_QUERY_CUSTOM throws an assertion if the header isn't found.

- HTTP_QUERY_FLAG_REQUEST_HEADERS Typically, the application queries the response headers, but an application can also query request headers by using this flag.

- HTTP_QUERY_FLAG_SYSTEMTIME For those headers whose value is a date/time string, such as "Last-Modified-Time," this flag returns the header value as a standard Win32 [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure that does not require the application to parse the data. If you use this flag, you may want to use the `SYSTEMTIME` override of the function.

- HTTP_QUERY_FLAG_NUMBER For those headers whose value is a number, such as the status code, this flag returns the data as a 32-bit number.

See the **Remarks** section for a list of the possible values.

*lpvBuffer*<br/>
A pointer to the buffer that receives the information.

*lpdwBufferLength*<br/>
On entry, this points to a value containing the length of the data buffer, in number of characters or bytes. See the **Remarks** section for more detailed information about this parameter.

*lpdwIndex*<br/>
A pointer to a zero-based header index. Can be NULL. Use this flag to enumerate multiple headers with the same name. On input, *lpdwIndex* indicates the index of the specified header to return. On output, *lpdwIndex* indicates the index of the next header. If the next index cannot be found, ERROR_HTTP_HEADER_NOT_FOUND is returned.

*str*<br/>
A reference to the [CString](../../atl-mfc-shared/reference/cstringt-class.md) object receiving the returned information.

*dwIndex*<br/>
An index value. See *lpdwIndex*.

*pSysTime*<br/>
A pointer to a Win32 [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure.

### Return Value

Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) may be called to determine the cause of the error.

### Remarks

Use this member function only after a successful call to [SendRequest](#sendrequest) or on a `CHttpFile` object successfully created by [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

You can retrieve the following types of data from `QueryInfo`:

- strings (default)

- `SYSTEMTIME` (for "Data:" "Expires:" etc, headers)

- DWORD (for STATUS_CODE, CONTENT_LENGTH, etc.)

When a string is written to the buffer, and the member function succeeds, `lpdwBufferLength` contains the length of the string in characters minus 1 for the terminating NULL character.

The possible *dwInfoLevel* values include:

- HTTP_QUERY_MIME_VERSION

- HTTP_QUERY_CONTENT_TYPE

- HTTP_QUERY_CONTENT_TRANSFER_ENCODING

- HTTP_QUERY_CONTENT_ID

- HTTP_QUERY_CONTENT_DESCRIPTION

- HTTP_QUERY_CONTENT_LENGTH

- HTTP_QUERY_ALLOWED_METHODS

- HTTP_QUERY_PUBLIC_METHODS

- HTTP_QUERY_DATE

- HTTP_QUERY_EXPIRES

- HTTP_QUERY_LAST_MODIFIED

- HTTP_QUERY_MESSAGE_ID

- HTTP_QUERY_URI

- HTTP_QUERY_DERIVED_FROM

- HTTP_QUERY_LANGUAGE

- HTTP_QUERY_COST

- HTTP_QUERY_WWW_LINK

- HTTP_QUERY_PRAGMA

- HTTP_QUERY_VERSION

- HTTP_QUERY_STATUS_CODE

- HTTP_QUERY_STATUS_TEXT

- HTTP_QUERY_RAW_HEADERS

- HTTP_QUERY_RAW_HEADERS_CRLF

## <a name="queryinfostatuscode"></a> CHttpFile::QueryInfoStatusCode

Call this member function to get the status code associated with an HTTP request and place it in the supplied *dwStatusCode* parameter.

```
BOOL QueryInfoStatusCode(DWORD& dwStatusCode) const;
```

### Parameters

*dwStatusCode*<br/>
A reference to a status code. Status codes indicate the success or failure of the requested event. See **Remarks** for a selection of status code descriptions.

### Return Value

Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) may be called to determine the cause of the error.

### Remarks

Use this member function only after a successful call to [SendRequest](#sendrequest) or on a `CHttpFile` object successfully created by [OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).

HTTP status codes fall into groups indicating the success or failure of the request. The following tables outline the status code groups and the most common HTTP status codes.

|Group|Meaning|
|-----------|-------------|
|200-299|Success|
|300-399|Information|
|400-499|Request error|
|500-599|Server error|

Common HTTP Status Codes:

|Status code|Meaning|
|-----------------|-------------|
|200|URL located, transmission follows|
|400|Unintelligible request|
|404|Requested URL not found|
|405|Server does not support requested method|
|500|Unknown server error|
|503|Server capacity reached|

## <a name="sendrequest"></a> CHttpFile::SendRequest

Call this member function to send a request to an HTTP server.

```
BOOL SendRequest(
    LPCTSTR pstrHeaders = NULL,
    DWORD dwHeadersLen = 0,
    LPVOID lpOptional = NULL,
    DWORD dwOptionalLen = 0);

BOOL SendRequest(
    CString& strHeaders,
    LPVOID lpOptional = NULL,
    DWORD dwOptionalLen = 0);
```

### Parameters

*pstrHeaders*<br/>
A pointer to a string containing the name of the headers to send.

*dwHeadersLen*<br/>
The length of the headers identified by *pstrHeaders*.

*lpOptional*<br/>
Any optional data to send immediately after the request headers. This is generally used for POST and PUT operations. This can be NULL if there is no optional data to send.

*dwOptionalLen*<br/>
The length of *lpOptional*.

*strHeaders*<br/>
A string containing the name of the headers for the request being sent.

### Return Value

Nonzero if successful; otherwise 0. If the call fails, determine the cause of the failure by examining the thrown [CInternetException](../../mfc/reference/cinternetexception-class.md) object.

## <a name="sendrequestex"></a> CHttpFile::SendRequestEx

Call this member function to send a request to an HTTP server.

```
BOOL SendRequestEx(
    DWORD dwTotalLen,
    DWORD dwFlags = HSR_INITIATE,
    DWORD_PTR dwContext = 1);

BOOL SendRequestEx(
    LPINTERNET_BUFFERS lpBuffIn,
    LPINTERNET_BUFFERS lpBuffOut,
    DWORD dwFlags = HSR_INITIATE,
    DWORD_PTR dwContext = 1);
```

### Parameters

*dwTotalLen*<br/>
Number of bytes to be sent in the request.

*dwFlags*<br/>
Flags describing the operation. For a list of appropriate flags, see [HttpSendRequestEx](/windows/win32/api/wininet/nf-wininet-httpsendrequestexw) in the Windows SDK.

*dwContext*<br/>
The context identifier for the `CHttpFile` operation. See Remarks for more information about this parameter.

*lpBuffIn*<br/>
Pointer to an initialized [INTERNET_BUFFERS](/windows/win32/api/wininet/ns-wininet-internet_buffersw) that describes the input buffer used for the operation.

*lpBuffOut*<br/>
Pointer to an initialized INTERNET_BUFFERS that describes the output buffer used for the operation.

### Return Value

Nonzero if successful. If the call fails, determine the cause of the failure by examining the thrown [CInternetException](../../mfc/reference/cinternetexception-class.md) object.

### Remarks

This function allows your application to send data using the [Write](../../mfc/reference/cinternetfile-class.md#write) and [WriteString](../../mfc/reference/cinternetfile-class.md#writestring) methods of `CInternetFile`. You must know the length of the data to send before calling either override of this function. The first override allows you to specify the length of data you'd like to send. The second override accepts pointers to INTERNET_BUFFERS structures, which can be used to describe the buffer in great detail.

After content is written to the file, call [EndRequest](#endrequest) to end the operation.

The default value for *dwContext* is sent by MFC to the `CHttpFile` object from the [CInternetSession](../../mfc/reference/cinternetsession-class.md) object that created the `CHttpFile` object. When you call [CInternetSession::OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) or [CHttpConnection](../../mfc/reference/chttpconnection-class.md) to construct a `CHttpFile` object, you can override the default to set the context identifier to a value of your choosing. The context identifier is returned to [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) to provide status on the object with which it is identified. See the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md) for more information about the context identifier.

### Example

This code fragment sends the content of a string to a DLL named MFCISAPI.DLL on the LOCALHOST server. While this example uses only one call to `WriteString`, using multiple calls to send data in blocks is acceptable.

[!code-cpp[NVC_MFCWinInet#9](../../mfc/codesnippet/cpp/chttpfile-class_1.cpp)]

## See also

[CInternetFile Class](../../mfc/reference/cinternetfile-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CInternetFile Class](../../mfc/reference/cinternetfile-class.md)<br/>
[CGopherFile Class](../../mfc/reference/cgopherfile-class.md)<br/>
[CHttpConnection Class](../../mfc/reference/chttpconnection-class.md)
