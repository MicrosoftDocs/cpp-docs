---
title: "texture::operatorOperator"
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
ms.assetid: a71de53c-9da9-4086-b56d-53b1ac4461db
caps.latest.revision: 4
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
# texture::operatorOperator
Returns the element that is at the specified index.  
  
## Syntax  
  
```  
const value_type operator[] (  
   const index<_Rank>& _Index  
) const restrict(amp);  
  
const value_type operator[] (  
   int _I0  
) const restrict(amp);  
```  
  
#### Parameters  
 `_Index`  
 The index.  
  
 `_I0`  
 The index.  
  
## Return Value  
 The element that is at the specified index.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** Concurrency::graphics  
  
## See Also  
 [texture Class](../VS_visualcpp/texture-Class.md)