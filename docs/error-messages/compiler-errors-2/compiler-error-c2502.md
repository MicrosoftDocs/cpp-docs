---
title: "Compiler Error C2502"
description: "Learn more about: Compiler Error C2502"
ms.date: 11/04/2016
f1_keywords: ["C2502"]
helpviewer_keywords: ["C2502"]
---
# Compiler Error C2502

> 'identifier' : too many access modifiers on the base class

## Remarks

The base class has more than one access modifier. Only one access modifier (**`public`**, **`private`**, or **`protected`**) is allowed.

## Example

The following example generates C2502:

```cpp
// C2502.cpp
// compile with: /c
class A { };
class B { };
class C : private public A { };   // C2502

// OK
class D : private A {};
class E : public A, private B {};
```
