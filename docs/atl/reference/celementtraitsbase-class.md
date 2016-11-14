---
title: "CElementTraitsBase Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CElementTraitsBase"
  - "ATL::CElementTraitsBase"
  - "ATL.CElementTraitsBase<T>"
  - "ATL::CElementTraitsBase<T>"
  - "ATL.CElementTraitsBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CElementTraitsBase class"
ms.assetid: 75284caf-347e-4355-a7d8-efc708dd514a
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
# CElementTraitsBase Class
This class provides default copy and move methods for a collection class.  
  
## Syntax  
  
```
template<typename T>  class CElementTraitsBase
```  
  
#### Parameters  
 `T`  
 The type of data to be stored in the collection.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CElementTraitsBase::INARGTYPE](#celementtraitsbase__inargtype)|The data type to use for adding elements to the collection class object.|  
|[CElementTraitsBase::OUTARGTYPE](#celementtraitsbase__outargtype)|The data type to use for retrieving elements from the collection class object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CElementTraitsBase::CopyElements](#celementtraitsbase__copyelements)|Call this method to copy elements stored in a collection class object.|  
|[CElementTraitsBase::RelocateElements](#celementtraitsbase__relocateelements)|Call this method to relocate elements stored in a collection class object.|  
  
## Remarks  
 This base class defines methods for copying and relocating elements in a collection class. It is utilized by the classes [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md), [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md), and [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).  
  
 For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="celementtraitsbase__copyelements"></a>  CElementTraitsBase::CopyElements  
 Call this method to copy elements stored in a collection class object.  
  
```
static void CopyElements(
    T* pDest,
    const T* pSrc,
    size_t nElements);
```  
  
### Parameters  
 `pDest`  
 Pointer to the first element that will receive the copied data.  
  
 `pSrc`  
 Pointer to the first element to copy.  
  
 `nElements`  
 The number of elements to copy.  
  
### Remarks  
 The source and destination elements should not overlap.  
  
##  <a name="celementtraitsbase__inargtype"></a>  CElementTraitsBase::INARGTYPE  
 The data type to use for adding elements to the collection.  
  
```
typedef const T& INARGTYPE;
```  
  
##  <a name="celementtraitsbase__outargtype"></a>  CElementTraitsBase::OUTARGTYPE  
 The data type to use for retrieving elements from the collection.  
  
```
typedef T& OUTARGTYPE;
```  
  
##  <a name="celementtraitsbase__relocateelements"></a>  CElementTraitsBase::RelocateElements  
 Call this method to relocate elements stored in a collection class object.  
  
```
static void RelocateElements(
    T* pDest,
    T* pSrc,
    size_t nElements);
```  
  
### Parameters  
 `pDest`  
 Pointer to the first element that will receive the relocated data.  
  
 `pSrc`  
 Pointer to the first element to relocate.  
  
 `nElements`  
 The number of elements to relocate.  
  
### Remarks  
 This method calls [memmove](../../c-runtime-library/reference/memmove-wmemmove.md), which is sufficient for most data types. If the objects being moved contain pointers to their own members, this method will need to be overridden.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
