---
title: "3. Run-time Library Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: b226e512-6822-4cbe-a2ca-74cc2bb7e880
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# 3. Run-time Library Functions
This section describes the OpenMP C and C++ run-time library functions. The header **\<omp.h>** declares two types, several functions that can be used to control and query the parallel execution environment, and lock functions that can be used to synchronize access to data.  
  
 The type **omp_lock_t** is an object type capable of representing that a lock is available, or that a thread owns a lock. These locks are referred to as *simple locks*.  
  
 The type **omp_nest_lock_t** is an object type capable of representing either that a lock is available, or both the identity of the thread that owns the lock and a *nesting count* (described below). These locks are referred to as *nestable locks*.  
  
 The library functions are external functions with "C" linkage.  
  
 The descriptions in this chapter are divided into the following topics:  
  
-   Execution environment functions (see [Section 3.1](../../parallel/openmp/3-1-execution-environment-functions.md) on page 35).  
  
-   Lock functions (see [Section 3.2](../../parallel/openmp/3-2-lock-functions.md) on page 41).