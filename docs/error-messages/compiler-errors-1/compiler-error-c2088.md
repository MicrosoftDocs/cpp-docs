---
title: "Compiler Error C2088"
description: "Learn more about: Compiler Error C2088"
ms.date: 11/04/2016
f1_keywords: ["C2088"]
helpviewer_keywords: ["C2088"]
---
# Compiler Error C2088

> 'operator' : illegal for 'class-key'

## Remarks

The operator was not defined for the structure or union. This error is only valid for C code.

## Example

The following example generates C2088 three times:

```c
// C2088.c
struct S {
   int m_i;
} s;

int main() {
   int i = s * 1;   // C2088
   struct S s2 = +s;   // C2088
   s++;   // C2088
}
```
