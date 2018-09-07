---
title: "String Literals in Primary Expressions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["string literals, in primary expressions"]
ms.assetid: 3ec31278-527b-40d2-8c83-6b09e2d81ca6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# String Literals in Primary Expressions
A "string literal" is a character, wide character, or sequence of adjacent characters enclosed in double quotation marks. Since they are not variables, neither string literals nor any of their elements can be the left-hand operand in an assignment operation. The type of a string literal is an array of `char` (or an array of `wchar_t` for wide-string literals). Arrays in expressions are converted to pointers. See [String Literals](../c-language/c-string-literals.md) for more information about strings.  
  
## See Also  
 [C Primary Expressions](../c-language/c-primary-expressions.md)