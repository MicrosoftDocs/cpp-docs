---
description: "Learn more about: CInternetSession Class"
title: "CInternetSession Class"
ms.date: "06/20/2018"
f1_keywords: ["CInternetSession", "AFXINET/CInternetSession", "AFXINET/CInternetSession::CInternetSession", "AFXINET/CInternetSession::Close", "AFXINET/CInternetSession::EnableStatusCallback", "AFXINET/CInternetSession::GetContext", "AFXINET/CInternetSession::GetCookie", "AFXINET/CInternetSession::GetCookieLength", "AFXINET/CInternetSession::GetFtpConnection", "AFXINET/CInternetSession::GetGopherConnection", "AFXINET/CInternetSession::GetHttpConnection", "AFXINET/CInternetSession::OnStatusCallback", "AFXINET/CInternetSession::OpenURL", "AFXINET/CInternetSession::SetCookie", "AFXINET/CInternetSession::SetOption"]
helpviewer_keywords: ["CInternetSession [MFC], CInternetSession", "CInternetSession [MFC], Close", "CInternetSession [MFC], EnableStatusCallback", "CInternetSession [MFC], GetContext", "CInternetSession [MFC], GetCookie", "CInternetSession [MFC], GetCookieLength", "CInternetSession [MFC], GetFtpConnection", "CInternetSession [MFC], GetGopherConnection", "CInternetSession [MFC], GetHttpConnection", "CInternetSession [MFC], OnStatusCallback", "CInternetSession [MFC], OpenURL", "CInternetSession [MFC], SetCookie", "CInternetSession [MFC], SetOption"]
ms.assetid: ef54feb4-9d0f-4e65-a45d-7a4cf6c40e51
---
# CInternetSession Class

Creates and initializes a single or several simultaneous Internet sessions and, if necessary, describes your connection to a proxy server.

## Syntax

```cpp
class CInternetSession : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CInternetSession::CInternetSession](#cinternetsession)|Constructs a `CInternetSession` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CInternetSession::Close](#close)|Closes the Internet connection when the Internet session is terminated.|
|[CInternetSession::EnableStatusCallback](#enablestatuscallback)|Establishes a status callback routine.|
|[CInternetSession::GetContext](#getcontext)|Closes the Internet connection when the Internet session is terminated.|
|[CInternetSession::GetCookie](#getcookie)|Returns cookies for the specified URL and all its parent URLs.|
|[CInternetSession::GetCookieLength](#getcookielength)|Retrieves the variable specifying the length of the cookie stored in the buffer.|
|[CInternetSession::GetFtpConnection](#getftpconnection)|Opens an FTP session with a server. Logs on the user.|
|[CInternetSession::GetGopherConnection](#getgopherconnection)|Opens a gopher server for an application that is trying to open a connection.|
|[CInternetSession::GetHttpConnection](#gethttpconnection)|Opens an HTTP server for an application that is trying to open a connection.|
|[CInternetSession::OnStatusCallback](#onstatuscallback)|Updates the status of an operation when status callback is enabled.|
|[CInternetSession::OpenURL](#openurl)|Parses and opens a URL.|
|[CInternetSession::SetCookie](#setcookie)|Sets a cookie for the specified URL.|
|[CInternetSession::SetOption](#setoption)|Sets options for the Internet session.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CInternetSession::operator HINTERNET](#operator_hinternet)|A handle to the current Internet session.|

## Remarks

If your Internet connection must be maintained for the duration of an application, you can create a `CInternetSession` member of the class [CWinApp](../../mfc/reference/cwinapp-class.md).

Once you have established an Internet session, you can call [OpenURL](#openurl). `CInternetSession` then parses the URL for you by calling the global function [AfxParseURL](internet-url-parsing-globals.md#afxparseurl). Regardless of its protocol type, `CInternetSession` interprets the URL and manages it for you. It can handle requests for local files identified with the URL resource "file://". `OpenURL` will return a pointer to a [CStdioFile](../../mfc/reference/cstdiofile-class.md) object if the name you pass it is a local file.

If you open a URL on an Internet server using `OpenURL`, you can read information from the site. If you want to perform service-specific (for example, HTTP, FTP, or gopher) actions on files located on a server, you must establish the appropriate connection with that server. To open a particular kind of connection directly to a particular service, use one of the following member functions:

- [GetGopherConnection](#getgopherconnection) to open a connection to a gopher service.

- [GetHttpConnection](#gethttpconnection) to open a connection to an HTTP service.

- [GetFtpConnection](#getftpconnection) to open a connection to an FTP service.

[SetOption](#setoption) allows you to set the query options of your session, such as time-out values, number of retries, and so on.

`CInternetSession` member functions [SetCookie](#setcookie), [GetCookie](#getcookie), and [GetCookieLength](#getcookielength) provide the means to manage a Win32 cookie database, through which servers and scripts maintain state information about the client workstation.

For more information about basic Internet programming tasks, see the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md). For general information about using the MFC WinInet classes, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md).

> [!NOTE]
> `CInternetSession` will throw an [AfxThrowNotSupportedException](exception-processing.md#afxthrownotsupportedexception) for unsupported service types. Only the following service types are currently supported: FTP, HTTP, gopher, and file.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;`CInternetSession`

## Requirements

**Header:** afxinet.h

## <a name="cinternetsession"></a> CInternetSession::CInternetSession

This member function is called when a `CInternetSession` object is created.

```cpp
CInternetSession(
    LPCTSTR pstrAgent = NULL,
    DWORD_PTR dwContext = 1,
    DWORD dwAccessType = PRE_CONFIG_INTERNET_ACCESS,
    LPCTSTR pstrProxyName = NULL,
    LPCTSTR pstrProxyBypass = NULL,
    DWORD dwFlags = 0);
