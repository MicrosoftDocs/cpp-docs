---
title: "HandleT::Attach Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleT::Attach"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""Attach method""]"]
ms.assetid: a8783a18-bbf6-456c-98a3-e2048a10d79f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HandleT::Attach Method

Associates the specified handle with the current **HandleT** object.

## Syntax

```cpp
void Attach(
   typename HandleTraits::Type h
);
```

#### Parameters

*h*  
A handle.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[HandleT Class](../windows/handlet-class.md)