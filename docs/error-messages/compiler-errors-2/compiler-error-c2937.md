---
title: "Compiler Error C2937"
description: "Learn more about: Compiler Error C2937"
ms.date: 06/01/2022
f1_keywords: ["C2937"]
helpviewer_keywords: ["C2937"]
---
# Compiler Error C2937

> '*class*' : type-class-id redefined as a global typedef

## Remarks

You can't use a generic or template class as a global **`typedef`**.

This error is obsolete in Visual Studio 2022 and later versions.

## Examples

The following example generates C2937:

```cpp
// C2937.cpp
// compile with: /c
template<class T>
struct TC { };
typedef int TC<int>;   // C2937
typedef TC<int> c;   // OK
```

C2937 can also occur when using generics:

```cpp
// C2937b.cpp
// compile with: /clr
generic<class T>
ref struct GC { };
typedef int GC<int>;   // C2937
typedef GC<int> xx;   // OK
```