```

### Parameters

*pstrAgent*<br/>
A pointer to a string that identifies the name of the application or entity calling the Internet functions (for example, "Microsoft Internet Browser"). If *pstrAgent* is NULL (the default), the framework calls the global function [AfxGetAppName](application-information-and-management.md#afxgetappname), which returns a null-terminated string containing an application's name. Some protocols use this string to identify your application to the server.

*dwContext*<br/>
The context identifier for the operation. *dwContext* identifies the operation's status information returned by [CInternetSession::OnStatusCallback](#onstatuscallback). The default is set to 1; however, you can explicitly assign a specific context ID for the operation. The object and any work it does will be associated with that context ID.

*dwAccessType*<br/>
The type of access required. The following are valid values, exactly one of which may be supplied:

- INTERNET_OPEN_TYPE_PRECONFIG Connect using preconfigured settings in the registry. This access type is set as the default. To connect through a TIS proxy, set *dwAccessType* to this value; you then set the registry appropriately.

- INTERNET_OPEN_TYPE_DIRECT Connect directly to Internet.

- INTERNET_OPEN_TYPE_PROXY Connect through a CERN proxy.

For information on connecting with different types of proxies, see [Steps in a Typical FTP Client Application](../../mfc/steps-in-a-typical-ftp-client-application.md).

*pstrProxyName*<br/>
The name of the preferred CERN proxy if *dwAccessType* is set as INTERNET_OPEN_TYPE_PROXY. The default is NULL.

*pstrProxyBypass*<br/>
A pointer to a string containing an optional list of server addresses. These addresses may be bypassed when using proxy access. If a NULL value is supplied, the bypass list will be read from the registry. This parameter is meaningful only if *dwAccessType* is set to INTERNET_OPEN_TYPE_PROXY.

*dwFlags*<br/>
Indicates various caching options. The default is set to 0. The possible values include:

- INTERNET_FLAG_DONT_CACHE Do not cache the data, either locally or in any gateway servers.

- INTERNET_FLAG_OFFLINE Download operations are satisfied through the persistent cache only. If the item does not exist in the cache, an appropriate error code is returned. This flag may be combined with the bitwise **OR** ( **&#124;**) operator.

### Remarks

`CInternetSession` is the first Internet function called by an application. It initializes internal data structures and prepares for future calls from the application.

If no Internet connection can be opened, `CInternetSession` throws an [AfxThrowInternetException](internet-url-parsing-globals.md#afxthrowinternetexception).

### Example

See the example for [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md).

## <a name="close"></a> CInternetSession::Close

Call this member function when your application has finished using the `CInternetSession` object.

```cpp
virtual void Close();
```

### Example

See the example for [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md).

## <a name="enablestatuscallback"></a> CInternetSession::EnableStatusCallback

Call this member function to enable status callback.

```cpp
BOOL EnableStatusCallback(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
Specifies whether callback is enabled or disabled. The default is TRUE.

### Return Value

Nonzero if successful; otherwise 0. If the call fails, determine the cause of the failure by examining the thrown [CInternetException](../../mfc/reference/cinternetexception-class.md) object.

### Remarks

When handling status callback, you can provide status about the progress of the operation (such as resolving name, connecting to server, and so on) in the status bar of the application. Displaying operation status is especially desirable during a long-term operation.

Because callbacks occur during the request's processing, the application should spend as little time as possible in the callback to prevent degradation of data throughput to the network. For example, putting up a dialog box in a callback may be such a lengthy operation that the server terminates the request.

The status callback cannot be removed as long as any callbacks are pending.

To handle any operations asynchronously, you must either create your own thread or use the WinInet functions without MFC.

## <a name="getcontext"></a> CInternetSession::GetContext

Call this member function to get the context value for a particular application session.

```cpp
DWORD_PTR GetContext() const;
```

### Return Value

The application-defined context Identifier.

### Remarks

[OnStatusCallback](#onstatuscallback) uses the context ID returned by `GetContext` to report the status of a particular application. For example, when a user activates an Internet request that involves returning status information, the status callback uses the context ID to report status on that particular request. If the user activates two separate Internet requests that both involve returning status information, `OnStatusCallback` uses the context identifiers to return status about their corresponding requests. Consequently, the context identifier is used for all status callback operations, and it is associated with the session until the session is ended.

For more information about asynchronous operations, see the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md).

## <a name="getcookie"></a> CInternetSession::GetCookie

This member function implements the behavior of the Win32 function [InternetGetCookie](/windows/win32/api/wininet/nf-wininet-internetgetcookiew), as described in the Windows SDK.

```cpp
static BOOL GetCookie(
    LPCTSTR pstrUrl,
    LPCTSTR pstrCookieName,
    LPTSTR pstrCookieData,
    DWORD dwBufLen);

static BOOL GetCookie(
    LPCTSTR pstrUrl,
    LPCTSTR pstrCookieName,
    CString& strCookieData);
```

### Parameters

*pstrUrl*<br/>
A pointer to a string containing the URL.

*pstrCookieName*<br/>
A pointer to a string containing the name of the cookie to get for the specified URL.

*pstrCookieData*<br/>
In the first overload, a pointer to a string containing the address of the buffer that receives the cookie data. This value can be NULL. In the second overload, a reference to a [CString](../../atl-mfc-shared/reference/cstringt-class.md) object to receive the cookie data.

*dwBufLen*<br/>
The variable specifying the size of the *pstrCookieData* buffer. If the function succeeds, the buffer receives the amount of data copied to the *pstrCookieData* buffer. If *pstrCookieData* is NULL, this parameter receives a value that specifies the size of the buffer necessary to copy all the cookie data.

### Return Value

Returns TRUE if successful, or FALSE otherwise. If the call fails, call the Win32 function [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) to determine the cause of the error. The following error values apply:

- ERROR_NO_MORE_ITEMS There is no cookie for the specified URL and all its parents.

- ERROR_INSUFFICIENT_BUFFER The value passed in *dwBufLen* is insufficient to copy all the cookie data. The value returned in *dwBufLen* is the size of the buffer necessary to get all the data.

### Remarks

In the second overload, MFC retrieves the cookie data into the supplied `CString` object.

## <a name="getcookielength"></a> CInternetSession::GetCookieLength

Call this member function to get the length of the cookie stored in the buffer.

```cpp
static DWORD GetCookieLength(
    LPCTSTR pstrUrl,
    LPCTSTR pstrCookieName);
```

### Parameters

*pstrUrl*<br/>
A pointer to a string containing the URL

*pstrCookieName*<br/>
A pointer to a string containing the name of the cookie.

### Return Value

A DWORD value indicating the length of the cookie, stored in the buffer. Zero if no cookie with the name indicated by *pstrCookieName* exists.

### Remarks

This value is used by [GetCookie](#getcookie).

## <a name="getftpconnection"></a> CInternetSession::GetFtpConnection

Call this member function to establish an FTP connection and get a pointer to a `CFtpConnection` object.

```cpp
CFtpConnection* GetFtpConnection(
    LPCTSTR pstrServer,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,
    BOOL bPassive = FALSE);
```

### Parameters

*pstrServer*<br/>
A pointer to a string containing the FTP server name.

*pstrUserName*<br/>
Pointer to a null-terminated string that specifies the name of the user to log in. If NULL, the default is anonymous.

*pstrPassword*<br/>
A pointer to a null-terminated string that specifies the password to use to log in. If both *pstrPassword* and *pstrUserName* are NULL, the default anonymous password is the user's email name. If *pstrPassword* is NULL (or an empty string) but *pstrUserName* is not NULL, a blank password is used. The following table describes the behavior for the four possible settings of *pstrUserName* and *pstrPassword*:

| *pstrUserName*  | *pstrPassword*  | Username sent to FTP server | Password sent to FTP server |
|-----------------|-----------------|-----------------------------|-----------------------------|
|   NULL or " "   |   NULL or " "   |         "anonymous"         |      User's email name      |
| Non-NULL String |   NULL or " "   |       *pstrUserName*        |             " "             |
|      NULL       | Non-NULL String |            ERROR            |            ERROR            |
| Non-NULL String | Non-NULL String |       *pstrUserName*        |       *pstrPassword*        |

*nPort*<br/>
A number that identifies the TCP/IP port to use on the server.

*bPassive*<br/>
Specifies passive or active mode for this FTP session. If set to TRUE, it sets the Win32 API `dwFlag` to INTERNET_FLAG_PASSIVE.

### Return Value

A pointer to a [CFtpConnection](../../mfc/reference/cftpconnection-class.md) object. If the call fails, determine the cause of the failure by examining the thrown [CInternetException](../../mfc/reference/cinternetexception-class.md) object.

### Remarks

`GetFtpConnection` connects to an FTP server, and creates and returns a pointer to a `CFTPConnection` object. It does not perform any specific operation on the server. If you intend to read or write to files, for example, you must perform those operations as separate steps. See the classes [CFtpConnection](../../mfc/reference/cftpconnection-class.md) and [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md) for information about searching for files, opening files, and reading or writing to files. See the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md) for steps in performing common FTP connection tasks.

### Example

See the example for [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md).

## <a name="getgopherconnection"></a> CInternetSession::GetGopherConnection

Call this member function to establish a new gopher connection and get a pointer to a `CGopherConnection` object.

```cpp
CGopherConnection* GetGopherConnection(
    LPCTSTR pstrServer,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER);
```

### Parameters

*pstrServer*<br/>
A pointer to a string containing the gopher server name.

*pstrUserName*<br/>
A pointer to a string containing the user name.

*pstrPassword*<br/>
A pointer to a string containing the access password.

*nPort*<br/>
A number that identifies the TCP/IP port to use on the server.

### Return Value

A pointer to a [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) object. If the call fails, determine the cause of the failure by examining the thrown [CInternetException](../../mfc/reference/cinternetexception-class.md) object.

### Remarks

`GetGopherConnection` connects to a gopher server, and creates and returns a pointer to a `CGopherConnection` object. It does not perform any specific operation on the server. If you intend to read or write data, for example, you must perform those operations as separate steps. See the classes [CGopherConnection](../../mfc/reference/cgopherconnection-class.md), [CGopherFile](../../mfc/reference/cgopherfile-class.md), and [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) for information about searching for files, opening files, and reading or writing to files. For information about browsing an FTP site, see the member function [OpenURL](#openurl). See the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md) for steps in performing common gopher connection tasks.

## <a name="gethttpconnection"></a> CInternetSession::GetHttpConnection

Call this member function to establish an HTTP connection and get a pointer to a `CHttpConnection` object.

```cpp
CHttpConnection* GetHttpConnection(
    LPCTSTR pstrServer,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL);

CHttpConnection* GetHttpConnection(
    LPCTSTR pstrServer,
    DWORD dwFlags,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL);
```

### Parameters

*pstrServer*<br/>
A pointer to a string containing the HTTP server name.

*nPort*<br/>
A number that identifies the TCP/IP port to use on the server.

*pstrUserName*<br/>
A pointer to a string containing the user name.

*pstrPassword*<br/>
A pointer to a string containing the access password.

*dwflags*<br/>
Any combination of the `INTERNET_FLAG_*` flags. See the table in the **Remarks** section of [CHttpConnection::OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest) for a description of *dwFlags* values.

### Return Value

A pointer to a [CHttpConnection](../../mfc/reference/chttpconnection-class.md) object. If the call fails, determine the cause of the failure by examining the thrown [CInternetException](../../mfc/reference/cinternetexception-class.md) object.

### Remarks

`GetHttpConnection` connects to an HTTP server, and creates and returns a pointer to a `CHttpConnection` object. It does not perform any specific operation on the server. If you intend to query an HTTP header, for example, you must perform this operation as a separate step. See the classes [CHttpConnection](../../mfc/reference/chttpconnection-class.md) and [CHttpFile](../../mfc/reference/chttpfile-class.md) for information about operations you can perform by using a connection to an HTTP server. For information about browsing an HTTP site, see the member function [OpenURL](#openurl). See the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md) for steps in performing common HTTP connection tasks.

## <a name="onstatuscallback"></a> CInternetSession::OnStatusCallback

This member function is called by the framework to update the status when status callback is enabled and an operation is pending.

```cpp
virtual void OnStatusCallback(
    DWORD_PTR dwContext,
    DWORD dwInternetStatus,
    LPVOID lpvStatusInformation,
    DWORD dwStatusInformationLength);
```

### Parameters

*dwContext*<br/>
The context value supplied by the application.

*dwInternetStatus*<br/>
A status code which indicates why the callback is being made. See **Remarks** for a table of possible values.

*lpvStatusInformation*<br/>
A pointer to a buffer containing information pertinent to this callback.

*dwStatusInformationLength*<br/>
The size of *lpvStatusInformation*.

### Remarks

You must first call [EnableStatusCallback](#enablestatuscallback) to take advantage of status callback.

The *dwInternetStatus* parameter indicates the operation being performed and determines what the contents of *lpvStatusInformation* will be. *dwStatusInformationLength* indicates the length of the data included in *lpvStatusInformation*. The following status values for *dwInternetStatus* are defined as follows:

|Value|Meaning|
|-----------|-------------|
|INTERNET_STATUS_RESOLVING_NAME|Looking up the IP address of the name contained in *lpvStatusInformation*.|
|INTERNET_STATUS_NAME_RESOLVED|Successfully found the IP address of the name contained in *lpvStatusInformation*.|
|INTERNET_STATUS_CONNECTING_TO_SERVER|Connecting to the socket address ([SOCKADDR](/windows/win32/winsock/sockaddr-2)) pointed to by *lpvStatusInformation*.|
|INTERNET_STATUS_CONNECTED_TO_SERVER|Successfully connected to the socket address (SOCKADDR) pointed to by *lpvStatusInformation*.|
|INTERNET_STATUS_SENDING_REQUEST|Sending the information request to the server. The *lpvStatusInformation* parameter is NULL.|
|INTERNET_STATUS_ REQUEST_SENT|Successfully sent the information request to the server. The *lpvStatusInformation* parameter is NULL.|
|INTERNET_STATUS_RECEIVING_RESPONSE|Waiting for the server to respond to a request. The *lpvStatusInformation* parameter is NULL.|
|INTERNET_STATUS_RESPONSE_RECEIVED|Successfully received a response from the server. The *lpvStatusInformation* parameter is NULL.|
|INTERNET_STATUS_CLOSING_CONNECTION|Closing the connection to the server. The *lpvStatusInformation* parameter is NULL.|
|INTERNET_STATUS_CONNECTION_CLOSED|Successfully closed the connection to the server. The *lpvStatusInformation* parameter is NULL.|
|INTERNET_STATUS_HANDLE_CREATED|Used by the Win32 API function [InternetConnect](/windows/win32/api/wininet/nf-wininet-internetconnectw) to indicate that it has created the new handle. This lets the application call the Win32 function [InternetCloseHandle](/windows/win32/api/wininet/nf-wininet-internetclosehandle) from another thread if the connect is taking too long. See the Windows SDKfor more information about these functions.|
|INTERNET_STATUS_HANDLE_CLOSING|Successfully terminated this handle value.|

Override this member function to require some action before a status callback routine is performed.

> [!NOTE]
> Status callbacks need thread-state protection. If you are using MFC in a shared library, add the following line to the beginning of your override:

[!code-cpp[NVC_MFCHtmlHttp#8](../../mfc/reference/codesnippet/cpp/cinternetsession-class_1.cpp)]

For more information about asynchronous operations, see the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md).

## <a name="openurl"></a> CInternetSession::OpenURL

Call this member function to send the specified request to the HTTP server and allow the client to specify additional RFC822, MIME, or HTTP headers to send along with the request.

```cpp
CStdioFile* OpenURL(
    LPCTSTR pstrURL,
    DWORD_PTR dwContext = 1,
    DWORD dwFlags = INTERNET_FLAG_TRANSFER_ASCII,
    LPCTSTR pstrHeaders = NULL,
    DWORD dwHeadersLength = 0);
```

### Parameters

*pstrURL*<br/>
A pointer to the name of the URL to begin reading. Only URLs beginning with file:, ftp:, gopher:, or http: are supported. Asserts if *pstrURL* is NULL.

*dwContext*<br/>
An application-defined value passed with the returned handle in callback.

*dwFlags*<br/>
The flags describing how to handle this connection. See **Remarks** for more information about the valid flags. The valid flags are:

- INTERNET_FLAG_TRANSFER_ASCII The default. Transfer the file as ASCII text.

- INTERNET_FLAG_TRANSFER_BINARY Transfer the file as a binary file.

- INTERNET_FLAG_RELOAD Get the data from the wire even if it is locally cached.

- INTERNET_FLAG_DONT_CACHE Do not cache the data, either locally or in any gateways.

- INTERNET_FLAG_SECURE This flag is applicable to HTTP requests only. It requests secure transactions on the wire with Secure Sockets Layer or PCT.

- INTERNET_OPEN_FLAG_USE_EXISTING_CONNECT If possible, reuse the existing connections to the server for new requests generated by `OpenUrl` instead of creating a new session for each connection request.

- INTERNET_FLAG_PASSIVE Used for an FTP site. Uses passive FTP semantics. Used with [CInternetConnection](../../mfc/reference/cinternetconnection-class.md) of `OpenURL`.

*pstrHeaders*<br/>
A pointer to a string containing the headers to be sent to the HTTP server.

*dwHeadersLength*<br/>
The length, in characters, of the additional headers. If this is -1L and *pstrHeaders* is non-NULL, then *pstrHeaders* is assumed to be zero terminated and the length is calculated.

### Return Value

Returns a file handle for FTP, GOPHER, HTTP, and FILE-type Internet services only. Returns NULL if parsing was unsuccessful.

The pointer that `OpenURL` returns depends on *pstrURL*'s type of service. The table below illustrates the possible pointers `OpenURL` can return.

|URL type|Returns|
|--------------|-------------|
|`file://`|`CStdioFile*`|
|`http://`|`CHttpFile*`|
|`gopher://`|`CGopherFile*`|
|`ftp://`|`CInternetFile*`|

### Remarks

The parameter *dwFlags* must include either INTERNET_FLAG_TRANSFER_ASCII or INTERNET_FLAG_TRANSFER_BINARY, but not both. The remaining flags can be combined with the bitwise **OR** operator ( **&#124;**).

`OpenURL`, which wraps the Win32 function `InternetOpenURL`, allows only downloading, retrieving, and reading the data from an Internet server. `OpenURL` allows no file manipulation on a remote location, so it requires no [CInternetConnection](../../mfc/reference/cinternetconnection-class.md) object.

To use connection-specific (that is, protocol-specific) functions, such as writing to a file, you must open a session, then open a particular kind of connection, then use that connection to open a file in the desired mode. See `CInternetConnection` for more information about connection-specific functions.

## <a name="operator_hinternet"></a> CInternetSession::operator HINTERNET

Use this operator to get the Windows handle for the current Internet session.

```cpp
operator HINTERNET() const;
```

## <a name="setcookie"></a> CInternetSession::SetCookie

Sets a cookie for the specified URL.

```cpp
static BOOL SetCookie(
    LPCTSTR pstrUrl,
    LPCTSTR pstrCookieName,
    LPCTSTR pstrCookieData);
```

### Parameters

*pstrUrl*<br/>
A pointer to a null-terminated string that specifies the URL for which the cookie should be set.

*pstrCookieName*<br/>
A pointer to a string containing the name of the cookie.

*pstrCookieData*<br/>
A pointer to a string containing the actual string data to associate with the URL.

### Return Value

Returns TRUE if successful, or FALSE otherwise. To get the specific error code, call `GetLastError.`

### Remarks

This member function implements the behavior of the Win32 message [InternetSetCookie](/windows/win32/api/wininet/nf-wininet-internetsetcookiew), as described in the Windows SDK.

## <a name="setoption"></a> CInternetSession::SetOption

Call this member function to set options for the Internet session.

```cpp
BOOL SetOption(
    DWORD dwOption,
    LPVOID lpBuffer,
    DWORD dwBufferLength,
    DWORD dwFlags = 0);

BOOL SetOption(
    DWORD dwOption,
    DWORD dwValue,
    DWORD dwFlags = 0);
```

### Parameters

*dwOption*<br/>
The Internet option to set. See [Option Flags](/windows/win32/WinInet/option-flags) in the Windows SDKfor a list of the possible options.

*lpBuffer*<br/>
A buffer that contains the option setting.

*dwBufferLength*<br/>
The length of *lpBuffer* or the size of *dwValue*.

*dwValue*<br/>
A DWORD that contains the option setting.

*dwFlags*<br/>
Indicates various caching options. The default is set to 0. The possible values include:

- INTERNET_FLAG_DONT_CACHE Do not cache the data, either locally or in any gateway servers.

- INTERNET_FLAG_OFFLINE Download operations are satisfied through the persistent cache only. If the item does not exist in the cache, an appropriate error code is returned. This flag may be combined with the bitwise **OR** ( **&#124;**) operator.

### Return Value

If the operation was successful, a value of TRUE is returned. If an error occurred, a value of FALSE is returned. If the call fails, the Win32 function [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) may be called to determine the cause of the error.

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)<br/>
[CHttpConnection Class](../../mfc/reference/chttpconnection-class.md)<br/>
[CFtpConnection Class](../../mfc/reference/cftpconnection-class.md)<br/>
[CGopherConnection Class](../../mfc/reference/cgopherconnection-class.md)
