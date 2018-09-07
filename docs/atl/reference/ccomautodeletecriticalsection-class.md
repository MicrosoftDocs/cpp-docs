---
title: "CComAutoDeleteCriticalSection Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CComAutoDeleteCriticalSection", "atlcore/ATL::CComAutoDeleteCriticalSection"]
dev_langs: ["C++"]
helpviewer_keywords: ["CComAutoDeleteCriticalSection class"]
ms.assetid: 2396dbea-1c60-4841-b50e-c4e18af311a3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CComAutoDeleteCriticalSection Class

This class provides methods for obtaining and releasing ownership of a critical section object.

## Syntax

```
class CComAutoDeleteCriticalSection : public CComSafeDeleteCriticalSection
```

## Remarks

`CComAutoDeleteCriticalSection` derives from the class [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md). However, `CComAutoDeleteCriticalSection` overrides the [Term](ccomsafedeletecriticalsection-class.md#term) method to **private** access, which forces internal memory cleanup to occur only when instances of this class go out of scope or are explicitly deleted from memory.  

This class introduces no additional methods over its base class. See [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) and [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) for more information on critical section helper classes.

## Inheritance Hierarchy

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

[CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md)

`CComAutoDeleteCriticalSection`

## Requirements

**Header:** atlcore.h

## See Also

[CComSafeDeleteCriticalSection Class](../../atl/reference/ccomsafedeletecriticalsection-class.md)   
[CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)   
[Class Overview](../../atl/atl-class-overview.md)
