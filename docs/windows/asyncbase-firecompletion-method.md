---
title: "AsyncBase::FireCompletion Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::FireCompletion"]
dev_langs: ["C++"]
helpviewer_keywords: ["FireCompletion method"]
ms.assetid: b5e29d6d-52e7-4148-a7f3-a313b1359819
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::FireCompletion Method

Invokes the completion event handler, or resets the internal progress delegate.

## Syntax

```cpp
void FireCompletion(
   void
) override;

virtual void FireCompletion();
```

## Remarks

The first version of **FireCompletion()** resets the internal progress delegate variable. The second version invokes the completion event handler if the asynchronous operation is complete.

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See Also

[AsyncBase Class](../windows/asyncbase-class.md)