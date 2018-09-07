---
title: "AsyncBase::GetOnProgress Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::GetOnProgress"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetOnProgress method"]
ms.assetid: 286ddc9c-3e30-41a2-8e8b-e53d3fb0649d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::GetOnProgress Method

Copies the address of the current progress event handler to the specified variable.

## Syntax

```cpp
STDMETHOD(
   GetOnProgress
)(TProgress** progressHandler);
```

### Parameters

*progressHandler*  
The location where the address of the current progress event handler is stored.

## Return Value

S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See Also

[AsyncBase Class](../windows/asyncbase-class.md)