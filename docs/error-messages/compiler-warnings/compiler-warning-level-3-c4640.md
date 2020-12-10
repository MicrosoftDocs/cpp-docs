---
description: "Learn more about: Compiler Warning (level 3) C4640"
title: "Compiler Warning (level 3) C4640"
ms.date: "11/04/2016"
f1_keywords: ["C4640"]
helpviewer_keywords: ["C4640"]
ms.assetid: f76871f6-e436-4c35-9793-d2f22f7e1c7f
---
# Compiler Warning (level 3) C4640

'instance' : construction of local static object is not thread-safe

A static instance of an object is not thread safe.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4640:

```cpp
// C4640.cpp
// compile with: /W3
#pragma warning(default:4640)

class X {
public:
   X() {
   }
};

void f() {
   static X aX;   // C4640
}

int main() {
   f();
}
```
