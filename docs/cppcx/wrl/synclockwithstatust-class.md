---
description: "Learn more about: SyncLockWithStatusT Class"
title: "SyncLockWithStatusT Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT", "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::GetStatus", "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::IsLocked", "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::status_", "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::SyncLockWithStatusT"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT class", "Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::GetStatus method", "Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::IsLocked method", "Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::status_ data member", "Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::SyncLockWithStatusT, constructor"]
ms.assetid: 4832fd93-0ac8-4168-9404-b43fefea7476
---
# SyncLockWithStatusT Class

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template <typename SyncTraits>
class SyncLockWithStatusT : public SyncLockT<SyncTraits>;
```

### Parameters

*SyncTraits*<br/>
A type that can take exclusive or shared ownership of a resource.

## Remarks

Represents a type that can take exclusive or shared ownership of a resource.

The `SyncLockWithStatusT` class is used to implement the [Mutex](mutex-class.md) and [Semaphore](semaphore-class.md) classes.

## Members

### Public Constructors

Name                                                             | Description
---------------------------------------------------------------- | --------------------------------------------------------------
[SyncLockWithStatusT::SyncLockWithStatusT](#synclockwithstatust) | Initializes a new instance of the `SyncLockWithStatusT` class.

### Protected Constructors

Name                                                             | Description
---------------------------------------------------------------- | --------------------------------------------------------------
[SyncLockWithStatusT::SyncLockWithStatusT](#synclockwithstatust) | Initializes a new instance of the `SyncLockWithStatusT` class.

### Public Methods

Name                                         | Description
-------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------
[SyncLockWithStatusT::GetStatus](#getstatus) | Retrieves the wait status of the current `SyncLockWithStatusT` object.
[SyncLockWithStatusT::IsLocked](#islocked)   | Indicates whether the current `SyncLockWithStatusT` object owns a resource; that is, the `SyncLockWithStatusT` object is *locked*.

### Protected Data Members

Name                                    | Description
--------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------
[SyncLockWithStatusT::status_](#status) | Holds the result of the underlying wait operation after a lock operation on an object based on the current `SyncLockWithStatusT` object.

## Inheritance Hierarchy

`SyncLockT`

`SyncLockWithStatusT`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::Details

## <a name="getstatus"></a> SyncLockWithStatusT::GetStatus

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
DWORD GetStatus() const;
```

### Return Value

The result of a wait operation on the object that is based on the `SyncLockWithStatusT` class, such as a [Mutex](mutex-class.md) or [Semaphore](semaphore-class.md). Zero (0) indicates the wait operation returned the signaled state; otherwise, another state occurred, such as time-out value elapsed.

### Remarks

Retrieves the wait status of the current `SyncLockWithStatusT` object.

The GetStatus() function retrieves the value of the underlying [status_](#status) data member. When an object based on the `SyncLockWithStatusT` class performs a lock operation, the object first waits for the object to become available. The result of that wait operation is stored in the `status_` data member. The possible values of the `status_` data member are the return values of the wait operation. For more information, see the return values of the [`WaitForSingleObjectEx`](/windows/win32/api/synchapi/nf-synchapi-waitforsingleobjectex) function.

## <a name="islocked"></a> SyncLockWithStatusT::IsLocked

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
bool IsLocked() const;
```

### Remarks

Indicates whether the current `SyncLockWithStatusT` object owns a resource; that is, the `SyncLockWithStatusT` object is *locked*.

### Return Value

**`true`** if the `SyncLockWithStatusT` object is locked; otherwise, **`false`**.

## <a name="status"></a> SyncLockWithStatusT::status_

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
DWORD status_;
```

### Remarks

Holds the result of the underlying wait operation after a lock operation on an object based on the current `SyncLockWithStatusT` object.

## <a name="synclockwithstatust"></a> SyncLockWithStatusT::SyncLockWithStatusT

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
SyncLockWithStatusT(
   _Inout_ SyncLockWithStatusT&& other
);

explicit SyncLockWithStatusT(
   typename SyncTraits::Type sync,
   DWORD status
);
```

### Parameters

*other*<br/>
An rvalue-reference to another `SyncLockWithStatusT` object.

*sync*<br/>
A reference to another `SyncLockWithStatusT` object.

*status*<br/>
The value of the [status_](#status) data member of the *other* parameter or the *sync* parameter.

### Remarks

Initializes a new instance of the `SyncLockWithStatusT` class.

The first constructor initializes the current `SyncLockWithStatusT` object from another `SyncLockWithStatusT` specified by parameter *other*, and then invalidates the other `SyncLockWithStatusT` object. The second constructor is **`protected`**, and initializes the current `SyncLockWithStatusT` object to an invalid state.
