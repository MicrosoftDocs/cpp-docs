---
title: "EventTargetArray::AddTail Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::Details::EventTargetArray::AddTail"]
dev_langs: ["C++"]
helpviewer_keywords: ["AddTail method"]
ms.assetid: d0fafab9-049c-40e0-a40c-d126c9ee63e6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# EventTargetArray::AddTail Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
void AddTail(
   _In_ IUnknown* element
);
```

### Parameters

*element*  
Pointer to the event handler to append.

## Remarks

Appends the specified event handler to the end of the internal array of event handlers.

**AddTail()** is intended to be used internally by only the `EventSource` class.

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL::Details

## See Also

[EventTargetArray Class](../windows/eventtargetarray-class.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)