---
title: "Compiler Error C2932"
description: "Learn more about: Compiler Error C2932"
ms.date: 11/04/2016
f1_keywords: ["C2932"]
helpviewer_keywords: ["C2932"]
---
# Compiler Error C2932

> '*class*' : type-class-id redefined as a data member of '*identifier*'

## Remarks

You can't use a generic or template class as a data member.

This error is obsolete in Visual Studio 2022 and later versions.

## Examples

The following example generates C2932:

```cpp
// C2932.cpp
// compile with: /c
template<class T>
struct TC {};

struct MyStruct {
   int TC<int>;   // C2932
   int TC;   // OK
};
```

C2932 can also occur when using generics:

```cpp
// C2932b.cpp
// compile with: /clr /c
generic<class T>
ref struct GC {};

struct MyStruct {
   int GC<int>;   // C2932
   int GC;   // OK
};
```
