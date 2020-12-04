---
description: "Learn more about: restrict"
title: "restrict"
ms.date: "02/09/2018"
f1_keywords: ["restrict_cpp"]
helpviewer_keywords: ["__declspec keyword [C++], restrict", "restrict __declspec keyword"]
ms.assetid: f39cf632-68d8-4362-a497-2d4c15693689
---
# restrict

**Microsoft Specific**

When applied to a function declaration or definition that returns a pointer type, **`restrict`** tells the compiler that the function returns an object that is not *aliased*, that is, referenced by any other pointers. This allows the compiler to perform additional optimizations.

## Syntax

> **`__declspec(restrict)`** *pointer_return_type* *function*();

## Remarks

The compiler propagates **`__declspec(restrict)`**. For example, the CRT `malloc` function has a **`__declspec(restrict)`** decoration, and therefore, the compiler assumes that pointers initialized to memory locations by `malloc` are also not aliased by previously existing pointers.

The compiler does not check that the returned pointer is not actually aliased. It is the developer's responsibility to ensure the program does not alias a pointer marked with the **restrict __declspec** modifier.

For similar semantics on variables, see [__restrict](../cpp/extension-restrict.md).

For another annotation that applies to aliasing within a function, see [__declspec(noalias)](../cpp/noalias.md).

For information about the **`restrict`** keyword that is part of C++ AMP, see [restrict (C++ AMP)](../cpp/restrict-cpp-amp.md).

## Example

The following sample demonstrates the use of **`__declspec(restrict)`**.

When **`__declspec(restrict)`** is applied to a function that returns a pointer, this tells the compiler that the memory pointed to by the return value is not aliased. In this example, the pointers `mempool` and `memptr` are global, so the compiler can't be sure that the memory they refer to is not aliased. However, they are used within `ma` and its caller `init` in a way that returns memory that isn't otherwise referenced by the program, so **__decslpec(restrict)** is used to help the optimizer. This is similar to how the CRT headers decorate allocation functions such as `malloc` by using **`__declspec(restrict)`** to indicate that they always return memory that cannot be aliased by existing pointers.

```C
// declspec_restrict.c
// Compile with: cl /W4 declspec_restrict.c
#include <stdio.h>
#include <stdlib.h>

#define M 800
#define N 600
#define P 700

float * mempool, * memptr;

__declspec(restrict) float * ma(int size)
{
    float * retval;
    retval = memptr;
    memptr += size;
    return retval;
}

__declspec(restrict) float * init(int m, int n)
{
    float * a;
    int i, j;
    int k=1;

    a = ma(m * n);
    if (!a) exit(1);
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            a[i*n+j] = 0.1f/k++;
    return a;
}

void multiply(float * a, float * b, float * c)
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

**END Microsoft Specific**

## See also

[Keywords](../cpp/keywords-cpp.md)<br/>
[__declspec](../cpp/declspec.md)<br/>
[__declspec(noalias)](../cpp/noalias.md)
