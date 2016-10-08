---
title: "CDefaultElementTraits Class"
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
ms.assetid: ac5ee610-7957-4b7c-92b6-38ff72e4118e
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
# CDefaultElementTraits Class
This class provides default methods and functions for a collection class.  
  
## Syntax  
  
```  
template<  
    typename T>  
    class CDefaultElementTraits : public CElementTraitsBase< T  
    >,  
    public CDefaultHashTraits< T  
    >,  
    public CDefaultCompareTraits< T  
    >  
```  
  
#### Parameters  
 `T`  
 The type of data to be stored in the collection.  
  
## Remarks  
 This class provides default static functions and methods for moving, copying, comparing, and hashing elements stored in a collection class object. This class derives its functions and methods from [CElementTraitsBase](../VS_visualcpp/CElementTraitsBase-Class.md), [CDefaultHashTraits](../VS_visualcpp/CDefaultHashTraits-Class.md), and [CDefaultCompareTraits](../VS_visualcpp/CDefaultCompareTraits-Class.md), and is utilized by [CElementTraits](../VS_visualcpp/CElementTraits-Class.md), [CPrimitiveElementTraits](../VS_visualcpp/CPrimitiveElementTraits-Class.md), and [CHeapPtrElementTraits](../VS_visualcpp/CHeapPtrElementTraits-Class.md).  
  
 For more information, see [ATL Collection Classes](../VS_visualcpp/ATL-Collection-Classes.md).  
  
## Requirements  
 **Header:** atlcoll.h  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)