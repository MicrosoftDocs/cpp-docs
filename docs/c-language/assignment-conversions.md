---
title: "Assignment Conversions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "conversions, assignment"
  - "assignment conversions"
ms.assetid: 4ee01013-de32-4aae-b12e-0051d0cde927
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Assignment Conversions
In assignment operations, the type of the value being assigned is converted to the type of the variable that receives the assignment. C allows conversions by assignment between integral and floating types, even if information is lost in the conversion. The conversion method used depends on the types involved in the assignment, as described in [Usual Arithmetic Conversions](../c-language/usual-arithmetic-conversions.md) and in the following sections:  
  
-   [Conversions from Signed Integral Types](../c-language/conversions-from-signed-integral-types.md)  
  
-   [Conversions from Unsigned Integral Types](../c-language/conversions-from-unsigned-integral-types.md)  
  
-   [Conversions from Floating-Point Types](../c-language/conversions-from-floating-point-types.md)  
  
-   [Conversions to and from Pointer Types](../c-language/conversions-to-and-from-pointer-types.md)  
  
-   [Conversions from Other Types](../c-language/conversions-from-other-types.md)  
  
 Type qualifiers do not affect the allowability of the conversion although a **const** l-value cannot be used on the left side of the assignment.  
  
## See Also  
 [Type Conversions](../c-language/type-conversions-c.md)