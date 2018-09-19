---
title: "InvokeHelper::callback_ Data Member | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::Details::InvokeHelper::callback_"]
dev_langs: ["C++"]
helpviewer_keywords: ["callback_ data member"]
ms.assetid: 6f0cbf6d-0448-46f8-ba71-bd6fd8702e3a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# InvokeHelper::callback_ Data Member

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
TCallback callback_;
```

## Remarks

Represents the event handler to call when an event occurs.

The `TCallback` template parameter specifies the type of the event handler.

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL::Details

## See Also

[InvokeHelper Structure](../windows/invokehelper-structure.md)<br/>
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)