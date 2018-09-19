---
title: "3.3.2 omp_get_wtick Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 1ad08500-bcb0-40d9-a81f-f131819006c9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 3.3.2 omp_get_wtick Function

The `omp_get_wtick` function returns a double-precision floating point value equal to the number of seconds between successive clock ticks. The format is as follows:

```
#include <omp.h>
double omp_get_wtick(void);
```