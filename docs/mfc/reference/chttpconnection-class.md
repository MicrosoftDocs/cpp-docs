---
title: "CHttpConnection Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CHttpConnection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "servers, connecting to"
  - "protocols, HTTP"
  - "connecting to servers, HTTP servers"
  - "Internet protocols, HTTP"
  - "HTTP connections"
  - "Internet protocols"
  - "CHttpConnection class"
  - "HTTP servers, connecting to"
  - "connecting to servers"
  - "Internet connections, HTTP"
  - "connections [C++], HTTP"
  - "Internet server, HTTP"
ms.assetid: a402b662-c445-4988-800d-c8278551babe
caps.latest.revision: 24
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
# CHttpConnection Class
Manages your connection to an HTTP server.  
  
## Syntax  
  
```  
class CHttpConnection : public CInternetConnection  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CHttpConnection::CHttpConnection](#chttpconnection__chttpconnection)|Creates a `CHttpConnection` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CHttpConnection::OpenRequest](#chttpconnection__openrequest)|Opens an HTTP request.|  
  
## Remarks  
 HTTP is one of three Internet server protocols implemented by the MFC WinInet classes.  
  
 The class `CHttpConnection` contains a constructor and one member function, [OpenRequest](#chttpconnection__openrequest), that manages connections to a server with an HTTP protocol.  
  
 To communicate with an HTTP server, you must first create an instance of [CInternetSession](../../mfc/reference/cinternetsession-class.md), and then create a [CHttpConnection](#_mfc_chttpconnection) object. You never create a `CHttpConnection` object directly; rather, call [CInternetSession::GetHttpConnection](../../mfc/reference/cinternetsession-class.md#cinternetsession__gethttpconnection), which creates the `CHttpConnection` object and returns a pointer to it.  
  
 To learn more about how `CHttpConnection` works with the other MFC Internet classes, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md). For more information about connecting to servers using the other two supported Internet protocols, gopher and FTP, see the classes [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) and [CFtpConnection](../../mfc/reference/cftpconnection-class.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)  
  
 `CHttpConnection`  
  
## Requirements  
 **Header:** afxinet.h  
  
##  <a name="chttpconnection__chttpconnection"></a>  CHttpConnection::CHttpConnection  
 This member function is called to construct a `CHttpConnection` object.  
  
```  
CHttpConnection(
    CInternetSession* pSession,  
    HINTERNET hConnected,  
    LPCTSTR pstrServer,  
    DWORD_PTR dwContext);

 
CHttpConnection(
    CInternetSession* pSession,  
    LPCTSTR pstrServer,  
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,  
    LPCTSTR pstrUserName = NULL,  
    LPCTSTR pstrPassword = NULL,  
    DWORD_PTR dwContext = 1);

 
CHttpConnection(
    CInternetSession* pSession,  
    LPCTSTR pstrServer,  
    DWORD dwFlags,  
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,  
    LPCTSTR pstrUserName = NULL,  
    LPCTSTR pstrPassword = NULL,  
    DWORD_PTR dwContext = 1);
```  
  
### Parameters  
 `pSession`  
 A pointer to a [CInternetSession](../../mfc/reference/cinternetsession-class.md) object.  
  
 `hConnected`  
 A handle to an Internet connection.  
  
 `pstrServer`  
 A pointer to a string containing the server name.  
  
 `dwContext`  
 The context identifier for the `CInternetConnection` object. See **Remarks** for more information about `dwContext`.  
  
 `nPort`  
 The number that identifies the Internet port for this connection.  
  
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
  
 `dwFlags`  
 Any combination of the **INTERNET_ FLAG_\*** flags. See the table in the **Remarks** section of [CHttpConnection::OpenRequest](#chttpconnection__openrequest) for a description of `dwFlags` values.  
  
### Remarks  
 You never create a `CHttpConnection` directly. Rather, you create an object by calling [CInternetSession::GetHttpConnection](../../mfc/reference/cinternetsession-class.md#cinternetsession__gethttpconnection).  
  
##  <a name="chttpconnection__openrequest"></a>  CHttpConnection::OpenRequest  
 Call this member function to open an HTTP connection.  
  
```  
CHttpFile* OpenRequest(
    LPCTSTR pstrVerb,  
    LPCTSTR pstrObjectName,  
    LPCTSTR pstrReferer = NULL,  
    DWORD_PTR dwContext = 1,  
    LPCTSTR* ppstrAcceptTypes = NULL,  
    LPCTSTR pstrVersion = NULL,  
    DWORD dwFlags = INTERNET_FLAG_EXISTING_CONNECT);

 
