---
title: "Compiler Error C2223"
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
ms.topic: error-reference
ms.assetid: e4506f0f-0317-4a96-8a90-877a156d7939
caps.latest.revision: 6
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
# Compiler Error C2223
left of '->identifier' must point to struct/union  
  
 The operand to the left of `->` is not a pointer to a class, structure, or union.  
  
 This error can be caused by a left operand that is an undefined variable (therefore type `int`).