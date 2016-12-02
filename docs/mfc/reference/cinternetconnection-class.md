---
title: "CInternetConnection Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CInternetConnection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "asynchronous connections"
  - "CInternetConnection class"
  - "Internet connections"
ms.assetid: 62a5d1c3-8471-4e36-a064-48831829b2a7
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
# CInternetConnection Class
Manages your connection to an Internet server.  
  
## Syntax  
  
```  
class CInternetConnection : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CInternetConnection::CInternetConnection](#cinternetconnection__cinternetconnection)|Constructs a `CInternetConnection` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CInternetConnection::GetContext](#cinternetconnection__getcontext)|Gets the context ID for this connection object.|  
|[CInternetConnection::GetServerName](#cinternetconnection__getservername)|Gets the name of the server associated with the connection.|  
|[CInternetConnection::GetSession](#cinternetconnection__getsession)|Gets a pointer to the [CInternetSession](../../mfc/reference/cinternetsession-class.md) object associated with the connection.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CInternetConnection::operator HINTERNET](#cinternetconnection__operator_hinternet)|A handle to an Internet session.|  
  
## Remarks  
 It is the base class for MFC classes [CFtpConnection](../../mfc/reference/cftpconnection-class.md), [CHttpConnection](../../mfc/reference/chttpconnection-class.md), and [CGopherConnection](../../mfc/reference/cgopherconnection-class.md). Each of these classes provides additional functionality for communicating with the respective FTP, HTTP, or gopher server.  
  
 To communicate directly with an Internet server, you must have a [CInternetSession](../../mfc/reference/cinternetsession-class.md) object and a `CInternetConnection` object.  
  
 To learn more about how the WinInet classes work, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CInternetConnection`  
  
## Requirements  
 **Header:** afxinet.h  
  
##  <a name="cinternetconnection__cinternetconnection"></a>  CInternetConnection::CInternetConnection  
 This member function is called when a `CInternetConnection` object is created.  
  
```  
CInternetConnection(
    CInternetSession* pSession,  
    LPCTSTR pstrServer,  
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,  
    DWORD_PTR dwContext = 1);
```  
  
### Parameters  
 `pSession`  
 A pointer to a [CInternetSession](../../mfc/reference/cinternetsession-class.md) object.  
  
 `pstrServer`  
 A pointer to a string containing the server name.  
  
 `nPort`  
 The number that identifies the Internet port for this connection.  
  
 `dwContext`  
 The context identifier for the `CInternetConnection` object. See **Remarks** for more information about `dwContext`.  
  
### Remarks  
 You never call `CInternetConnection` yourself; instead, call the [CInternetSession](../../mfc/reference/cinternetsession-class.md) member function for the type of connection you want to establish:  
  
- [CInternetSession::GetFtpConnection](../../mfc/reference/cinternetsession-class.md#cinternetsession__getftpconnection)  
  
- [CInternetSession::GetHttpConnection](../../mfc/reference/cinternetsession-class.md#cinternetsession__gethttpconnection)  
  
- [CInternetSession::GetGopherConnection](../../mfc/reference/cinternetsession-class.md#cinternetsession__getgopherconnection)  
  
 The default value for `dwContext` is sent by MFC to the `CInternetConnection`-derived object from the [CInternetSession](../../mfc/reference/cinternetsession-class.md) object that created the **InternetConnection**-derived object. The default is set to 1; however, you can explicitly assign a specific context identifier in the [CInternetSession](../../mfc/reference/cinternetsession-class.md#cinternetsession__cinternetsession) constructor for the connection. The object and any work it does will be associated with that context ID. The context identifier is returned to [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#cinternetsession__onstatuscallback) to provide status on the object with which it is identified. See the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md) for more information about the context identifier.  
  
##  <a name="cinternetconnection__getcontext"></a>  CInternetConnection::GetContext  
 Call this member function to get the context ID for this session.  
  
```  
DWORD_PTR GetContext() const;

 
```  
  
### Return Value  
 The application-assigned context ID.  
  
### Remarks  
 The context ID is originally specified in [CInternetSession](../../mfc/reference/cinternetsession-class.md) and propagates to `CInternetConnection`- and [CInternetFile](../../mfc/reference/cinternetfile-class.md)-derived classes, unless specified differently in the call to a function that opens the connection. The context ID is associated with any operation of the given object and identifies the operation's status information returned by [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#cinternetsession__onstatuscallback).  
  
 For more information about how **GetContext** works with other WinInet classes to give the user status information, see the article [Internet First Steps: WinInet](../../mfc/wininet-basics.md) for more information about the context identifier.  
  
##  <a name="cinternetconnection__getservername"></a>  CInternetConnection::GetServerName  
 Call this member function to get the name of the server associated with this Internet connection.  
  
```  
CString GetServerName() const;

 
```  
  
### Return Value  
 The name of the server this connection object is working with.  
  
##  <a name="cinternetconnection__getsession"></a>  CInternetConnection::GetSession  
 Call this member function to get a pointer to the `CInternetSession` object that's associated with this connection.  
  
```  
CInternetSession* GetSession() const;

 
```  
  
### Return Value  
 A pointer to a [CInternetSession](../../mfc/reference/cinternetsession-class.md) object associated with this Internet connection object.  
  
##  <a name="cinternetconnection__operator_hinternet"></a>  CInternetConnection::operator HINTERNET  
 Use this operator to get the API-level handle for the current Internet session.  
  
```  
operator HINTERNET() const;

 
```  
  
## See Also  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)



