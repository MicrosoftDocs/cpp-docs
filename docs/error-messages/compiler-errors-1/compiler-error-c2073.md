---
description: "Learn more about: Compiler Error C2073"
title: "Compiler Error C2073"
ms.date: 06/29/2022
f1_keywords: ["C2073"]
helpviewer_keywords: ["C2073"]
ms.assetid: 57908234-be7a-4ce9-b0a7-8b1ad621865e
---
# Compiler Error C2073

> 'identifier' : elements of partially initialized array must have a default constructor

## Remarks

Too few initializers were specified for an array of user-defined types or constants. If an explicit initializer and its corresponding constructor are not specified for an array member, a default constructor must be supplied.

This compiler error is obsolete in Visual Studio 2022.

## Example

The following sample generates C2073. Source file `C2073.cpp`:

```cpp
// C2073.cpp
class A {
public:
   A( int );   // constructor for ints only
};
A a[3] = { A(1), A(2) };   // C2073, no default constructor
```

A fix is shown here in source file `C2073b.cpp`:

```cpp
// C2073b.cpp
// compile with: /c
class B {
public:
   B();   // default constructor declared
   B( int );
};
B b[3] = { B(1), B(2) };   // OK
```
