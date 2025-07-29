---
title: "Compiler Error C2500"
description: "Learn more about: Compiler Error C2500"
ms.date: 11/04/2016
f1_keywords: ["C2500"]
helpviewer_keywords: ["C2500"]
---
# Compiler Error C2500

> 'identifier1' : 'identifier2' is already a direct base class

## Remarks

A class or structure appears more than once in a list of base classes.

A direct base is one mentioned in the base list. An indirect base is a base class of one of the classes in the base list.

A class cannot be specified as a direct base class more than once. A class can be used as an indirect base class more than once.

## Example

The following example generates C2500:

```cpp
// C2500.cpp
// compile with: /c
class A {};
class B : public A, public A {};    // C2500

// OK
class C : public A {};
class D : public A {};
class E : public C, public D {};
```
