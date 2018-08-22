---
title: "AsyncBase::TryTransitionToError Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::TryTransitionToError"]
dev_langs: ["C++"]
helpviewer_keywords: ["TryTransitionToError method"]
ms.assetid: f6d11c25-1ce3-43f9-af1c-97c4dc0f6f0f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::TryTransitionToError Method

Indicates whether the specified error code can modify the internal error state.

## Syntax

```cpp  
bool TryTransitionToError(  
   const HRESULT error  
);  
```

### Parameters

*error*  
An error HRESULT.

## Return Value

**true** if the internal error state was changed; otherwise, **false**.

## Remarks

This operation modifies the error state only if the error state is already set to S_OK. This operation has no effect if the error state is already error, cancelled, completed, or closed.

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See Also

[AsyncBase Class](../windows/asyncbase-class.md)