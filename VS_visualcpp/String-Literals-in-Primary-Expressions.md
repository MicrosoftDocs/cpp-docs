---
title: "String Literals in Primary Expressions"
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
ms.assetid: 3ec31278-527b-40d2-8c83-6b09e2d81ca6
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
# String Literals in Primary Expressions
A "string literal" is a character, wide character, or sequence of adjacent characters enclosed in double quotation marks. Since they are not variables, neither string literals nor any of their elements can be the left-hand operand in an assignment operation. The type of a string literal is an array of `char` (or an array of `wchar_t` for wide-string literals). Arrays in expressions are converted to pointers. See [String Literals](../VS_visualcpp/C-String-Literals.md) for more information about strings.  
  
## See Also  
 [C Primary Expressions](../VS_visualcpp/C-Primary-Expressions.md)