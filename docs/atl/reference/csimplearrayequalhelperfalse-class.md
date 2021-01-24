---
description: "Learn more about: CSimpleArrayEqualHelperFalse Class"
title: "CSimpleArrayEqualHelperFalse Class"
ms.date: "11/04/2016"
f1_keywords: ["CSimpleArrayEqualHelperFalse", "ATLSIMPCOLL/ATL::CSimpleArrayEqualHelperFalse", "ATLSIMPCOLL/ATL::CSimpleArrayEqualHelperFalse::IsEqual"]
helpviewer_keywords: ["CSimpleArrayEqualHelperFalse class"]
ms.assetid: 6918af6f-d23d-49eb-8482-c44272f5ffeb
---
# CSimpleArrayEqualHelperFalse Class

This class is a helper for the [CSimpleArray](../../atl/reference/csimplearray-class.md) class.

## Syntax

```
template <class T>
class CSimpleArrayEqualHelperFalse
```

#### Parameters

*T*<br/>
A derived class.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSimpleArrayEqualHelperFalse::IsEqual](#isequal)|(Static) Returns false.|

## Remarks

This traits class is a complement to the `CSimpleArray` class. It always returns false, and in addition, will call `ATLASSERT` with an argument of false if it is ever referenced. In situations where the equality test is not sufficiently defined, this class allows an array containing elements to operate correctly for most methods but fail in a well-defined manner for methods that depend on comparisons such as [CSimpleArray::Find](../../atl/reference/csimplearray-class.md#find).

## Requirements

**Header:** atlsimpcoll.h

## <a name="isequal"></a> CSimpleArrayEqualHelperFalse::IsEqual

Returns false.

```
static bool IsEqual(const T&, const T&);
```

### Return Value

Returns false.

### Remarks

This method always returns false, and will call `ATLASSERT` with an argument of false if referenced. The purpose of `CSimpleArrayEqualHelperFalse::IsEqual` is to force methods using comparisons to fail in a well-defined manner when equality tests have not been adequately defined.

## See also

[CSimpleArrayEqualHelper Class](../../atl/reference/csimplearrayequalhelper-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
