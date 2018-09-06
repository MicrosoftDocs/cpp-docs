---
title: "SRWLock::TryLockShared Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::SRWLock::TryLockShared"]
dev_langs: ["C++"]
helpviewer_keywords: ["TryLockShared method"]
ms.assetid: 10cc198d-39a0-4d18-aa78-706744948668
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SRWLock::TryLockShared Method

Attempts to acquire a **SRWLock** object in shared mode for the current or specified **SRWLock** object.

## Syntax

```cpp
WRL_NOTHROW SyncLockShared TryLockShared();
WRL_NOTHROW static SyncLockShared TryLockShared(
   _In_ SRWLOCK* lock
);
```

### Parameters

*lock*  
Pointer to an **SRWLock** object.

## Return Value

If successful, an **SRWLock** object in shared mode and the calling thread takes ownership of the lock. Otherwise, an **SRWLock** object whose state is invalid.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[SRWLock Class](../windows/srwlock-class.md)