---
description: "Learn more about: Compiler Warning (level 1) C4537"
title: "Compiler Warning (level 1) C4537"
ms.date: "08/27/2018"
f1_keywords: ["C4537"]
helpviewer_keywords: ["C4537"]
ms.assetid: 9454493c-d419-475e-8f35-9c00233c9329
---
# Compiler Warning (level 1) C4537

> '*object*' : '*operator*' applied to non-UDT type

## Remarks

A reference was passed where an object (user-defined type) was expected. A reference is not an object, but inline assembler code is not able to make the distinction. The compiler generates code as though *object* were an instance.

## Example

The following sample generates C4537 and shows how to fix it:

```cpp
// C4537.cpp
// compile with: /W1 /c
// processor: x86
struct S {
    int member;
};

void f1(S &s) {
    __asm mov eax, s.member;   // C4537
    // try the following code instead
    // or, make the declaration "void f1(S s)"
    /*
    mov eax, s
    mov eax, [eax]s.member
    */
}
```
