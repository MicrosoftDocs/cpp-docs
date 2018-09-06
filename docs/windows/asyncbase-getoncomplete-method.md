---
title: "AsyncBase::GetOnComplete Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::GetOnComplete"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""GetOnComplete method""]"]
ms.assetid: f06ae02d-9a88-41d2-b749-bdc1a7ff8748
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::GetOnComplete Method

Copies the address of the current completion event handler to the specified variable.

## Syntax

```cpp
STDMETHOD(
   GetOnComplete
)(TComplete** completeHandler);
```

### Parameters

*completeHandler*  
The location where the address of the current completion event handler is stored.

## Return Value

S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See Also

[AsyncBase Class](../windows/asyncbase-class.md)