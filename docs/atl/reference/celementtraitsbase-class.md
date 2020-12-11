---
description: "Learn more about: CElementTraitsBase Class"
title: "CElementTraitsBase Class"
ms.date: "11/04/2016"
f1_keywords: ["CElementTraitsBase", "ATLCOLL/ATL::CElementTraitsBase", "ATLCOLL/ATL::CElementTraitsBase::INARGTYPE", "ATLCOLL/ATL::CElementTraitsBase::OUTARGTYPE", "ATLCOLL/ATL::CElementTraitsBase::CopyElements", "ATLCOLL/ATL::CElementTraitsBase::RelocateElements"]
helpviewer_keywords: ["CElementTraitsBase class"]
ms.assetid: 75284caf-347e-4355-a7d8-efc708dd514a
---
# CElementTraitsBase Class

This class provides default copy and move methods for a collection class.

## Syntax

```
template<typename T>
class CElementTraitsBase
```

#### Parameters

*T*<br/>
The type of data to be stored in the collection.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CElementTraitsBase::INARGTYPE](#inargtype)|The data type to use for adding elements to the collection class object.|
|[CElementTraitsBase::OUTARGTYPE](#outargtype)|The data type to use for retrieving elements from the collection class object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CElementTraitsBase::CopyElements](#copyelements)|Call this method to copy elements stored in a collection class object.|
|[CElementTraitsBase::RelocateElements](#relocateelements)|Call this method to relocate elements stored in a collection class object.|

## Remarks

This base class defines methods for copying and relocating elements in a collection class. It is utilized by the classes [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md), [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md), and [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Requirements

**Header:** atlcoll.h

## <a name="copyelements"></a> CElementTraitsBase::CopyElements

Call this method to copy elements stored in a collection class object.

```
static void CopyElements(
    T* pDest,
    const T* pSrc,
    size_t nElements);
```

### Parameters

*pDest*<br/>
Pointer to the first element that will receive the copied data.

*pSrc*<br/>
Pointer to the first element to copy.

*nElements*<br/>
The number of elements to copy.

### Remarks

The source and destination elements should not overlap.

## <a name="inargtype"></a> CElementTraitsBase::INARGTYPE

The data type to use for adding elements to the collection.

```
typedef const T& INARGTYPE;
```

## <a name="outargtype"></a> CElementTraitsBase::OUTARGTYPE

The data type to use for retrieving elements from the collection.

```
typedef T& OUTARGTYPE;
```

## <a name="relocateelements"></a> CElementTraitsBase::RelocateElements

Call this method to relocate elements stored in a collection class object.

```
static void RelocateElements(
    T* pDest,
    T* pSrc,
    size_t nElements);
```

### Parameters

*pDest*<br/>
Pointer to the first element that will receive the relocated data.

*pSrc*<br/>
Pointer to the first element to relocate.

*nElements*<br/>
The number of elements to relocate.

### Remarks

This method calls [memmove](../../c-runtime-library/reference/memmove-wmemmove.md), which is sufficient for most data types. If the objects being moved contain pointers to their own members, this method will need to be overridden.

## See also

[Class Overview](../../atl/atl-class-overview.md)
