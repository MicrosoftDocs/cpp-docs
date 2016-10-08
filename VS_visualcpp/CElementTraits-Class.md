---
title: "CElementTraits Class"
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
ms.assetid: 496528e5-7f80-4b45-be0c-6f646feb43c5
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
# CElementTraits Class
This class is used by collection classes to provide methods and functions for moving, copying, comparison, and hashing operations.  
  
## Syntax  
  
```  
template<  
    typename T>  
    class CElementTraits : public CDefaultElementTraits< T  
    >  
```  
  
#### Parameters  
 `T`  
 The type of data to be stored in the collection.  
  
## Remarks  
 This class provides default static functions and methods for moving, copying, comparing, and hashing elements stored in a collection class object. `CElementTraits` is specified as the default provider of these operations by the collection classes [CAtlArray](../VS_visualcpp/CAtlArray-Class.md), [CAtlList](../VS_visualcpp/CAtlList-Class.md), [CRBMap](../VS_visualcpp/CRBMap-Class.md), [CRBMultiMap](../VS_visualcpp/CRBMultiMap-Class.md), and [CRBTree](../VS_visualcpp/CRBTree-Class.md).  
  
 The default implementations will suffice for simple data types, but if the collection classes are used to store more complex objects, the functions and methods must be overridden by user-supplied implementations.  
  
 For more information, see [ATL Collection Classes](../VS_visualcpp/ATL-Collection-Classes.md).  
  
## Requirements  
 **Header:** atlcoll.h  
  
## See Also  
 [CDefaultElementTraits Class](../VS_visualcpp/CDefaultElementTraits-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)