---
title: "3.1.10 omp_get_nested Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 48736a25-5c6e-4e2d-aad0-421087663a3c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 3.1.10 omp_get_nested Function
The `omp_get_nested` function returns a nonzero value if nested parallelism is enabled and 0 if it is disabled. For more information on nested parallelism, see Section 3.1.9 on page 40. The format is as follows:  
  
```  
#include <omp.h>  
int omp_get_nested(void);  
```  
  
 If an implementation does not implement nested parallelism, this function always returns 0.