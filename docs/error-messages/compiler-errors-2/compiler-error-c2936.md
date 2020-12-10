---
description: "Learn more about: Compiler Error C2936"
title: "Compiler Error C2936"
ms.date: "11/04/2016"
f1_keywords: ["C2936"]
helpviewer_keywords: ["C2936"]
ms.assetid: 5d1ba0fc-0c78-4a37-a83b-1ef8527763be
---
# Compiler Error C2936

'class' : type-class-id redefined as a global data variable

You cannot use a generic or template class as a global data variable.

This error can be caused if braces are improperly matched.

The following sample generates C2936:

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
