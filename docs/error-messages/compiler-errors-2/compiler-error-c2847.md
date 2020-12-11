---
description: "Learn more about: Compiler Error C2847"
title: "Compiler Error C2847"
ms.date: "11/04/2016"
f1_keywords: ["C2847"]
helpviewer_keywords: ["C2847"]
ms.assetid: 9ad9a0e0-8b16-49d9-a5be-f8eda2372aa9
---
# Compiler Error C2847

cannot apply sizeof to managed or WinRT type 'class'

The [sizeof](../../cpp/sizeof-operator.md) operator gets the value of an object at compile time. The size of a managed or WinRT class, interface, or value type is dynamic and so cannot be known at compile time.

For example, the following sample generates C2847:

```cpp
// C2847.cpp
// compile with: /clr
ref class A {};

int main() {
   A ^ xA = gcnew A;
   sizeof(*xA);   // C2847 cannot use sizeof on managed object
}
```
