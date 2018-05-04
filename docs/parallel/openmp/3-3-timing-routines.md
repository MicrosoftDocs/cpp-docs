---
title: "3.3 Timing Routines | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 21060d64-cbe8-4e38-8718-3a68d6a57be3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 3.3 Timing Routines
The functions described in this section support a portable wall-clock timer:  
  
-   The `omp_get_wtime` function returns elapsed wall-clock time.  
  
-   The `omp_get_wtick` function returns seconds between successive clock ticks.