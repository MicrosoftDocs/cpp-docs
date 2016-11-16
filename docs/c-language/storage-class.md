---
title: "Storage Class | Microsoft Docs"
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
  - "linkage [C++], external"
  - "function storage class"
  - "function specifiers, storage class"
  - "storage classes"
  - "Microsoft-specific storage classes"
  - "external linkage, storage-class specifiers"
  - "static storage class specifiers"
ms.assetid: 39a79ba6-edf5-42b6-8e45-f94227603dd6
caps.latest.revision: 8
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
# Storage Class
The storage-class specifier in a function definition gives the function either `extern` or **static** storage class.  
  
## Syntax  
 *function-definition*:  
 *declaration-specifiers* opt*attribute-seq* opt*declarator declaration-list* opt*compound-statement*  
  
 /\* *attribute-seq* is Microsoft Specific */  
  
 *declaration-specifiers*:  
 *storage-class-specifier declaration-specifiers* opt  
  
 *type-specifier declaration-specifiers* opt  
  
 *type-qualifier declaration-specifiers* opt  
  
 *storage-class-specifier*: /\* For function definitions \*/  
 **extern**  
  
 **static**  
  
 If a function definition does not include a *storage-class-specifier*, the storage class defaults to `extern`. You can explicitly declare a function as `extern`, but it is not required.  
  
 If the declaration of a function contains the *storage-class-specifier* `extern`, the identifier has the same linkage as any visible declaration of the identifier with file scope. If there is no visible declaration with file scope, the identifier has external linkage. If an identifier has file scope and no *storage-class-specifier*, the identifier has external linkage. External linkage means that each instance of the identifier denotes the same object or function. See [Lifetime, Scope, Visibility, and Linkage](../c-language/lifetime-scope-visibility-and-linkage.md) for more information about linkage and file scope.  
  
 Block-scope function declarations with a storage-class specifier other than `extern` generate errors.  
  
 A function with **static** storage class is visible only in the source file in which it is defined. All other functions, whether they are given `extern` storage class explicitly or implicitly, are visible throughout all source files in the program. If **static** storage class is desired, it must be declared on the first occurrence of a declaration (if any) of the function, and on the definition of the function.  
  
 **Microsoft Specific**  
  
 When the Microsoft extensions are enabled, a function originally declared without a storage class (or with `extern` storage class) is given **static** storage class if the function definition is in the same source file and if the definition explicitly specifies **static** storage class.  
  
 When compiling with the /Ze compiler option, functions declared within a block using the `extern` keyword have global visibility. This is not true when compiling with /Za. This feature should not be relied upon if portability of source code is a consideration.  
  
 **END Microsoft Specific**  
  
## See Also  
 [C Function Definitions](../c-language/c-function-definitions.md)