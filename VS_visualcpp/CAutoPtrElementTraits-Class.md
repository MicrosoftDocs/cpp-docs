---
title: "CAutoPtrElementTraits Class"
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
ms.assetid: 777c1b14-6ab7-491f-b9a5-be149e71d4a2
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
# CAutoPtrElementTraits Class
This class provides methods, static functions, and typedefs useful when creating collections of smart pointers.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
template<  
    typename T>  
    class CAutoPtrElementTraits : public CDefaultElementTraits<  
    ATL::CAutoPtr< T>>  
```  
  
#### Parameters  
 `T`  
 The pointer type.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoPtrElementTraits::INARGTYPE](../Topic/CAutoPtrElementTraits::INARGTYPE.md)|The data type to use for adding elements to the collection class object.|  
|[CAutoPtrElementTraits::OUTARGTYPE](../Topic/CAutoPtrElementTraits::OUTARGTYPE.md)|The data type to use for retrieving elements from the collection class object.|  
  
## Remarks  
 This class provides methods, static functions, and typedefs for aiding the creation of collection class objects containing smart pointers. The classes [CAutoPtrArray](../VS_visualcpp/CAutoPtrArray-Class.md) and [CAutoPtrList](../VS_visualcpp/CAutoPtrList-Class.md) derive from `CAutoPtrElementTraits`. If building a collection of smart pointers that requires vector new and delete operators, use [CAutoVectorPtrElementTraits](../VS_visualcpp/CAutoVectorPtrElementTraits-Class.md) instead.  
  
## Inheritance Hierarchy  
 [CDefaultCompareTraits](../VS_visualcpp/CDefaultCompareTraits-Class.md)  
  
 [CDefaultHashTraits](../VS_visualcpp/CDefaultHashTraits-Class.md)  
  
 [CElementTraitsBase](../VS_visualcpp/CElementTraitsBase-Class.md)  
  
 [CDefaultElementTraits](../VS_visualcpp/CDefaultElementTraits-Class.md)  
  
 `CAutoPtrElementTraits`  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cautoptrelementtraits__inargtype"></a>  CAutoPtrElementTraits::INARGTYPE  
 The data type to use for adding elements to the collection class object.  
  
```  
typedef CAutoPtr<T> & INARGTYPE;  
```  
  
##  <a name="cautoptrelementtraits__outargtype"></a>  CAutoPtrElementTraits::OUTARGTYPE  
 The data type to use for retrieving elements from the collection class object.  
  
```  
typedef T *& OUTARGTYPE;  
```  
  
## See Also  
 [CDefaultElementTraits Class](../VS_visualcpp/CDefaultElementTraits-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)