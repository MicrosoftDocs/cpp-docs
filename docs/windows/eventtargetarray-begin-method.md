---
title: "EventTargetArray::Begin Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::Details::EventTargetArray::Begin"]
dev_langs: ["C++"]
helpviewer_keywords: ["Begin method"]
ms.assetid: 1cc7fdfd-a2c4-4b28-93cf-1c82842294ba
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# EventTargetArray::Begin Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp  
ComPtr<IUnknown>* Begin();  
```

## Return Value

The address of the first element in the internal array of event handlers.

## Remarks

Gets the address of the first element in the internal array of event handlers.

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL::Details

## See Also

[EventTargetArray Class](../windows/eventtargetarray-class.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)