---
description: "Learn more about: accelerator_view_removed Class"
title: "accelerator_view_removed Class"
ms.date: "03/27/2019"
f1_keywords: ["accelerator_view_removed", "AMPRT/accelerator_view_removed", "AMPRT/Concurrency::accelerator_view_removed::accelerator_view_removed", "AMPRT/Concurrency::accelerator_view_removed::get_view_removed_reason"]
helpviewer_keywords: ["AMPRT/Concurrency::accelerator_view_removed::accelerator_view_removed Class"]
ms.assetid: 262446de-311c-454e-a5ed-e2aaced0d88a
---
# accelerator_view_removed Class

The exception that is thrown when an underlying DirectX call fails due to the Windows timeout detection and recovery mechanism.

## Syntax

```cpp
class accelerator_view_removed : public runtime_exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[accelerator_view_removed Constructor](#ctor)|Initializes a new instance of the `accelerator_view_removed` class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[get_view_removed_reason](#get_view_removed_reason)|Returns an HRESULT error code indicating the cause of the `accelerator_view` object's removal.|

## Inheritance Hierarchy

`exception`

`runtime_exception`

`out_of_memory`

## Requirements

**Header:** amprt.h

**Namespace:** Concurrency

## <a name="ctor"></a> accelerator_view_removed

Initializes a new instance of the [accelerator_view_removed](accelerator-view-removed-class.md) class.

### Syntax

```cpp
explicit accelerator_view_removed(
    const char * message,
    HRESULT view_removed_reason ) throw();

explicit accelerator_view_removed(
    HRESULT view_removed_reason ) throw();
```

### Parameters

*message*<br/>
A description of the error.

*view_removed_reason*<br/>
An HRESULT error code indicating the cause of removal of the `accelerator_view` object.

### Return Value

A new instance of the `accelerator_view_removed` class.

## <a name="get_view_removed_reason"></a> get_view_removed_reason

Returns an HRESULT error code indicating the cause of the `accelerator_view` object's removal.

### Syntax

```cpp
HRESULT get_view_removed_reason() const throw();
```

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
