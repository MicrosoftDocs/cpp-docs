---
description: "Learn more about: CAutoPtrArray Class"
title: "CAutoPtrArray Class"
ms.date: "11/04/2016"
f1_keywords: ["CAutoPtrArray", "ATLCOLL/ATL::CAutoPtrArray", "ATLCOLL/ATL::CAutoPtrArray::CAutoPtrArray"]
helpviewer_keywords: ["CAutoPtrArray class"]
ms.assetid: 880a70da-8c81-4427-8ac6-49aa8d424244
---
# CAutoPtrArray Class

This class provides methods useful when constructing an array of smart pointers.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```cpp
template <typename E>
class CAutoPtrArray : public CAtlArray<
                        ATL::CAutoPtr<E>,
                        CAutoPtrElementTraits<E>>
```

### Parameters

*E*<br/>
The pointer type.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAutoPtrArray::CAutoPtrArray](#cautoptrarray)|The constructor.|

## Remarks

This class provides a constructor and derives methods from [CAtlArray](../../atl/reference/catlarray-class.md) and [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md) to aid the creation of a collection class object storing smart pointers.

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Inheritance Hierarchy

`CAtlArray`

`CAutoPtrArray`

## Requirements

**Header:** atlcoll.h

## <a name="cautoptrarray"></a> CAutoPtrArray::CAutoPtrArray

The constructor.

```cpp
CAutoPtrArray() throw();
```

### Remarks

Initializes the smart pointer array.

## See also

[CAtlArray Class](../../atl/reference/catlarray-class.md)<br/>
[CAutoPtrElementTraits Class](../../atl/reference/cautoptrelementtraits-class.md)<br/>
[CAutoPtrList Class](../../atl/reference/cautoptrlist-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
