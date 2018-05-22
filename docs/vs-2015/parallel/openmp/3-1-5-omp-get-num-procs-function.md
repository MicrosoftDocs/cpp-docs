---
title: "3.1.5 omp_get_num_procs Function | Microsoft Docs"
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
ms.assetid: bbfbf17b-0c68-4ba6-a25d-07c36ecb551f
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.1.5 omp_get_num_procs Function
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The `omp_get_num_procs` function returns the number of processors that are available to the program at the time the function is called. The format is as follows:  
  
```  
#include <omp.h>  
int omp_get_num_procs(void);  
```