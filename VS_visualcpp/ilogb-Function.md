---
title: "ilogb Function"
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
ms.assetid: 8c98b516-c4bb-46fd-a3b0-fc67a0fa9746
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
# ilogb Function
Extract the exponent of _X as a signed int value  
  
## Syntax  
  
```  
inline int ilogb(  
    float _X ) restrict(amp);  
  
inline int ilogb(  
    double _X ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 Floating-point value  
  
## Return Value  
 Returns the exponent of _X as a signed int value  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::precise_math  
  
## See Also  
 [Concurrency::precise_math Namespace](../VS_visualcpp/Concurrency--precise_math-Namespace.md)