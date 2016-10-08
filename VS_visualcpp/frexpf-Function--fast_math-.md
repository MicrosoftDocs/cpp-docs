---
title: "frexpf Function (fast_math)"
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
ms.assetid: 685995c3-b055-4e8d-a74b-7f799563822d
caps.latest.revision: 6
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
# frexpf Function (fast_math)
Gets the mantissa and exponent of _X  
  
## Syntax  
  
```  
inline float frexpf(  
    float _X,  
    _Out_ int * _Exp ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 Floating-point value  
  
 `_Exp`  
 Returns the integer exponent of _X in floating-point value  
  
## Return Value  
 Returns the mantissa _X  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::fast_math  
  
## See Also  
 [Concurrency::fast_math Namespace](../VS_visualcpp/Concurrency--fast_math-Namespace.md)