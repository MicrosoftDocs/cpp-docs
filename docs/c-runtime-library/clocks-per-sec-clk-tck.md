---
title: "CLOCKS_PER_SEC, CLK_TCK | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CLOCKS_PER_SEC"
  - "CLK_TCK"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "CLOCKS_PER_SEC"
  - "CLK_TCK constant"
ms.assetid: bc285106-383d-44cb-91bf-276ad7de57bf
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
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
# CLOCKS_PER_SEC, CLK_TCK
## Syntax  
  
```  
  
#include <time.h>  
```  
  
## Remarks  
 The time in seconds is the value returned by the `clock` function, divided by `CLOCKS_PER_SEC`. `CLK_TCK` is equivalent, but considered obsolete.  
  
## See Also  
 [clock](../c-runtime-library/reference/clock.md)   
 [Global Constants](../c-runtime-library/global-constants.md)