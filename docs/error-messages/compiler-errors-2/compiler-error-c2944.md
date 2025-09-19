---
title: "Compiler Error C2944"
description: "Learn more about: Compiler Error C2944"
ms.date: 06/01/2022
f1_keywords: ["C2944"]
helpviewer_keywords: ["C2944"]
---
# Compiler Error C2944

> '*class*' : type-class-id redefined as a value argument of a template

## Remarks

You can't use a generic or template class, instead of a symbol, as a template value argument.

This error is obsolete in Visual Studio 2022 and later versions.

## Examples

The following example generates C2944:

```cpp
// C2944.cpp
// compile with: /c
template<class T>
class TC { };

template <int TC<int> > struct X1 { };   // C2944

template <class T > struct X2 {};
```

C2944 can also occur when using generics:

```cpp
// C2944b.cpp
// compile with: /clr /c
generic<class T>
ref class GC {};

template <int GC<int> > struct X2 { };   // C2944
template <class T> struct X3 {};   // OK
```
