---
title: "texture::get_row_pitch Method"
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
ms.assetid: 95c93b71-4e62-4084-8a8b-98801690abe9
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
# texture::get_row_pitch Method
Returns the number of bytes between each row in a 2-dimensional staging texture, or between each row of a depth slice in 3-dimensional staging texture.  
  
## Syntax  
  
```  
unsigned int get_row_pitch() const restrict(cpu);  
```  
  
## Return Value  
 The number of bytes between each row in a 2-dimensional staging texture, or between each row of a depth slice in 3-dimensional staging texture.  
  
## Remarks  
 Given the address of any element in the first row of the 2D texture or depth slice, you can add `row_pitch` to calculate the address of the same element in the second row of the same texture or depth slice, and similarly for subsequent rows. The value of `row_pitch` compensates for the size of the texture elements as well as any additional padding that might exist between rows within the texture or depth slice. The value of `row_pitch` does not compensate for any additional padding between depth slices in a 3-dimensional texture, and can’t be used to move between depth slices; to move between depth slices, use the [texture::get_depth_pitch Method](../VS_visualcpp/texture--get_depth_pitch-Method.md) instead.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** concurrency::graphics  
  
## See Also  
 [texture Class](../VS_visualcpp/texture-Class.md)