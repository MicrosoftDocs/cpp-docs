---
description: "Learn more about: Variadic macros"
title: "Variadic macros"
ms.date: "10/17/2019"
helpviewer_keywords: ["variadic macros [C++]", "__VA_ARGS__ variadic macro specifier"]
ms.assetid: 51e757dc-0134-4bb2-bb74-64ea5ad75134
---
# Variadic macros

Variadic macros are function-like macros that contain a variable number of arguments.

## Remarks

To use variadic macros, the ellipsis may be specified as the final formal argument in a macro definition, and the replacement identifier `__VA_ARGS__` may be used in the definition to insert the extra arguments.  `__VA_ARGS__` is replaced by all of the arguments that match the ellipsis, including commas between them.

The C Standard specifies that at least one argument must be passed to the ellipsis to ensure the macro doesn't resolve to an expression with a trailing comma. The traditional Microsoft C++ implementation suppresses a trailing comma if no arguments are passed to the ellipsis. When the [`/Zc:preprocessor`](../build/reference/zc-preprocessor.md) compiler option is set, the trailing comma isn't suppressed.

## Example

```cpp
// variadic_macros.cpp
#include <stdio.h>
#define EMPTY

#define CHECK1(x, ...) if (!(x)) { printf(__VA_ARGS__); }
#define CHECK2(x, ...) if ((x)) { printf(__VA_ARGS__); }
#define CHECK3(...) { printf(__VA_ARGS__); }
#define MACRO(s, ...) printf(s, __VA_ARGS__)

int main() {
    CHECK1(0, "here %s %s %s", "are", "some", "varargs1(1)\n");
    CHECK1(1, "here %s %s %s", "are", "some", "varargs1(2)\n");   // won't print

    CHECK2(0, "here %s %s %s", "are", "some", "varargs2(3)\n");   // won't print
    CHECK2(1, "here %s %s %s", "are", "some", "varargs2(4)\n");

    // always invokes printf in the macro
    CHECK3("here %s %s %s", "are", "some", "varargs3(5)\n");

    MACRO("hello, world\n");

    MACRO("error\n", EMPTY); // would cause error C2059, except VC++
                             // suppresses the trailing comma
}
```

```Output
here are some varargs1(1)
here are some varargs2(4)
here are some varargs3(5)
hello, world
error
```

## See also

[Macros (C/C++)](../preprocessor/macros-c-cpp.md)
