---
description: "Learn more about: CSimpleMapEqualHelper Class"
title: "CSimpleMapEqualHelper Class"
ms.date: "11/04/2016"
f1_keywords: ["CSimpleMapEqualHelper", "ATLSIMPCOLL/ATL::CSimpleMapEqualHelper", "ATLSIMPCOLL/ATL::CSimpleMapEqualHelper::IsEqualKey", "ATLSIMPCOLL/ATL::CSimpleMapEqualHelper::IsEqualValue"]
helpviewer_keywords: ["CSimpleMapEqualHelper class"]
ms.assetid: 9bb2968a-d609-405c-8272-ff3b42df6164
---
# CSimpleMapEqualHelper Class

This class is a helper for the [CSimpleMap](../../atl/reference/csimplemap-class.md) class.

## Syntax

```
template <class TKey, class TVal>
class CSimpleMapEqualHelper
```

#### Parameters

*TKey*<br/>
The key element.

*TVal*<br/>
The value element.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSimpleMapEqualHelper::IsEqualKey](#isequalkey)|(Static) Tests two keys for equality.|
|[CSimpleMapEqualHelper::IsEqualValue](#isequalvalue)|(Static) Tests two values for equality.|

## Remarks

This traits class is a supplement to the `CSimpleMap` class. It provides methods for comparing two `CSimpleMap` object elements (specifically, the key and value components) for equality. By default, the keys and values are compared using **operator==()**, but if the map contains complex data types that lack their own equality operator, this class can be overridden to provide the extra required functionality.

## Requirements

**Header:** atlsimpcoll.h

## <a name="isequalkey"></a> CSimpleMapEqualHelper::IsEqualKey

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

## <a name="isequalvalue"></a> CSimpleMapEqualHelper::IsEqualValue

Tests two values for equality.

```
static bool IsEqualValue(const TVal& v1, const TVal& v2);
```

### Parameters

*v1*<br/>
The first value.

*v2*<br/>
The second value.

### Return Value

Returns true if the values are equal, false otherwise.

## See also

[CSimpleMapEqualHelperFalse Class](../../atl/reference/csimplemapequalhelperfalse-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
