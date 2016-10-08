---
title: "norm_4::norm_4 Constructor"
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
ms.assetid: 637030f2-7534-48ab-a6a1-fd3a10d011ad
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
# norm_4::norm_4 Constructor
Default constructor, initializes all elements with 0.  
  
## Syntax  
  
```  
norm_4() restrict(amp,cpu);  
norm_4(  
   norm _V0,  
   norm _V1,  
   norm _V2,  
   norm _V3  
) restrict(amp,cpu);  
norm_4(  
   float _V0,  
   float _V1,  
   float _V2,  
   float _V3  
) restrict(amp,cpu);  
norm_4(  
   unorm _V0,  
   unorm _V1,  
   unorm _V2,  
   unorm _V3  
) restrict(amp,cpu);  
norm_4(  
   norm _V  
) restrict(amp,cpu);  
explicit norm_4(  
   float _V  
) restrict(amp,cpu);  
norm_4(  
   const norm_4& _Other  
) restrict(amp,cpu);  
explicit inline norm_4(  
   const uint_4& _Other  
) restrict(amp,cpu);  
explicit inline norm_4(  
   const int_4& _Other  
) restrict(amp,cpu);  
explicit inline norm_4(  
   const float_4& _Other  
) restrict(amp,cpu);  
explicit inline norm_4(  
   const unorm_4& _Other  
) restrict(amp,cpu);  
explicit inline norm_4(  
   const double_4& _Other  
) restrict(amp,cpu);  
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
 [norm_4 Class](../VS_visualcpp/norm_4-Class.md)