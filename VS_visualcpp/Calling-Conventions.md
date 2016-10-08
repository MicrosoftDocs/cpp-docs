---
title: "Calling Conventions"
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
ms.topic: language-reference
ms.assetid: 11b1e45c-8fd1-420b-bca0-a19e294c1d85
caps.latest.revision: 7
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
# Calling Conventions
The Visual C/C++ compiler provides several different conventions for calling internal and external functions. Understanding these different approaches can help you debug your program and link your code with assembly-language routines.  
  
 The topics on this subject explain the differences between the calling conventions, how arguments are passed, and how values are returned by functions. They also discuss naked function calls, an advanced feature that enables you to write your own prolog and epilog code.  
  
 For information on calling conventions for x64 processors, see [Calling Convention](../VS_visualcpp/Calling-Convention.md).  
  
## Topics in this section  
  
-   [Argument Passing and Naming Conventions](../VS_visualcpp/Argument-Passing-and-Naming-Conventions.md) (__`cdecl`, \_\_**stdcall**, \_\_**fastcall**, and others)  
  
-   [Calling Example: Function Prototype and Call](../VS_visualcpp/Calling-Example--Function-Prototype-and-Call.md)  
  
-   [Using naked function calls to write custom prolog/epilog code](../VS_visualcpp/Naked-Function-Calls.md)  
  
-   [Floating Point Coprocessor and Calling Conventions](../VS_visualcpp/Floating-Point-Coprocessor-and-Calling-Conventions.md)  
  
-   [Obsolete calling conventions](../VS_visualcpp/Obsolete-Calling-Conventions.md)  
  
## See Also  
 [Microsoft-Specific Modifiers](../VS_visualcpp/Microsoft-Specific-Modifiers.md)