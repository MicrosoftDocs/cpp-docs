---
title: "inline_recursion"
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
ms.assetid: cfef5791-63b7-45ac-9574-623747b9b9c9
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
# inline_recursion
Controls the inline expansion of direct or mutually recursive function calls.  
  
## Syntax  
  
```  
  
#pragma inline_recursion( [{on | off}] )  
```  
  
## Remarks  
 Use this pragma to control functions marked as [inline](../Topic/inline,%20__inline,%20__forceinline.md) and [__inline](../Topic/inline,%20__inline,%20__forceinline.md) or functions that the compiler automatically expands under the /Ob2 option. Use of this pragma requires an [/Ob](../VS_visualcpp/-Ob--Inline-Function-Expansion-.md) compiler option setting of either 1 or 2. The default state for `inline_recursion` is off. This pragma takes effect at the first function call after the pragma is seen and does not affect the definition of the function.  
  
 The `inline_recursion` pragma controls how recursive functions are expanded. If `inline_recursion` is off, and if an inline function calls itself (either directly or indirectly), the function is expanded only one time. If `inline_recursion` is on, the function is expanded multiple times until it reaches the value set with the [inline_depth](../VS_visualcpp/inline_depth.md) pragma, the default value for recursive functions that is defined by the `inline_depth` pragma, or a capacity limit.  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../VS_visualcpp/Pragma-Directives-and-the-__Pragma-Keyword.md)   
 [inline_depth](../VS_visualcpp/inline_depth.md)   
 [/Ob (Inline Function Expansion)](../VS_visualcpp/-Ob--Inline-Function-Expansion-.md)