---
title: "EventSource::GetSize Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::EventSource::GetSize"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetSize method"]
ms.assetid: 7825aab5-1a6b-465f-9159-3a6684142d1f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# EventSource::GetSize Method

Retrieves the number of event handlers associated with the current **EventSource** object

## Syntax

```cpp
size_t GetSize() const;
```

## Return Value

The number of event handlers in [targets_](../windows/eventsource-targets-data-member.md).

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL

## See Also

[EventSource Class](../windows/eventsource-class.md)