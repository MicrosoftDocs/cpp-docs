---
title: "float_2::float_2 Constructor"
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
ms.assetid: ec3e63ff-9390-4d0f-b6da-24cd0042b412
caps.latest.revision: 4
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
# float_2::float_2 Constructor
Default constructor, initializes all elements with 0.  
  
## Syntax  
  
```  
float_2() restrict(amp,cpu);  
float_2(  
   float _V0,  
   float _V1  
) restrict(amp,cpu);  
float_2(  
   float _V  
) restrict(amp,cpu);  
float_2(  
   const float_2& _Other  
) restrict(amp,cpu);  
explicit inline float_2(  
   const uint_2& _Other  
) restrict(amp,cpu);  
explicit inline float_2(  
   const int_2& _Other  
) restrict(amp,cpu);  
explicit inline float_2(  
   const unorm_2& _Other  
) restrict(amp,cpu);  
explicit inline float_2(  
   const norm_2& _Other  
) restrict(amp,cpu);  
explicit inline float_2(  
   const double_2& _Other  
) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_V0`  
 The value to initialize element 0.  
  
 `_V1`  
 The value to initialize element 1.  
  
 `_V`  
 The value for initialization.  
  
 `_Other`  
 The object used to initialize.  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
## See Also  
 [float_2 Class](../VS_visualcpp/float_2-Class.md)