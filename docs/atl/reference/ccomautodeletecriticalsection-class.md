---
description: "Learn more about: CComAutoDeleteCriticalSection Class"
title: "CComAutoDeleteCriticalSection Class"
ms.date: "11/04/2016"
f1_keywords: ["CComAutoDeleteCriticalSection", "atlcore/ATL::CComAutoDeleteCriticalSection"]
helpviewer_keywords: ["CComAutoDeleteCriticalSection class"]
ms.assetid: 2396dbea-1c60-4841-b50e-c4e18af311a3
---
# CComAutoDeleteCriticalSection Class

This class provides methods for obtaining and releasing ownership of a critical section object.

## Syntax

```
class CComAutoDeleteCriticalSection : public CComSafeDeleteCriticalSection
```

## Remarks

`CComAutoDeleteCriticalSection` derives from the class [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md). However, `CComAutoDeleteCriticalSection` overrides the [Term](ccomsafedeletecriticalsection-class.md#term) method to **`private`** access, which forces internal memory cleanup to occur only when instances of this class go out of scope or are explicitly deleted from memory.

This class introduces no additional methods over its base class. See [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) and [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) for more information on critical section helper classes.

## Inheritance Hierarchy

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

[CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md)

`CComAutoDeleteCriticalSection`

## Requirements

**Header:** atlcore.h

## See also

[CComSafeDeleteCriticalSection Class](../../atl/reference/ccomsafedeletecriticalsection-class.md)<br/>
[CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
