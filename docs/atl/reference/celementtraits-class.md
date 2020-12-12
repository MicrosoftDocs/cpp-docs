---
description: "Learn more about: CElementTraits Class"
title: "CElementTraits Class"
ms.date: "11/04/2016"
f1_keywords: ["CElementTraits", "atlcoll/ATL::CElementTraits"]
helpviewer_keywords: ["CElementTraits class"]
ms.assetid: 496528e5-7f80-4b45-be0c-6f646feb43c5
---
# CElementTraits Class

This class is used by collection classes to provide methods and functions for moving, copying, comparison, and hashing operations.

## Syntax

```
template<typename T>
class CElementTraits : public CDefaultElementTraits<T>
```

#### Parameters

*T*<br/>
The type of data to be stored in the collection.

## Remarks

This class provides default static functions and methods for moving, copying, comparing, and hashing elements stored in a collection class object. `CElementTraits` is specified as the default provider of these operations by the collection classes [CAtlArray](../../atl/reference/catlarray-class.md), [CAtlList](../../atl/reference/catllist-class.md), [CRBMap](../../atl/reference/crbmap-class.md), [CRBMultiMap](../../atl/reference/crbmultimap-class.md), and [CRBTree](../../atl/reference/crbtree-class.md).

The default implementations will suffice for simple data types, but if the collection classes are used to store more complex objects, the functions and methods must be overridden by user-supplied implementations.

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Requirements

**Header:** atlcoll.h

## See also

[CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
