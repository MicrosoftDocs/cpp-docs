---
description: "Learn more about: Mutex Class"
title: "Mutex Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Mutex", "corewrappers/Microsoft::WRL::Wrappers::Mutex::Lock", "corewrappers/Microsoft::WRL::Wrappers::Mutex::Mutex", "corewrappers/Microsoft::WRL::Wrappers::Mutex::operator="]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::Mutex class", "Microsoft::WRL::Wrappers::Mutex::Lock method", "Microsoft::WRL::Wrappers::Mutex::Mutex, constructor", "Microsoft::WRL::Wrappers::Mutex::operator= operator"]
ms.assetid: 682a0963-721c-46a2-8871-000e9997505b
---
# Mutex Class

Represents a synchronization object that exclusively controls a shared resource.

## Syntax

```cpp
class Mutex : public HandleT<HandleTraits::MutexTraits>;
```

## Members

### Public Typedefs

Name       | Description
---------- | ------------------------------------------------------
`SyncLock` | A synonym for a class that supports synchronous locks.

### Public Constructor

Name                   | Description
---------------------- | ------------------------------------------------
[Mutex::Mutex](#mutex) | Initializes a new instance of the `Mutex` class.

### Public Members

Name                 | Description
-------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------
[Mutex::Lock](#lock) | Waits until the current object, or the `Mutex` object associated with the specified handle, releases the mutex or the specified time-out interval has elapsed.

### Public Operator

Name                                 | Description
------------------------------------ | ---------------------------------------------------------------------------
[Mutex::operator=](#operator-assign) | Assigns (moves) the specified `Mutex` object to the current `Mutex` object.

## Inheritance Hierarchy

`Mutex`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="lock"></a> Mutex::Lock

Waits until the current object, or the `Mutex` object associated with the specified handle, releases the mutex or the specified time-out interval has elapsed.

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
The handle of a `Mutex` object.

### Return Value

## <a name="mutex"></a> Mutex::Mutex

Initializes a new instance of the `Mutex` class.

```cpp
explicit Mutex(
   HANDLE h
);

Mutex(
   _Inout_ Mutex&& h
);
```

### Parameters

*h*<br/>
A handle, or an rvalue-reference to a handle, to a `Mutex` object.

### Remarks

The first constructor initializes a `Mutex` object from the specified handle. The second constructor initializes a `Mutex` object from the specified handle, and then moves ownership of the mutex to the current `Mutex` object.

## <a name="operator-assign"></a> Mutex::operator=

Assigns (moves) the specified `Mutex` object to the current `Mutex` object.

```cpp
Mutex& operator=(
   _Inout_ Mutex&& h
);
```

### Parameters

*h*<br/>
An rvalue-reference to a `Mutex` object.

### Return Value

A reference to the current `Mutex` object.

### Remarks

For more information, see the **Move Semantics** section of [Rvalue Reference Declarator: &&](../../cpp/rvalue-reference-declarator-amp-amp.md).
