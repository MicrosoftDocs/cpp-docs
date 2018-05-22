---
title: "3.3 Timing Routines | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 21060d64-cbe8-4e38-8718-3a68d6a57be3
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.3 Timing Routines
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The functions described in this section support a portable wall-clock timer:  
  
-   The `omp_get_wtime` function returns elapsed wall-clock time.  
  
-   The `omp_get_wtick` function returns seconds between successive clock ticks.