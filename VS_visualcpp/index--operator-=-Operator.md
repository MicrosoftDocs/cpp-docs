---
title: "index::operator+= Operator"
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
ms.assetid: 08c6c3a4-7d65-4870-8213-4cda9132895c
caps.latest.revision: 11
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
# index::operator+= Operator
Adds the specified number to each element of the [index](../VS_visualcpp/index-Class.md) object.  
  
## Syntax  
  
```  
index<_Rank>&  operator+= (  
    const index<_Rank>& _Rhs ) restrict(amp,cpu);  
  
index<_Rank>&  operator+= (  
    int _Rhs ) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Rhs`  
 The number to add.  
  
## Return Value  
 The `index` object.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [index Class](../VS_visualcpp/index-Class.md)