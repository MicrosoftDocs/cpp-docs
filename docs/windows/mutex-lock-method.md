---
title: "Mutex::Lock Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Mutex::Lock"]
dev_langs: ["C++"]
helpviewer_keywords: ["Lock method"]
ms.assetid: 61d95072-b690-441e-a080-0bf94a733141
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Mutex::Lock Method

Waits until the current object, or the **Mutex** object associated with the specified handle, releases the mutex or the specified time-out interval has elapsed.

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
The handle of a **Mutex** object.

## Return Value

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also
[Mutex Class](../windows/mutex-class1.md)