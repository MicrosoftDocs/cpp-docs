---
title: "AsyncBase::Start Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::Start"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""Start method""]"]
ms.assetid: 67405c9d-0d1a-4c1e-8ea4-6ba01c1f90d9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::Start Method

Starts the asynchronous operation.

## Syntax

```cpp
STDMETHOD(
   Start
)(void);
```

## Return Value

S_OK if the operation starts or is already started; otherwise, E_ILLEGAL_STATE_CHANGE.

## Remarks

**Start()** is a default implementation of `IAsyncInfo::Start`, and does no actual work. To actually start an asynchronous operation, override the `OnStart()` pure virtual method.

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See Also

[AsyncBase Class](../windows/asyncbase-class.md)