---
description: "Learn more about: Compiler Error C2764"
title: "Compiler Error C2764"
ms.date: "11/04/2016"
f1_keywords: ["C2764"]
helpviewer_keywords: ["C2764"]
ms.assetid: 3754f5af-e094-4425-be20-d0c9a9b5baec
---
# Compiler Error C2764

'param' : template parameter not used or deducible in partial specialization 'specialization'

A template parameter is not used in a partial specialization. This makes the partial specialization unusable because the template parameter cannot be deduced.

## Example

The following sample generates C2764:

```cpp
// C2764.cpp
#include <stdio.h>
template <class T1, class T2>
struct S  {
   int m_i;
};

template <class T1, class T2>
struct S<int, T2*> {   // C2764
// try the following line instead
// struct S<T1(*)(T2), T2*> {
   char m_c;
};

int main() {
   S<int, char> s1;
   S<void (*)(short), short *> s2;
   s2.m_c = 10;
   s1.m_i = s2.m_c;
   printf_s("%d\n", s1.m_i);
}
```
