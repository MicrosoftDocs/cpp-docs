---
title: "CPrimitiveElementTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CPrimitiveElementTraits<T>"
  - "CPrimitiveElementTraits"
  - "ATL.CPrimitiveElementTraits"
  - "ATL::CPrimitiveElementTraits<T>"
  - "ATL::CPrimitiveElementTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPrimitiveElementTraits class"
ms.assetid: 21c1cea8-2c5a-486c-b65c-85490f3ed4e6
caps.latest.revision: 19
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
# CPrimitiveElementTraits Class
This class provides default methods and functions for a collection class composed of primitive data types.  
  
## Syntax  
  
```
template <typename   T> class CPrimitiveElementTraits :
    public CDefaultElementTraits<T>
```  
  
#### Parameters  
 `T`  
 The type of data to be stored in the collection class object.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CPrimitiveElementTraits::INARGTYPE](#cprimitiveelementtraits__inargtype)|The data type to use for adding elements to the collection class object.|  
|[CPrimitiveElementTraits::OUTARGTYPE](#cprimitiveelementtraits__outargtype)|The data type to use for retrieving elements from the collection class object.|  
  
## Remarks  
 This class provides default static functions and methods for moving, copying, comparing, and hashing primitive data type elements stored in a collection class object.  
  
 For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).  
  
## Inheritance Hierarchy  
 [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)  
  
 [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)  
  
 [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)  
  
 [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)  
  
 `CPrimitiveElementTraits`  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cprimitiveelementtraits__inargtype"></a>  CPrimitiveElementTraits::INARGTYPE  
 The data type to use for adding elements to the collection class object.  
  
```
typedef T INARGTYPE;
```  
  
##  <a name="cprimitiveelementtraits__outargtype"></a>  CPrimitiveElementTraits::OUTARGTYPE  
 The data type to use for retrieving elements from the collection class object.  
  
```
typedef T& OUTARGTYPE;
```  
  
## See Also  
 [CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
