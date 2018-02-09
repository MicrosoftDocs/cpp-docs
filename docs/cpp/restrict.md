---
title: "restrict | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ["restrict_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["__declspec keyword [C++], restrict", "restrict __declspec keyword"]
ms.assetid: f39cf632-68d8-4362-a497-2d4c15693689
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# restrict
**Microsoft Specific**  
  
 Applied to a function declaration or definition that returns a pointer type and tells the compiler that the function returns an object that will not be aliased with any other pointers.  
  
## Syntax  
  
```  
__declspec(restrict) return_type f();  
```  
  
## Remarks  
 The compiler will propagate `__declspec(restrict)`. For example, the CRT `malloc` function is decorated with `__declspec(restrict)` and therefore, pointers initialized to memory locations with `malloc` are also implied to not be aliased by previously existing memory. 
  
 The compiler does not check that the pointer is actually not aliased. It is the developer's responsibility to ensure the program does not alias a pointer marked with the `restrict __declspec` modifier.  
  
 For similar semantics on variables, see [__restrict](../cpp/extension-restrict.md).
 
 For another annotation that can impact aliasing, see also [__declspec(noalias)](../cpp/noalias.md).
  
 For information about the restrict keyword that is part of C++ AMP, see [restrict (C++ AMP)](../cpp/restrict-cpp-amp.md).  
 
## Example  

The following sample demonstrates using `__declspec(restrict)`.

Decorating functions that return pointers with `__declspec(restrict)` tells the compiler that the memory pointed to by the return value is not aliased. In this example, the pointers `mempool` and `memptr` are global so the compiler has no assurance that the memory is not subject to aliasing. However, they are used in such a way that each invocation of `ma` and `init` return memory that isn't otherwise referenced by the program, so `__decslpec(restrict)` is used to help the optimizer. This is similar to how the CRT headers decorate allocation functions such `malloc` as `restrict` to indicate that they always return memory that cannot be aliased by existing pointers. 

Decorating functions with `__declspec(noalias)` tells the compiler that the function does not interfere with the global state except through the pointers in its parameter list. in the example that accesses memory 

```C
// declspec_noalias.c
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
            a[i*n+j] = 0.1/k++;
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
  
## See Also  
 [__declspec](../cpp/declspec.md)
 [Keywords](../cpp/keywords-cpp.md)
 [__declspec(noalias)](../cpp/noalias.md)
