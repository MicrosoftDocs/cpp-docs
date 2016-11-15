---
title: "Tokens (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tokens"
  - "parsing, C++ tokens"
  - "translation units"
  - "white space, in C++ tokens"
ms.assetid: aa812fd0-6d47-4f3f-aee0-db002ee4d8b9
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Tokens (C++)
A token is the smallest element of a C++ program that is meaningful to the compiler. The C++ parser recognizes these kinds of tokens: identifiers, keywords, literals, operators, punctuators, and other separators. A stream of these tokens makes up a translation unit.  
  
 Tokens are usually separated by *white space*. White space can be one or more:  
  
-   Blanks  
  
-   Horizontal or vertical tabs  
  
-   New lines  
  
-   Formfeeds  
  
-   Comments  
  
 The parser recognizes keywords, identifiers, literals, operators, and punctuators. For information on specific token types, see [Keywords](../cpp/keywords-cpp.md), [Identifiers](../cpp/identifiers-cpp.md), [Numeric, Boolean and Pointer Literals](../cpp/numeric-boolean-and-pointer-literals-cpp.md), [String and Character Literals](../cpp/string-and-character-literals-cpp.md), [User-Defined Literals](../cpp/user-defined-literals-cpp.md), [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md), and [Punctuators](../cpp/punctuators-cpp.md). White space is ignored, except as required to separate tokens.  
  
 Preprocessing tokens are used in the preprocessing phases to generate the token stream passed to the compiler. The preprocessing token categories are header names, identifiers, preprocessing numbers, character literals, string literals, preprocessing operators and punctuators, and single non-white-space characters that do not match one of the other categories. Character and string literals can be user-defined literals. Preprocessing tokens can be separated by white space or comments.  
  
 The parser separates tokens from the input stream by creating the longest token possible using the input characters in a left-to-right scan. Consider this code fragment:  
  
```  
a = i+++j;  
```  
  
 The programmer who wrote the code might have intended either of these two statements:  
  
```  
a = i + (++j)  
  
a = (i++) + j  
```  
  
 Because the parser creates the longest token possible from the input stream, it chooses the second interpretation, making the tokens `i++`, `+`, and `j`.  
  
## See Also  
 [Lexical Conventions](../cpp/lexical-conventions.md)