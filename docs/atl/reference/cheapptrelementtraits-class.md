---
title: "CHeapPtrElementTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CHeapPtrElementTraits"
  - "CHeapPtrElementTraits"
  - "ATL::CHeapPtrElementTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHeapPtrElementTraits class"
ms.assetid: 910e0e06-3c8b-4242-bf00-b57eb74fbc77
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
# CHeapPtrElementTraits Class
This class provides methods, static functions, and typedefs useful when creating collections of heap pointers.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template<typename T, class Allocator = ATL::CCRTAllocator>  class CHeapPtrElementTraits : public CDefaultElementTraits<
    ATL::CHeapPtr<T,
 Allocator>>
```  
  
#### Parameters  
 `T`  
 The object type to be stored in the collection class.  
  
 `Allocator`  
 The memory allocation class to use. The default is [CCRTAllocator](../../atl/reference/ccrtallocator-class.md).  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CHeapPtrElementTraits::INARGTYPE](#cheapptrelementtraits__inargtype)|The data type to use for adding elements to the collection class object.|  
|[CHeapPtrElementTraits::OUTARGTYPE](#cheapptrelementtraits__outargtype)|The data type to use for retrieving elements from the collection class object.|  
  
## Remarks  
 This class provides methods, static functions, and typedefs for aiding the creation of collection class objects containing heap pointers. The class `CHeapPtrList` derives from `CHeapPtrElementTraits`.  
  
 For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).  
  
## Inheritance Hierarchy  
 [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)  
  
 [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)  
  
 [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)  
  
 [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)  
  
 `CHeapPtrElementTraits`  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cheapptrelementtraits__inargtype"></a>  CHeapPtrElementTraits::INARGTYPE  
 The data type to use for adding elements to the collection class object.  
  
```
typedef CHeapPtr<T,
    Allocator>& INARGTYPE;
```  
  
##  <a name="cheapptrelementtraits__outargtype"></a>  CHeapPtrElementTraits::OUTARGTYPE  
 The data type to use for retrieving elements from the collection class object.  
  
```
typedef T *& OUTARGTYPE;
```  
  
## See Also  
 [CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md)   
 [CComHeapPtr Class](../../atl/reference/ccomheapptr-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
