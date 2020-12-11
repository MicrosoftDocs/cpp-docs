---
description: "Learn more about: Compiler Error C3153"
title: "Compiler Error C3153"
ms.date: "11/04/2016"
f1_keywords: ["C3153"]
helpviewer_keywords: ["C3153"]
ms.assetid: d775d97e-2480-484f-81f1-88406b10f947
---
# Compiler Error C3153

'interface' : you cannot create an instance of an interface

An interface cannot be instantiated. To use the members of an interface, derive a class from the interface, implement the interface members, and then use the members.

The following sample generates C3153:

```cpp
// C3153.cpp
// compile with: /clr
interface class A {
};

int main() {
   A^ a = gcnew A;   // C3153
}
```