CHttpFile* OpenRequest(
    int nVerb,  
    LPCTSTR pstrObjectName,  
    LPCTSTR pstrReferer = NULL,  
    DWORD_PTR dwContext = 1,  
    LPCTSTR* ppstrAcceptTypes = NULL,  
    LPCTSTR pstrVersion = NULL,  
    DWORD dwFlags = INTERNET_FLAG_EXISTING_CONNECT);
```  
  
### Parameters  
 `pstrVerb`  
 A pointer to a string containing the verb to use in the request. If `NULL`, "GET" is used.  
  
 `pstrObjectName`  
 A pointer to a string containing the target object of the specified verb. This is generally a filename, an executable module, or a search specifier.  
  
 `pstrReferer`  
 A pointer to a string that specifies the address (URL) of the document from which the URL in the request ( `pstrObjectName`) was obtained. If `NULL`, no HTTP header is specified.  
  
 `dwContext`  
 The context identifier for the `OpenRequest` operation. See the Remarks section for more information about `dwContext`.  
  
 `ppstrAcceptTypes`  
 A pointer to a null-terminated array of `LPCTSTR` pointers to strings indicating content types accepted by the client. If `ppstrAcceptTypes` is `NULL`, the servers interpret that the client only accepts documents of type "text/*" (that is, only text documents and not pictures or other binary files). The content type is equivalent to the CGI variable CONTENT_TYPE, which identifies the type of data for queries that have attached information, such as HTTP POST and PUT.  
  
 `pstrVersion`  
 A pointer to a string defining the HTTP version. If `NULL`, "HTTP/1.0" is used.  
  
 `dwFlags`  
 Any combination of the INTERNET_ FLAG_* flags. See the Remarks section for a description of possible `dwFlags` values.  
  
 `nVerb`  
 A number associated with the HTTP request type. Can be one of the following:  
  
|HTTP request type|`nVerb` value|  
|-----------------------|-------------------|  
|`HTTP_VERB_POST`|0|  
|`HTTP_VERB_GET`|1|  
|`HTTP_VERB_HEAD`|2|  
|`HTTP_VERB_PUT`|3|  
|`HTTP_VERB_LINK`|4|  
|`HTTP_VERB_DELETE`|5|  
|`HTTP_VERB_UNLINK`|6|  
  
### Return Value  
 A pointer to the [CHttpFile](../../mfc/reference/chttpfile-class.md) object requested.  
  
### Remarks  
 `dwFlags` can be one of the following:  
  
|Internet flag|Description|  
|-------------------|-----------------|  
|`INTERNET_FLAG_RELOAD`|Forces a download of the requested file, object, or directory listing from the origin server, not from the cache.|  
|`INTERNET_FLAG_DONT_CACHE`|Does not add the returned entity to the cache.|  
|`INTERNET_FLAG_MAKE_PERSISTENT`|Adds the returned entity to the cache as a persistent entity. This means that standard cache cleanup, consistency checking, or garbage collection cannot remove this item from the cache.|  
|`INTERNET_FLAG_SECURE`|Uses secure transaction semantics. This translates to using SSL/PCT and is only meaningful in HTTP requests|  
|`INTERNET_FLAG_NO_AUTO_REDIRECT`|Used only with HTTP, specifies that redirections should not be automatically handled in [CHttpFile::SendRequest](../../mfc/reference/chttpfile-class.md#chttpfile__sendrequest).|  
  
 Override the `dwContext` default to set the context identifier to a value of your choosing. The context identifier is associated with this specific operation of the `CHttpConnection` object created by its [CInternetSession](../../mfc/reference/cinternetsession-class.md) object. The value is returned to [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#cinternetsession__onstatuscallback) to provide status on the operation with which it is identified. See the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md) for more information about the context identifier.  
  
 Exceptions may be thrown with this function.  
  
## See Also  
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)   
 [CHttpFile Class](../../mfc/reference/chttpfile-class.md)
