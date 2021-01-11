---
description: "Learn more about: Compiler Error C2267"
title: "Compiler Error C2267"
ms.date: "11/04/2016"
f1_keywords: ["C2267"]
helpviewer_keywords: ["C2267"]
ms.assetid: ea63bebb-6208-4367-8440-39be07f9c360
---
# Compiler Error C2267

'function' : static functions with block scope are illegal

A local function is declared **`static`**. Static functions must have global scope.

The following sample generates C2267:

```cpp
// C2267.cpp
static int func2();   // OK
int main() {
    static int func1();   // C2267
}
```
