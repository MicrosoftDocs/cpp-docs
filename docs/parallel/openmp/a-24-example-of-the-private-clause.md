---
title: "A.24   Example of the private Clause | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: f90a5b49-81ff-4746-ae03-37bbd33f6c08
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.24   Example of the private Clause
The `private` clause ([Section 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) on page 25) of a parallel region is only in effect for the lexical extent of the region, not for the dynamic extent of the region.  Therefore, in the example that follows, any uses of the variable *a* within the `for` loop in the routine *f* refers to a private copy of *a*, while a usage in routine *g* refers to the global *a*.  
  
```  
int a;  
  
void f(int n)   
{  
    a = 0;  
  
    #pragma omp parallel for private(a)  
    for (int i=1; i<n; i++)   
    {  
        a = i;  
        g(i, n);  
        d(a);     // Private copy of "a"  
        ...  
    }  
    ...  
  
void g(int k, int n)   
{  
    h(k,a); // The global "a", not the private "a" in f  
}  
```