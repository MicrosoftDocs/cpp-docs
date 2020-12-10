---
description: "Learn more about: Microsoft::WRL::Wrappers::HandleTraits Namespace"
title: "Microsoft::WRL::Wrappers::HandleTraits Namespace"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits"]
helpviewer_keywords: ["HandleTraits namespace"]
ms.assetid: 2fb5c6d1-bfc2-4e09-91eb-31705064ffb3
---
# Microsoft::WRL::Wrappers::HandleTraits Namespace

Describes characteristics of common handle-based resource types.

## Syntax

```cpp
namespace Microsoft::WRL::Wrappers::HandleTraits;
```

## Members

### Structures

|Name|Description|
|----------|-----------------|
|[CriticalSectionTraits Structure](criticalsectiontraits-structure.md)|Specializes a `CriticalSection` object to support either an invalid critical section or a function to release a critical section.|
|[EventTraits Structure](eventtraits-structure.md)|Defines characteristics of an `Event` class handle.|
|[FileHandleTraits Structure](filehandletraits-structure.md)|Defines characteristics of a file handle.|
|[HANDLENullTraits Structure](handlenulltraits-structure.md)|Defines common characteristics of an uninitialized handle.|
|[HANDLETraits Structure](handletraits-structure.md)|Defines common characteristics of a handle.|
|[MutexTraits Structure](mutextraits-structure.md)|Defines common characteristics of the [Mutex](mutex-class.md) class.|
|[SemaphoreTraits Structure](semaphoretraits-structure.md)|Defines common characteristics of a Semaphore object.|
|[SRWLockExclusiveTraits Structure](srwlockexclusivetraits-structure.md)|Describes common characteristics of the `SRWLock` class in exclusive lock mode.|
|[SRWLockSharedTraits Structure](srwlocksharedtraits-structure.md)|Describes common characteristics of the `SRWLock` class in shared lock mode.|

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See also

[Microsoft::WRL::Wrappers Namespace](microsoft-wrl-wrappers-namespace.md)
