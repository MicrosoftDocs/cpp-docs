---
title: "4.3 OMP_DYNAMIC | Microsoft Docs"
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
ms.assetid: a15edefb-1f85-4f06-a427-beb3cfc4434f
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
# 4.3 OMP_DYNAMIC
The **OMP_DYNAMIC** environment variable enables or disables dynamic adjustment of the number of threads available for execution of parallel regions unless dynamic adjustment is explicitly enabled or disabled by calling the **omp_set_dynamic** library routine. Its value must be **TRUE** or **FALSE**.  
  
 If set to **TRUE**, the number of threads that are used for executing parallel regions may be adjusted by the runtime environment to best utilize system resources.  If set to **FALSE**, dynamic adjustment is disabled. The default condition is implementation-defined.  
  
 Example:  
  
```  
setenv OMP_DYNAMIC TRUE  
```  
  
## Cross References:  
  
-   For more information on parallel regions, see [Section 2.3](../../parallel/openmp/2-3-parallel-construct.md) on page 8.  
  
-   **omp_set_dynamic** function, see [Section 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) on page 39.