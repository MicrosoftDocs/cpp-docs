---
description: "Learn more about: Compiler Error C2970"
title: "Compiler Error C2970"
ms.date: "11/04/2016"
f1_keywords: ["C2970"]
helpviewer_keywords: ["C2970"]
ms.assetid: 21d90348-20d3-438c-b278-efdbfb93a7d2
---
# Compiler Error C2970

'class' : template parameter 'param' : 'arg' : an expression involving objects with internal linkage cannot be used as a non-type argument

You cannot use the name or address of a static variable as a template argument. The template class expects a const value that can be evaluated at compile time.

The following sample generates C2970:

```cpp
// C2970.cpp
// compile with: /c
static int si;
// could declare nonstatic to resolve all errors
// int si;

template <int i>
class X {};

template <int *pi>
class Y {};

X<si> anX;   // C2970 cannot use static variable in templates

// this would also work
const int i = 10;
X<i> anX2;
```
