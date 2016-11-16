---
title: "4.4 OMP_NESTED | Microsoft Docs"
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
ms.assetid: fd17b6f4-84e8-44c0-a96a-3a9e5ba33688
caps.latest.revision: 7
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
# 4.4 OMP_NESTED
The `OMP_NESTED` environment variable enables or disables nested parallelism unless nested parallelism is enabled or disabled by calling the `o`**mp_set_nested** library routine. If set to **TRUE**, nested parallelism is enabled; if it is set to **FALSE**, nested parallelism is disabled. The default value is **FALSE**.  
  
 Example:  
  
```  
setenv OMP_NESTED TRUE  
```  
  
## Cross Reference:  
  
-   `omp_set_nested` function, see [Section 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) on page 40.