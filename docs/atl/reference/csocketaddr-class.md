---
title: "CSocketAddr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSocketAddr"
  - "ATL.CSocketAddr"
  - "ATL::CSocketAddr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSocketAddr class"
ms.assetid: 2fb2d8a7-899e-4a36-a342-cc9f4fcdd68c
caps.latest.revision: 19
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
# CSocketAddr Class
This class provides methods for converting host names to host addresses, supporting both IPv4 and IPV6 formats.  
  
## Syntax  
  
```
class CSocketAddr
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSocketAddr::CSocketAddr](#csocketaddr__csocketaddr)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSocketAddr::FindAddr](#csocketaddr__findaddr)|Call this method to convert the provided host name to the host address.|  
|[CSocketAddr::FindINET4Addr](#csocketaddr__findinet4addr)|Call this method to convert the IPv4 host name to the host address.|  
|[CSocketAddr::FindINET6Addr](#csocketaddr__findinet6addr)|Call this method to convert the IPv6 host name to the host address.|  
|[CSocketAddr::GetAddrInfo](#csocketaddr__getaddrinfo)|Call this method to return a pointer to a specific element in the **addrinfo** list.|  
|[CSocketAddr::GetAddrInfoList](#csocketaddr__getaddrinfolist)|Call this method to return a pointer to the **addrinfo** list.|  
  
## Remarks  
 This class provides an IP version agnostic approach for looking up network addresses for use with Windows sockets API functions and socket wrappers in libraries.  
  
 The members of this class that are used to look up network addresses use the Win32 API function [getaddrinfo](http://msdn.microsoft.com/library/windows/desktop/ms738520).  
  
 This class supports both IPv4 andIPv6 network addresses.  
  
## Requirements  
 **Header:** atlsocket.h  
  
##  <a name="csocketaddr__csocketaddr"></a>  CSocketAddr::CSocketAddr  
 The constructor.  
  
```
CSocketAddr();
```  
  
### Remarks  
 Creates a new `CSocketAddr` object and initializes the linked list containing response information about the host.  
  
##  <a name="csocketaddr__findaddr"></a>  CSocketAddr::FindAddr  
 Call this method to convert the provided host name to the host address.  
  
```
int FindAddr(const char *szHost,
    const char *szPortOrServiceName,
    int flags,
    int addr_family,
    int sock_type,
    int ai_proto);

    int FindAddr(const char *szHost,
    int nPortNo,
    int flags,
    int addr_family,
    int sock_type,
    int ai_proto);
```  
  
### Parameters  
 `szHost`  
 The host name or dotted IP address.  
  
 *szPortOrServiceName*  
 The port number or name of service on host.  
  
 `nPortNo`  
 The port number.  
  
 `flags`  
 0 or combination of AI_PASSIVE, AI_CANONNAME or AI_NUMERICHOST.  
  
 *addr_family*  
 Address family (such as PF_INET).  
  
 `sock_type`  
 Socket type (such as SOCK_STREAM).  
  
 *ai_proto*  
 Protocol (such as IPPROTO_IP or IPPROTO_IPV6).  
  
### Return Value  
 Returns zero if the address is calculated successfully. Returns a nonzero Windows Socket error code on failure. If successful, the calculated address is stored in a linked list that may be referenced using `CSocketAddr::GetAddrInfoList` and `CSocketAddr::GetAddrInfo`.  
  
### Remarks  
 The host name parameter may be in either IPv4 or IPv6 format. This method calls the Win32 API function [getaddrinfo](http://msdn.microsoft.com/library/windows/desktop/ms738520) to perform the conversion.  
  
##  <a name="csocketaddr__findinet4addr"></a>  CSocketAddr::FindINET4Addr  
 Call this method to convert the IPv4 host name to the host address.  
  
```
int FindINET4Addr(
    const char *szHost,
    int nPortNo,
    int flags,
    int sock_type,);
```  
  
### Parameters  
 `szHost`  
 The host name or dotted IP address.  
  
 `nPortNo`  
 The port number.  
  
 `flags`  
 0 or combination of AI_PASSIVE, AI_CANONNAME or AI_NUMERICHOST.  
  
 `sock_type`  
 Socket type (such as SOCK_STREAM).  
  
### Return Value  
 Returns zero if the address is calculated successfully. Returns a nonzero Windows Socket error code on failure. If successful, the calculated address is stored in a linked list that may be referenced using `CSocketAddr::GetAddrInfoList` and `CSocketAddr::GetAddrInfo`.  
  
### Remarks  
 This method calls the Win32 API function [getaddrinfo](http://msdn.microsoft.com/library/windows/desktop/ms738520) to perform the conversion.  
  
##  <a name="csocketaddr__findinet6addr"></a>  CSocketAddr::FindINET6Addr  
 Call this method to convert the IPv6 host name to the host address.  
  
```
int FindINET6Addr(
    const char *szHost,
    int nPortNo,
    int flags,
    int sock_type,);
```  
  
### Parameters  
 `szHost`  
 The host name or dotted IP address.  
  
 `nPortNo`  
 The port number.  
  
 `flags`  
 0 or combination of AI_PASSIVE, AI_CANONNAME or AI_NUMERICHOST.  
  
 `sock_type`  
 Socket type (such as SOCK_STREAM).  
  
### Return Value  
 Returns zero if the address is calculated successfully. Returns a nonzero Windows Socket error code on failure. If successful, the calculated address is stored in a linked list that may be referenced using `CSocketAddr::GetAddrInfoList` and `CSocketAddr::GetAddrInfo`.  
  
### Remarks  
 This method calls the Win32 API function [getaddrinfo](http://msdn.microsoft.com/library/windows/desktop/ms738520) to perform the conversion.  
  
##  <a name="csocketaddr__getaddrinfo"></a>  CSocketAddr::GetAddrInfo  
 Call this method to return a pointer to a specific element in the **addrinfo** list.  
  
```
addrinfo* const GetAddrInfo(int   nIndex = 0) const;
```  
  
### Parameters  
 `nIndex`  
 A reference to a specific element in the [addrinfo](http://msdn.microsoft.com/library/windows/desktop/ms737530) list.  
  
### Return Value  
 Returns a pointer to the **addrinfo** structure referenced by `nIndex` in the linked list containing response information about the host.  
  
##  <a name="csocketaddr__getaddrinfolist"></a>  CSocketAddr::GetAddrInfoList  
 Call this method to return a pointer to the **addrinfo** list.  
  
```
addrinfo* const GetAddrInfoList() const;
```  
  
### Return Value  
 Pointer to a linked list of one or more `addrinfo` structures containing response information about the host. For more information about the `addrinfo` structure, see the "addrinfo" article in the [MSDN Library](http://go.microsoft.com/fwlink/linkid=556)  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
