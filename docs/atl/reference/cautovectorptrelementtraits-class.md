---
description: "Learn more about: CAutoVectorPtrElementTraits Class"
title: "CAutoVectorPtrElementTraits Class"
ms.date: "11/04/2016"
f1_keywords: ["CAutoVectorPtrElementTraits", "ATLCOLL/ATL::CAutoVectorPtrElementTraits", "ATLCOLL/ATL::CAutoVectorPtrElementTraits::INARGTYPE", "ATLCOLL/ATL::CAutoVectorPtrElementTraits::OUTARGTYPE"]
helpviewer_keywords: ["CAutoVectorPtrElementTraits class"]
ms.assetid: 16b81a56-55fb-46ca-b376-66a1884231a6
---
# CAutoVectorPtrElementTraits Class

This class provides methods, static functions, and typedefs useful when creating collections of smart pointers using vector new and delete operators.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <typename T>
class CAutoVectorPtrElementTraits :
   public CDefaultElementTraits<ATL::CAutoVectorPtr<T>>
```

#### Parameters

*T*<br/>
The pointer type.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CAutoVectorPtrElementTraits::INARGTYPE](#inargtype)|The data type to use for adding elements to the collection class object.|
|[CAutoVectorPtrElementTraits::OUTARGTYPE](#outargtype)|The data type to use for retrieving elements from the collection class object.|

## Remarks

This class provides methods, static functions, and typedefs for aiding the creation of collection class objects containing smart pointers. Unlike [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md), this class uses vector new and delete operators.

## Inheritance Hierarchy

[CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)

[CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

[CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)

`CAutoVectorPtrElementTraits`

## Requirements

**Header:** atlcoll.h

## <a name="inargtype"></a> CAutoVectorPtrElementTraits::INARGTYPE

The data type to use for adding elements to the collection class object.

```
typedef CAutoVectorPtr<T>& INARGTYPE;
```

## <a name="outargtype"></a> CAutoVectorPtrElementTraits::OUTARGTYPE

The data type to use for retrieving elements from the collection class object.

```
typedef T*& OUTARGTYPE;
```

## See also

[CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[CAutoVectorPtr Class](../../atl/reference/cautovectorptr-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
