---
title: "ModuleType Enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ModuleType"]
dev_langs: ["C++"]
helpviewer_keywords: ["ModuleType enumeration"]
ms.assetid: 61a763af-a5a4-451d-8b40-815af507fcde
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
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

## See Also

[Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)