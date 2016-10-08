---
title: "fmod Function (C++ AMP)"
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
ms.assetid: 9d4dfd2b-963b-4316-acec-a4421176a7e6
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
# fmod Function (C++ AMP)
Computes the remainder of the first specified argument divided by the second specified argument.  
  
## Syntax  
  
```  
inline float fmod(  
    float _X,  
    float _Y ) restrict(amp);  
  
inline double fmod(  
    double _X,  
    double _Y ) restrict(amp);  
```  
  
#### Parameters  
 `_X`  
 The first floating-point argument.  
  
 `_Y`  
 The second floating-point argument.  
  
## Return Value  
 The remainder of `_X` divided by `_Y`; that is, the value of `_X` - `_Y`*n*, where *n* is a whole integer such that the magnitude of `_X` - `_Y`*n* is less than the magnitude of `_Y`.  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::precise_math  
  
## See Also  
 [Concurrency::precise_math Namespace](../VS_visualcpp/Concurrency--precise_math-Namespace.md)