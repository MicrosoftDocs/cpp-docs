---
title: "SyncLockT::SyncLockT Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::SyncLockT"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""SyncLockT, constructor""]"]
ms.assetid: 713dfd9f-7369-4d86-b4a0-8b32c184d89b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SyncLockT::SyncLockT Constructor

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
SyncLockT(
   _Inout_ SyncLockT&& other
);

explicit SyncLockT(
   typename SyncTraits::Type sync = SyncTraits::GetInvalidValue()  
);
```

### Parameters

*other*  
An rvalue-reference to another **SyncLockT** object.

*sync*  
A reference to another `SyncLockWithStatusT` object.

## Remarks

Initializes a new instance of the **SyncLockT** class.

The first constructor initializes the current **SyncLockT** object from another **SyncLockT** object specified by parameter *other*, and then invalidates the other **SyncLockT** object. The second constructor is **protected**, and initializes the current **SyncLockT** object to an invalid state.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::Details

## See Also

[SyncLockT Class](../windows/synclockt-class.md)