---
title: "texture::operator() Operator"
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
ms.assetid: 831454d3-d1fa-4a82-a0c8-690155ae1ff0
caps.latest.revision: 5
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
# texture::operator() Operator
Returns the element value that is specified by the parameters.  
  
## Syntax  
  
```  
const value_type operator() (  
   const index<_Rank>& _Index  
) const restrict(amp);  
  
const value_type operator() (  
   int _I0  
) const restrict(amp);  
  
const value_type operator() (  
   int _I0,  
   int _I1  
) const restrict(amp);  
  
const value_type operator() (  
   int _I0,  
   int _I1,  
   int _I2  
) const restrict(amp);  
```  
  
#### Parameters  
 `_Index`  
 The index.  
  
 `_I0`  
 The most-significant component of the index.  
  
 `_I1`  
 The next-to-most-significant component of the index.  
  
 `_I2`  
 The least-significant component of the index.  
  
 `_Rank`  
 The rank of the index.  
  
## Return Value  
 The element value that is specified by the parameters.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** Concurrency::graphics  
  
## See Also  
 [texture Class](../VS_visualcpp/texture-Class.md)