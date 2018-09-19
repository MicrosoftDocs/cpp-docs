---
title: "SRWLockExclusiveTraits::Unlock Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits::Unlock"]
dev_langs: ["C++"]
helpviewer_keywords: ["Unlock method"]
ms.assetid: 7fd6b0fb-8b88-4a43-aa74-0d7fe47a0da6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SRWLockExclusiveTraits::Unlock Method

Releases exclusive control of the specified `SRWLock` object.

## Syntax

```cpp
inline static void Unlock(
   _In_ Type srwlock
);
```

### Parameters

*srwlock*<br/>
Handle to an `SRWLock` object.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## See Also

[SRWLockExclusiveTraits Structure](../windows/srwlockexclusivetraits-structure.md)