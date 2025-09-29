---
title: "Compiler Error C2890"
description: "Learn more about: Compiler Error C2890"
ms.date: 11/04/2016
f1_keywords: ["C2890"]
helpviewer_keywords: ["C2890"]
---
# Compiler Error C2890

> 'class' : a ref class can only have one non-interface base class

## Remarks

A reference class can only have one base class.

## Example

The following example generates C2890:

```cpp
// C2890.cpp
// compile with: /clr /c
ref class A {};
ref class B {};
ref class C : public A, public B {};   // C2890
ref class D : public A {};   // OK
```
