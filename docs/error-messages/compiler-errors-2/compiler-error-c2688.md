---
title: "Compiler Error C2688"
description: "Learn more about: Compiler Error C2688"
ms.date: 11/04/2016
f1_keywords: ["C2688"]
helpviewer_keywords: ["C2688"]
---
# Compiler Error C2688

> 'C2::fgrv' : covariant returns with multiple or virtual inheritance not supported for varargs functions

## Remarks

Covariant return types are not supported in Visual C++ when a function contains variable arguments.

To resolve this error, either define your functions so that they do not use variable arguments or make the return values the same for all virtual functions.

## Example

The following example generates C2688:

```cpp
// C2688.cpp
struct G1 {};
struct G2 {};
struct G3 : G1, G2 {};
struct G4 {};
struct G5 {};
struct G6 : G4, G5 {};
struct G7 : G3, G6 {};

struct C1 {
   virtual G4& fgrv(int,...);
};

struct C2 : C1 {
   virtual G7& fgrv(int,...);   // C2688, does not return G4&
};
```
