---
title: "AsyncBase::CheckValidStateForDelegateCall Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::CheckValidStateForDelegateCall"]
dev_langs: ["C++"]
helpviewer_keywords: ["CheckValidStateForDelegateCall method"]
ms.assetid: d997ebe7-2378-4e74-a379-f0f85e6922f0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::CheckValidStateForDelegateCall Method

Tests whether delegate properties can be modified in the current asynchronous state.

## Syntax

```cpp  
inline HRESULT CheckValidStateForDelegateCall();  
```

## Return Value

S_OK if delegate properties can be modified; otherwise, E_ILLEGAL_METHOD_CALL.

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See Also

[AsyncBase Class](../windows/asyncbase-class.md)