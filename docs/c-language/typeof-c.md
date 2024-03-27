---
title: "typeof, __typeof__ (C23)"
description: "Describes Microsoft Visual C23 typeof operator"
ms.date: 02/06/2024
helpviewer_keywords: ["typeof keyword [C]", "__typeof__ keyword [C]"]
---
# `typeof`, `__typeof__` (C23)

New in the C23 standard, the **`typeof`** operator is a unary operator that returns the type of an expression. It can be used in type declarations, type casts, type checks, and so on. It gets the type of a variable, function, or any C expression.

The **`__typeof__`** keyword is a Microsoft-specific extension that provides the same functionality as **`typeof`**. The `__typeof__` keyword differs from `typeof` only in that it's available when compiling for all versions of C (not just `/std:clatest`), and it may ease porting code between other compilers that support `__typeof__`.

### `typeof` syntax

```c
typeof(type)
typeof(constant-expression)
__typeof__(constant-expression)
```

### `typeof` example

This example uses `typeof()`, but the behavior is the same if you use `__typeof__`.

```c
// Compile with /std:clatest

#include <stdio.h>

double func()
{
    3.14;
}

#define POINTER(T) typeof(T*)

int main()
{
    auto a = func(); // the type for a (double) is inferred, but requires initialization at point of declaration
    typeof(func()) b; // the type for b is double, but didn't have to be initialized at point of declaration

    // Some declarations using typeof
    POINTER(int) p1 = NULL; // p1 is int*

    typeof(double(void))* pFunc = func; // pFunc is a pointer to a function that takes no arguments and returns a double
    printf("pFunc() returns %f\n", pFunc());

    return 0;
}
```

## Requirements

Requires Visual Studio 17.9 or later, or `cl.exe` version 19.39.33428 or later.
To use `typeof`, compile with [`/std:clatest`](../build/reference/std-specify-language-standard-version.md).

## See also

[`/std` (Specify Language Standard Version)](../build/reference/std-specify-language-standard-version.md)
