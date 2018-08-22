---
title: "ModuleBase Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::ModuleBase"]
dev_langs: ["C++"]
helpviewer_keywords: ["ModuleBase class"]
ms.assetid: edce7591-6893-46f7-94a7-382827775548
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ModuleBase Class

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp  
class ModuleBase;  
```

## Remarks

Represents the base class of the [Module](../windows/module-class.md) classes.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[ModuleBase::ModuleBase Constructor](../windows/modulebase-modulebase-constructor.md)|Initializes an instance of the `Module` class.|
|[ModuleBase::~ModuleBase Destructor](../windows/modulebase-tilde-modulebase-destructor.md)|Deinitializes the current instance of the `Module` class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[ModuleBase::DecrementObjectCount Method](../windows/modulebase-decrementobjectcount-method.md)|When implemented, decrements the number of objects tracked by the module.|
|[ModuleBase::IncrementObjectCount Method](../windows/modulebase-incrementobjectcount-method.md)|When implemented, increments the number of objects tracked by the module.|

## Inheritance Hierarchy

`ModuleBase`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)