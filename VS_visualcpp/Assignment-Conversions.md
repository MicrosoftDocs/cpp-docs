---
title: "Assignment Conversions"
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
ms.assetid: 4ee01013-de32-4aae-b12e-0051d0cde927
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
# Assignment Conversions
In assignment operations, the type of the value being assigned is converted to the type of the variable that receives the assignment. C allows conversions by assignment between integral and floating types, even if information is lost in the conversion. The conversion method used depends on the types involved in the assignment, as described in [Usual Arithmetic Conversions](../VS_visualcpp/Usual-Arithmetic-Conversions.md) and in the following sections:  
  
-   [Conversions from Signed Integral Types](../VS_visualcpp/Conversions-from-Signed-Integral-Types.md)  
  
-   [Conversions from Unsigned Integral Types](../VS_visualcpp/Conversions-from-Unsigned-Integral-Types.md)  
  
-   [Conversions from Floating-Point Types](../VS_visualcpp/Conversions-from-Floating-Point-Types.md)  
  
-   [Conversions to and from Pointer Types](../VS_visualcpp/Conversions-to-and-from-Pointer-Types.md)  
  
-   [Conversions from Other Types](../VS_visualcpp/Conversions-from-Other-Types.md)  
  
 Type qualifiers do not affect the allowability of the conversion although a **const** l-value cannot be used on the left side of the assignment.  
  
## See Also  
 [Type Conversions](../VS_visualcpp/Type-Conversions--C-.md)