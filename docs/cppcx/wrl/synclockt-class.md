---
description: "Learn more about: SyncLockT Class"
title: "SyncLockT Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT", "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::IsLocked", "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::sync_", "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::SyncLockT", "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::~SyncLockT", "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::Unlock"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::Details::SyncLockT class", "Microsoft::WRL::Wrappers::Details::SyncLockT::IsLocked method", "Microsoft::WRL::Wrappers::Details::SyncLockT::sync_ data member", "Microsoft::WRL::Wrappers::Details::SyncLockT::SyncLockT, constructor", "Microsoft::WRL::Wrappers::Details::SyncLockT::~SyncLockT, destructor", "Microsoft::WRL::Wrappers::Details::SyncLockT::Unlock method"]
ms.assetid: a967f6f7-3555-43d1-b210-2bb65d63d15e
---
# SyncLockT Class

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template <typename SyncTraits>
class SyncLockT;
```

### Parameters

*SyncTraits*<br/>
The type that can take ownership of a resource.

## Remarks

Represents a type that can take exclusive or shared ownership of a resource.

The `SyncLockT` class is used, for example, to help implement the [SRWLock](srwlock-class.md) class.

## Members

### Public Constructors

Name                                      | Description
----------------------------------------- | ----------------------------------------------------
[SyncLockT::SyncLockT](#synclockt)        | Initializes a new instance of the `SyncLockT` class.
[SyncLockT::~SyncLockT](#tilde-synclockt) | Deinitializes an instance of the `SyncLockT` class.

### Protected Constructors

Name                               | Description
---------------------------------- | ----------------------------------------------------
[SyncLockT::SyncLockT](#synclockt) | Initializes a new instance of the `SyncLockT` class.

### Public Methods

Name                             | Description
-------------------------------- | --------------------------------------------------------------------------------------------------------------
[SyncLockT::IsLocked](#islocked) | Indicates whether the current `SyncLockT` object owns a resource; that is, the `SyncLockT` object is *locked*.
[SyncLockT::Unlock](#unlock)     | Releases control of the resource held by the current `SyncLockT` object, if any.

### Protected Data Members

Name                      | Description
------------------------- | -------------------------------------------------------------------
[SyncLockT::sync_](#sync) | Holds the underlying resource represented by the `SyncLockT` class.

## Inheritance Hierarchy

`SyncLockT`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::Details

## <a name="tilde-synclockt"></a> SyncLockT::~SyncLockT

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
~SyncLockT();
```

### Remarks

Deinitializes an instance of the `SyncLockT` class.

This destructor also unlocks the current `SyncLockT` instance.

## <a name="islocked"></a> SyncLockT::IsLocked

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
bool IsLocked() const;
```

### Return Value

**`true`** if the `SyncLockT` object is locked; otherwise, **`false`**.

### Remarks

Indicates whether the current `SyncLockT` object owns a resource; that is, the `SyncLockT` object is *locked*.

## <a name="sync"></a> SyncLockT::sync_

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
typename SyncTraits::Type sync_;
```

### Remarks

Holds the underlying resource represented by the `SyncLockT` class.

## <a name="synclockt"></a> SyncLockT::SyncLockT

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
SyncLockT(
   _Inout_ SyncLockT&& other
);

explicit SyncLockT(
   typename SyncTraits::Type sync = SyncTraits::GetInvalidValue()
);
```

### Parameters

*other*<br/>
An rvalue-reference to another `SyncLockT` object.

*sync*<br/>
A reference to another `SyncLockWithStatusT` object.

### Remarks

Initializes a new instance of the `SyncLockT` class.

The first constructor initializes the current `SyncLockT` object from another `SyncLockT` object specified by parameter *other*, and then invalidates the other `SyncLockT` object. The second constructor is **`protected`**, and initializes the current `SyncLockT` object to an invalid state.

## <a name="unlock"></a> SyncLockT::Unlock

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
void Unlock();
```

### Remarks

Releases control of the resource held by the current `SyncLockT` object, if any.
