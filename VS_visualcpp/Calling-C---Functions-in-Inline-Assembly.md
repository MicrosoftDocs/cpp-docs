---
title: "Calling C++ Functions in Inline Assembly"
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
ms.assetid: 1f0d1eb3-54cf-45d5-838d-958188616b38
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
# Calling C++ Functions in Inline Assembly
## Microsoft Specific  
 An `__asm` block can call only global C++ functions that are not overloaded. If you call an overloaded global C++ function or a C++ member function, the compiler issues an error.  
  
 You can also call any functions declared with **extern "C"** linkage. This allows an `__asm` block within a C++ program to call the C library functions, because all the standard header files declare the library functions to have **extern "C"** linkage.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Inline Assembler](../VS_visualcpp/Inline-Assembler.md)