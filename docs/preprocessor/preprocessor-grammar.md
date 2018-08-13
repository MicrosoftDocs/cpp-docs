---
title: "Preprocessor Grammar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["preprocessor", "grammar, preprocessor", "preprocessor, grammar"]
ms.assetid: 6cd33fad-0b08-4592-9be8-7359c43e24e9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Preprocessor Grammar
**#define**  *identifier* *token-string*opt  
  
*#* **define**  *identifier*[**(** *identifier*opt**,** *...* **,** *identifier*opt **)**] *token-string*opt  
  
**defined(**  *identifier* **)**  
  
**defined**  *identifier*  
  
`#include` **"***path-spec***"**  
  
`#include` **\<***path-spec***>**  
  
**#line**  *digit-sequence*  **"** *filename* **"**opt  
  
*#* **undef**  *identifier*  
  
**#error**  *token-string*  
  
**#pragma**  *token-string*  
  
*conditional* :  
*if-part elif-parts*opt*else-part*opt*endif-line*  
  
*if-part* :  
*if-linetext*  
  
*if-line* :  
**#if**  *constant-expression*  
  
**#ifdef**  *identifier*  
  
**#ifndef**  *identifier*  
  
*elif-parts* :  
*elif-line text*  
  
*elif-parts elif-line text*  
  
*elif-line* :  
**#elif**  *constant-expression*  
  
*else-part* :  
*else-linetext*  
  
*else-line* :  
`#else`  
  
*endif-line* :  
`#endif`  
  
*digit-sequence* :  
*digit*  
  
*digit-sequence digit*  
  
*digit* : one of  
**0 1 2 3 4 5 6 7 8 9**  
  
*token-string* :  
String of tokens  
  
*token* :  
*keyword*  
  
*identifier*  
  
*constant*  
  
*operator*  
  
`punctuator`  
  
*filename* :  
Legal operating system filename  
  
*path-spec* :  
Legal file path  
  
*text* :  
Any sequence of text  
  
> [!NOTE]
> The following nonterminals are expanded in the [Lexical Conventions](../cpp/lexical-conventions.md) section of the *C++ Language Reference*: `constant`, `constant`-*expression*, *identifier*, *keyword*, `operator`, and `punctuator`.  
  
## See Also  
 
[Grammar Summary (C/C++)](../preprocessor/grammar-summary-c-cpp.md)