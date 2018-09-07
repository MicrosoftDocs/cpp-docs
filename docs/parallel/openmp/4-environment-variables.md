---
title: "4. Environment Variables | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 4ec7ed81-e9ca-46a1-84f8-8f9ce4587346
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 4. Environment Variables
This chapter describes the OpenMP C and C++ API environment variables (or equivalent platform-specific mechanisms) that control the execution of parallel code.  The names of environment variables must be uppercase. The values assigned to them are case insensitive and may have leading and trailing white space.  Modifications to the values after the program has started are ignored.  
  
 The environment variables are as follows:  
  
-   **OMP_SCHEDULE** sets the run-time schedule type and chunk size.  
  
-   **OMP_NUM_THREADS** sets the number of threads to use during execution.  
  
-   **OMP_DYNAMIC** enables or disables dynamic adjustment of the number of threads.  
  
-   **OMP_NESTED** enables or disables nested parallelism.  
  
 The examples in this chapter only demonstrate how these variables might be set in Unix C shell (csh) environments. In Korn shell and DOS environments the actions are similar, as follows:  
  
 csh:  
 setenv OMP_SCHEDULE "dynamic"  
  
 ksh:  
 export OMP_SCHEDULE="dynamic"  
  
 DOS:  
 set OMP_SCHEDULE="dynamic"