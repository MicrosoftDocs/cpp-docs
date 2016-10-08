---
title: "int_2::int_2 Constructor"
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
ms.assetid: bbf5ed37-6b54-4641-adc8-06099528beee
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
# int_2::int_2 Constructor
Default constructor, initializes all elements with 0.  
  
## Syntax  
  
```  
int_2() restrict(amp,cpu);  
int_2(  
   int _V0,  
   int _V1  
) restrict(amp,cpu);  
int_2(  
   int _V  
) restrict(amp,cpu);  
int_2(  
   const int_2& _Other  
) restrict(amp,cpu);  
explicit inline int_2(  
   const uint_2& _Other  
) restrict(amp,cpu);  
explicit inline int_2(  
   const float_2& _Other  
) restrict(amp,cpu);  
explicit inline int_2(  
   const unorm_2& _Other  
) restrict(amp,cpu);  
explicit inline int_2(  
   const norm_2& _Other  
) restrict(amp,cpu);  
explicit inline int_2(  
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
 [int_2 Class](../VS_visualcpp/int_2-Class.md)