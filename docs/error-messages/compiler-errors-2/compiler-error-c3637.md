---
description: "Learn more about: Compiler Error C3637"
title: "Compiler Error C3637"
ms.date: "11/04/2016"
f1_keywords: ["C3637"]
helpviewer_keywords: ["C3637"]
ms.assetid: 72391377-8519-43d9-870a-73a6423deb74
---
# Compiler Error C3637

'function' : a friend function definition cannot be a specialization of a function type

A friend function was defined incorrectly for a template or generic.

The following sample generates C3637:

```cpp
// C3637.cpp
template <class T>
void f();

struct S {
   friend void f<int>() {}   // C3637
};
```

Possible resolution:

```cpp
// C3637b.cpp
// compile with: /c
template <class T>
void f();

struct S {
   friend void f() {}
};
```

C3637 can also occur when using generics:

```cpp
// C3637c.cpp
// compile with: /clr

generic <class T>
void gf();

struct S {
   friend void gf<int>() {}   // C3637
};
```

Possible resolution:

```cpp
// C3637d.cpp
// compile with: /clr /c
generic <class T>
void gf();

struct S {
   friend void gf() {}
};
```
