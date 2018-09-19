---
title: "AsyncBase::put_Id Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::put_Id"]
dev_langs: ["C++"]
helpviewer_keywords: ["put_Id method"]
ms.assetid: aebad85f-4774-42de-b625-a9cf5f65cb4e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::put_Id Method

Sets the handle of the asynchronous operation.

## Syntax

```cpp
STDMETHOD(
   put_Id
)(const unsigned int id);
```

### Parameters

*id*<br/>
A nonzero handle.

## Return Value

S_OK if successful; otherwise, E_INVALIDARG or E_ILLEGAL_METHOD_CALL.

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See Also

[AsyncBase Class](../windows/asyncbase-class.md)