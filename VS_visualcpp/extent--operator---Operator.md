---
title: "extent::operator++ Operator"
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
ms.assetid: 1abab27d-c57a-4a8e-b6ba-f624a9eb6512
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
# extent::operator++ Operator
Increments each element of the [extent](../VS_visualcpp/extent-Class--C---AMP-.md) object.  
  
## Syntax  
  
```  
extent<_Rank>&  operator++() restrict(amp,cpu);  
  
extent<_Rank>  operator++(  
    int  
) restrict(amp,cpu);  
```  
  
## Return Value  
 For the prefix operator, the `extent` object (`*this`). For the suffix operator, a new `extent` object.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [extent Class](../VS_visualcpp/extent-Class--C---AMP-.md)