---
title: "Compiler Error C3007"
description: "Learn more about: Compiler Error C3007"
ms.date: 11/04/2016
f1_keywords: ["C3007"]
helpviewer_keywords: ["C3007"]
---
# Compiler Error C3007

> 'arg' : clause on OpenMP 'directive' directive does not take an argument

## Remarks

An OpenMP directive had an argument, but the directive does not take an argument.

## Example

The following example generates C3007:

```c
// C3007.c
// compile with: /openmp
int main()
{
   #pragma omp parallel for ordered(2)   // C3007
}
```
