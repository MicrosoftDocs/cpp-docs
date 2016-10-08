---
title: "double_4::double_4 Constructor"
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
ms.assetid: e0e99056-2b2b-4845-9b1e-085d0cb46fd3
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
# double_4::double_4 Constructor
Default constructor, initializes all elements with 0.  
  
## Syntax  
  
```  
double_4() restrict(amp, cpu);  
double_4(  
   double _V0,  
   double _V1,  
   double _V2,  
   double _V3  
) restrict(amp, cpu);  
double_4(  
   double _V  
) restrict(amp, cpu);  
double_4(  
   const double_4& _Other  
) restrict(amp, cpu);  
explicit inline double_4(  
   const uint_4& _Other  
) restrict(amp, cpu);  
explicit inline double_4(  
   const int_4& _Other  
) restrict(amp, cpu);  
explicit inline double_4(  
   const float_4& _Other  
) restrict(amp, cpu);  
explicit inline double_4(  
   const unorm_4& _Other  
) restrict(amp, cpu);  
explicit inline double_4(  
   const norm_4& _Other  
) restrict(amp, cpu);  
```  
  
#### Parameters  
 `_V0`  
 The value to initialize element 0.  
  
 `_V1`  
 The value to initialize element 1.  
  
 `_V2`  
 The value to initialize element 2.  
  
 `_V3`  
 The value to initialize element 3.  
  
 `_V`  
 The value for initialization.  
  
 `_Other`  
 The object used to initialize.  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
## See Also  
 [double_4 Class](../VS_visualcpp/double_4-Class.md)