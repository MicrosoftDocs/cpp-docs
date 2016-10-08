---
title: "index::operator(mod)= Operator"
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
ms.assetid: f36dd4b7-0815-4e70-b5a9-7f8d81995b8a
caps.latest.revision: 15
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
# index::operator(mod)= Operator
Calculates the modulus (remainder) of each element in the [index](../VS_visualcpp/index-Class.md) object when that element is divided by the specified number.  
  
## Syntax  
  
```  
index<_Rank>&  operator%= (  
    int _Rhs ) restrict(cpu, amp);  
```  
  
#### Parameters  
 `_Rhs`  
 The number to divide by to find the modulus.  
  
## Return Value  
 The [index](../VS_visualcpp/index-Class.md) object.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [index Class](../VS_visualcpp/index-Class.md)