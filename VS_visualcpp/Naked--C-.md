---
title: "Naked (C)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 23b1209b-93ba-46ad-a60f-2327c1933eaf
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
# Naked (C)
**Microsoft Specific**  
  
 The naked storage-class attribute is a Microsoft-specific extension to the C language. The compiler generates code without prolog and epilog code for functions declared with the naked storage-class attribute. Naked functions are useful when you need to write your own prolog/epilog code sequences using inline assembler code. Naked functions are useful for writing virtual device drivers.  
  
 For specific information about using the naked attribute, see [Naked Functions](../VS_visualcpp/Naked-Functions.md).  
  
 **END Microsoft Specific**  
  
## See Also  
 [C Extended Storage-Class Attributes](../VS_visualcpp/C-Extended-Storage-Class-Attributes.md)