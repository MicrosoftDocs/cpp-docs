---
description: "Learn more about: Compiler Error C2603"
title: "Compiler Error C2603"
ms.date: "11/04/2016"
f1_keywords: ["C2603"]
helpviewer_keywords: ["C2603"]
ms.assetid: 9ca520d0-f082-4b65-933d-17c3bcf8b02c
---
# Compiler Error C2603

> '*function*' : Too many block scope static objects with constructor/destructors in function

In versions of the Microsoft C++ compiler before Visual Studio 2015, or when the [/Zc:threadSafeInit-](../../build/reference/zc-threadsafeinit-thread-safe-local-static-initialization.md) compiler option is specified, there is a limit of 31 on the number of static objects you can have in an externally visible inline function.

To resolve this issue, we recommend you adopt more recent version of the Microsoft C++ compiler toolset, or if possible, remove the /Zc:threadSafeInit- compiler option. If this is not possible, consider combining your static objects. If the objects are of the same type, consider use of a single static array of that type, and reference individual members as required.

## Example

The following code generates C2603 and shows one way to fix it:

```cpp
// C2603.cpp
// Compile by using: cl /W4 /c /Zc:threadSafeInit- C2603.cpp
struct C { C() {} };
extern inline void f1() {
    static C C01, C02, C03, C04, C05, C06, C07, C08, C09, C10;
    static C C11, C12, C13, C14, C15, C16, C17, C18, C19, C20;
    static C C21, C22, C23, C24, C25, C26, C27, C28, C29, C30, C31;
    static C C32;   // C2603 Comment this line out to avoid error
}
```
