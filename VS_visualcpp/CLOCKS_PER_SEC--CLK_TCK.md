---
title: "CLOCKS_PER_SEC, CLK_TCK"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: bc285106-383d-44cb-91bf-276ad7de57bf
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CLOCKS_PER_SEC, CLK_TCK
## Syntax  
  
```  
  
#include <time.h>  
```  
  
## Remarks  
 The time in seconds is the value returned by the `clock` function, divided by `CLOCKS_PER_SEC`. `CLK_TCK` is equivalent, but considered obsolete.  
  
## See Also  
 [clock](../VS_visualcpp/clock.md)   
 [Global Constants](../VS_visualcpp/Global-Constants.md)