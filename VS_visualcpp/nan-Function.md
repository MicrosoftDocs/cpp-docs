---
title: "nan Function"
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
ms.assetid: d86fdf30-035e-4b40-9206-82729d08353a
caps.latest.revision: 8
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
# nan Function
Returns a quiet NaN  
  
## Syntax  
  
```  
inline double nan(    int _X ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 Integer value  
  
## Return Value  
 Returns a quiet NaN, if available, with the content indicated in _X  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::precise_math  
  
## See Also  
 [Concurrency::precise_math Namespace](../VS_visualcpp/Concurrency--precise_math-Namespace.md)