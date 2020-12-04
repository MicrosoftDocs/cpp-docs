---
description: "Learn more about: RoInitializeWrapper Class"
title: "RoInitializeWrapper Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper", "corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::HRESULT", "corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::RoInitializeWrapper", "corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper"]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::RoInitializeWrapper class", "Microsoft::WRL::Wrappers::RoInitializeWrapper::operator HRESULT operator", "Microsoft::WRL::Wrappers::RoInitializeWrapper::RoInitializeWrapper, constructor", "Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper, destructor"]
ms.assetid: 4055fbe0-63a7-4c06-b5a0-414fda5640e5
---
# RoInitializeWrapper Class

Initializes the Windows Runtime.

## Syntax

```cpp
class RoInitializeWrapper;
```

## Remarks

`RoInitializeWrapper` is a convenience that initializes the Windows Runtime and returns an HRESULT that indicates whether the operation was successful. Because the class destructor calls `::Windows::Foundation::Uninitialize`, instances of `RoInitializeWrapper` must be declared at global or top-level scope.

## Members

### Public Constructors

Name                                                                    | Description
----------------------------------------------------------------------- | -----------------------------------------------------------------
[RoInitializeWrapper::RoInitializeWrapper](#roinitializewrapper)        | Initializes a new instance of the `RoInitializeWrapper` class.
[RoInitializeWrapper::~RoInitializeWrapper](#tilde-roinitializewrapper) | Destroys the current instance of the `RoInitializeWrapper` class.

### Public Operators

Name                                       | Description
------------------------------------------ | ------------------------------------------------------------------------
[RoInitializeWrapper::HRESULT()](#hresult) | Retrieves the HRESULT produced by the `RoInitializeWrapper` constructor.

## Inheritance Hierarchy

`RoInitializeWrapper`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="hresult"></a> RoInitializeWrapper::HRESULT()

Retrieves the HRESULT value produced by the last `RoInitializeWrapper` constructor.

```cpp
operator HRESULT()
```

## <a name="roinitializewrapper"></a> RoInitializeWrapper::RoInitializeWrapper

Initializes a new instance of the `RoInitializeWrapper` class.

```cpp
RoInitializeWrapper(RO_INIT_TYPE flags)
```

### Parameters

*flags*<br/>
One of the RO_INIT_TYPE enumerations, which specifies the support provided by the Windows Runtime.

### Remarks

The `RoInitializeWrapper` class invokes `Windows::Foundation::Initialize(flags)`.

## <a name="tilde-roinitializewrapper"></a> RoInitializeWrapper::~RoInitializeWrapper

Uninitializes the Windows Runtime.

```cpp
~RoInitializeWrapper()
```

### Remarks

The `RoInitializeWrapper` class invokes `Windows::Foundation::Uninitialize()`.
