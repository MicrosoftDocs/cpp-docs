---
title: "AsyncBase::PutOnProgress Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::PutOnProgress"]
dev_langs: ["C++"]
helpviewer_keywords: ["PutOnProgress method"]
ms.assetid: 1f5f180e-eb5a-4afe-ac16-69dbf36f0383
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::PutOnProgress Method

Sets the address of the progress event handler to the specified value.

## Syntax

```cpp
STDMETHOD(
   PutOnProgress
)(TProgress* progressHandler);
```

### Parameters

*progressHandler*<br/>
The address to which the progress event handler is set.

## Return Value

S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.

## Requirements

**Header:** async.h

**Namespace:** Microsoft::WRL

## See Also

[AsyncBase Class](../windows/asyncbase-class.md)