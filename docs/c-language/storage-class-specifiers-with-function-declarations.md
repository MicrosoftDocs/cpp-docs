---
title: "Storage-Class Specifiers with Function Declarations | Microsoft Docs"
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
  - "function specifiers, storage class"
  - "declaring functions, specifiers"
  - "external declarations"
  - "specifiers, function"
  - "external linkage, function declarations"
  - "external linkage, storage-class specifiers"
ms.assetid: 801d7df2-efa9-4924-a725-274a5654cfd4
caps.latest.revision: 7
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
# Storage-Class Specifiers with Function Declarations
You can use either the **static** or the `extern` storage-class specifier in function declarations. Functions always have global lifetimes.  
  
 **Microsoft Specific**  
  
 Function declarations at the internal level have the same meaning as function declarations at the external level. This means that a function is visible from its point of declaration throughout the rest of the translation unit even if it is declared at local scope.  
  
 **END Microsoft Specific**  
  
 The visibility rules for functions vary slightly from the rules for variables, as follows:  
  
-   A function declared to be **static** is visible only within the source file in which it is defined. Functions in the same source file can call the **static** function, but functions in other source files cannot access it directly by name. You can declare another **static** function with the same name in a different source file without conflict.  
  
-   Functions declared as `extern` are visible throughout all source files in the program (unless you later redeclare such a function as **static**). Any function can call an `extern` function.  
  
-   Function declarations that omit the storage-class specifier are `extern` by default.  
  
 **Microsoft Specific**  
  
 Microsoft allows redefinition of an `extern` identifier as **static**.  
  
 **END Microsoft Specific**  
  
## See Also  
 [C Storage Classes](../c-language/c-storage-classes.md)