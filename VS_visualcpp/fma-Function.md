---
title: "fma Function"
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
ms.assetid: 4d6ca878-988c-4d65-9438-071586e61f7d
caps.latest.revision: 9
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
# fma Function
Computes the product of the first and second specified arguments, then adds the third specified argument to the result; the entire computation is performed as a single operation.  
  
## Syntax  
  
```  
inline float fma(  
    float _X,  
    float _Y,  
    float _Z ) restrict(amp);  
  
inline double fma(  
    double _X,  
    double _Y,  
    double _Z ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 The first floating-point argument.  
  
 `_Y`  
 The second floating-point argument.  
  
 `_Z`  
 The third floating-point argument.  
  
## Return Value  
 The result of the expression (`_X` * `_Y`) + `_Z`. The entire computation is performed as a single operation; that is, the sub-expressions are calculated to infinite precision, and only the final result is rounded.  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::precise_math  
  
## See Also  
 [Concurrency::precise_math Namespace](../VS_visualcpp/Concurrency--precise_math-Namespace.md)