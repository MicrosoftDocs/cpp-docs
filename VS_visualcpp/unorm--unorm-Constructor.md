---
title: "unorm::unorm Constructor"
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
ms.assetid: 4ad3f565-4e8c-437b-8c35-0d69d29f5ed9
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
# unorm::unorm Constructor
Default constructor. Initialize to 0.0f.  
  
## Syntax  
  
```  
unorm(  
   void  
) restrict(amp,cpu);  
explicit unorm(  
   float _V  
) restrict(amp,cpu);  
explicit unorm(  
   unsigned int _V  
) restrict(amp,cpu);  
explicit unorm(  
   int _V  
) restrict(amp,cpu);  
explicit unorm(  
   double _V  
) restrict(amp,cpu);  
unorm(  
   const unorm& _Other  
) restrict(amp,cpu);  
inline explicit unorm(  
   const norm& _Other  
) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_V`  
 The value used to initialize.  
  
 `_Other`  
 The norm object used to initialize.  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
## See Also  
 [unorm Class](../VS_visualcpp/unorm-Class.md)