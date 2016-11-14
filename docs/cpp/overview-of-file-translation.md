---
title: "Overview of File Translation | Microsoft Docs"
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
  - "file translation [C++], about file translation"
  - "translation [C++]"
  - "translation phases"
  - "files [C++], translation"
  - "programs [C++], lexical conventions of"
  - "preprocessing translation phase"
ms.assetid: 5036c7b7-ccff-4e2c-b052-a9ea6c71af87
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
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
# Overview of File Translation
C++ programs, like C programs, consist of one or more files. Each of these files is translated in the following conceptual order (the actual order follows the "as if" rule: translation must occur as if these steps had been followed):  
  
1.  Lexical tokenizing. Character mapping and trigraph processing, line splicing, and tokenizing are performed in this translation phase.  
  
2.  Preprocessing. This translation phase brings in ancillary source files referenced by `#include` directives, handles "stringizing" and "charizing" directives, and performs token pasting and macro expansion (see [Preprocessor Directives](../preprocessor/preprocessor-directives.md) in the *Preprocessor Reference* for more information). The result of the preprocessing phase is a sequence of tokens that, taken together, define a "translation unit."  
  
     Preprocessor directives always begin with the number-sign (**#**) character (that is, the first nonwhite-space character on the line must be a number sign). Only one preprocessor directive can appear on a given line. For example:  
  
    ```  
    #include <iostream>  // Include text of iostream in   
                         //  translation unit.  
    #define NDEBUG       // Define NDEBUG (NDEBUG contains empty   
                         //  text string).  
    ```  
  
3.  Code generation. This translation phase uses the tokens generated in the preprocessing phase to generate object code.  
  
     During this phase, syntactic and semantic checking of the source code is performed.  
  
 See [Phases of Translation](../preprocessor/phases-of-translation.md) in the *Preprocessor Reference* for more information.  
  
 The C++ preprocessor is a strict superset of the ANSI C preprocessor, but the C++ preprocessor differs in a few instances. The following list describes several differences between the ANSI C and the C++ preprocessors:  
  
-   Single-line comments are supported. See [Comments](../cpp/comments-cpp.md) for more information.  
  
-   One predefined macro, **__cplusplus**, is defined only for C++. See [Predefined Macros](../preprocessor/predefined-macros.md) in the *Preprocessor Reference* for more information.  
  
-   The C preprocessor does not recognize the C++ operators: **.\***, **–>\***, and `::`. See [Operators](../cpp/cpp-built-in-operators-precedence-and-associativity.md) and [Expressions](../cpp/expressions-cpp.md), for more information about operators.  
  
## See Also  
 [Lexical Conventions](../cpp/lexical-conventions.md)