---
description: "Learn more about: once pragma"
title: "once pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.once", "once_CPP"]
helpviewer_keywords: ["once pragma", "pragmas, once"]
ms.assetid: c7517556-6403-4b16-8898-f2aa0a6f685f
---
# once pragma

Specifies that the compiler includes the header file only once, when compiling a source code file.

## Syntax

> **#pragma once**

## Remarks

The use of `#pragma once` can reduce build times, as the compiler won't open and read the file again after the first `#include` of the file in the translation unit. It's called the *multiple-include optimization*. It has an effect similar to the *include guard* idiom, which uses preprocessor macro definitions to prevent multiple inclusions of the contents of the file. It also helps to prevent violations of the *one definition rule*, the requirement that all templates, types, functions, and objects have no more than one definition in your code.

For example:

```cpp
// header.h
#pragma once
// Code placed here is included only once per translation unit
```

We recommend the `#pragma once` directive for new code because it doesn't pollute the global namespace with a preprocessor symbol. It requires less typing, is less distracting, and can't cause *symbol collisions*, errors caused when different header files use the same preprocessor symbol as the guard value. It isn't part of the C++ Standard, but it's implemented portably by several common compilers.

There's no advantage to use of both the include guard idiom and `#pragma once` in the same file. The compiler recognizes the include guard idiom, and implements the multiple-include optimization the same way as the `#pragma once` directive if no non-comment code or preprocessor directive comes before or after the standard form of the idiom:

```cpp
// header.h
// Demonstration of the #include guard idiom.
// Note that the defined symbol can be arbitrary.
#ifndef HEADER_H_     // equivalently, #if !defined HEADER_H_
#define HEADER_H_
// Code placed here is included only once per translation unit
#endif // HEADER_H_
```

We recommend the include guard idiom when code must be portable to compilers that don't implement the `#pragma once` directive, to maintain consistency with existing code, or when the multiple-include optimization is impossible. It can occur in complex projects when file system aliasing or aliased include paths prevent the compiler from identifying identical include files by canonical path.

Be careful not to use `#pragma once` or the include guard idiom in header files designed to be included multiple times, that use preprocessor symbols to control their effects. For an example of this design, see the \<assert.h> header file. Also be careful to manage your include paths to avoid creating multiple paths to included files, which can defeat the multiple-include optimization for both include guards and `#pragma once`.

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
