---
title: "MutexTraits Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::MutexTraits"]
dev_langs: ["C++"]
helpviewer_keywords: ["MutexTraits structure"]
ms.assetid: 6582df80-b9ba-4892-948f-d572a3b23d54
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# MutexTraits Structure

Defines common characteristics of the [Mutex](../windows/mutex-class1.md) class.

## Syntax

```cpp  
struct MutexTraits : HANDLENullTraits;  
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[MutexTraits::Unlock Method](../windows/mutextraits-unlock-method.md)|Releases exclusive control of a shared resource.|

## Inheritance Hierarchy

`HANDLENullTraits`

`MutexTraits`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## See Also

[Microsoft::WRL::Wrappers::HandleTraits Namespace](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)