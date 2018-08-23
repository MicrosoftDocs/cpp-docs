---
title: "SyncLockT::IsLocked Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::IsLocked"]
dev_langs: ["C++"]
helpviewer_keywords: ["IsLocked method"]
ms.assetid: a81fea43-f99a-4708-812a-7fd6af500d3d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SyncLockT::IsLocked Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
bool IsLocked() const;
```

## Return Value

**true** if the **SyncLockT** object is locked; otherwise, **false**.

## Remarks

Indicates whether the current **SyncLockT** object owns a resource; that is, the **SyncLockT** object is *locked*.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::Details

## See Also

[SyncLockT Class](../windows/synclockt-class.md)