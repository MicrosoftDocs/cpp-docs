---
title: "Macros and C++ | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
  - "macros, C++"
  - "macros"
ms.assetid: 83a344c1-73c9-4ace-8b93-cccfb62c6133
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Macros and C++
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Macros and C++](https://docs.microsoft.com/cpp/preprocessor/macros-and-cpp).  
  
C++ offers new capabilities, some of which supplant those offered by the ANSI C preprocessor. These new capabilities enhance the type safety and predictability of the language:  
  
-   In C++, objects declared as **const** can be used in constant expressions. This allows programs to declare constants that have type and value information, and enumerations that can be viewed symbolically with the debugger. Using the preprocessor `#define` directive to define constants is not as precise. No storage is allocated for a **const** object unless an expression that takes its address is found in the program.  
  
-   The C++ inline function capability supplants function-type macros. The advantages of using inline functions over macros are:  
  
    -   Type safety. Inline functions are subject to the same type checking as normal functions. Macros are not type safe.  
  
    -   Correct handling of arguments that have side effects. Inline functions evaluate the expressions supplied as arguments prior to entering the function body. Therefore, there is no chance that an expression with side effects will be unsafe.  
  
 For more information on inline functions, see [inline, __inline, \__forceinline](../misc/inline-inline-forceinline.md).  
  
 For backward compatibility, all preprocessor facilities that existed in ANSI C and in earlier C++ specifications are preserved for Microsoft C++.  
  
## See Also  
 [Predefined Macros](../preprocessor/predefined-macros.md)   
 [Macros (C/C++)](../preprocessor/macros-c-cpp.md)



