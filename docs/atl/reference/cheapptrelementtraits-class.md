---
description: "Learn more about: CHeapPtrElementTraits Class"
title: "CHeapPtrElementTraits Class"
ms.date: "11/04/2016"
f1_keywords: ["CHeapPtrElementTraits", "ATLCOLL/ATL::CHeapPtrElementTraits", "ATLCOLL/ATL::CHeapPtrElementTraits::INARGTYPE", "ATLCOLL/ATL::CHeapPtrElementTraits::OUTARGTYPE"]
helpviewer_keywords: ["CHeapPtrElementTraits class"]
ms.assetid: 910e0e06-3c8b-4242-bf00-b57eb74fbc77
---
# CHeapPtrElementTraits Class

This class provides methods, static functions, and typedefs useful when creating collections of heap pointers.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<typename T, class Allocator = ATL::CCRTAllocator>
class CHeapPtrElementTraits :
   public CDefaultElementTraits<ATL::CHeapPtr<T, Allocator>>
```

#### Parameters

*T*<br/>
The object type to be stored in the collection class.

*Allocator*<br/>
The memory allocation class to use. The default is [CCRTAllocator](../../atl/reference/ccrtallocator-class.md).

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CHeapPtrElementTraits::INARGTYPE](#inargtype)|The data type to use for adding elements to the collection class object.|
|[CHeapPtrElementTraits::OUTARGTYPE](#outargtype)|The data type to use for retrieving elements from the collection class object.|

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

## <a name="inargtype"></a> CHeapPtrElementTraits::INARGTYPE

The data type to use for adding elements to the collection class object.

```
typedef CHeapPtr<T, Allocator>& INARGTYPE;
```

## <a name="outargtype"></a> CHeapPtrElementTraits::OUTARGTYPE

The data type to use for retrieving elements from the collection class object.

```
typedef T *& OUTARGTYPE;
```

## See also

[CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[CComHeapPtr Class](../../atl/reference/ccomheapptr-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
