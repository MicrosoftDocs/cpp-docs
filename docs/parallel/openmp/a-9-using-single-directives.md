---
title: "A.9   Using single Directives | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 0c0f9495-5794-4db9-883b-a12e3a9f1328
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.9   Using single Directives
The following example demonstrates the `single` directive ([Section 2.4.3](../../parallel/openmp/2-4-3-single-construct.md) on page 15). In the example, only one thread (usually the first thread that encounters the `single` directive) prints the progress message. The user must not make any assumptions as to which thread will execute the `single` section. All other threads will skip the `single` section and stop at the barrier at the end of the `single` construct. If other threads can proceed without waiting for the thread executing the `single` section, a `nowait` clause can be specified on the `single` directive.  
  
```  
#pragma omp parallel  
{  
    #pragma omp single  
        printf_s("Beginning work1.\n");  
    work1();  
    #pragma omp single  
        printf_s("Finishing work1.\n");  
    #pragma omp single nowait  
        printf_s("Finished work1 and beginning work2.\n");  
    work2();  
}  
```