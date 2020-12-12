---
description: "Learn more about: ModuleType Enumeration"
title: "ModuleType Enumeration"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ModuleType"]
helpviewer_keywords: ["ModuleType enumeration"]
ms.assetid: 61a763af-a5a4-451d-8b40-815af507fcde
---
# ModuleType Enumeration

Specifies whether a module should support an in-process server or an out-of-process server.

## Syntax

```cpp
enum ModuleType;
```

## Members

### Values

|Name|Description|
|----------|-----------------|
|`InProc`|An in-process server.|
|`OutOfProc`|An out-of-process server.|
|`DisableCaching`|Disable caching mechanism on Module.|
|`InProcDisableCaching`|Combination of `InProc` and `DisableCaching`.|
|`OutOfProcDisableCaching`|Combination of `OutOfProc` and `DisableCaching`.|

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL Namespace](microsoft-wrl-namespace.md)
