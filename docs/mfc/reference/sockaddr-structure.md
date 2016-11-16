---
title: "SOCKADDR Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SOCKADDR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SOCKADDR structure"
ms.assetid: df1ed66a-f4b8-43f8-8db8-8c2533d25f68
caps.latest.revision: 12
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
# SOCKADDR Structure
The `SOCKADDR` structure is used to store an Internet Protocol (IP) address for a machine participating in a Windows Sockets communication.  
  
## Syntax  
  
```  
struct sockaddr {  
    unsigned short sa_family;  
    char sa_data[14];  
};  
```  
  
#### Parameters  
 *sa_family*  
 Socket address family.  
  
 *sa_data*  
 Maximum size of all the different socket address structures.  
  
## Remarks  
 The Microsoft TCP/IP Sockets Developer's Kit only supports the Internet address domains. To actually fill in values for each part of an address, you use the `SOCKADDR_IN` data structure, which is specifically for this address format. The `SOCKADDR` and the `SOCKADDR_IN` data structures are the same size. You simply cast to switch between the two structure types.  
  
## Requirements  
 **Header:** winsock2.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [SOCKADDR_IN Structure](../../mfc/reference/sockaddr-in-structure.md)   
 [CAsyncSocket::Create](../../mfc/reference/casyncsocket-class.md#casyncsocket__create)   
 [CSocket::Create](../../mfc/reference/csocket-class.md#csocket__create)

