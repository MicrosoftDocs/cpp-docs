---
description: "Learn more about: Compiler Error C2892"
title: "Compiler Error C2892"
ms.date: "11/04/2016"
f1_keywords: ["C2892"]
helpviewer_keywords: ["C2892"]
ms.assetid: c22a5084-2f50-42c2-a56b-6dfe5442edc9
---
# Compiler Error C2892

local class shall not have member templates

Templated member functions are not valid in a class that is defined in a function.

The following sample generates C2892:

```cpp
// C2892.cpp
int main() {
   struct local {
      template<class T>   // C2892
      void f() {}
   };
}
```
