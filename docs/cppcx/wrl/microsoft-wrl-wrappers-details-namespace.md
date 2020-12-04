---
description: "Learn more about: Microsoft::WRL::Wrappers::Details Namespace"
title: "Microsoft::WRL::Wrappers::Details Namespace"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details", "internal/Microsoft::WRL::Details", "async/Microsoft::WRL::Details", "corewrappers/Microsoft::WRL::Wrappers::Details", "client/Microsoft::WRL::Details", "module/Microsoft::WRL::Details", "event/Microsoft::WRL::Details"]
helpviewer_keywords: ["Details namespace"]
ms.assetid: 6d3f04ac-9b53-4a82-a188-a85309ec34a4
---
# Microsoft::WRL::Wrappers::Details Namespace

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
namespace Microsoft::WRL::Wrappers::Details;
```

## Members

### Classes

|Name|Description|
|----------|-----------------|
|[SyncLockT Class](synclockt-class.md)|Represents a type that can take exclusive or shared ownership of a resource.|
|[SyncLockWithStatusT Class](synclockwithstatust-class.md)|Represents a type that can take exclusive or shared ownership of a resource.|

### Methods

|Name|Description|
|----------|-----------------|
|[CompareStringOrdinal Method](comparestringordinal-method.md)|Compares two specified `HSTRING` objects and returns an integer that indicates their relative position in a sort order.|

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::Details

## See also

[Microsoft::WRL::Wrappers Namespace](microsoft-wrl-wrappers-namespace.md)
