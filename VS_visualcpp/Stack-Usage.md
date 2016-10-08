---
title: "Stack Usage"
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
ms.assetid: 383f0072-0438-489f-8829-cca89582408c
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
# Stack Usage
All memory beyond the current address of RSP is considered volatile: The OS, or a debugger, may overwrite this memory during a user debug session, or an interrupt handler. Thus, RSP must always be set before attempting to read or write values to a stack frame.  
  
 This section discusses the allocation of stack space for local variables and the **alloca** intrinsic.  
  
-   [Stack Allocation](../VS_visualcpp/Stack-Allocation.md)  
  
-   [Dynamic Parameter Stack Area Construction](../VS_visualcpp/Dynamic-Parameter-Stack-Area-Construction.md)  
  
-   [Function Types](../VS_visualcpp/Function-Types.md)  
  
-   [malloc Alignment](../VS_visualcpp/malloc-Alignment.md)  
  
-   [alloca](../VS_visualcpp/alloca.md)  
  
## See Also  
 [x64 Software Conventions](../VS_visualcpp/x64-Software-Conventions.md)