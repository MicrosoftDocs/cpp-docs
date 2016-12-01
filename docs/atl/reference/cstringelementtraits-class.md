---
title: "CStringElementTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CStringElementTraits<T>"
  - "ATL::CStringElementTraits<T>"
  - "CStringElementTraits"
  - "ATL.CStringElementTraits"
  - "ATL::CStringElementTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStringElementTraits class"
ms.assetid: 74d7134b-099d-4455-bf91-3e68ccbf95bc
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
# CStringElementTraits Class
This class provides static functions used by collection classes storing `CString` objects.  
  
## Syntax  
  
```
template <typename   T>
    class CStringElementTraits
```  
  
#### Parameters  
 `T`  
 The type of data to be stored in the collection.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CStringElementTraits::INARGTYPE](#cstringelementtraits__inargtype)|The data type to use for adding elements to the collection class object.|  
|[CStringElementTraits::OUTARGTYPE](#cstringelementtraits__outargtype)|The data type to use for retrieving elements from the collection class object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CStringElementTraits::CompareElements](#cstringelementtraits__compareelements)|(Static) Call this function to compare two string elements for equality.|  
|[CStringElementTraits::CompareElementsOrdered](#cstringelementtraits__compareelementsordered)|(Static) Call this function to compare two string elements.|  
|[CStringElementTraits::CopyElements](#cstringelementtraits__copyelements)|(Static) Call this function to copy `CString` elements stored in a collection class object.|  
|[CStringElementTraits::Hash](#cstringelementtraits__hash)|(Static) Call this function to calculate a hash value for the given string element.|  
|[CStringElementTraits::RelocateElements](#cstringelementtraits__relocateelements)|(Static) Call this function to relocate `CString` elements stored in a collection class object.|  
  
## Remarks  
 This class provides static functions for copying, moving, and comparing strings and for creating a hash value. These functions are useful when using a collection class to store string-based data. Use [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md) when case-insensitive comparisons are required. Use [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md) when the string objects are to be dealt with as references.  
  
 For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).  
  
## Requirements  
 **Header:** cstringt.h  
  
##  <a name="cstringelementtraits__compareelements"></a>  CStringElementTraits::CompareElements  
 Call this static function to compare two string elements for equality.  
  
```
static bool CompareElements(
    INARGTYPE str1,
    INARGTYPE str2);
```  
  
### Parameters  
 `str1`  
 The first string element.  
  
 `str2`  
 The second string element.  
  
### Return Value  
 Returns true if the elements are equal, false otherwise.  
  
##  <a name="cstringelementtraits__compareelementsordered"></a>  CStringElementTraits::CompareElementsOrdered  
 Call this static function to compare two string elements.  
  
```
static int CompareElementsOrdered(
    INARGTYPE str1,
    INARGTYPE str2);
```  
  
### Parameters  
 `str1`  
 The first string element.  
  
 `str2`  
 The second string element.  
  
### Return Value  
 Zero if the strings are identical, < 0 if `str1` is less than `str2`, or > 0 if `str1` is greater than `str2`. The [CStringT::Compare](../../atl-mfc-shared/reference/cstringt-class.md#cstringt__compare) method is used to perform the comparisons.  

  
##  <a name="cstringelementtraits__copyelements"></a>  CStringElementTraits::CopyElements  
 Call this static function to copy `CString` elements stored in a collection class object.  
  
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
  
##  <a name="cstringelementtraits__hash"></a>  CStringElementTraits::Hash  
 Call this static function to calculate a hash value for the given string element.  
  
```
static ULONG Hash(INARGTYPE   str);
```  
  
### Parameters  
 `str`  
 The string element.  
  
### Return Value  
 Returns a hash value, calculated using the string's contents.  
  
##  <a name="cstringelementtraits__inargtype"></a>  CStringElementTraits::INARGTYPE  
 The data type to use for adding elements to the collection class object.  
  
```
typedef T::PCXSTR INARGTYPE;
```  
  
##  <a name="cstringelementtraits__outargtype"></a>  CStringElementTraits::OUTARGTYPE  
 The data type to use for retrieving elements from the collection class object.  
  
```
typedef T& OUTARGTYPE;
```  
  
##  <a name="cstringelementtraits__relocateelements"></a>  CStringElementTraits::RelocateElements  
 Call this static function to relocate `CString` elements stored in a collection class object.  
  
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
 This static function calls [memmove](../../c-runtime-library/reference/memmove-wmemmove.md), which is sufficient for most data types. If the objects being moved contain pointers to their own members, this static function will need to be overridden.  
  
## See Also  
 [CElementTraitsBase Class](../../atl/reference/celementtraitsbase-class.md)   
 [CStringElementTraitsI Class](../../atl/reference/cstringelementtraitsi-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
