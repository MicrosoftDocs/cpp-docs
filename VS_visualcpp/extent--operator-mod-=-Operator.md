---
title: "extent::operator(mod)= Operator"
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
ms.assetid: c0a79fb9-d464-4cd6-9d86-85b8fc9198d1
caps.latest.revision: 13
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
# extent::operator(mod)= Operator
Calculates the modulus (remainder) of each element in the [extent](../VS_visualcpp/extent-Class--C---AMP-.md) when that element is divided by a number.  
  
## Syntax  
  
```  
extent<_Rank>&  operator%= (  
    int _Rhs ) restrict(cpu, direct3d);  
```  
  
#### Parameters  
 `_Rhs`  
 The number to find the modulus of.  
  
## Return Value  
 The `extent` object.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [extent Class](../VS_visualcpp/extent-Class--C---AMP-.md)