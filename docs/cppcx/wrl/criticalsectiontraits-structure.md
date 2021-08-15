---
description: "Learn more about: CriticalSectionTraits Structure"
title: "CriticalSectionTraits Structure"
ms.date: "09/26/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits", "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::GetInvalidValue", "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::Unlock"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits structure", "Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::GetInvalidValue method", "Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::Unlock method"]
ms.assetid: c515a1b5-4eb0-40bc-9035-c4d9352c9de7
---
# CriticalSectionTraits Structure

Specializes a `CriticalSection` object to support either an invalid critical section or a function to release a critical section.

## Syntax

```
struct CriticalSectionTraits;
```

## Members

### Public Typedefs

Name   | Description
------ | -----------------------------------------------------------------------------------------------------------------
`Type` | A **`typedef`** that defines a pointer to a critical section. `Type` is defined as `typedef CRITICAL_SECTION* Type;`.

### Public Methods

Name                                                       | Description
---------------------------------------------------------- | -----------------
[CriticalSectionTraits::GetInvalidValue](#getinvalidvalue) | Specializes a `CriticalSection` template so that the template is always invalid.
[CriticalSectionTraits::Unlock](#unlock)                   | Specializes a `CriticalSection` template so that it supports releasing ownership of the specified critical section object.

## Inheritance Hierarchy

`CriticalSectionTraits`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="getinvalidvalue"></a> CriticalSectionTraits::GetInvalidValue

Specializes a `CriticalSection` template so that the template is always invalid.

```cpp
inline static Type GetInvalidValue();
```

### Return Value

Always returns a pointer to an invalid critical section.

### Remarks

The `Type` modifier is defined as `typedef CRITICAL_SECTION* Type;`.

## <a name="unlock"></a> CriticalSectionTraits::Unlock

Specializes a `CriticalSection` template so that it supports releasing ownership of the specified critical section object.

```cpp
inline static void Unlock(
   _In_ Type cs
);
```

### Parameters

*cs*<br/>
A pointer to a critical section object.

### Remarks

The `Type` modifier is defined as `typedef CRITICAL_SECTION* Type;`.

For more information, see **LeaveCriticalSection function** in the **Synchronization Functions** section of the Windows API documentation.
