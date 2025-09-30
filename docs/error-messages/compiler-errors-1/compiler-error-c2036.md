---
title: "Compiler Error C2036"
description: "Learn more about: Compiler Error C2036"
ms.date: 11/04/2016
f1_keywords: ["C2036"]
helpviewer_keywords: ["C2036"]
---
# Compiler Error C2036

> 'identifier' : unknown size

## Remarks

An operation on `identifier` requires the size of the data object, which cannot be determined.

## Examples

The following example generates C2036.

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

The following example generates C2036.

```cpp
// C2036_2.cpp
// a C++ program
struct A* pA;
int main() {
   pA++;   // C2036, size of A not known
   ((char*&)pA)++;   // OK, if sizeof(A) == sizeof(char)
}
```
