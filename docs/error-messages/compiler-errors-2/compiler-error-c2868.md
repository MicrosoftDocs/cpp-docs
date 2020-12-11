---
description: "Learn more about: Compiler Error C2868"
title: "Compiler Error C2868"
ms.date: "11/04/2016"
f1_keywords: ["C2868"]
helpviewer_keywords: ["C2868"]
ms.assetid: 6ff5837b-e66d-44d1-9d17-80af35e08d08
---
# Compiler Error C2868

> '*identifier*' : illegal syntax for using-declaration; expected qualified-name

A [using declaration](../../cpp/using-declaration.md) requires a *qualified name*, a scope-operator (`::`) separated sequence of namespace, class, or enumeration names that ends with the identifier name. A single scope resolution operator may be used to introduce a name from the global namespace.

## Example

The following sample generates C2868 and also shows correct usage:

```cpp
// C2868.cpp
class X {
public:
   int i;
};

class Y : X {
public:
   using X::i;   // OK
};

int main() {
   using X;   // C2868
}
```
