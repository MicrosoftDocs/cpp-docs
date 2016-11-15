---
title: "C Function Definitions | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "function declarators"
  - "function definitions"
  - "declaring functions, about function declarations"
  - "declaring functions, declarators"
  - "functions [C], parameters"
  - "declarators, functions"
  - "function parameters, function definitions"
  - "function body"
  - "declaring functions, variables"
ms.assetid: ebab23c8-6eb8-46f3-b21d-570cd8457a80
caps.latest.revision: 10
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
# C Function Definitions
A function definition specifies the name of the function, the types and number of parameters it expects to receive, and its return type. A function definition also includes a function body with the declarations of its local variables, and the statements that determine what the function does.  
  
## Syntax  
 *translation-unit*:  
 *external-declaration*  
  
 *translation-unit external-declaration*  
  
 *external-declaration*: /\* Allowed only at external (file) scope \*/  
 *function-definition*  
  
 `declaration`  
  
 *function-definition*: /\* Declarator here is the function declarator \*/  
 *declaration-specifiers* opt*attribute-seq* opt*declarator declaration-list* opt*compound-statement*  
  
 /\* *attribute-seq* is Microsoft Specific */  
  
 Prototype parameters are:  
  
 *declaration-specifiers*:  
 *storage-class-specifier declaration-specifiers* opt  
  
 *type-specifier declaration-specifiers* opt  
  
 *type-qualifier declaration-specifiers* opt  
  
 *declaration-list*:  
 *declaration*  
  
 *declaration-list declaration*  
  
 `declarator`:  
 *pointer* opt*direct-declarator*  
  
 *direct-declarator*: /\* A function declarator \*/  
 *direct-declarator*  **(**  *parameter-type-list*  **)** /* New-style declarator \*/  
  
 *direct-declarator*  **(**  *identifier-list* opt**)** /* Obsolete-style declarator \*/  
  
 The parameter list in a definition uses this syntax:  
  
 *parameter-type-list*: /\* The parameter list \*/  
 *parameter-list*  
  
 *parameter-list* **, ...**  
  
 *parameter-list*:  
 *parameter-declaration*  
  
 *parameter-list* **,**  *parameter-declaration*  
  
 *parameter-declaration*:  
 *declaration-specifiers declarator*  
  
 *declaration-specifiers abstract declarator* opt  
  
 The parameter list in an old-style function definition uses this syntax:  
  
 *identifier-list*: /\* Used in obsolete-style function definitions and declarations \*/  
 *identifier*  
  
 *identifier-list* **,**  *identifier*  
  
 The syntax for the function body is:  
  
 *compound-statement*: /\* The function body \*/  
 **{**  `declaration`-*list* opt*statement-list* opt**}**  
  
 The only storage-class specifiers that can modify a function declaration are `extern` and **static**. The `extern` specifier signifies that the function can be referenced from other files; that is, the function name is exported to the linker. The **static** specifier signifies that the function cannot be referenced from other files; that is, the name is not exported by the linker. If no storage class appears in a function definition, `extern` is assumed. In any case, the function is always visible from the definition point to the end of the file.  
  
 The optional *declaration-specifiers* and mandatory `declarator` together specify the function's return type and name. The `declarator` is a combination of the identifier that names the function and the parentheses following the function name. The optional *attribute-seq* nonterminal is a Microsoft-specific feature defined in [Function Attributes](../c-language/function-attributes.md).  
  
 The *direct-declarator* (in the `declarator` syntax) specifies the name of the function being defined and the identifiers of its parameters. If the *direct-declarator* includes a *parameter-type-list*, the list specifies the types of all the parameters. Such a declarator also serves as a function prototype for later calls to the function.  
  
 A `declaration` in the *declaration-list* in function definitions cannot contain a *storage-class-specifier* other than **register**. The *type-specifier* in the *declaration-specifiers* syntax can be omitted only if the **register** storage class is specified for a value of `int` type.  
  
 The *compound-statement* is the function body containing local variable declarations, references to externally declared items, and statements.  
  
 The sections [Function Attributes](../c-language/function-attributes.md), [Storage Class](../c-language/storage-class.md), [Return Type](../c-language/return-type.md), [Parameters](../c-language/parameters.md), and [Function Body](../c-language/function-body.md) describe the components of the function definition in detail.  
  
## See Also  
 [Functions](../c-language/functions-c.md)