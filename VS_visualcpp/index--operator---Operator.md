---
title: "index::operator++ Operator"
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
ms.assetid: 6ea31225-fecc-4bcf-a497-aad2a4a861f9
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
# index::operator++ Operator
Increments each element of the [index](../VS_visualcpp/index-Class.md) object.  
  
## Syntax  
  
```  
index<_Rank>&  operator++() restrict(amp,cpu);  
  
index<_Rank>  operator++(  
    int  
) restrict(amp,cpu);  
```  
  
## Return Value  
 For the prefix operator, the `index` object `(*this)`. For the suffix operator, a new `index` object.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [index Class](../VS_visualcpp/index-Class.md)