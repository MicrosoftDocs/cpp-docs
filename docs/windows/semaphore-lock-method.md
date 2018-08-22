---
title: "Semaphore::Lock Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Semaphore::Lock"]
dev_langs: ["C++"]
helpviewer_keywords: ["Lock method"]
ms.assetid: 0eef6ede-dc7d-4f09-a6c8-2f7d39d65bfa
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Semaphore::Lock Method

Waits until the current object, or the **Semaphore** object associated with the specified handle, is in the signaled state or the specified time-out interval has elapsed.

## Syntax

```cpp  
SyncLock Lock(  
   DWORD milliseconds = INFINITE  
);

static SyncLock Lock(  
   HANDLE h,  
   DWORD milliseconds = INFINITE  
);  
```

### Parameters

*milliseconds*  
The time-out interval, in milliseconds. The default value is INFINITE, which waits indefinitely.

*h*  
A handle to a **Semaphore** object.

## Return Value

A `Details::SyncLockWithStatusT<HandleTraits::SemaphoreTraits>`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[Semaphore Class](../windows/semaphore-class.md)