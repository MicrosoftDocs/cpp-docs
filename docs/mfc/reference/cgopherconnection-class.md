---
description: "Learn more about: CGopherConnection Class"
title: "CGopherConnection Class"
ms.date: "11/04/2016"
f1_keywords: ["CGopherConnection", "AFXINET/CGopherConnection", "AFXINET/CGopherConnection::CGopherConnection", "AFXINET/CGopherConnection::CreateLocator", "AFXINET/CGopherConnection::GetAttribute", "AFXINET/CGopherConnection::OpenFile"]
helpviewer_keywords: ["CGopherConnection [MFC], CGopherConnection", "CGopherConnection [MFC], CreateLocator", "CGopherConnection [MFC], GetAttribute", "CGopherConnection [MFC], OpenFile"]
ms.assetid: b5b96aea-ac99-430e-bd84-d1372b43f78f
---
# CGopherConnection Class

Manages your connection to a gopher Internet server.

> [!NOTE]
> The classes `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` and their members have been deprecated because they do not work on the Windows XP platform, but they will continue to work on earlier platforms.

## Syntax

```
class CGopherConnection : public CInternetConnection
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CGopherConnection::CGopherConnection](#cgopherconnection)|Constructs a `CGopherConnection` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CGopherConnection::CreateLocator](#createlocator)|Creates a [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) object to find files on a gopher server.|
|[CGopherConnection::GetAttribute](#getattribute)|Retrieves attribute information about the gopher object.|
|[CGopherConnection::OpenFile](#openfile)|Opens a gopher file.|

## Remarks

The gopher service is one of three Internet services recognized by the MFC WinInet classes.

The class `CGopherConnection` contains a constructor and three additional member functions that manage the gopher service: [OpenFile](#openfile), [CreateLocator](#createlocator), and [GetAttribute](#getattribute).

To communicate with a gopher Internet server, you must first create an instance of [CInternetSession](../../mfc/reference/cinternetsession-class.md), and then call [CInternetSession::GetGopherConnection](../../mfc/reference/cinternetsession-class.md#getgopherconnection), which creates the `CGopherConnection` object and returns a pointer to it. You never create a `CGopherConnection` object directly.

To learn more about how `CGopherConnection` works with the other MFC Internet classes, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md). For more information about using the other two supported Internet services, FTP and HTTP see the classes [CHttpConnection](../../mfc/reference/chttpconnection-class.md) and [CFtpConnection](../../mfc/reference/cftpconnection-class.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CInternetConnection](../../mfc/reference/cinternetconnection-class.md)

`CGopherConnection`

## Requirements

**Header:** afxinet.h

## <a name="cgopherconnection"></a> CGopherConnection::CGopherConnection

This member function is called to construct a `CGopherConnection` object.

```
CGopherConnection(
    CInternetSession* pSession,
    HINTERNET hConnected,
    LPCTSTR pstrServer,
    DWORD_PTR dwContext);

CGopherConnection(
    CInternetSession* pSession,
    LPCTSTR pstrServer,
    LPCTSTR pstrUserName = NULL,
    LPCTSTR pstrPassword = NULL,
    DWORD_PTR dwContext = 0,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER);
```

### Parameters

*pSession*<br/>
A pointer to the related [CInternetSession](../../mfc/reference/cinternetsession-class.md) object.

*hConnected*<br/>
The Windows handle of the current Internet session.

*pstrServer*<br/>
A pointer to a string containing the FTP server name.

*dwContext*<br/>
The context identifier for the operation. *dwContext* identifies the operation's status information returned by [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback). The default is set to 1; however, you can explicitly assign a specific context ID for the operation. The object and any work it does will be associated with that context ID.

*pstrUserName*<br/>
Pointer to a null-terminated string that specifies the name of the user to log in. If NULL, the default is anonymous.

*pstrPassword*<br/>
A pointer to a null-terminated string that specifies the password to use to log in. If both *pstrPassword* and *pstrUserName* are NULL, the default anonymous password is the user's email name. If *pstrPassword* is NULL (or an empty string) but *pstrUserName* is not NULL, a blank password is used. The following table describes the behavior for the four possible settings of *pstrUserName* and *pstrPassword*:

|*pstrUserName*|*pstrPassword*|Username sent to FTP server|Password sent to FTP server|
|--------------------|--------------------|---------------------------------|---------------------------------|
|NULL or " "|NULL or " "|"anonymous"|User's email name|
|Non- NULL String|NULL or " "|*pstrUserName*|" "|
|NULL Non- NULL String|ERROR|ERROR||
|Non- NULL String|Non- NULL String|*pstrUserName*|*pstrPassword*|

*nPort*<br/>
A number that identifies the TCP/IP port to use on the server.

### Remarks

You never create a `CGopherConnection` directly. Rather, call [CInternetSession::GetGopherConnection](../../mfc/reference/cinternetsession-class.md#getgopherconnection), which creates a `CGopherConnection` object and returns a pointer to it.

## <a name="createlocator"></a> CGopherConnection::CreateLocator

Call this member function to create a gopher locator to find or identify a file on a gopher server.

```
CGopherLocator CreateLocator(
    LPCTSTR pstrDisplayString,
    LPCTSTR pstrSelectorString,
    DWORD dwGopherType);

