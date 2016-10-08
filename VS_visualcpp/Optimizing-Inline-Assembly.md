---
title: "Optimizing Inline Assembly"
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
ms.assetid: 52a7ec83-9782-4d96-94c1-53bb2ac9e8c8
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
# Optimizing Inline Assembly
## Microsoft Specific  
 The presence of an `__asm` block in a function affects optimization in several ways. First, the compiler doesn't try to optimize the `__asm` block itself. What you write in assembly language is exactly what you get. Second, the presence of an `__asm` block affects register variable storage. The compiler avoids enregistering variables across an `__asm` block if the register's contents would be changed by the `__asm` block. Finally, some other function-wide optimizations will be affected by the inclusion of assembly language in a function.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Inline Assembler](../VS_visualcpp/Inline-Assembler.md)