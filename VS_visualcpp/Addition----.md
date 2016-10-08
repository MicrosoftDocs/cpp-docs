---
title: "Addition (+)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: b9014fee-825d-46ef-91db-5d46807081fc
caps.latest.revision: 7
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
# Addition (+)
The addition operator (**+**) causes its two operands to be added. Both operands can be either integral or floating types, or one operand can be a pointer and the other an integer.  
  
 When an integer is added to a pointer, the integer value (*i*) is converted by multiplying it by the size of the value that the pointer addresses. After conversion, the integer value represents *i* memory positions, where each position has the length specified by the pointer type. When the converted integer value is added to the pointer value, the result is a new pointer value representing the address *i* positions from the original address. The new pointer value addresses a value of the same type as the original pointer value and therefore is the same as array indexing (see [One-Dimensional Arrays](../VS_visualcpp/One-Dimensional-Arrays.md) and [Multidimensional Arrays](../VS_visualcpp/Multidimensional-Arrays--C-.md)). If the sum pointer points outside the array, except at the first location beyond the high end, the result is undefined. For more information, see [Pointer Arithmetic](../VS_visualcpp/Pointer-Arithmetic.md).  
  
## See Also  
 [C Additive Operators](../VS_visualcpp/C-Additive-Operators.md)