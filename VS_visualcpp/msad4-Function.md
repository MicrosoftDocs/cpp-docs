---
title: "msad4 Function"
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
ms.assetid: faa3bc53-08ef-4e32-a358-61bf2b1c6210
caps.latest.revision: 3
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
# msad4 Function
Compares a 4-byte reference value and an 8-byte source value and accumulates a vector of 4 sums. Each sum corresponds to the masked sum of absolute differences of different byte alignments between the reference value and the source value.  
  
## Syntax  
  
```  
inline uint4 msad4(  
   uint _Reference,  
   uint2 _Source,  
   uint4 _Accum  
) restrict(amp);  
```  
  
#### Parameters  
 `_Reference`  
 The reference array of 4 bytes in one uint value  
  
 `_Source`  
 The source array of 8 bytes in a vector of two uint values.  
  
 `_Accum`  
 A vector of 4 values to be added to the masked sum of absolute differences of the different byte alignments between the reference value and the source value.  
  
## Return Value  
 Returns a vector of 4 sums. Each sum corresponds to the masked sum of absolute differences of different byte alignments between the reference value and the source value.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** concurrency::graphics::direct3d  
  
## See Also  
 [Concurrency::graphics::direct3d Namespace](../VS_visualcpp/Concurrency--graphics--direct3d-Namespace.md)