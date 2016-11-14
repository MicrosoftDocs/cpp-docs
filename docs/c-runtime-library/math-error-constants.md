---
title: "Math Error Constants | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_PLOSS"
  - "_UNDERFLOW"
  - "_TLOSS"
  - "_SING"
  - "_DOMAIN"
  - "_OVERFLOW"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_TLOSS constant"
  - "_SING constant"
  - "PLOSS constant"
  - "UNDERFLOW constant"
  - "_UNDERFLOW constant"
  - "_OVERFLOW constant"
  - "DOMAIN constant"
  - "OVERFLOW constant"
  - "TLOSS constant"
  - "SING constant"
  - "_DOMAIN constant"
  - "_PLOSS constant"
  - "math error constants"
ms.assetid: 4be933a6-674e-45a5-8ac9-090023542f5b
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
# Math Error Constants
## Syntax  
  
```  
  
#include <math.h>  
  
```  
  
## Remarks  
 The math routines of the run-time library can generate math error constants.  
  
 These errors, described as follows, correspond to the exception types defined in MATH.H and are returned by the `_matherr` function when a math error occurs.  
  
|Constant|Meaning|  
|--------------|-------------|  
|`_DOMAIN`|Argument to function is outside domain of function.|  
|`_OVERFLOW`|Result is too large to be represented in function's return type.|  
|`_PLOSS`|Partial loss of significance occurred.|  
|`_SING`|Argument singularity: argument to function has illegal value. (For example, value 0 is passed to function that requires nonzero value.)|  
|`_TLOSS`|Total loss of significance occurred.|  
|`_UNDERFLOW`|Result is too small to be represented.|  
  
## See Also  
 [_matherr](../c-runtime-library/reference/matherr.md)   
 [Global Constants](../c-runtime-library/global-constants.md)