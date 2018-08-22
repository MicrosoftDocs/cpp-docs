---
title: "Mutex Class1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Mutex"]
dev_langs: ["C++"]
helpviewer_keywords: ["Mutex class"]
ms.assetid: 682a0963-721c-46a2-8871-000e9997505b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Mutex Class1

Represents a synchronization object that exclusively controls a shared resource.

## Syntax

```cpp  
class Mutex : public HandleT<HandleTraits::MutexTraits>  
```

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`SyncLock`|A synonym for a class that supports synchronous locks.|

### Public Constructor

|Name|Description|
|----------|-----------------|
|[Mutex::Mutex Constructor](../windows/mutex-mutex-constructor.md)|Initializes a new instance of the **Mutex** class.|

### Public Members

|Name|Description|
|----------|-----------------|
|[Mutex::Lock Method](../windows/mutex-lock-method.md)|Waits until the current object, or the **Mutex** object associated with the specified handle, releases the mutex or the specified time-out interval has elapsed.|

### Public Operator

|Name|Description|
|----------|-----------------|
|[Mutex::operator= Operator](../windows/mutex-operator-assign-operator.md)|Assigns (moves) the specified **Mutex** object to the current **Mutex** object.|

## Inheritance Hierarchy

`Mutex`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[Microsoft::WRL::Wrappers Namespace](../windows/microsoft-wrl-wrappers-namespace.md)