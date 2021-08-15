---
description: "Learn more about: Semaphore Class"
title: "Semaphore Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Semaphore", "corewrappers/Microsoft::WRL::Wrappers::Semaphore::Lock", "corewrappers/Microsoft::WRL::Wrappers::Semaphore::operator=", "corewrappers/Microsoft::WRL::Wrappers::Semaphore::Semaphore"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::Semaphore class", "Microsoft::WRL::Wrappers::Semaphore::Lock method", "Microsoft::WRL::Wrappers::Semaphore::operator= operator", "Microsoft::WRL::Wrappers::Semaphore::Semaphore, constructor"]
ms.assetid: ded53526-17b4-4381-9c60-ea5e77363db6
---
# Semaphore Class

Represents a synchronization object that controls a shared resource that can support a limited number of users.

## Syntax

```cpp
class Semaphore : public HandleT<HandleTraits::SemaphoreTraits>;
```

## Members

### Public Typedefs

Name       | Description
---------- | ------------------------------------------------------
`SyncLock` | A synonym for a class that supports synchronous locks.

### Public Constructors

Name                               | Description
---------------------------------- | ----------------------------------------------------
[Semaphore::Semaphore](#semaphore) | Initializes a new instance of the `Semaphore` class.

### Public Methods

Name                     | Description
------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------
[Semaphore::Lock](#lock) | Waits until the current object, or the object associated with the specified handle, is in the signaled state or the specified time-out interval has elapsed.

### Public Operators

Name                                     | Description
---------------------------------------- | ---------------------------------------------------------------------------------------
[Semaphore::operator=](#operator-assign) | Moves the specified handle from a `Semaphore` object to the current `Semaphore` object.

## Inheritance Hierarchy

`Semaphore`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="lock"></a> Semaphore::Lock

Waits until the current object, or the `Semaphore` object associated with the specified handle, is in the signaled state or the specified time-out interval has elapsed.

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

*milliseconds*<br/>
The time-out interval, in milliseconds. The default value is INFINITE, which waits indefinitely.

*h*<br/>
A handle to a `Semaphore` object.

### Return Value

A `Details::SyncLockWithStatusT<HandleTraits::SemaphoreTraits>`

## <a name="operator-assign"></a> Semaphore::operator=

Moves the specified handle from a `Semaphore` object to the current `Semaphore` object.

```cpp
Semaphore& operator=(
   _Inout_ Semaphore&& h
);
```

### Parameters

*h*<br/>
Rvalue-reference to a `Semaphore` object.

### Return Value

A reference to the current `Semaphore` object.

## <a name="semaphore"></a> Semaphore::Semaphore

Initializes a new instance of the `Semaphore` class.

```cpp
explicit Semaphore(
   HANDLE h
);

WRL_NOTHROW Semaphore(
   _Inout_ Semaphore&& h
);
```

### Parameters

*h*<br/>
A handle or an rvalue-reference to a `Semaphore` object.
