---
description: "Learn more about: Compiler Error C3854"
title: "Compiler Error C3854"
ms.date: "11/04/2016"
f1_keywords: ["C3854"]
helpviewer_keywords: ["C3854"]
ms.assetid: 32a9ead0-c6c7-485a-8802-c7b1fe921d3a
---
# Compiler Error C3854

expression to left of '=' evaluates to a function. Cannot assign to a function (a function is not an l-value)

A reference cannot be reinitialized. Dereferencing a reference to a function yields a function, which is an rvalue, to which you cannot assign. Therefore, you cannot assign through a reference to a function.

The following sample generates C3854:

```cpp
// C3854.cpp
int afunc(int i)
{
   return i;
}

typedef int (& rFunc_t)(int);
typedef int (* pFunc_t)(int);

int main()
{
   rFunc_t rf = afunc;   // OK binding a reference to function
   pFunc_t pf = &afunc;   // OK initializing a pointer to function

   *pf = &afunc;   // C3854
   // try the following line instead
   // pf = &afunc;
   *rf = &afunc;   // C3854
}
```
