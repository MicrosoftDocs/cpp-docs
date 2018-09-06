---
title: "HandleT::InternalClose Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleT::InternalClose"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""InternalClose method""]"]
ms.assetid: fe693c02-aa1f-4e00-8bdd-a0d7d736da0b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HandleT::InternalClose Method

Closes the current **HandleT** object.

## Syntax

```cpp
virtual bool InternalClose();
```

## Return Value

**true** if the current **HandleT** closed successfully; otherwise, **false**.

## Remarks

**InternalClose()** is **protected**.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[HandleT Class](../windows/handlet-class.md)