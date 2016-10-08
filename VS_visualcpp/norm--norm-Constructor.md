---
title: "norm::norm Constructor"
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
ms.assetid: 8e0ef61f-f0a9-4e2a-802f-59330677a93a
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
# norm::norm Constructor
Default constructor. Initialize to 0.0f.  
  
## Syntax  
  
```  
norm(  
   void  
) restrict(amp,cpu);  
explicit norm(  
   float _V  
) restrict(amp,cpu);  
explicit norm(  
   unsigned int _V  
) restrict(amp,cpu);  
explicit norm(  
   int _V  
) restrict(amp,cpu);  
explicit norm(  
   double _V  
) restrict(amp,cpu);  
norm(  
   const norm& _Other  
) restrict(amp,cpu);  
norm(  
   const unorm& _Other  
) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_V`  
 The value used to initialize.  
  
 `_Other`  
 The object used to initialize.  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
## See Also  
 [norm Class](../VS_visualcpp/norm-Class.md)