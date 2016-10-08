---
title: "CGopherConnection Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: b5b96aea-ac99-430e-bd84-d1372b43f78f
caps.latest.revision: 19
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
|[CGopherConnection::CreateLocator](#cgopherconnection__createlocator)|Creates a [CGopherLocator](../VS_visualcpp/CGopherLocator-Class.md) object to find files on a gopher server.|  
|[CGopherConnection::GetAttribute](#cgopherconnection__getattribute)|Retrieves attribute information about the gopher object.|  
|[CGopherConnection::OpenFile](#cgopherconnection__openfile)|Opens a gopher file.|  
  
## Remarks  
 The gopher service is one of three Internet services recognized by the MFC WinInet classes.  
  
 The class `CGopherConnection` contains a constructor and three additional member functions that manage the gopher service: [OpenFile](#cgopherconnection__openfile), [CreateLocator](#cgopherconnection__createlocator), and [GetAttribute](#cgopherconnection__getattribute).  
  
 To communicate with a gopher Internet server, you must first create an instance of [CInternetSession](../VS_visualcpp/CInternetSession-Class.md), and then call [CInternetSession::GetGopherConnection](../VS_visualcpp/CInternetSession-Class.md#cinternetsession__getgopherconnection), which creates the `CGopherConnection` object and returns a pointer to it. You never create a `CGopherConnection` object directly.  
  
 To learn more about how `CGopherConnection` works with the other MFC Internet classes, see the article [Internet Programming with WinInet](../VS_visualcpp/Win32-Internet-Extensions--WinInet-.md). For more information about using the other two supported Internet services, FTP and HTTP see the classes [CHttpConnection](../VS_visualcpp/CHttpConnection-Class.md) and [CFtpConnection](../VS_visualcpp/CFtpConnection-Class.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CInternetConnection](../VS_visualcpp/CInternetConnection-Class.md)  
  
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
    DWORD_PTR dwContext );  
  
CGopherConnection(  
    CInternetSession* pSession,  
    LPCTSTR pstrServer,  
    LPCTSTR pstrUserName = NULL,  
    LPCTSTR pstrPassword = NULL,  
    DWORD_PTR dwContext = 0,  
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER );  
```  
  
### Parameters  
 `pSession`  
 A pointer to the related [CInternetSession](../VS_visualcpp/CInternetSession-Class.md) object.  
  
 `hConnected`  
 The Windows handle of the current Internet session.  
  
 `pstrServer`  
 A pointer to a string containing the FTP server name.  
  
 `dwContext`  
 The context identifier for the operation. `dwContext` identifies the operation's status information returned by [CInternetSession::OnStatusCallback](../VS_visualcpp/CInternetSession-Class.md#cinternetsession__onstatuscallback). The default is set to 1; however, you can explicitly assign a specific context ID for the operation. The object and any work it does will be associated with that context ID.  
  
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
 You never create a `CGopherConnection` directly. Rather, call [CInternetSession::GetGopherConnection](../VS_visualcpp/CInternetSession-Class.md#cinternetsession__getgopherconnection), which creates a `CGopherConnection` object and returns a pointer to it.  
  
##  <a name="cgopherconnection__createlocator"></a>  CGopherConnection::CreateLocator  
 Call this member function to create a gopher locator to find or identify a file on a gopher server.  
  
```  
CGopherLocator CreateLocator(  
    LPCTSTR pstrDisplayString,  
    LPCTSTR pstrSelectorString,  
    DWORD dwGopherType );  
  
static CGopherLocator CreateLocator(  
    LPCTSTR pstrLocator );  
  
static CGopherLocator CreateLocator(  
    LPCTSTR pstrServerName,  
    LPCTSTR pstrDisplayString,  
    LPCTSTR pstrSelectorString,  
    DWORD dwGopherType,  
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER  );  
```  
  
### Parameters  
 `pstrDisplayString`  
 A pointer to a string containing the name of the gopher document or directory to be retrieved. If the `pstrDisplayString` parameter is **NULL**, the default directory for the gopher server is returned.  
  
 `pstrSelectorString`  
 A pointer to the selector string to be sent to the gopher server in order to retrieve an item. `pstrSelectorString` can be **NULL**.  
  
 *dwGopherType*  
 This specifies whether `pstrSelectorString` refers to a directory or document, and whether the request is gopher or gopher+. See the attributes for the structure                                 [GOPHER_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa384215) in the Windows SDK.  
  
 `pstrLocator`  
 A pointer to a string identifying the file to open. Generally, this string is returned from a call to [CGopherFileFind::GetLocator](../VS_visualcpp/CGopherFileFind-Class.md#cgopherfilefind__getlocator).  
  
 *pstrServerName*  
 A pointer to a string containing the gopher server name.  
  
 `nPort`  
 The number identifying the Internet port for this connection.  
  
### Return Value  
 A [CGopherLocator](../VS_visualcpp/CGopherLocator-Class.md) object.  
  
### Remarks  
 The static version of the member function requires you to specify a server, while the non-static version uses the server name from the connection object.  
  
 In order to retrieve information from a gopher server, an application must first get a gopher locator. The application must then treat the locator as an opaque token (that is, the application can use the locator but not directly manipulate or compare it). Normally, the application uses the locator for calls to the [CGopherFileFind::FindFile](../VS_visualcpp/CGopherFileFind-Class.md#cgopherfilefind__findfile) member function to retrieve a specific piece of information.  
  
##  <a name="cgopherconnection__getattribute"></a>  CGopherConnection::GetAttribute  
 Call this member function to retrieve specific attribute information about an item from the gopher server.  
  
```  
BOOL GetAttribute(  
    CGopherLocator& refLocator    CString strRequestedAttributes,  
    CString& strResult, );  
```  
  
### Parameters  
 `refLocator`  
 A reference to a [CGopherLocator](../VS_visualcpp/CGopherLocator-Class.md) object.  
  
 *strRequestedAttributes*  
 A space-delimited string specifying the names of the requested attributes.  
  
 `strResult`  
 A reference to a [CString](../VS_visualcpp/CStringT-Class.md) that receives the locator type.  
  
### Return Value  
 Nonzero if successful; otherwise 0. If the call fails, the Win32 function                         [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) may be called to determine the cause of the error.  
  
##  <a name="cgopherconnection__openfile"></a>  CGopherConnection::OpenFile  
 Call this member function to open a file on a gopher server.  
  
```  
CGopherFile* OpenFile(  
    CGopherLocator& refLocator,  
    DWORD dwFlags = 0,  
    LPCTSTR pstrView = NULL,  
    DWORD_PTR dwContext = 1  );  
```  
  
### Parameters  
 `refLocator`  
 A reference to a [CGopherLocator](../VS_visualcpp/CGopherLocator-Class.md) object.  
  
 `dwFlags`  
 Any combination of INTERNET_FLAG_* flags. See [CInternetSession::OpenUrl](../VS_visualcpp/CInternetSession-Class.md#cinternetsession__openurl) for further information on INTERNET_FLAG_\* flags.  
  
 `pstrView`  
 A pointer to a file-view string. If several views of the file exist at the server, this parameter specifies which file view to open. If `pstrView` is **NULL**, the default file view is used.  
  
 `dwContext`  
 The context ID for the file being opened. See **Remarks** for more information about `dwContext`.  
  
### Return Value  
 A pointer to the [CGopherFile](../VS_visualcpp/CGopherFile-Class.md) object to be opened.  
  
### Remarks  
 Override the `dwContext` default to set the context identifier to a value of your choosing. The context identifier is associated with this specific operation of the `CGopherConnection` object created by its [CInternetSession](../VS_visualcpp/CInternetSession-Class.md) object. The value is returned to [CInternetSession::OnStatusCallback](../VS_visualcpp/CInternetSession-Class.md#cinternetsession__onstatuscallback) to provide status on the operation with which it is identified. See the article [Internet First Steps: WinInet](../VS_visualcpp/WinInet-Basics.md) for more information about the context identifier.  
  
## See Also  
 [CInternetConnection Class](../VS_visualcpp/CInternetConnection-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CFtpConnection Class](../VS_visualcpp/CFtpConnection-Class.md)   
 [CHttpConnection Class](../VS_visualcpp/CHttpConnection-Class.md)   
 [CInternetConnection Class](../VS_visualcpp/CInternetConnection-Class.md)   
 [CGopherLocator Class](../VS_visualcpp/CGopherLocator-Class.md)   
 [CGopherFile Class](../VS_visualcpp/CGopherFile-Class.md)   
 [CInternetSession Class](../VS_visualcpp/CInternetSession-Class.md)