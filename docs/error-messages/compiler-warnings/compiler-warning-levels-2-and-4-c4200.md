---
description: "Learn more about: Compiler Warning (level 2 and level 4) C4200"
title: "Compiler Warning (level 2 and level 4) C4200"
ms.date: "11/04/2016"
f1_keywords: ["C4200"]
helpviewer_keywords: ["C4200"]
---
# Compiler Warning (level 2 and level 4) C4200

> nonstandard extension used: zero-sized array in struct/union

C++ only:
> This member will be ignored by a defaulted constructor or copy/move assignment operator

## Remarks

This warning indicates that a structure or union contains an array that has zero size. Declaration of a zero-sized array is a nonstandard compiler extension. This causes a Level-2 warning when a C++ file is compiled and a Level-4 warning when a C file is compiled.

## Example

This example generates warning C4200:

```cpp
// C4200.cpp
// compile by using: cl /W4 c4200.cpp
struct A {
    int len;
    int a[0];  // C4200
};
```

This nonstandard extension is often used to interface code with external data structures that have a variable length. If this scenario applies to your code, you can disable the warning:

```cpp
// C4200b.cpp
// compile by using: cl /W4 c4200a.cpp
#pragma warning(disable : 4200)
struct A {
    int len;
    int a[0];
};
```
