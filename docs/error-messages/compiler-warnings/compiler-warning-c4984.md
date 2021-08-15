---
description: "Learn more about: Compiler Warning C4984"
title: "Compiler Warning C4984"
ms.date: "08/19/2019"
f1_keywords: ["C4984"]
helpviewer_keywords: ["C4984"]
---
# Compiler Warning C4984

> 'if constexpr' is a C++17 language extension

## Remarks

The compiler found an `if constexpr` expression in code compiled by using the default C++14 standard. This expression is specified starting in the C++17 standard. If you require C++11 or C++14 compatibility, this expression isn't portable.

C4984 is issued as an error by default, but it's suppressible. To enable this expression by compiling your code as C++17, use [/std:c++17 or /std:c++latest](../../build/reference/std-specify-language-standard-version.md). To use the `if constexpr` expression in code compiled for C++14 as a Microsoft extension, you can suppress, disable, or change the warning level of the error message. You can use [/wd4984](../../build/reference/compiler-option-warning-level.md) to disable C4984, or __/w__*N*__4984__ to enable it as a level *N* warning instead of an error. Or, use [#pragma warning(suppress:4984)](../../preprocessor/warning.md) before the line that causes the warning in your source file.

This warning is available starting in Visual Studio 2017 version 15.3. For information on how to disable warnings introduced in a particular compiler version or later, see [Compiler Warnings by compiler version](compiler-warnings-by-compiler-version.md).

## Example

This sample generates C4984, and shows ways to fix it:

```cpp
// C4984.cpp
// compile with: cl /EHsc C4984.cpp
#include <iostream>

int main()
{
    constexpr bool compile_time = true;
    // Uncomment the following line or use /std:c++17 to fix
    // #pragma warning(suppress:4984)
    if constexpr (compile_time)
    {
        std::cout << "compile_time is true";
    }
    else
    {
        std::cout << "compile_time is false";
    }
}
```
