---
title: "Makefile Preprocessing Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operators [C++], makefile preprocessing"
  - "EXIST operator"
  - "preprocessing NMAKE makefile operators"
  - "NMAKE program, operators"
  - "DEFINED operator"
  - "makefiles, preprocessing operators"
ms.assetid: a46e4d39-afdb-43c1-ac3b-025d33e6ebdb
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Makefile Preprocessing Operators
Makefile preprocessing expressions can use operators that act on constant values, exit codes from commands, strings, macros, and file-system paths. To evaluate the expression, the preprocessor first expands macros, and then executes commands, and then performs the operations. Operations are evaluated in the order of explicit grouping in parentheses, and then in the order of operator precedence. The result is a constant value.  
  
 The `DEFINED` operator is a logical operator that acts on a macro name. The expression `DEFINED(`*macroname*`)` is true if *macroname* is defined, even if it does not have an assigned value. `DEFINED` in combination with `!IF` or `!ELSE IF` is equivalent to `!IFDEF` or `!ELSE IFDEF`. However, unlike these directives, `DEFINED` can be used in complex expressions.  
  
 The `EXIST` operator is a logical operator that acts on a file-system path. `EXIST(`*path*`)` is true if *path* exists. The result from `EXIST` can be used in binary expressions. If *path* contains spaces, enclose it in double quotation marks.  
  
 To compare two strings, use the equality (`==`) operator or the inequality (`!=`) operator. Enclose strings in double quotation marks.  
  
 Integer constants can use the unary operators for numerical negation (`–`), one's complement (`~`), and logical negation (`!`).  
  
 Expressions can use the following operators. The operators of equal precedence are grouped together, and the groups are listed in decreasing order of precedence. Unary operators associate with the operand to the right. Binary operators of equal precedence associate operands from left to right.  
  
|Operator|Description|  
|--------------|-----------------|  
|`DEFINED(` *macroname* `)`|Produces a logical value for the current definition state of *macroname*.|  
|`EXIST(` *path* `)`|Produces a logical value for the existence of a file at *path*.|  
|||  
|`!`|Unary logical NOT.|  
|`~`|Unary one’s complement.|  
|`-`|Unary negation.|  
|||  
|`*`|Multiplication.|  
|`/`|Division.|  
|`%`|Modulus (remainder).|  
|||  
|`+`|Addition.|  
|`-`|Subtraction.|  
|||  
|`<<`|Bitwise shift left.|  
|`>>`|Bitwise shift right.|  
|||  
|`<=`|Less than or equal.|  
|`>=`|Greater than or equal.|  
|`<`|Less than.|  
|`>`|Greater than.|  
|||  
|`==`|Equality.|  
|`!=`|Inequality.|  
|||  
|`&`|Bitwise AND.|  
|`^`|Bitwise XOR.|  
|`&#124;`|Bitwise OR.|  
|||  
|`&&`|Logical AND.|  
|||  
|`&#124;&#124;`|Logical OR.|  
  
> [!NOTE]
>  The bitwise XOR operator (`^`) is the same as the escape character, and must be escaped (as `^^`) when it is used in an expression.  
  
## See Also  
 [Expressions in Makefile Preprocessing](../build/expressions-in-makefile-preprocessing.md)