---
description: "Learn more about: Macros and C++"
title: "Macros and C++"
ms.date: "08/29/2019"
helpviewer_keywords: ["macros, C++", "macros"]
ms.assetid: 83a344c1-73c9-4ace-8b93-cccfb62c6133
---
# Macros and C++

C++ offers new capabilities, some of which supplant the ones offered by the ANSI C preprocessor. These new capabilities enhance the type safety and predictability of the language:

- In C++, objects declared as **`const`** can be used in constant expressions. It allows programs to declare constants that have type and value information. They can declare enumerations that can be viewed symbolically with the debugger. When you use the preprocessor `#define` directive to define constants, it's not as precise, and not type-safe. No storage is allocated for a **`const`** object, unless the program contains an expression that takes its address.

- The C++ inline function capability supplants function-type macros. The advantages of using inline functions over macros are:

  - Type safety. Inline functions are subject to the same type checking as normal functions. Macros aren't type-safe.

  - Correct handling of arguments that have side effects. Inline functions evaluate the expressions supplied as arguments before the function body is entered. Therefore, there's no chance that an expression with side effects will be unsafe.

For more information on inline functions, see [inline, __inline, \__forceinline](../cpp/inline-functions-cpp.md).

For backward compatibility, all preprocessor facilities that existed in ANSI C and in earlier C++ specifications are preserved for Microsoft C++.

## See also

[Predefined macros](../preprocessor/predefined-macros.md)\
[Macros (C/C++)](../preprocessor/macros-c-cpp.md)
