---
description: "Learn more about: Compiler Error C2971"
title: "Compiler Error C2971"
ms.date: "11/04/2016"
f1_keywords: ["C2971"]
helpviewer_keywords: ["C2971"]
ms.assetid: fdb5467b-9a41-41ef-ac20-2e9428d5a4fc
---
# Compiler Error C2971

'class' : template parameter 'param' : 'arg' : a local variable cannot be used as a non-type argument

You cannot use the name or address of a local variable as a template argument.

The following sample generates C2971:

```cpp
// C2971.cpp
template <int *pi>
class Y {};

int global_var = 0;

int main() {
   int local_var = 0;
   Y<&local_var> aY;   // C2971
   // try the following line instead
   // Y<&global_var> aY;
}
```
