---
description: "Learn more about: Compiler Error C3853"
title: "Compiler Error C3853"
ms.date: "11/04/2016"
f1_keywords: ["C3853"]
helpviewer_keywords: ["C3853"]
ms.assetid: 5b71805d-52b4-44ec-80ae-37c68d876f6a
---
# Compiler Error C3853

'=': re-initializing a reference or assignment through a reference-to-function is illegal

Cannot assign to a reference through a function because functions are not lvalues.

The following samples generate C3853:

```cpp
// C3853.cpp
// compile with: /EHsc
#include <iostream>
int afunc(int i)
{
   return i;
}

typedef int (& rFunc_t)(int);

int main()
{
   rFunc_t rf = afunc;   // OK binding a reference to function
   rf = afunc;   // C3853, can't reassign to a ref that's an lvalue
   int i = 99;
   int & ri = i;
   std::cout << i << std::endl;
   ri = 0;   // OK, i = 88;
   std::cout << i << std::endl;
}
```
