---
title: "Using an NMAKE Macro"
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
ms.assetid: 95c87fbc-76e6-48c0-8536-9bfe179f328e
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
# Using an NMAKE Macro
To use a macro, enclose its name in parentheses preceded by a dollar sign ($) as follows.  
  
## Syntax  
  
```  
$(macroname)  
```  
  
## Remarks  
 No spaces are allowed. The parentheses are optional if *macroname* is a single character. The definition string replaces $(*macroname*); an undefined macro is replaced by a null string.  
  
## What do you want to know more about?  
 [Macro substitution](../VS_visualcpp/Macro-Substitution.md)  
  
## See Also  
 [Macros and NMAKE](../VS_visualcpp/Macros-and-NMAKE.md)