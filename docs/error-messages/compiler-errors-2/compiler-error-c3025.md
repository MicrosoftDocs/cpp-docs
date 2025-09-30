---
title: "Compiler Error C3025"
description: "Learn more about: Compiler Error C3025"
ms.date: 11/04/2016
f1_keywords: ["C3025"]
helpviewer_keywords: ["C3025"]
---
# Compiler Error C3025

> 'clause' : integral expression expected

## Remarks

A clause requires an integer expression but was given a noninteger expression.

## Example

The following example generates C3025.

```cpp
// C3025.cpp
// compile with: /openmp /link vcomps.lib
#include <stdio.h>
#include "omp.h"

float f = 2.0F;

int main()
{
    int i = 0;

    // OK
    puts("Test with int");
    #pragma omp parallel for num_threads(i)
    for (i = 1; i <= 2; ++i)
        printf_s("Hello World - thread %d - iteration %d\n",
                 omp_get_thread_num(), i);

    puts("Test with float");
    #pragma omp parallel for num_threads(f)   // C3025
    for (i = 1; i <= 2; ++i)
        printf_s("Hello World - thread %d - iteration %d\n",
                 omp_get_thread_num(), i);
}
```
