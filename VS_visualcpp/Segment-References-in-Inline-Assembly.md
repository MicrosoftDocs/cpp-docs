---
title: "Segment References in Inline Assembly"
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
ms.assetid: c63e6bb4-49d9-4fa1-bb22-eea21b5cbc0f
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
# Segment References in Inline Assembly
## Microsoft Specific  
 You must refer to segments by register rather than by name (the segment name `_TEXT` is invalid, for instance). Segment overrides must use the register explicitly, as in ES:[BX].  
  
 **END Microsoft Specific**  
  
## See Also  
 [Using Assembly Language in __asm Blocks](../VS_visualcpp/Using-Assembly-Language-in-__asm-Blocks.md)