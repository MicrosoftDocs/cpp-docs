---
title: "index::operator-= Operator2"
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
H1: index::operator/= Operator
ms.assetid: 48191629-07ee-45cc-b4de-ba48acacbe9a
caps.latest.revision: 13
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
# index::operator-= Operator2
Divides each element in the [index](../VS_visualcpp/index-Class.md) object by the specified number.  
  
## Syntax  
  
```  
index<_Rank>&  operator/= (  
    int _Rhs ) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Rhs`  
 The number to divide by.  
  
## Return Value  
 The `index` object.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [index Class](../VS_visualcpp/index-Class.md)