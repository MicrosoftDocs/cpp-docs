---
title: "ModuleBase::IncrementObjectCount Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::ModuleBase::IncrementObjectCount"]
dev_langs: ["C++"]
helpviewer_keywords: ["IncrementObjectCount method"]
ms.assetid: 2d70b472-684c-4bb7-8bab-09505cfcaf28
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ModuleBase::IncrementObjectCount Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp  
virtual long IncrementObjectCount() = 0;  
```

## Return Value

The count before the increment operation.

## Remarks

When implemented, increments the number of objects tracked by the module.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[ModuleBase Class](../windows/modulebase-class.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)