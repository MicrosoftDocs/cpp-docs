---
description: "Learn more about: CDefaultElementTraits Class"
title: "CDefaultElementTraits Class"
ms.date: "11/04/2016"
f1_keywords: ["CDefaultElementTraits", "atlcoll/ATL::CDefaultElementTraits"]
helpviewer_keywords: ["CDefaultElementTraits class"]
ms.assetid: ac5ee610-7957-4b7c-92b6-38ff72e4118e
---
# CDefaultElementTraits Class

This class provides default methods and functions for a collection class.

## Syntax

```
template <typename T>
class CDefaultElementTraits : public CElementTraitsBase<T>,
    public CDefaultHashTraits<T>,
    public CDefaultCompareTraits<T>
```

#### Parameters

*T*<br/>
The type of data to be stored in the collection.

## Remarks

This class provides default static functions and methods for moving, copying, comparing, and hashing elements stored in a collection class object. This class derives its functions and methods from [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md), [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md), and [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md), and is utilized by [CElementTraits](../../atl/reference/celementtraits-class.md), [CPrimitiveElementTraits](../../atl/reference/cprimitiveelementtraits-class.md), and [CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md).

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Requirements

**Header:** atlcoll.h

## See also

[Class Overview](../../atl/atl-class-overview.md)
