---
description: "Learn more about: HandleT Class"
title: "HandleT Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleT", "corewrappers/Microsoft::WRL::Wrappers::HandleT::Attach", "corewrappers/Microsoft::WRL::Wrappers::HandleT::Close", "corewrappers/Microsoft::WRL::Wrappers::HandleT::Detach", "corewrappers/Microsoft::WRL::Wrappers::HandleT::Get", "corewrappers/Microsoft::WRL::Wrappers::HandleT::handle_", "corewrappers/Microsoft::WRL::Wrappers::HandleT::HandleT", "corewrappers/Microsoft::WRL::Wrappers::HandleT::InternalClose", "corewrappers/Microsoft::WRL::Wrappers::HandleT::IsValid", "corewrappers/Microsoft::WRL::Wrappers::HandleT::operator=", "corewrappers/Microsoft::WRL::Wrappers::HandleT::~HandleT"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::HandleT class", "Microsoft::WRL::Wrappers::HandleT::Attach method", "Microsoft::WRL::Wrappers::HandleT::Close method", "Microsoft::WRL::Wrappers::HandleT::Detach method", "Microsoft::WRL::Wrappers::HandleT::Get method", "Microsoft::WRL::Wrappers::HandleT::handle_ data member", "Microsoft::WRL::Wrappers::HandleT::HandleT, constructor", "Microsoft::WRL::Wrappers::HandleT::InternalClose method", "Microsoft::WRL::Wrappers::HandleT::IsValid method", "Microsoft::WRL::Wrappers::HandleT::operator= operator", "Microsoft::WRL::Wrappers::HandleT::~HandleT, destructor"]
ms.assetid: 3822b32a-a426-4d94-a54d-919d4df60ee2
---
# HandleT Class

Represents a handle to an object.

## Syntax

```cpp
template <typename HandleTraits>
class HandleT;
```

### Parameters

*HandleTraits*<br/>
An instance of the [HandleTraits](handletraits-structure.md) structure that defines common characteristics of a handle.

## Members

### Public Typedefs

Name     | Description
-------- | -----------------------------
`Traits` | A synonym for `HandleTraits`.

### Public Constructors

Name                                | Description
----------------------------------- | --------------------------------------------------
[HandleT::HandleT](#handlet)        | Initializes a new instance of the `HandleT` class.
[HandleT::~HandleT](#tilde-handlet) | Deinitializes an instance of the `HandleT` class.

### Public Methods

Name                         | Description
---------------------------- | ----------------------------------------------------------------------
[HandleT::Attach](#attach)   | Associates the specified handle with the current `HandleT` object.
[HandleT::Close](#close)     | Closes the current `HandleT` object.
[HandleT::Detach](#detach)   | Disassociates the current `HandleT` object from its underlying handle.
[HandleT::Get](#get)         | Gets the value of the underlying handle.
[HandleT::IsValid](#isvalid) | Indicates whether the current `HandleT` object represents a handle.

### Protected Methods

Name                                     | Description
---------------------------------------- | ------------------------------------
[HandleT::InternalClose](#internalclose) | Closes the current `HandleT` object.

### Public Operators

Name                                   | Description
-------------------------------------- | ----------------------------------------------------------------------------------
[HandleT::operator=](#operator-assign) | Moves the value of the specified `HandleT` object to the current `HandleT` object.

### Protected Data Members

Name                        | Description
--------------------------- | ----------------------------------------------------------------
[HandleT::handle_](#handle) | Contains the handle that is represented by the `HandleT` object.

## Inheritance Hierarchy

`HandleT`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="tilde-handlet"></a> HandleT::~HandleT

Deinitializes an instance of the `HandleT` class.

```cpp
~HandleT();
```

## <a name="attach"></a> HandleT::Attach

Associates the specified handle with the current `HandleT` object.

```cpp
void Attach(
   typename HandleTraits::Type h
);
```

### Parameters

*h*<br/>
A handle.

## <a name="close"></a> HandleT::Close

Closes the current `HandleT` object.

```cpp
void Close();
```

### Remarks

The handle that underlies the current `HandleT` is closed, and the `HandleT` is set to the invalid state.

If the handle doesn't close properly, an exception is raised in the calling thread.

## <a name="detach"></a> HandleT::Detach

Disassociates the current `HandleT` object from its underlying handle.

```cpp
typename HandleTraits::Type Detach();
```

### Return Value

The underlying handle.

### Remarks

When this operation completes, the current `HandleT` is set to the invalid state.

## <a name="get"></a> HandleT::Get

Gets the value of the underlying handle.

```cpp
typename HandleTraits::Type Get() const;
```

### Return Value

A handle.

## <a name="handle"></a> HandleT::handle_

Contains the handle that is represented by the `HandleT` object.

```cpp
typename HandleTraits::Type handle_;
```

## <a name="handlet"></a> HandleT::HandleT

Initializes a new instance of the `HandleT` class.

```cpp
explicit HandleT(
   typename HandleTraits::Type h =
      HandleTraits::GetInvalidValue()
);

HandleT(
   _Inout_ HandleT&& h
);
```

### Parameters

*h*<br/>
A handle.

### Remarks

The first constructor initializes a `HandleT` object that is not a valid handle to an object. The second constructor creates a new `HandleT` object from parameter *h*.

## <a name="internalclose"></a> HandleT::InternalClose

Closes the current `HandleT` object.

```cpp
virtual bool InternalClose();
```

### Return Value

**`true`** if the current `HandleT` closed successfully; otherwise, **`false`**.

### Remarks

`InternalClose()` is **`protected`**.

## <a name="isvalid"></a> HandleT::IsValid

Indicates whether the current `HandleT` object represents a handle.

```cpp
bool IsValid() const;
```

### Return Value

**`true`** if the `HandleT` represents a handle; otherwise, **`false`**.

## <a name="operator-assign"></a> HandleT::operator=

Moves the value of the specified `HandleT` object to the current `HandleT` object.

```cpp
HandleT& operator=(
   _Inout_ HandleT&& h
);
```

### Parameters

*h*<br/>
An rvalue-reference to a handle.

### Return Value

A reference to the current `HandleT` object.

### Remarks

This operation invalidates the `HandleT` object specified by parameter *h*.
