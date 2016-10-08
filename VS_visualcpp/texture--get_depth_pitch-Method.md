---
title: "texture::get_depth_pitch Method"
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
ms.assetid: b170451e-5cf5-48ae-9c02-459dedf7ae48
caps.latest.revision: 4
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
# texture::get_depth_pitch Method
Returns the number of bytes between each depth slice in a 3D staging texture on the CPU.  
  
## Syntax  
  
```  
unsigned int get_depth_pitch() const restrict(cpu);  
```  
  
## Return Value  
 The number of bytes between each depth slice in a 3D staging texture on the CPU.  
  
## Remarks  
 Given the address of any element in the first depth slice of the staging texture, you can add `depth_pitch` to calculate the address of the same element in the second depth slice of the same texture, and similarly for subsequent depth slices. The value of `depth_pitch` compensates for the size of the texture elements as well as any additional padding that might exist between depth slices and between rows within each depth slice.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** concurrency::graphics  
  
## See Also  
 [texture Class](../VS_visualcpp/texture-Class.md)