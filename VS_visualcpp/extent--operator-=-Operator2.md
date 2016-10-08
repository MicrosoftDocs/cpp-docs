---
title: "extent::operator-= Operator2"
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
H1: extent::operator-= Operator
ms.assetid: c5fe649b-fdbc-41a0-9c6f-7834fb28b4cf
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
# extent::operator-= Operator2
Subtracts the specified number from each element of the [extent](../VS_visualcpp/extent-Class--C---AMP-.md) object.  
  
## Syntax  
  
```  
extent<_Rank>&  operator-= (  
    const extent<_Rank>& _Rhs ) restrict(amp,cpu);  
  
extent<_Rank>&  operator-= (  
    const index<_Rank>& _Rhs ) restrict(amp,cpu);  
  
extent<_Rank>&  operator-= (  
    int _Rhs ) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Rhs`  
 The number to subtract.  
  
## Return Value  
 The resulting `extent` object.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [extent Class](../VS_visualcpp/extent-Class--C---AMP-.md)