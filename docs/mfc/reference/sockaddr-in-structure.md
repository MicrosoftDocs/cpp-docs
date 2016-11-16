---
title: "SOCKADDR_IN Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SOCKADDR_IN"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SOCKADDR_IN structure"
ms.assetid: e8cd7c34-78bd-4e28-a990-eb3ca070b7a6
caps.latest.revision: 13
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
# SOCKADDR_IN Structure
In the Internet address family, the `SOCKADDR_IN` structure is used by Windows Sockets to specify a local or remote endpoint address to which to connect a socket.  
  
## Syntax  
  
```  
struct sockaddr_in{  
    short sin_family;  
    unsigned short sin_port;  
struct in_addr sin_addr;  
    char sin_zero[8];  
};  
```  
  
#### Parameters  
 *sin_family*  
 Address family (must be **AF_INET**).  
  
 *sin_port*  
 IP port.  
  
 *sin_addr*  
 IP address.  
  
 *sin_zero*  
 Padding to make structure the same size as `SOCKADDR`.  
  
## Remarks  
 This is the form of the `SOCKADDR` structure specific to the Internet address family and can be cast to `SOCKADDR`.  
  
 The IP address component of this structure is of type **IN_ADDR**. The **IN_ADDR** structure is defined in Windows Sockets header file WINSOCK.H as follows:  
  
 `struct   in_addr {`  
  
 `union   {`  
  
 `struct{`  
  
 `unsigned  char   s_b1,`  
  
 `s_b2,`  
  
 `s_b3,`  
  
 `s_b4;`  
  
 `}  S_un_b;`  
  
 `struct  {`  
  
 `unsigned  short  s_w1,`  
  
 `s_w2;`  
  
 `}  S_un_w;`  
  
 `unsigned long  S_addr;`  
  
 `} S_un;`  
  
 `};`  
  
## Requirements  
 **Header:** winsock2.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [SOCKADDR Structure](../../mfc/reference/sockaddr-structure.md)
