---
title: "SOCKADDR Structure"
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
ms.topic: article
ms.assetid: df1ed66a-f4b8-43f8-8db8-8c2533d25f68
caps.latest.revision: 9
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
 [Structures, Styles, Callbacks, and Message Maps](../VS_visualcpp/Structures--Styles--Callbacks--and-Message-Maps.md)   
 [SOCKADDR_IN Structure](../VS_visualcpp/SOCKADDR_IN-Structure.md)   
 [CAsyncSocket::Create](../Topic/CAsyncSocket::Create.md)   
 [CSocket::Create](../Topic/CSocket::Create.md)