---
description: "Learn more about: CAutoPtrElementTraits Class"
title: "CAutoPtrElementTraits Class"
ms.date: "11/04/2016"
f1_keywords: ["CAutoPtrElementTraits", "ATLCOLL/ATL::CAutoPtrElementTraits", "ATLCOLL/ATL::CAutoPtrElementTraits::INARGTYPE", "ATLCOLL/ATL::CAutoPtrElementTraits::OUTARGTYPE"]
helpviewer_keywords: ["CAutoPtrElementTraits class"]
ms.assetid: 777c1b14-6ab7-491f-b9a5-be149e71d4a2
---
# CAutoPtrElementTraits Class

This class provides methods, static functions, and typedefs useful when creating collections of smart pointers.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<typename T>
class CAutoPtrElementTraits
    : public CDefaultElementTraits<ATL::CAutoPtr<T>>
```

#### Parameters

*T*<br/>
The pointer type.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CAutoPtrElementTraits::INARGTYPE](#inargtype)|The data type to use for adding elements to the collection class object.|
|[CAutoPtrElementTraits::OUTARGTYPE](#outargtype)|The data type to use for retrieving elements from the collection class object.|

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

## <a name="inargtype"></a> CAutoPtrElementTraits::INARGTYPE

The data type to use for adding elements to the collection class object.

```
typedef CAutoPtr<T>& INARGTYPE;
```

## <a name="outargtype"></a> CAutoPtrElementTraits::OUTARGTYPE

The data type to use for retrieving elements from the collection class object.

```
typedef T *& OUTARGTYPE;
```

## See also

[CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
