---
title: "extent::operator*= Operator"
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
ms.assetid: 1d6c9274-c384-4bbb-ac3c-a68187dcff60
caps.latest.revision: 12
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
# extent::operator*= Operator
Multiplies each element in the [extent](../VS_visualcpp/extent-Class--C---AMP-.md) object by the specified number.  
  
## Syntax  
  
```  
extent<_Rank>&  operator*= (  
    int _Rhs ) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Rhs`  
 The number to multiply.  
  
## Return Value  
 The `extent` object.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [extent Class](../VS_visualcpp/extent-Class--C---AMP-.md)