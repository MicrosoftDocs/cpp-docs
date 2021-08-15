---
description: "Learn more about: Compiler Error C2036"
title: "Compiler Error C2036"
ms.date: "11/04/2016"
f1_keywords: ["C2036"]
helpviewer_keywords: ["C2036"]
ms.assetid: 895821a9-65d1-44b5-bde1-dae827f3e486
---
# Compiler Error C2036

'identifier' : unknown size

An operation on `identifier` requires the size of the data object, which cannot be determined.

## Examples

The following sample generates C2036.

```c
// C2036.c
// a C program
struct A* pA;
struct B { int i; } *pB;
int main() {
   pA++;   // C2036, size of A not known
   ((char*)pA)++;   // OK

   pB++;   // OK
}
```

The following sample generates C2036.

```cpp
// C2036_2.cpp
// a C++ program
struct A* pA;
int main() {
   pA++;   // C2036, size of A not known
   ((char*&)pA)++;   // OK, if sizeof(A) == sizeof(char)
}
```
