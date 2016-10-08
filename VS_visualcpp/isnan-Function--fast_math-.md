---
title: "isnan Function (fast_math)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 86d7a8d7-2607-4097-a399-801ebfe74730
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# isnan Function (fast_math)
Determines whether the argument is a NaN  
  
## Syntax  
  
```  
inline int isnan(    float _X ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 Floating-point value  
  
## Return Value  
 Returns a nonzero value if and only if the argument has a NaN value  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::fast_math  
  
## See Also  
 [Concurrency::fast_math Namespace](../VS_visualcpp/Concurrency--fast_math-Namespace.md)