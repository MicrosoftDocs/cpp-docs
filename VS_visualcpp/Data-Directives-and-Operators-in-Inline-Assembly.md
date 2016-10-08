---
title: "Data Directives and Operators in Inline Assembly"
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
ms.assetid: fb7410c7-156a-4131-bcfc-211aa70533e3
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
# Data Directives and Operators in Inline Assembly
## Microsoft Specific  
 Although an `__asm` block can reference C or C++ data types and objects, it cannot define data objects with MASM directives or operators. Specifically, you cannot use the definition directives **DB**, `DW`, **DD**, `DQ`, `DT`, and `DF`, or the operators `DUP` or **THIS**. MASM structures and records are also unavailable. The inline assembler doesn't accept the directives `STRUC`, `RECORD`, **WIDTH**, or **MASK**.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Using Assembly Language in __asm Blocks](../VS_visualcpp/Using-Assembly-Language-in-__asm-Blocks.md)