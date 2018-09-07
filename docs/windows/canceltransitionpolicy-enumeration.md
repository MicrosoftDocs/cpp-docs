---
title: "CancelTransitionPolicy Enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::CancelTransitionPolicy::TransitionFromCanceled", "module/Microsoft::WRL::CancelTransitionPolicy::RemainCanceled", "module/Microsoft::WRL::CancelTransitionPolicy"]
dev_langs: ["C++"]
helpviewer_keywords: ["CancelTransitionPolicy Enumeration"]
ms.assetid: 5de49f7d-e5e3-43e9-bbca-666caf226cef
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# CancelTransitionPolicy Enumeration

Indicates how an asynchronous operation’s attempt to transition to a terminal state of completed or error should behave with respect to a client-requested canceled state.

## Syntax

```cpp
enum CancelTransitionPolicy;
```

## Members

### Values

|Name|Description|
|----------|-----------------|
|`RemainCanceled`|If the asynchronous operation is currently in a client-requested canceled state, this indicates that it will stay in the canceled state as opposed to transitioning to a terminal completed or error state.|
|`TransitionFromCanceled`|If the asynchronous operation is currently in a client-requested canceled state, this indicates that state should transition from that canceled state to the terminal state of completed or error as determined by the call that utilizes this flag.|

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See Also

[Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)