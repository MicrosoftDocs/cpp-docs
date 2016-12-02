---
title: "auto Keyword | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "auto"
  - "auto_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "automatic storage class, auto keyword"
  - "auto keyword"
ms.assetid: 744a41c0-2510-4140-a1be-96257e722908
caps.latest.revision: 14
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
# auto Keyword
The `auto` keyword is a declaration specifier. However, the C++ standard defines an original and a revised meaning for this keyword. Before [!INCLUDE[cpp_dev10_long](../build/includes/cpp_dev10_long_md.md)], the `auto` keyword declares a variable in the *automatic* storage class; that is, a variable that has a local lifetime. Starting with [!INCLUDE[cpp_dev10_long](../build/includes/cpp_dev10_long_md.md)], the`auto` keyword declares a variable whose type is deduced from the initialization expression in its declaration. The [/Zc:auto&#91;-&#93;](../build/reference/zc-auto-deduce-variable-type.md) compiler option controls the meaning of the `auto` keyword.  
  
## Syntax  
  
```cpp  
auto declarator ;  
auto declarator initializer;  
```  
  
## Remarks  
 The definition of the `auto` keyword changes in the C++ programming language, but not in the C programming language.  
  
 The following topics describe the `auto` keyword and the corresponding compiler option:  
  
-   [auto](../cpp/auto-cpp.md) describes the new definition of the `auto` keyword.  
  
  
-   [/Zc:auto (Deduce Variable Type)](../build/reference/zc-auto-deduce-variable-type.md) describes the compiler option that tells the compiler which definition of the `auto` keyword to use.  
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)