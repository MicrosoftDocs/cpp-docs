---
title: "Module::Module Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::Module"]
dev_langs: ["C++"]
helpviewer_keywords: ["Module, constructor"]
ms.assetid: 5436fc74-61dc-41b6-81af-4f03177159aa
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Module::Module Constructor

Initializes a new instance of the **Module** class.

## Syntax

```cpp
Module();
```

## Remarks

This constructor is protected and cannot be called with the **new** keyword. Instead, call either [Module::GetModule Method](../windows/module-getmodule-method.md) or [Module::Create Method](../windows/module-create-method.md).

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also

[Module Class](../windows/module-class.md)