static CGopherLocator CreateLocator(LPCTSTR pstrLocator);

static CGopherLocator CreateLocator(
    LPCTSTR pstrServerName,
    LPCTSTR pstrDisplayString,
    LPCTSTR pstrSelectorString,
    DWORD dwGopherType,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER);
```

### Parameters

*pstrDisplayString*<br/>
A pointer to a string containing the name of the gopher document or directory to be retrieved. If the *pstrDisplayString* parameter is NULL, the default directory for the gopher server is returned.

*pstrSelectorString*<br/>
A pointer to the selector string to be sent to the gopher server in order to retrieve an item. *pstrSelectorString* can be NULL.

*dwGopherType*<br/>
This specifies whether *pstrSelectorString* refers to a directory or document, and whether the request is gopher or gopher+. See the attributes for the structure [GOPHER_FIND_DATA](/windows/win32/api/wininet/ns-wininet-gopher_find_dataw) in the Windows SDK.

*pstrLocator*<br/>
A pointer to a string identifying the file to open. Generally, this string is returned from a call to [CGopherFileFind::GetLocator](../../mfc/reference/cgopherfilefind-class.md#getlocator).

*pstrServerName*<br/>
A pointer to a string containing the gopher server name.

*nPort*<br/>
The number identifying the Internet port for this connection.

### Return Value

A [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) object.

### Remarks

The static version of the member function requires you to specify a server, while the non-static version uses the server name from the connection object.

In order to retrieve information from a gopher server, an application must first get a gopher locator. The application must then treat the locator as an opaque token (that is, the application can use the locator but not directly manipulate or compare it). Normally, the application uses the locator for calls to the [CGopherFileFind::FindFile](../../mfc/reference/cgopherfilefind-class.md#findfile) member function to retrieve a specific piece of information.

## <a name="getattribute"></a> CGopherConnection::GetAttribute

Call this member function to retrieve specific attribute information about an item from the gopher server.

```
BOOL GetAttribute(
    CGopherLocator& refLocator    CString strRequestedAttributes,
    CString& strResult,);
```

### Parameters

*refLocator*<br/>
A reference to a [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) object.

*strRequestedAttributes*<br/>
A space-delimited string specifying the names of the requested attributes.

*strResult*<br/>
A reference to a [CString](../../atl-mfc-shared/reference/cstringt-class.md) that receives the locator type.

### Return Value

Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) may be called to determine the cause of the error.

## <a name="openfile"></a> CGopherConnection::OpenFile

Call this member function to open a file on a gopher server.

```
CGopherFile* OpenFile(
    CGopherLocator& refLocator,
    DWORD dwFlags = 0,
    LPCTSTR pstrView = NULL,
    DWORD_PTR dwContext = 1);
```

### Parameters

*refLocator*<br/>
A reference to a [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) object.

*dwFlags*<br/>
Any combination of INTERNET_FLAG_* flags. See [CInternetSession::OpenUrl](../../mfc/reference/cinternetsession-class.md#openurl) for further information on INTERNET_FLAG_\* flags.

*pstrView*<br/>
A pointer to a file-view string. If several views of the file exist at the server, this parameter specifies which file view to open. If *pstrView* is NULL, the default file view is used.

*dwContext*<br/>
The context ID for the file being opened. See **Remarks** for more information about *dwContext*.

### Return Value

A pointer to the [CGopherFile](../../mfc/reference/cgopherfile-class.md) object to be opened.

### Remarks

Override the *dwContext* default to set the context identifier to a value of your choosing. The context identifier is associated with this specific operation of the `CGopherConnection` object created by its [CInternetSession](../../mfc/reference/cinternetsession-class.md) object. The value is returned to [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) to provide status on the operation with which it is identified. See the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md) for more information about the context identifier.

## See also

[CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CFtpConnection Class](../../mfc/reference/cftpconnection-class.md)<br/>
[CHttpConnection Class](../../mfc/reference/chttpconnection-class.md)<br/>
[CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)<br/>
[CGopherLocator Class](../../mfc/reference/cgopherlocator-class.md)<br/>
[CGopherFile Class](../../mfc/reference/cgopherfile-class.md)<br/>
[CInternetSession Class](../../mfc/reference/cinternetsession-class.md)
