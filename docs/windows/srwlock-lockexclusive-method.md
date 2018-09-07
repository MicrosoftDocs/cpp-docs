---
title: "SRWLock::LockExclusive Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::SRWLock::LockExclusive"]
dev_langs: ["C++"]
helpviewer_keywords: ["LockExclusive method"]
ms.assetid: f361b672-fca6-45cc-a9b4-310cc0d23fdc
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SRWLock::LockExclusive Method

Acquires an **SRWLock** object in exclusive mode.

## Syntax

```cpp
SyncLockExclusive LockExclusive();

static SyncLockExclusive LockExclusive(
   _In_ SRWLOCK* lock
);
```

### Parameters

*lock*  
Pointer to an **SRWLock** object.

## Return Value

An **SRWLock** object in exclusive mode.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[SRWLock Class](../windows/srwlock-class.md)