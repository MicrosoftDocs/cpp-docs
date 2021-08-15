---
description: "Learn more about: CriticalSection Class"
title: "CriticalSection Class"
ms.date: "09/24/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::CriticalSection", "corewrappers/Microsoft::WRL::Wrappers::CriticalSection::cs_", "corewrappers/Microsoft::WRL::Wrappers::CriticalSection::IsValid", "corewrappers/Microsoft::WRL::Wrappers::CriticalSection::Lock", "corewrappers/Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection", "corewrappers/Microsoft::WRL::Wrappers::CriticalSection::CriticalSection", "corewrappers/Microsoft::WRL::Wrappers::CriticalSection::TryLock"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::CriticalSection class", "Microsoft::WRL::Wrappers::CriticalSection::cs_ data member", "Microsoft::WRL::Wrappers::CriticalSection::IsValid method", "Microsoft::WRL::Wrappers::CriticalSection::Lock method", "Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection, destructor", "Microsoft::WRL::Wrappers::CriticalSection::CriticalSection, constructor", "Microsoft::WRL::Wrappers::CriticalSection::TryLock method"]
ms.assetid: f2e0a024-71a3-4f6b-99ea-d93a4a608ac4
---
# CriticalSection Class

Represents a critical section object.

## Syntax

```cpp
class CriticalSection;
```

## Members

### Constructor

Name                                                        | Description
----------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------
[CriticalSection::CriticalSection](#criticalsection)        | Initializes a synchronization object that is similar to a mutex object, but can be used by only the threads of a single process.
[CriticalSection::~CriticalSection](#tilde-criticalsection) | Deinitializes and destroys the current `CriticalSection` object.

### Public Methods

Name                                 | Description
------------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------
[CriticalSection::IsValid](#isvalid) | Indicates whether the current critical section is valid.
[CriticalSection::Lock](#lock)       | Waits for ownership of the specified critical section object. The function returns when the calling thread is granted ownership.
[CriticalSection::TryLock](#trylock) | Attempts to enter a critical section without blocking. If the call is successful, the calling thread takes ownership of the critical section.

### Protected Data Members

Name                        | Description
--------------------------- | ----------------------------------------
[CriticalSection::cs_](#cs) | Declares a critical section data member.

## Inheritance Hierarchy

`CriticalSection`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="tilde-criticalsection"></a> CriticalSection::~CriticalSection

Deinitializes and destroys the current `CriticalSection` object.

```cpp
WRL_NOTHROW ~CriticalSection();
```

## <a name="criticalsection"></a> CriticalSection::CriticalSection

Initializes a synchronization object that is similar to a mutex object, but can be used by only the threads of a single process.

```cpp
explicit CriticalSection(
   ULONG spincount = 0
);
```

### Parameters

*spincount*<br/>
The spin count for the critical section object. The default value is 0.

### Remarks

For more information about critical sections and spincounts, see the `InitializeCriticalSectionAndSpinCount` function in the `Synchronization` section of the Windows API documenation.

## <a name="cs"></a> CriticalSection::cs_

Declares a critical section data member.

```cpp
CRITICAL_SECTION cs_;
```

### Remarks

This data member is protected.

## <a name="isvalid"></a> CriticalSection::IsValid

Indicates whether the current critical section is valid.

```cpp
bool IsValid() const;
```

### Return Value

By default, always returns **`true`**.

## <a name="lock"></a> CriticalSection::Lock

Waits for ownership of the specified critical section object. The function returns when the calling thread is granted ownership.

```cpp
SyncLock Lock();

   static SyncLock Lock(
   _In_ CRITICAL_SECTION* cs
);
```

### Parameters

*cs*<br/>
A user-specified critical section object.

### Return Value

A lock object that can be used to unlock the current critical section.

### Remarks

The first `Lock` function affects the current critical section object. The second `Lock` function affects a user-specified critical section.

## <a name="trylock"></a> CriticalSection::TryLock

Attempts to enter a critical section without blocking. If the call is successful, the calling thread takes ownership of the critical section.

```cpp
SyncLock TryLock();

static SyncLock TryLock(
   _In_ CRITICAL_SECTION* cs
);
```

### Parameters

*cs*<br/>
A user-specified critical section object.

### Return Value

A nonzero value if the critical section is successfully entered or the current thread already owns the critical section. Zero if another thread already owns the critical section.

### Remarks

The first `TryLock` function affects the current critical section object. The second `TryLock` function affects a user-specified critical section.
