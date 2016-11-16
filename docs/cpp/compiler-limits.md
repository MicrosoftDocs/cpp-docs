---
title: "Compiler Limits | Microsoft Docs"
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
  - "cl.exe compiler, limits for language constructs"
ms.assetid: f1fa59c6-55b4-414b-80c5-3df72952160d
caps.latest.revision: 9
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
# Compiler Limits
The C++ standard recommends limits for various language constructs. The following is a list of cases where the Visual C++ compiler does not implement the recommended limits. The first number is the limit that is established in the ISO C++ 11 standard (INCITS/ISO/IEC 14882-2011[2012], Annex B) and the second number is the limit implemented by Visual C++:  
  
-   Nesting levels of compound statements, iteration control structures, and selection control structures [C++ standard: 256] (Visual C++ compiler: depends on the combination of statements that are nested, but generally between 100 and 110).  
  
-   Parameters in one macro definition [C++ standard: 256] (Visual C++ compiler: 127).  
  
-   Arguments in one macro invocation [C++ standard: 256] (Visual C++ compiler 127).  
  
-   Characters in a character string literal or wide string literal (after concatenation) [C++ standard: 65536] (Visual C++ compiler: 65535 single-byte characters, including the `null` terminator, and 32767 double-byte characters, including the `null` terminator).  
  
-   Levels of nested class, structure, or union definitions in a single `struct-declaration-list` [C++ standard: 256] (Visual C++ compiler: 16).  
  
-   Member initializers in a constructor definition [C++ standard: 6144] (Visual C++ compiler: at least 6144).  
  
-   Scope qualifications of one identifier [C++ standard: 256] (Visual C++ compiler: 127).  
  
-   Nested `extern` specifications [C++ standard: 1024] (Visual C++ compiler: 9 (not counting the implicit `extern` specification in global scope, or 10, if you count the implicit `extern` specification in global scope.).  
  
-   Template arguments in a template declaration [C++ standard: 1024] (Visual C++ compiler: 2046).  
  
## See Also  
 [Nonstandard Behavior](../cpp/nonstandard-behavior.md)