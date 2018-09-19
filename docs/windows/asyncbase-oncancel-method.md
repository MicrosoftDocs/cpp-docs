---
title: "AsyncBase::OnCancel Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::OnCancel"]
dev_langs: ["C++"]
helpviewer_keywords: ["OnCancel method"]
ms.assetid: 4bd0b68e-a9df-4913-9f6c-e093ed55c3f9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::OnCancel Method

When overridden in a derived class, cancels an asynchronous operation.

## Syntax

```cpp
virtual void OnCancel(
   void
) = 0;
```

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See Also

[AsyncBase Class](../windows/asyncbase-class.md)<br/>
[AsyncBase::Cancel Method](../windows/asyncbase-cancel-method.md)