---
title: "CGopherConnection Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CGopherConnection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "servers, connecting to"
  - "Internet server, gopher"
  - "connecting to servers, gopher servers"
  - "protocols, gopher"
  - "services, gopher"
  - "CGopherConnection class"
  - "gopher protocol"
  - "gopher server"
  - "connecting to servers"
  - "Internet connections, gopher"
ms.assetid: b5b96aea-ac99-430e-bd84-d1372b43f78f
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CGopherConnection Class
Manages your connection to a gopher Internet server.  
  
> [!NOTE]
>  The classes `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` and their members have been deprecated because they do not work on the Windows XP platform, but they will continue to work on earlier platforms.  
  
## Syntax  
  
```  
class CGopherConnection : public CInternetConnection  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CGopherConnection::CGopherConnection](#cgopherconnection__cgopherconnection)|Constructs a `CGopherConnection` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CGopherConnection::CreateLocator](#cgopherconnection__createlocator)|Creates a [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) object to find files on a gopher server.|  
|[CGopherConnection::GetAttribute](#cgopherconnection__getattribute)|Retrieves attribute information about the gopher object.|  
|[CGopherConnection::OpenFile](#cgopherconnection__openfile)|Opens a gopher file.|  
  
## Remarks  
 The gopher service is one of three Internet services recognized by the MFC WinInet classes.  
  
 The class `CGopherConnection` contains a constructor and three additional member functions that manage the gopher service: [OpenFile](#cgopherconnection__openfile), [CreateLocator](#cgopherconnection__createlocator), and [GetAttribute](#cgopherconnection__getattribute).  
  
 To communicate with a gopher Internet server, you must first create an instance of [CInternetSession](../../mfc/reference/cinternetsession-class.md), and then call [CInternetSession::GetGopherConnection](../../mfc/reference/cinternetsession-class.md#cinternetsession__getgopherconnection), which creates the `CGopherConnection` object and returns a pointer to it. You never create a `CGopherConnection` object directly.  
  
 To learn more about how `CGopherConnection` works with the other MFC Internet classes, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md). For more information about using the other two supported Internet services, FTP and HTTP see the classes [CHttpConnection](../../mfc/reference/chttpconnection-class.md) and [CFtpConnection](../../mfc/reference/cftpconnection-class.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)  
  
 `CGopherConnection`  
  
## Requirements  
 **Header:** afxinet.h  
  
##  <a name="cgopherconnection__cgopherconnection"></a>  CGopherConnection::CGopherConnection  
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
 `pSession`  
 A pointer to the related [CInternetSession](../../mfc/reference/cinternetsession-class.md) object.  
  
 `hConnected`  
 The Windows handle of the current Internet session.  
  
 `pstrServer`  
 A pointer to a string containing the FTP server name.  
  
 `dwContext`  
 The context identifier for the operation. `dwContext` identifies the operation's status information returned by [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#cinternetsession__onstatuscallback). The default is set to 1; however, you can explicitly assign a specific context ID for the operation. The object and any work it does will be associated with that context ID.  
  
 `pstrUserName`  
 Pointer to a null-terminated string that specifies the name of the user to log in. If **NULL**, the default is anonymous.  
  
 `pstrPassword`  
 A pointer to a null-terminated string that specifies the password to use to log in. If both `pstrPassword` and `pstrUserName` are **NULL**, the default anonymous password is the user's email name. If `pstrPassword` is **NULL** (or an empty string) but `pstrUserName` is not **NULL**, a blank password is used. The following table describes the behavior for the four possible settings of `pstrUserName` and `pstrPassword`:  
  
|`pstrUserName`|`pstrPassword`|Username sent to FTP server|Password sent to FTP server|  
|--------------------|--------------------|---------------------------------|---------------------------------|  
|**NULL** or " "|**NULL** or " "|"anonymous"|User's email name|  
|Non- **NULL** String|**NULL** or " "|`pstrUserName`|" "|  
|**NULL** Non- **NULL** String|**ERROR**|**ERROR**||  
|Non- **NULL** String|Non- **NULL** String|`pstrUserName`|`pstrPassword`|  
  
 `nPort`  
 A number that identifies the TCP/IP port to use on the server.  
  
### Remarks  
 You never create a `CGopherConnection` directly. Rather, call [CInternetSession::GetGopherConnection](../../mfc/reference/cinternetsession-class.md#cinternetsession__getgopherconnection), which creates a `CGopherConnection` object and returns a pointer to it.  
  
##  <a name="cgopherconnection__createlocator"></a>  CGopherConnection::CreateLocator  
 Call this member function to create a gopher locator to find or identify a file on a gopher server.  
  
```  
CGopherLocator CreateLocator(
    LPCTSTR pstrDisplayString,  
    LPCTSTR pstrSelectorString,  
    DWORD dwGopherType);

 
