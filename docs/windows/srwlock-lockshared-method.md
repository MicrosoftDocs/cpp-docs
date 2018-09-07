---
title: "SRWLock::LockShared Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::SRWLock::LockShared"]
dev_langs: ["C++"]
helpviewer_keywords: ["LockShared method"]
ms.assetid: 9d826a5c-b6a2-4430-ac85-d5753cbca889
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SRWLock::LockShared Method

Acquires an **SRWLock** object in shared mode.

## Syntax

```cpp
SyncLockShared LockShared();

static SyncLockShared LockShared(
   _In_ SRWLOCK* lock
);
```

### Parameters

*lock*  
Pointer to an **SRWLock** object.

## Return Value

An **SRWLock** object in shared mode.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[SRWLock Class](../windows/srwlock-class.md)