---
title: "AsyncBase::get_Id Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::get_Id"]
dev_langs: ["C++"]
helpviewer_keywords: ["get_Id method"]
ms.assetid: 591d8366-ea76-4deb-9278-9d3bc394a42b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::get_Id Method

Retrieves the handle of the asynchronous operation.

## Syntax

```cpp
STDMETHOD(
   get_Id
)(unsigned int *id) override;
```

### Parameters

*id*<br/>
The location where the handle is to be stored.

## Return Value

S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.

## Remarks

This method implements `IAsyncInfo::get_Id`.

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See Also

[AsyncBase Class](../windows/asyncbase-class.md)