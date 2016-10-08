---
title: "index::operatorOperator"
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
ms.assetid: cfcc905c-e573-4607-b7de-8ed7661410ae
caps.latest.revision: 14
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
# index::operatorOperator
Returns the component of the index at the specified location.  
  
## Syntax  
  
```  
int operator[] (  
    unsigned _Index ) const restrict(amp,cpu);  
  
int&  operator[] (  
    unsigned _Index ) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Index`  
 An integer from 0 through the rank minus 1.  
  
## Return Value  
 The element that's at the specified index.  
  
## Remarks  
 This following example displays the component values of the index.  
  
```  
  
// Prints 1 2 3.  
concurrency::index<3> idx(1, 2, 3);  
std::cout << idx[0] << "\n";  
std::cout << idx[1] << "\n";  
std::cout << idx[2] << "\n";  
  
```  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [index Class](../VS_visualcpp/index-Class.md)