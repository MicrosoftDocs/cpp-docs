---
description: "Learn more about: SRWLock Class"
title: "SRWLock Class"
ms.date: "09/25/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::SRWLock", "corewrappers/Microsoft::WRL::Wrappers::SRWLock::LockExclusive", "corewrappers/Microsoft::WRL::Wrappers::SRWLock::LockShared", "corewrappers/Microsoft::WRL::Wrappers::SRWLock::SRWLock", "corewrappers/Microsoft::WRL::Wrappers::SRWLock::SRWLock_", "corewrappers/Microsoft::WRL::Wrappers::SRWLock::~SRWLock", "corewrappers/Microsoft::WRL::Wrappers::SRWLock::TryLockExclusive", "corewrappers/Microsoft::WRL::Wrappers::SRWLock::TryLockShared"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::SRWLock class", "Microsoft::WRL::Wrappers::SRWLock::LockExclusive method", "Microsoft::WRL::Wrappers::SRWLock::LockShared method", "Microsoft::WRL::Wrappers::SRWLock::SRWLock, constructor", "Microsoft::WRL::Wrappers::SRWLock::SRWLock_ data member", "Microsoft::WRL::Wrappers::SRWLock::~SRWLock, destructor", "Microsoft::WRL::Wrappers::SRWLock::TryLockExclusive method", "Microsoft::WRL::Wrappers::SRWLock::TryLockShared method"]
ms.assetid: 4fa250e3-5f29-4b06-ac24-61b6c04ade93
---
# SRWLock Class

Represents a slim reader/writer lock.

## Syntax

```cpp
class SRWLock;
```

## Remarks

A slim reader/writer lock is used to synchronize access across threads to an object or resource. For more information, see [Synchronization Functions](/windows/win32/Sync/synchronization-functions).

## Members

### Public Typedefs

Name                | Description
------------------- | -------------------------------------------------------------------
`SyncLockExclusive` | Synonym for an `SRWLock` object that is acquired in exclusive mode.
`SyncLockShared`    | Synonym for an `SRWLock` object that is acquired in shared mode.

### Public Constructors

Name                                     | Description
---------------------------------------- | --------------------------------------------------
[SRWLock::SRWLock](#srwlock-constructor) | Initializes a new instance of the `SRWLock` class.
[SRWLock::~SRWLock](#tilde-srwlock)      | Deinitializes an instance of the `SRWLock` class.

### Public Methods

Name                                           | Description
---------------------------------------------- | -------------------------------------------------------------------------------------------------------
[SRWLock::LockExclusive](#lockexclusive)       | Acquires an `SRWLock` object in exclusive mode.
[SRWLock::LockShared](#lockshared)             | Acquires an `SRWLock` object in shared mode.
[SRWLock::TryLockExclusive](#trylockexclusive) | Attempts to acquire a `SRWLock` object in exclusive mode for the current or specified `SRWLock` object.
[SRWLock::TryLockShared](#trylockshared)       | Attempts to acquire a `SRWLock` object in shared mode for the current or specified `SRWLock` object.

### Protected Data Member

Name                                      | Description
----------------------------------------- | -----------------------------------------------------------------------
[SRWLock::SRWLock_](#srwlock-data-member) | Contains the underlying lock variable for the current `SRWLock` object.

## Inheritance Hierarchy

`SRWLock`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="tilde-srwlock"></a> SRWLock::~SRWLock

Deinitializes an instance of the `SRWLock` class.

```cpp
~SRWLock();
```

## <a name="lockexclusive"></a> SRWLock::LockExclusive

Acquires an `SRWLock` object in exclusive mode.

```cpp
SyncLockExclusive LockExclusive();

static SyncLockExclusive LockExclusive(
   _In_ SRWLOCK* lock
);
```

### Parameters

*lock*<br/>
Pointer to an `SRWLock` object.

### Return Value

An `SRWLock` object in exclusive mode.

## <a name="lockshared"></a> SRWLock::LockShared

Acquires an `SRWLock` object in shared mode.

```cpp
SyncLockShared LockShared();

static SyncLockShared LockShared(
   _In_ SRWLOCK* lock
);
```

### Parameters

*lock*<br/>
Pointer to an `SRWLock` object.

### Return Value

An `SRWLock` object in shared mode.

## <a name="srwlock-constructor"></a> SRWLock::SRWLock

Initializes a new instance of the `SRWLock` class.

```cpp
SRWLock();
```

## <a name="srwlock-data-member"></a> SRWLock::SRWLock_

Contains the underlying lock variable for the current `SRWLock` object.

```cpp
SRWLOCK SRWLock_;
```

## <a name="trylockexclusive"></a> SRWLock::TryLockExclusive

Attempts to acquire a `SRWLock` object in exclusive mode for the current or specified `SRWLock` object. If the call is successful, the calling thread takes ownership of the lock.

```cpp
SyncLockExclusive TryLockExclusive();

static SyncLockExclusive TryLockExclusive(
   _In_ SRWLOCK* lock
);
```

### Parameters

*lock*<br/>
Pointer to an `SRWLock` object.

### Return Value

If successful, an `SRWLock` object in exclusive mode and the calling thread takes ownership of the lock. Otherwise, an `SRWLock` object whose state is invalid.

## <a name="trylockshared"></a> SRWLock::TryLockShared

Attempts to acquire a `SRWLock` object in shared mode for the current or specified `SRWLock` object.

```cpp
WRL_NOTHROW SyncLockShared TryLockShared();
WRL_NOTHROW static SyncLockShared TryLockShared(
   _In_ SRWLOCK* lock
);
```

### Parameters

*lock*<br/>
Pointer to an `SRWLock` object.

### Return Value

If successful, an `SRWLock` object in shared mode and the calling thread takes ownership of the lock. Otherwise, an `SRWLock` object whose state is invalid.
