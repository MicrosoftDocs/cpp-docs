---
description: "Learn more about: MakeAllocator Class"
title: "MakeAllocator Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::MakeAllocator", "implements/Microsoft::WRL::Details::MakeAllocator::Allocate", "implements/Microsoft::WRL::Details::MakeAllocator::Detach", "implements/Microsoft::WRL::Details::MakeAllocator::MakeAllocator", "implements/Microsoft::WRL::Details::MakeAllocator::~MakeAllocator"]
helpviewer_keywords: ["Microsoft::WRL::Details::MakeAllocator class", "Microsoft::WRL::Details::MakeAllocator::Allocate method", "Microsoft::WRL::Details::MakeAllocator::Detach method", "Microsoft::WRL::Details::MakeAllocator::MakeAllocator, constructor", "Microsoft::WRL::Details::MakeAllocator::~MakeAllocator, destructor"]
ms.assetid: a1114615-abd7-4a56-9bc3-750c118f0fa1
---
# MakeAllocator Class

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template<
    typename T,
    bool hasWeakReferenceSupport =
          !__is_base_of(RuntimeClassFlags<InhibitWeakReference>,
                        T)
>
class MakeAllocator;

template<typename T>
class MakeAllocator<T, false>;

template<typename T>
class MakeAllocator<T, true>;
```

### Parameters

*T*<br/>
A type name.

*hasWeakReferenceSupport*<br/>
**`true`** to allocate memory for an object that supports weak references; **`false`** to allocate memory for an object that doesn't support weak references.

## Remarks

Allocates memory for an activatable class, with or without weak reference support.

Override the `MakeAllocator` class to implement a user-defined memory allocation model.

`MakeAllocator` is typically used to prevent memory leaks if an object throws during construction.

## Members

### Public Constructors

Name                                                  | Description
----------------------------------------------------- | ----------------------------------------------------------------
[MakeAllocator::MakeAllocator](#makeallocator)        | Initializes a new instance of the `MakeAllocator` class.
[MakeAllocator::~MakeAllocator](#tilde-makeallocator) | Deinitializes the current instance of the `MakeAllocator` class.

### Public Methods

Name                                 | Description
------------------------------------ | -----------------------------------------------------------------------------------------------------------
[MakeAllocator::Allocate](#allocate) | Allocates memory and associates it with the current `MakeAllocator` object.
[MakeAllocator::Detach](#detach)     | Disassociates memory allocated by the [Allocate](#allocate) method from the current `MakeAllocator` object.

## Inheritance Hierarchy

`MakeAllocator`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## <a name="allocate"></a> MakeAllocator::Allocate

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
__forceinline void* Allocate();
```

### Return Value

If successful, a pointer to the allocated memory; otherwise, **`nullptr`**.

### Remarks

Allocates memory and associates it with the current `MakeAllocator` object.

The size of the allocated memory is the size of the type specified by the current `MakeAllocator` template parameter.

A developer needs to override only the `Allocate()` method to implement a different memory allocation model.

## <a name="detach"></a> MakeAllocator::Detach

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
__forceinline void Detach();
```

### Remarks

Disassociates memory allocated by the [Allocate](#allocate) method from the current `MakeAllocator` object.

If you call `Detach()`, you are responsible for deleting the memory provided by the `Allocate` method.

## <a name="makeallocator"></a> MakeAllocator::MakeAllocator

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
MakeAllocator();
```

### Remarks

Initializes a new instance of the `MakeAllocator` class.

## <a name="tilde-makeallocator"></a> MakeAllocator::~MakeAllocator

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
~MakeAllocator();
```

### Remarks

Deinitializes the current instance of the `MakeAllocator` class.

This destructor also deletes the underlying allocated memory if necessary.
