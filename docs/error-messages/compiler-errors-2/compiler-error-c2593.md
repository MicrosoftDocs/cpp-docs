---
description: "Learn more about: Compiler Error C2593"
title: "Compiler Error C2593"
ms.date: "11/04/2016"
f1_keywords: ["C2593"]
helpviewer_keywords: ["C2593"]
ms.assetid: 4a0fe9bb-2163-447d-91f6-1890ed8250f6
---
# Compiler Error C2593

'operator identifier' is ambiguous

More than one possible operator is defined for an overloaded operator.

This error may be fixed if you use an explicit cast on one or more actual parameters.

The following sample generates C2593:

```cpp
// C2593.cpp
struct A {};
struct B : A {};
struct X {};
struct D : B, X {};
void operator+( X, X );
void operator+( A, B );
D d;

int main() {
   d +  d;         // C2593, D has an A, B, and X
   (X)d + (X)d;    // OK, uses operator+( X, X )
}
```

This error can be caused by serializing a floating-point variable using a `CArchive` object. The compiler identifies the `<<` operator as ambiguous. The only primitive C++ types that `CArchive` can serialize are the fixed-size types `BYTE`, `WORD`, `DWORD`, and `LONG`. All integer types must be cast to one of these types for serialization. Floating-point types must be archived using the `CArchive::Write()` member function.

The following example shows how to archive a floating-point variable (`f`) to archive `ar`:

```
ar.Write(&f, sizeof( float ));
```
