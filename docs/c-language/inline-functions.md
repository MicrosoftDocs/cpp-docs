---
title: "Inline Functions | Microsoft Docs"
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
  - "fast code"
  - "inline functions, __inline keyword"
  - "functions [C++], inline functions"
ms.assetid: 00f4b2ff-8ad0-4165-9f4c-2ef157d03f31
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
# Inline Functions
**Microsoft Specific**  
  
 The `__inline` keyword tells the compiler to substitute the code within the function definition for every instance of a function call. However, substitution occurs only at the compiler's discretion. For example, the compiler does not inline a function if its address is taken or if it is too large to inline.  
  
 For a function to be considered as a candidate for inlining, it must use the new-style function definition.  
  
 Use this form to specify an inline function:  
  
 `__inline` *type*opt*function-definition*`;`  
  
 The use of inline functions generates faster code and can sometimes generate smaller code than the equivalent function call generates for the following reasons:  
  
-   It saves the time required to execute function calls.  
  
-   Small inline functions, perhaps three lines or less, create less code than the equivalent function call because the compiler doesn't generate code to handle arguments and a return value.  
  
-   Functions generated inline are subject to code optimizations not available to normal functions because the compiler does not perform interprocedural optimizations.  
  
 Functions using `__inline` should not be confused with inline assembler code. See [Inline Assembler](../c-language/inline-assembler-c.md) for more information.  
  
 **END Microsoft Specific**  
  
## See Also  
 [inline, __inline, \__forceinline](../cpp/inline-functions-cpp.md)

