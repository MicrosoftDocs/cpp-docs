---
title: "index::operator-= Operator1"
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
H1: index::operator-= Operator
ms.assetid: ee9f8b24-7309-4f1c-b845-4436d0d4f0ca
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
# index::operator-= Operator1
Subtracts the specified number from each element of the [index](../VS_visualcpp/index-Class.md) object.  
  
## Syntax  
  
```  
index<_Rank>&  operator-= (  
    const index<_Rank>& _Rhs ) restrict(amp,cpu);  
  
index<_Rank>&  operator-= (  
    int _Rhs ) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Rhs`  
 The number to subtract.  
  
## Return Value  
 The `index` object.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [index Class](../VS_visualcpp/index-Class.md)