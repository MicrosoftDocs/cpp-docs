---
title: "identity Structure"
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
ms.assetid: 990756fd-7969-4b39-ad7e-0878e8dac8fd
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
# identity Structure
A struct that provides a type definition as the template parameter.  
  
## Syntax  
  
```  
template<class Type>  
   struct identity {  
      typedef Type type;  
      Type operator()(const Type& _Left) const;  
   };  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Left`|The value to identify.|  
  
## Remarks  
 The class contains the public type definition `type`, which is the same as the template parameter Type. It is used in conjunction with template function [forward](../VS_visualcpp/-utility--functions.md#forward) to ensure that a function parameter has the desired type.  
  
 For compatibility with older code, the class also defines the identity function `operator()` which returns its argument `_Left`.  
  
## Requirements  
 **Header:** <utility\>  
  
 **Namespace:** std  
  
## See Also  
 [<utility\>](../VS_visualcpp/-utility-.md)