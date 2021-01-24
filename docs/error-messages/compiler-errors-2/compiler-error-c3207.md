---
description: "Learn more about: Compiler Error C3207"
title: "Compiler Error C3207"
ms.date: "11/04/2016"
f1_keywords: ["C3207"]
helpviewer_keywords: ["C3207"]
ms.assetid: 4a28b976-142a-4cff-aa2f-480b892c50ca
---
# Compiler Error C3207

'function' : invalid template argument for 'arg', class template expected

A template function is defined as taking a template template argument. However, a template type argument was passed.

The following sample generates C3207:

```cpp
// C3207.cpp
template <template <class T> class TT>
void f(){}

template <class T>
struct S
{
};

void f1()
{
   f<S<int> >();   // C3207
   // try the following line instead
   // f<S>();
}
```
