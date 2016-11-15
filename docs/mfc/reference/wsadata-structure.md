---
title: "WSADATA Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "WSADATA"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WSADATA structure"
ms.assetid: 80cc60e5-f9ae-4290-8ed5-07003136627d
caps.latest.revision: 11
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
# WSADATA Structure
The `WSADATA` structure is used to store Windows Sockets initialization information returned by a call to the `AfxSocketInit` global function.  
  
## Syntax  
  
```  
struct WSAData {  
    WORD wVersion;  
    WORD wHighVersion;  
    char szDescription[WSADESCRIPTION_LEN+1];  
    char szSystemStatus[WSASYSSTATUS_LEN+1];  
    unsigned short iMaxSockets;  
    unsigned short iMaxUdpDg;  
    char FAR* lpVendorInfo;  
};  
```  
  
#### Parameters  
 *wVersion*  
 The version of the Windows Sockets specification that the Windows Sockets DLL expects the caller to use.  
  
 *wHighVersion*  
 The highest version of the Windows Sockets specification that this DLL can support (also encoded as above). Normally, this is the same as **wVersion**.  
  
 *szDescription*  
 A null-terminated ASCII string into which the Windows Sockets DLL copies a description of the Windows Sockets implementation, including vendor identification. The text (up to 256 characters in length) can contain any characters, but vendors are cautioned against including control and formatting characters: the most likely use that an application will put this to is to display it (possibly truncated) in a status message.  
  
 *szSystemStatus*  
 A null-terminated ASCII string into which the Windows Sockets DLL copies relevant status or configuration information. The Windows Sockets DLL should use this field only if the information might be useful to the user or support staff; it should not be considered as an extension of the **szDescription** field.  
  
 *iMaxSockets*  
 The maximum number of sockets that a single process can potentially open. A Windows Sockets implementation can provide a global pool of sockets for allocation to any process; alternately, it can allocate per-process resources for sockets. The number can well reflect the way in which the Windows Sockets DLL or the networking software was configured. Application writers can use this number as a crude indication of whether the Windows Sockets implementation is usable by the application. For example, an X Windows server might check **iMaxSockets** when first started: if it is less than 8, the application would display an error message instructing the user to reconfigure the networking software. (This is a situation in which the **szSystemStatus** text might be used.) Obviously there is no guarantee that a particular application can actually allocate **iMaxSockets** sockets, since there can be other Windows Sockets applications in use.  
  
 *iMaxUdpDg*  
 The size in bytes of the largest User Datagram Protocol (UDP) datagram that can be sent or received by a Windows Sockets application. If the implementation imposes no limit, **iMaxUdpDg** is zero. In many implementations of Berkeley sockets, there is an implicit limit of 8192 bytes on UDP datagrams (which are fragmented if necessary). A Windows Sockets implementation can impose a limit based, for instance, on the allocation of fragment reassembly buffers. The minimum value of **iMaxUdpDg** for a compliant Windows Sockets implementation is 512. Note that regardless of the value of **iMaxUdpDg**, it is inadvisable to attempt to send a broadcast datagram that is larger than the Maximum Transmission Unit (MTU) for the network. (The Windows Sockets API does not provide a mechanism to discover the MTU, but it must be no less than 512 bytes.)  
  
 *lpVendorInfo*  
 A far pointer to a vendor-specific data structure. The definition of this structure (if supplied) is beyond the scope of the Windows Sockets specification.  
  
> [!NOTE]
>  In MFC, the `WSADATA` structure is returned by the `AfxSocketInit` function, which you call in your `InitInstance` function. You can retrieve the structure and store it in your program if you need to use information from it later.  
  
## Requirements  
 **Header:** winsock2.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit)

