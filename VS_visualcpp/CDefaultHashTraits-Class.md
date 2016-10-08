---
title: "CDefaultHashTraits Class"
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
ms.topic: reference
ms.assetid: d8ec4b37-6d58-447b-a0c1-8580c5b1ab85
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
# CDefaultHashTraits Class
This class provides a static function for calculating hash values.  
  
## Syntax  
  
```  
template<  
    typename T>  
    class CDefaultHashTraits  
```  
  
#### Parameters  
 `T`  
 The type of data to be stored in the collection.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDefaultHashTraits::Hash](../Topic/CDefaultHashTraits::Hash.md)|(Static) Call this function to calculate a hash value for a given element.|  
  
## Remarks  
 This class contains a single static function that returns a hash value for a given element. This class is utilized by the [CDefaultElementTraits Class](../VS_visualcpp/CDefaultElementTraits-Class.md).  
  
 For more information, see [ATL Collection Classes](../VS_visualcpp/ATL-Collection-Classes.md).  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cdefaulthashtraits__hash"></a>  CDefaultHashTraits::Hash  
 Call this function to calculate a hash value for a given element.  
  
```  
static ULONG Hash(    const T& element ) throw();  
```  
  
### Parameters  
 `element`  
 The element.  
  
### Return Value  
 Returns the hash value.  
  
### Remarks  
 The default hashing algorithm is very simple: the return value is the element number. Override this function if a more complicated algorithm is required.  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)