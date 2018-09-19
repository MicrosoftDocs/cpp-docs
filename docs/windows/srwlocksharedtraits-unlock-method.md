---
title: "SRWLockSharedTraits::Unlock Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits::Unlock"]
dev_langs: ["C++"]
helpviewer_keywords: ["Unlock method"]
ms.assetid: 33cdead9-1900-4094-b18e-38fcf1a0bd28
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SRWLockSharedTraits::Unlock Method

Releases exclusive control of the specified `SRWLock` object.

## Syntax

```cpp
inline static void Unlock(
   _In_ Type srwlock
);
```

### Parameters

*srwlock*<br/>
A handle to an `SRWLock` object.

## Return Value

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## See Also

[SRWLockSharedTraits Structure](../windows/srwlocksharedtraits-structure.md)