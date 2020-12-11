---
description: "Learn more about: Compiler Error C2929"
title: "Compiler Error C2929"
ms.date: "11/04/2016"
f1_keywords: ["C2929"]
helpviewer_keywords: ["C2929"]
ms.assetid: 11134027-6adc-4733-b6bd-b94486bd1933
---
# Compiler Error C2929

'identifier' : explicit instantiation; cannot explicitly force and suppress instantiation of template-class member

You cannot explicitly instantiate an identifier while preventing it from being instantiated.

The following sample generates C2929:

```cpp
// C2929.cpp
// compile with: /c
template<typename T>
class A {
public:
   A() {}
};

template A<int>::A();

extern template A<int>::A();   // C2929
```
