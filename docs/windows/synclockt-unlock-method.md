---
title: "SyncLockT::Unlock Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::Unlock"]
dev_langs: ["C++"]
helpviewer_keywords: ["Unlock method"]
ms.assetid: e21110a2-03dd-4073-9c3f-73b99e39f405
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SyncLockT::Unlock Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
void Unlock();
```

## Remarks

Releases control of the resource held by the current **SyncLockT** object, if any.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::Details

## See Also

[SyncLockT Class](../windows/synclockt-class.md)