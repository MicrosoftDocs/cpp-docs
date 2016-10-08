---
title: "remquo Function"
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
ms.assetid: edc4a465-802c-4d19-921f-5bc3cd6f677f
caps.latest.revision: 10
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
# remquo Function
Computes the remainder of the first specified argument divided by the second specified argument. Also computes the quotient of the significand of the first specified argument divided by the significand of the second specified argument, and returns the quotient using the location specified in the third argument.  
  
## Syntax  
  
```  
inline float remquo(  
    float _X,  
    float _Y,  
    _Out_ int * _Quo ) restrict(amp);  
  
inline double remquo(  
    double _X,  
    double _Y,  
    _Out_ int * _Quo ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 The first floating-point argument.  
  
 `_Y`  
 The second floating-point argument.  
  
 `_Quo` (out parameter)  
 The address of an integer that’s used to return the quotient of the fractional bits of `_X` divided by the fractional bits of `_Y`.  
  
## Return Value  
 Returns the remainder of `_X` divided by `_Y`.  
  
## Remarks  
 The quotient of the significands of _X and _Y returned in the location specified by _Quo is given the same sign as the entire value of _X divided by the entire value of _Y. The significands include the implicit most-significant bit, together with the explicit lower-order bits.  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::precise_math  
  
## See Also  
 [Concurrency::precise_math Namespace](../VS_visualcpp/Concurrency--precise_math-Namespace.md)