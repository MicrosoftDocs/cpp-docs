---
description: "Learn more about: Compiler Error C2914"
title: "Compiler Error C2914"
ms.date: "11/04/2016"
f1_keywords: ["C2914"]
helpviewer_keywords: ["C2914"]
ms.assetid: fc6a0592-f53e-4f5a-88cb-780bbed4acf2
---
# Compiler Error C2914

'identifier' : cannot deduce type argument as function argument is ambiguous

The compiler cannot determine which overloaded functions to use for a generic or template argument.

The following sample generates C2914:

```cpp
// C2914.cpp
// compile with: /c
void f(int);
void f(double);
template<class T> void g(void (*) (T));
void h() { g(f); }   // C2914
// try the following line instead
// void h() { g<int>(f); }
```

C2914 can also occur when using generics.  The following sample generates C2914:

```cpp
// C2914b.cpp
// compile with: /clr /c
void f(int);
void f(double);

template<class T>
void gf(void (*) (T));

void h() { gf(f);}   // C2914
// try the following line instead
void h() { gf<int>(f); }
```
