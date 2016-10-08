---
title: "unorm_3::unorm_3 Constructor"
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
ms.assetid: 6a9c4ce0-6949-4982-9468-ab74fa8df177
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
# unorm_3::unorm_3 Constructor
Default constructor, initializes all elements with 0.  
  
## Syntax  
  
```  
unorm_3() restrict(amp,cpu);  
unorm_3(  
   unorm _V0,  
   unorm _V1,  
   unorm _V2  
) restrict(amp,cpu);  
unorm_3(  
   float _V0,  
   float _V1,  
   float _V2  
) restrict(amp,cpu);  
unorm_3(  
   unorm _V  
) restrict(amp,cpu);  
explicit unorm_3(  
   float _V  
) restrict(amp,cpu);  
unorm_3(  
   const unorm_3& _Other  
) restrict(amp,cpu);  
explicit inline unorm_3(  
   const uint_3& _Other  
) restrict(amp,cpu);  
explicit inline unorm_3(  
   const int_3& _Other  
) restrict(amp,cpu);  
explicit inline unorm_3(  
   const float_3& _Other  
) restrict(amp,cpu);  
explicit inline unorm_3(  
   const norm_3& _Other  
) restrict(amp,cpu);  
explicit inline unorm_3(  
   const double_3& _Other  
) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_V0`  
 The value to initialize element 0.  
  
 `_V1`  
 The value to initialize element 1.  
  
 `_V2`  
 The value to initialize element 2.  
  
 `_V`  
 The value for initialization.  
  
 `_Other`  
 The object used to initialize.  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
## See Also  
 [unorm_3 Class](../VS_visualcpp/unorm_3-Class.md)