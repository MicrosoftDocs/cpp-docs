---
description: "Learn more about: CSimpleMapEqualHelperFalse Class"
title: "CSimpleMapEqualHelperFalse Class"
ms.date: "11/04/2016"
f1_keywords: ["CSimpleMapEqualHelperFalse", "ATLSIMPCOLL/ATL::CSimpleMapEqualHelperFalse", "ATLSIMPCOLL/ATL::CSimpleMapEqualHelperFalse::IsEqualKey", "ATLSIMPCOLL/ATL::CSimpleMapEqualHelperFalse::IsEqualValue"]
helpviewer_keywords: ["CSimpleMapEqualHelperFalse class"]
ms.assetid: a873eea3-e130-45cc-a476-61ee79511c3b
---
# CSimpleMapEqualHelperFalse Class

This class is a helper for the [CSimpleMap](../../atl/reference/csimplemap-class.md) class.

## Syntax

```
template <class TKey, class TVal>
class CSimpleMapEqualHelperFalse
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSimpleMapEqualHelperFalse::IsEqualKey](#isequalkey)|(Static) Tests two keys for equality.|
|[CSimpleMapEqualHelperFalse::IsEqualValue](#isequalvalue)|(Static) Returns false.|

## Remarks

This traits class is a supplement to the `CSimpleMap` class. It provides a method for comparing two elements contained in the `CSimpleMap` object, specifically two value elements or two key elements.

The value comparison will always return false, and in addition, will call `ATLASSERT` with an argument of false if it is ever referenced. In situations where the equality test is not sufficiently defined, this class allows a map containing key/value pairs to operate correctly for most methods but fail in a well-defined manner for methods that depend on comparisons such as [CSimpleMap::FindVal](../../atl/reference/csimplemap-class.md#findval).

## Requirements

**Header:** atlsimpcoll.h

## <a name="isequalkey"></a> CSimpleMapEqualHelperFalse::IsEqualKey

Tests two keys for equality.

```
static bool IsEqualKey(const TKey& k1, const TKey& k2);
```

### Parameters

*k1*<br/>
The first key.

*k2*<br/>
The second key.

### Return Value

Returns true if the keys are equal, false otherwise.

### Remarks

This method calls [CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md).

## <a name="isequalvalue"></a> CSimpleMapEqualHelperFalse::IsEqualValue

Returns false.

```
static bool IsEqualValue(const TVal&, const TVal&);
```

### Return Value

Returns false.

### Remarks

This method always returns false, and will call `ATLASSERT` with an argument of false if it is ever referenced. The purpose of `CSimpleMapEqualHelperFalse::IsEqualValue` is to force methods using comparisons to fail in a well-defined manner when equality tests have not been adequately defined.

## See also

[CSimpleMapEqualHelper Class](../../atl/reference/csimplemapequalhelper-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
