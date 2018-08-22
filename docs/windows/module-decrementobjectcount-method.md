---
title: "Module::DecrementObjectCount Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::DecrementObjectCount"]
dev_langs: ["C++"]
helpviewer_keywords: ["DecrementObjectCount method"]
ms.assetid: 6a06d1f9-7881-4f0e-891f-46b0e5c4f604
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Module::DecrementObjectCount Method

Decrements the number of objects tracked by the module.

## Syntax

```cpp  
virtual long DecrementObjectCount();  
```

## Return Value

The count before the decrement operation.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also

[Module Class](../windows/module-class.md)