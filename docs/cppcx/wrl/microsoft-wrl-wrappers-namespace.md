---
description: "Learn more about: Microsoft::WRL::Wrappers Namespace"
title: "Microsoft::WRL::Wrappers Namespace"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers"]
helpviewer_keywords: ["Wrappers namespace"]
ms.assetid: 36ac38c7-1fc3-42da-a879-5c68661dc9e1
---
# Microsoft::WRL::Wrappers Namespace

Defines Resource Acquisition Is Initialization (RAII) wrapper types that simplify the lifetime management of objects, strings, and handles.

## Syntax

```cpp
namespace Microsoft::WRL::Wrappers;
```

## Members

### Typedefs

|Name|Description|
|----------|-----------------|
|`FileHandle`|`HandleT<HandleTraits::FileHandleTraits>`|

### Classes

|Name|Description|
|----------|-----------------|
|[CriticalSection Class](criticalsection-class.md)|Represents a critical section object.|
|[Event Class (WRL)](event-class-wrl.md)|Represents an event.|
|[HandleT Class](handlet-class.md)|Represents a handle to an object.|
|[HString Class](hstring-class.md)|Provides support for manipulating HSTRING handles.|
|[HStringReference Class](hstringreference-class.md)|Represents an HSTRING that is created from an existing string.|
|[Mutex Class](mutex-class.md)|Represents a synchronization object that exclusively controls a shared resource.|
|[RoInitializeWrapper Class](roinitializewrapper-class.md)|Initializes the Windows Runtime.|
|[Semaphore Class](semaphore-class.md)|Represents a synchronization object that controls a shared resource that can support a limited number of users.|
|[SRWLock Class](srwlock-class.md)|Represents a slim reader/writer lock.|

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See also

[Microsoft::WRL Namespace](microsoft-wrl-namespace.md)
