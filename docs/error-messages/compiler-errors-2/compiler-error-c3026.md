---
description: "Learn more about: Compiler Error C3026"
title: "Compiler Error C3026"
ms.date: "11/04/2016"
f1_keywords: ["C3026"]
helpviewer_keywords: ["C3026"]
ms.assetid: 3297060e-cc5b-4600-a2db-09bfc4ffa21f
---
# Compiler Error C3026

'clause' : constant expression must be positive

A clause was passed an integer value, but the value was not a positive number. The number must be positive.

## Example

The following sample generates C3026:

```cpp
// C3026.cpp
// compile with: /openmp /link vcomps.lib
#include <stdio.h>
#include "omp.h"

int main()
{
    int i;
    const int i1 = 0;

    #pragma omp parallel for num_threads(i1)   // C3026
    for (i = 1; i <= 2; ++i)
        printf_s("Hello World - thread %d - iteration %d\n",
                 omp_get_thread_num(), i);

    #pragma omp parallel for num_threads(i1 + 1)   // OK
    for (i = 1; i <= 2; ++i)
        printf_s("Hello World - thread %d - iteration %d\n",
                 omp_get_thread_num(), i);
}
```
