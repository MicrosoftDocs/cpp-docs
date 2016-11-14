---
title: "4.1 OMP_SCHEDULE | Microsoft Docs"
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
ms.assetid: d0dce411-2351-4ee9-a1cc-c0322a58b65c
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
# 4.1 OMP_SCHEDULE
**OMP_SCHEDULE** applies only to **for** and **parallel for** directives that have the schedule type **runtime**. The schedule type and chunk size for all such loops can be set at run time by setting this environment variable to any of the recognized schedule types and to an optional *chunk_size*.  
  
 For **for** and **parallel for** directives that have a schedule type other than **runtime**, **OMP_SCHEDULE** is ignored. The default value for this environment variable is implementation-defined. If the optional *chunk_size* is set, the value must be positive. If *chunk_size* is not set, a value of 1 is assumed, except in the case of a **static** schedule. For a **static** schedule, the default chunk size is set to the loop iteration space divided by the number of threads applied to the loop.  
  
 Example:  
  
```  
setenv OMP_SCHEDULE "guided,4"  
setenv OMP_SCHEDULE "dynamic"  
```  
  
## Cross References:  
  
-   **for** directive, see [Section 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) on page 11.  
  
-   **parallel for** directive, see [Section 2.5.1](../../parallel/openmp/2-5-1-parallel-for-construct.md) on page 16.