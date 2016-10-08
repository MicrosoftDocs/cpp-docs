---
title: "LINGER Structure"
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
ms.assetid: 1fb1c5bf-a64e-4a6c-89d6-1734e4fdbb1b
caps.latest.revision: 8
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
# LINGER Structure
The `LINGER` structure is used for manipulating the **SO_LINGER** and **SO_DONTLINGER** options of `CAsyncSocket::GetSockOpt`.  
  
## Syntax  
  
```  
  
      struct linger {  
   u_short l_onoff;            // option on/off  
   u_short l_linger;           // linger time  
};  
```  
  
## Remarks  
 Setting the **SO_DONTLINGER** option prevents blocking on member function **Close** while waiting for unsent data to be sent. Setting this option is equivalent to setting **SO_LINGER** with **l_onoff** set to 0.  
  
## Requirements  
 **Header:** winsock2.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../VS_visualcpp/Structures--Styles--Callbacks--and-Message-Maps.md)   
 [CAsyncSocket::GetSockOpt](../Topic/CAsyncSocket::GetSockOpt.md)   
 [CAsyncSocket::SetSockOpt](../Topic/CAsyncSocket::SetSockOpt.md)