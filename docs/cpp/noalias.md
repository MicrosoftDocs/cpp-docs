---
title: "noalias"
ms.date: "02/09/2018"
f1_keywords: ["noalias_cpp"]
helpviewer_keywords: ["noalias __declspec keyword", "__declspec keyword [C++], noalias"]
ms.assetid: efafa8b0-7f39-4edc-a81e-d287ae882c9b
---
# noalias

**Microsoft Specific**

**noalias** means that a function call does not modify or reference visible global state and only modifies the memory pointed to *directly* by pointer parameters (first-level indirections).

If a function is annotated as **noalias**, the optimizer can assume that, in addition to the parameters themselves, only first-level indirections of pointer parameters are referenced or modified inside the function. The visible global state is the set of all data that is not defined or referenced outside of the compilation scope, and their address is not taken. The compilation scope is all source files ([/LTCG (Link-time Code Generation)](../build/reference/ltcg-link-time-code-generation.md) builds) or a single source file (non-**/LTCG** build).

The **noalias** annotation only applies within the body of the annotated function. Marking a function as **__declspec(noalias)** does not affect the aliasing of pointers returned by the function.

For another annotation that can impact aliasing, see [__declspec(restrict)](../cpp/restrict.md).

## Example

The following sample demonstrates the use of **__declspec(noalias)**.

When the function `multiply` that accesses memory is annotated **__declspec(noalias)**, it tells the compiler that this function does not modify the global state except through the pointers in its parameter list.

```C
// declspec_noalias.c
#include <stdio.h>
#include <stdlib.h>

#define M 800
#define N 600
#define P 700

float * mempool, * memptr;

float * ma(int size)
{
    float * retval;
    retval = memptr;
    memptr += size;
    return retval;
}

float * init(int m, int n)
{
    float * a;
    int i, j;
    int k=1;

    a = ma(m * n);
    if (!a) exit(1);
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            a[i*n+j] = 0.1/k++;
    return a;
}

__declspec(noalias) void multiply(float * a, float * b, float * c)
{
    int i, j, k;

    for (j=0; j<P; j++)
        for (i=0; i<M; i++)
            for (k=0; k<N; k++)
                c[i * P + j] =
                          a[i * N + k] *
                          b[k * P + j];
}

int main()
{
    float * a, * b, * c;

    mempool = (float *) malloc(sizeof(float) * (M*N + N*P + M*P));

    if (!mempool)
    {
        puts("ERROR: Malloc returned null");
        exit(1);
    }

    memptr = mempool;
    a = init(M, N);
    b = init(N, P);
    c = init(M, P);

    multiply(a, b, c);
}
```

## See also

[__declspec](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[__declspec(restrict)](../cpp/restrict.md)
