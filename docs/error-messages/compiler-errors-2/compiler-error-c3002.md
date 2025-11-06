---
title: "Compiler Error C3002"
description: "Learn more about: Compiler Error C3002"
ms.date: 11/04/2016
f1_keywords: ["C3002"]
helpviewer_keywords: ["C3002"]
---
# Compiler Error C3002

> 'name1 name2' : multiple OpenMP directive names

## Remarks

Multiple directive names are not allowed.

## Example

The following example generates C3002:

```c
// C3002.c
// compile with: /openmp
int main()
{
   #pragma omp parallel single   // C3002
}
```
