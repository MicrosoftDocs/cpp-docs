---
title: "AsyncBase::get_Status Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::get_Status"]
dev_langs: ["C++"]
helpviewer_keywords: ["get_Status method"]
ms.assetid: 9823ecb9-212e-471d-b76f-7b8f21208905
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::get_Status Method

Retrieves a value that indicates the status of the asynchronous operation.

## Syntax

```cpp  
STDMETHOD(  
   get_Status  
)(AsyncStatus *status) override;  
```

### Parameters

*status*  
The location where the status is to be stored. For more information, see `Windows::Foundation::AsyncStatus` enumeration.

## Return Value

S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.

## Remarks

This method implements `IAsyncInfo::get_Status`.

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See Also

[AsyncBase Class](../windows/asyncbase-class.md)