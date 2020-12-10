---
description: "Learn more about: Compiler Error C2105"
title: "Compiler Error C2105"
ms.date: "11/04/2016"
f1_keywords: ["C2105"]
helpviewer_keywords: ["C2105"]
ms.assetid: 19b7f7bc-a9da-4d23-8193-005b6d09274f
---
# Compiler Error C2105

'operator' needs l-value

The operator must have an l-value as operand.

The following sample generates C2105:

```cpp
// C2105.cpp
int main() {
   unsigned char * p1 = 0;
   unsigned int * p2 = (unsigned int *)p1;
   p2++;

   unsigned int * p = 0;
   p++;   // ok

   p2 = (unsigned int *)p1;
   ((unsigned int *)p1)++;   // C2105
}
```

The following sample generates C2105:

```cpp
// C2105b.cpp
int main() {
   int a[10] = {0};
   int b[10] = {0};
   ++(a , b);   // C2105

   // OK
   ++(a[0] , b[0]);
   ++a[0];
}
```
