---
title: "A.8   Specifying Parallel Sections | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: cf399304-121e-4c07-9829-47e0dbc2ef10
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.8   Specifying Parallel Sections
In the following example, (for [Section 2.4.2](../../parallel/openmp/2-4-2-sections-construct.md) on page 14) functions *xaxis*, *yaxis*, and *zaxis* can be executed concurrently. The first `section` directive is optional.  Note that all `section` directives need to appear in the lexical extent of the `parallel sections` construct.  
  
```  
#pragma omp parallel sections  
{  
    #pragma omp section  
        xaxis();  
    #pragma omp section  
        yaxis();  
    #pragma omp section  
        zaxis();  
}  
```