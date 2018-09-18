---
title: "OMP_SCHEDULE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["OMP_SCHEDULE"]
dev_langs: ["C++"]
helpviewer_keywords: ["OMP_SCHEDULE OpenMP environment variable"]
ms.assetid: 2295a801-e584-4d2f-826f-7ca4c88846a6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# OMP_SCHEDULE
Modifies the behavior of the [schedule](../../../parallel/openmp/reference/schedule.md) clause when `schedule(runtime)` is specified in a `for` or `parallel for` directive.  
  
## Syntax  
  
```  
set OMP_SCHEDULE[=type[,size]]  
```  
  
## Arguments

*size*<br/>
(Optional) Specifies the size of iterations. `size` must be a positive integer. The default is 1, except when `type` is static. Not valid when `type` is `runtime`.  
  
*type*<br/>
The kind of scheduling:  
  
-   `dynamic`  
  
-   `guided`  
  
-   `runtime`  
  
-   `static`  
  
## Remarks  
 The default value in the Visual C++ implementation of the OpenMP standard is `OMP_SCHEDULE=static,0`.  
  
 For more information, see [4.1 OMP_SCHEDULE](../../../parallel/openmp/4-1-omp-schedule.md).  
  
## Example  
 The following command sets the **OMP_SCHEDULE** environment variable:  
  
```  
set OMP_SCHEDULE="guided,2"  
```  
  
 The following command displays the current setting of the **OMP_SCHEDULE** environment variable:  
  
```  
set OMP_SCHEDULE  
```  
  
## See Also  
 [Environment Variables](../../../parallel/openmp/reference/openmp-environment-variables.md)