---
title: "Compiler Error C2936"
description: "Learn more about: Compiler Error C2936"
ms.date: 06/01/2022
f1_keywords: ["C2936"]
helpviewer_keywords: ["C2936"]
---
# Compiler Error C2936

> '*class*' : type-class-id redefined as a global data variable

## Remarks

You can't use a generic or template class as a global data variable.

This error is obsolete in Visual Studio 2022 and later versions.

This error can be caused if braces are improperly matched.

## Examples

The following example generates C2936:

```cpp
// C2936.cpp
// compile with: /c
template<class T> struct TC { };
int TC<int>;   // C2936

// OK
struct TC2 { };
int TC2;
```

C2936 can also occur when using generics:

```cpp
// C2936b.cpp
// compile with: /clr /c
generic<class T>
ref struct GC {};
int GC<int>;   // C2936

// OK
ref struct GC2 {};
int GC2;
```
