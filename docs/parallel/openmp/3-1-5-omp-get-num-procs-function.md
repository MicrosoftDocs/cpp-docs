---
title: "3.1.5 omp_get_num_procs Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: bbfbf17b-0c68-4ba6-a25d-07c36ecb551f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 3.1.5 omp_get_num_procs Function

The `omp_get_num_procs` function returns the number of processors that are available to the program at the time the function is called. The format is as follows:

```
#include <omp.h>
int omp_get_num_procs(void);
```