static CGopherLocator CreateLocator(
    LPCTSTR pstrLocator);

 
static CGopherLocator CreateLocator(
    LPCTSTR pstrServerName,  
    LPCTSTR pstrDisplayString,  
    LPCTSTR pstrSelectorString,  
    DWORD dwGopherType,  
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER);
```  
  
### Parameters  
 `pstrDisplayString`  
 A pointer to a string containing the name of the gopher document or directory to be retrieved. If the `pstrDisplayString` parameter is **NULL**, the default directory for the gopher server is returned.  
  
 `pstrSelectorString`  
 A pointer to the selector string to be sent to the gopher server in order to retrieve an item. `pstrSelectorString` can be **NULL**.  
  
 *dwGopherType*  
 This specifies whether `pstrSelectorString` refers to a directory or document, and whether the request is gopher or gopher+. See the attributes for the structure [GOPHER_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa384215) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pstrLocator`  
 A pointer to a string identifying the file to open. Generally, this string is returned from a call to [CGopherFileFind::GetLocator](../../mfc/reference/cgopherfilefind-class.md#cgopherfilefind__getlocator).  
  
 *pstrServerName*  
 A pointer to a string containing the gopher server name.  
  
 `nPort`  
 The number identifying the Internet port for this connection.  
  
### Return Value  
 A [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) object.  
  
### Remarks  
 The static version of the member function requires you to specify a server, while the non-static version uses the server name from the connection object.  
  
 In order to retrieve information from a gopher server, an application must first get a gopher locator. The application must then treat the locator as an opaque token (that is, the application can use the locator but not directly manipulate or compare it). Normally, the application uses the locator for calls to the [CGopherFileFind::FindFile](../../mfc/reference/cgopherfilefind-class.md#cgopherfilefind__findfile) member function to retrieve a specific piece of information.  
  
##  <a name="cgopherconnection__getattribute"></a>  CGopherConnection::GetAttribute  
 Call this member function to retrieve specific attribute information about an item from the gopher server.  
  
```  
BOOL GetAttribute(
    CGopherLocator& refLocator    CString strRequestedAttributes,  
    CString& strResult,);
```  
  
### Parameters  
 `refLocator`  
 A reference to a [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) object.  
  
 *strRequestedAttributes*  
 A space-delimited string specifying the names of the requested attributes.  
  
 `strResult`  
 A reference to a [CString](../../atl-mfc-shared/reference/cstringt-class.md) that receives the locator type.  
  
### Return Value  
 Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) may be called to determine the cause of the error.  
  
##  <a name="cgopherconnection__openfile"></a>  CGopherConnection::OpenFile  
 Call this member function to open a file on a gopher server.  
  
```  
CGopherFile* OpenFile(
    CGopherLocator& refLocator,  
    DWORD dwFlags = 0,  
    LPCTSTR pstrView = NULL,  
    DWORD_PTR dwContext = 1);
```  
  
### Parameters  
 `refLocator`  
 A reference to a [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) object.  
  
 `dwFlags`  
 Any combination of INTERNET_FLAG_* flags. See [CInternetSession::OpenUrl](../../mfc/reference/cinternetsession-class.md#cinternetsession__openurl) for further information on INTERNET_FLAG_\* flags.  
  
 `pstrView`  
 A pointer to a file-view string. If several views of the file exist at the server, this parameter specifies which file view to open. If `pstrView` is **NULL**, the default file view is used.  
  
 `dwContext`  
 The context ID for the file being opened. See **Remarks** for more information about `dwContext`.  
  
### Return Value  
 A pointer to the [CGopherFile](../../mfc/reference/cgopherfile-class.md) object to be opened.  
  
### Remarks  
 Override the `dwContext` default to set the context identifier to a value of your choosing. The context identifier is associated with this specific operation of the `CGopherConnection` object created by its [CInternetSession](../../mfc/reference/cinternetsession-class.md) object. The value is returned to [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#cinternetsession__onstatuscallback) to provide status on the operation with which it is identified. See the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md) for more information about the context identifier.  
  
## See Also  
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CFtpConnection Class](../../mfc/reference/cftpconnection-class.md)   
 [CHttpConnection Class](../../mfc/reference/chttpconnection-class.md)   
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)   
 [CGopherLocator Class](../../mfc/reference/cgopherlocator-class.md)   
 [CGopherFile Class](../../mfc/reference/cgopherfile-class.md)   
 [CInternetSession Class](../../mfc/reference/cinternetsession-class.md)
