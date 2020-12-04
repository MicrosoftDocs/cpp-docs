---
description: "Learn more about: SRWLockExclusiveTraits Structure"
title: "SRWLockExclusiveTraits Structure"
ms.date: "09/27/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits", "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits::GetInvalidValue", "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits::Unlock"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits structure", "Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits::GetInvalidValue method", "Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits::Unlock method"]
ms.assetid: 38a996ef-c2d7-4886-b413-a426ecee8f05
---
# SRWLockExclusiveTraits Structure

Describes common characteristics of the `SRWLock` class in exclusive lock mode.

## Syntax

```cpp
struct SRWLockExclusiveTraits;
```

## Members

### Public Typedefs

Name   | Description
------ | --------------------------------------------------------------------------
`Type` | Synonym for a pointer to the [SRWLOCK](srwlock-class.md) class.

### Public Methods

Name                                                        | Description
----------------------------------------------------------- | --------------------------------------------------------------------
[SRWLockExclusiveTraits::GetInvalidValue](#getinvalidvalue) | Retrieves an `SRWLockExclusiveTraits` object that is always invalid.
[SRWLockExclusiveTraits::Unlock](#unlock)                   | Releases exclusive control of the specified `SRWLock` object.

## Inheritance Hierarchy

`SRWLockExclusiveTraits`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="getinvalidvalue"></a> SRWLockExclusiveTraits::GetInvalidValue

Retrieves an `SRWLockExclusiveTraits` object that is always invalid.

```cpp
inline static Type GetInvalidValue();
```

### Return Value

An empty `SRWLockExclusiveTraits` object.

## <a name="unlock"></a> SRWLockExclusiveTraits::Unlock

Releases exclusive control of the specified `SRWLock` object.

```cpp
inline static void Unlock(
   _In_ Type srwlock
);
```

### Parameters

*srwlock*<br/>
Handle to an `SRWLock` object.
