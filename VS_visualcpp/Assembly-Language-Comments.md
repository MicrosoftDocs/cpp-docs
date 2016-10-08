---
title: "Assembly-Language Comments"
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
ms.assetid: 0dc10850-77f5-426e-9dab-185ea28e06e4
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
# Assembly-Language Comments
## Microsoft Specific  
 Instructions in an `__asm` block can use assembly-language comments:  
  
```  
__asm mov ax, offset buff ; Load address of buff  
```  
  
 Because C macros expand into a single logical line, avoid using assembly-language comments in macros. (See [Defining __asm Blocks as C Macros](../VS_visualcpp/Defining-__asm-Blocks-as-C-Macros.md).) An `__asm` block can also contain C-style comments; for more information, see [Using C or C++ in __asm Blocks](../VS_visualcpp/Using-C-or-C---in-__asm-Blocks.md).  
  
 **END Microsoft Specific**  
  
## See Also  
 [Using Assembly Language in __asm Blocks](../VS_visualcpp/Using-Assembly-Language-in-__asm-Blocks.md)