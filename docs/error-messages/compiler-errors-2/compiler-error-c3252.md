---
title: "Compiler Error C3252"
description: "Learn more about: Compiler Error C3252"
ms.date: 11/04/2016
f1_keywords: ["C3252"]
helpviewer_keywords: ["C3252"]
---
# Compiler Error C3252

> 'method' : cannot reduce accessibility of a virtual method in a managed or WinRT type

## Remarks

A class that implements a virtual method from a base class or any method from an interface cannot reduce the access of that method.

Note that all methods in an interface are public.

## Example

The following example generates C3252 and shows how to fix it:

```cpp
// C3252.cpp
// compile with: /clr /c
ref class A {
public:
   virtual void f1() {}
};

ref class B : public A {
// To fix, uncomment the following line:
// public:
   virtual void f1() override sealed {}   // C3252, make this method public
};
```
