---
title: "SemaphoreTraits Structure | Microsoft Docs"
ms.custom: ""
ms.date: "09/27/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits", "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits::Unlock"]
dev_langs: ["C++"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits structure", "Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits::Unlock method"]
ms.assetid: eddb8576-d063-409b-9201-cc87ca5d111e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SemaphoreTraits Structure

Defines common characteristics of a `Semaphore` object.

## Syntax

```cpp
struct SemaphoreTraits : HANDLENullTraits;
```

## Members

### Public Methods

Name                               | Description
---------------------------------- | --------------------------------------
[SemaphoreTraits::Unlock](#unlock) | Releases control of a shared resource.

## Inheritance Hierarchy

`HANDLENullTraits`

`SemaphoreTraits`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="unlock"></a>SemaphoreTraits::Unlock

Releases control of a shared resource.

```cpp
inline static void Unlock(
   _In_ Type h
);
```

### Parameters

*h*<br/>
Handle to a `Semaphore` object.

### Remarks

If the unlock operation is unsuccessful, `Unlock()` emits an error that indicates the cause of the failure.
