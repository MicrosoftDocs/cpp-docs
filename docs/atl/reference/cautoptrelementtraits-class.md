---
title: "CAutoPtrElementTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CAutoPtrElementTraits"
  - "CAutoPtrElementTraits"
  - "ATL::CAutoPtrElementTraits<T>"
  - "ATL.CAutoPtrElementTraits<T>"
  - "ATL::CAutoPtrElementTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAutoPtrElementTraits class"
ms.assetid: 777c1b14-6ab7-491f-b9a5-be149e71d4a2
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CAutoPtrElementTraits Class
This class provides methods, static functions, and typedefs useful when creating collections of smart pointers.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template<typename T>  class CAutoPtrElementTraits : public CDefaultElementTraits<
    ATL::CAutoPtr<T>>
```    
  
#### Parameters  
 `T`  
 The pointer type.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoPtrElementTraits::INARGTYPE](#cautoptrelementtraits__inargtype)|The data type to use for adding elements to the collection class object.|  
|[CAutoPtrElementTraits::OUTARGTYPE](#cautoptrelementtraits__outargtype)|The data type to use for retrieving elements from the collection class object.|  
  
## Remarks  
 This class provides methods, static functions, and typedefs for aiding the creation of collection class objects containing smart pointers. The classes [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) and [CAutoPtrList](../../atl/reference/cautoptrlist-class.md) derive from `CAutoPtrElementTraits`. If building a collection of smart pointers that requires vector new and delete operators, use [CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md) instead.  
  
## Inheritance Hierarchy  
 [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)  
  
 [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)  
  
 [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)  
  
 [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)  
  
 `CAutoPtrElementTraits`  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cautoptrelementtraits__inargtype"></a>  CAutoPtrElementTraits::INARGTYPE  
 The data type to use for adding elements to the collection class object.  
  
```
typedef CAutoPtr<T>& INARGTYPE;
```  
  
##  <a name="cautoptrelementtraits__outargtype"></a>  CAutoPtrElementTraits::OUTARGTYPE  
 The data type to use for retrieving elements from the collection class object.  
  
```
typedef T *& OUTARGTYPE;
```  
  
## See Also  
 [CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
