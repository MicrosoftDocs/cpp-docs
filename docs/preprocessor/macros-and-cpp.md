---
title: "Macros and C++ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["macros, C++", "macros"]
ms.assetid: 83a344c1-73c9-4ace-8b93-cccfb62c6133
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Macros and C++
C++ offers new capabilities, some of which supplant those offered by the ANSI C preprocessor. These new capabilities enhance the type safety and predictability of the language:  

- In C++, objects declared as **const** can be used in constant expressions. This allows programs to declare constants that have type and value information, and enumerations that can be viewed symbolically with the debugger. Using the preprocessor `#define` directive to define constants is not as precise. No storage is allocated for a **const** object unless an expression that takes its address is found in the program.  

- The C++ inline function capability supplants function-type macros. The advantages of using inline functions over macros are:  
  
    - Type safety. Inline functions are subject to the same type checking as normal functions. Macros are not type safe.  
  
    - Correct handling of arguments that have side effects. Inline functions evaluate the expressions supplied as arguments prior to entering the function body. Therefore, there is no chance that an expression with side effects will be unsafe.  

For more information on inline functions, see [inline, __inline, \__forceinline](../cpp/inline-functions-cpp.md).  

For backward compatibility, all preprocessor facilities that existed in ANSI C and in earlier C++ specifications are preserved for Microsoft C++.  

## See Also  

[Predefined Macros](../preprocessor/predefined-macros.md)<br/>
[Macros (C/C++)](../preprocessor/macros-c-cpp.md)