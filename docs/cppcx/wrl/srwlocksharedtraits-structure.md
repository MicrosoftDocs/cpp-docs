---
description: "Learn more about: SRWLockSharedTraits Structure"
title: "SRWLockSharedTraits Structure"
ms.date: "09/27/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits", "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits::GetInvalidValue", "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits::Unlock"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits structure", "Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits::GetInvalidValue method", "Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits::Unlock method"]
ms.assetid: 709cb51e-d70c-40b6-bdb4-d8eacf3af495
---
# SRWLockSharedTraits Structure

Describes common characteristics of the `SRWLock` class in shared lock mode.

## Syntax

```cpp
struct SRWLockSharedTraits;
```

## Members

### Public Typedefs

Name   | Description
------ | --------------------------------------------------------------------------
`Type` | Synonym for a pointer to the [SRWLOCK](srwlock-class.md) class.

### Public Methods

Name                                                     | Description
-------------------------------------------------------- | -----------------------------------------------------------------
[SRWLockSharedTraits::GetInvalidValue](#getinvalidvalue) | Retrieves an `SRWLockSharedTraits` object that is always invalid.
[SRWLockSharedTraits::Unlock](#unlock)                   | Releases exclusive control of the specified `SRWLock` object.

## Inheritance Hierarchy

`SRWLockSharedTraits`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="getinvalidvalue"></a> SRWLockSharedTraits::GetInvalidValue

Retrieves an `SRWLockSharedTraits` object that is always invalid.

```cpp
inline static Type GetInvalidValue();
```

### Return Value

A handle to a `SRWLockSharedTraits` object.

## <a name="unlock"></a> SRWLockSharedTraits::Unlock

Releases exclusive control of the specified `SRWLock` object.

```cpp
inline static void Unlock(
   _In_ Type srwlock
);
```

### Parameters

*srwlock*<br/>
A handle to an `SRWLock` object.
