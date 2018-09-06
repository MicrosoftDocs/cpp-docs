---
title: "AsyncBase::CheckValidStateForResultsCall Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::CheckValidStateForResultsCall"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""CheckValidStateForResultsCall method""]"]
ms.assetid: 87ca6805-bff1-4063-b855-6dd26132deff
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::CheckValidStateForResultsCall Method

Tests whether the results of an asynchronous operation can be collected in the current asynchronous state.

## Syntax

```cpp
inline HRESULT CheckValidStateForResultsCall();
```

## Return Value

S_OK if results can be collected; otherwise, E_ILLEGAL_METHOD_CALLE_ILLEGAL_METHOD_CALL.

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See Also

[AsyncBase Class](../windows/asyncbase-class.md)