---
title: "push_macro"
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
ms.assetid: ac89efc9-afd1-4dfe-bfd1-497229b3e81d
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
# push_macro
Saves the value of the *macro_name* macro on the top of the stack for this macro.  
  
## Syntax  
  
```  
  
#pragma push_macro("  
macro_name  
")  
  
```  
  
## Remarks  
 You can retrieve the value for *macro_name* with **pop_macro**.  
  
 See [pop_macro](../VS_visualcpp/pop_macro.md) for a sample.  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../VS_visualcpp/Pragma-Directives-and-the-__Pragma-Keyword.md)