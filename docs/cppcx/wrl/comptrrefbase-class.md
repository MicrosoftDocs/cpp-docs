---
description: "Learn more about: ComPtrRefBase Class"
title: "ComPtrRefBase Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::Details::ComPtrRefBase", "client/Microsoft::WRL::Details::ComPtrRefBase::operator IInspectable**", "client/Microsoft::WRL::Details::ComPtrRefBase::operator IUnknown**", "client/Microsoft::WRL::Details::ComPtrRefBase::ptr_"]
helpviewer_keywords: ["Microsoft::WRL::Details::ComPtrRefBase class", "Microsoft::WRL::Details::ComPtrRefBase::operator IInspectable** operator", "Microsoft::WRL::Details::ComPtrRefBase::operator IUnknown** operator", "Microsoft::WRL::Details::ComPtrRefBase::ptr_ data member"]
ms.assetid: 6d344c1a-cc13-4a3f-8a0d-f167ccb9348f
---
# ComPtrRefBase Class

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template <typename T>
class ComPtrRefBase;
```

### Parameters

*T*<br/>
A [ComPtr\<T>](comptr-class.md) type or a type derived from it, not merely the interface represented by the `ComPtr`.

## Remarks

Represents the base class for the [ComPtrRef](comptrref-class.md) class.

## Members

### Public Typedefs

Name            | Description
--------------- | -------------------------------------------------
`InterfaceType` | A synonym for the type of template parameter *T*.

### Public Operators

Name                                                                       | Description
-------------------------------------------------------------------------- | -----------------------------------------------------------------------------------------------------
[ComPtrRefBase::operator IInspectable**](#operator-iinspectable-star-star) | Casts the current [ptr_](#ptr) data member to a pointer-to-a-pointer-to the `IInspectable` interface.
[ComPtrRefBase::operator IUnknown**](#operator-iunknown-star-star)         | Casts the current [ptr_](#ptr) data member to a pointer-to-a-pointer-to the `IUnknown` interface.

### Protected Data Members

Name                        | Description
--------------------------- | ----------------------------------------------------------------
[ComPtrRefBase::ptr_](#ptr) | Pointer to the type specified by the current template parameter.

## Inheritance Hierarchy

`ComPtrRefBase`

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL::Details

## <a name="operator-iinspectable-star-star"></a> ComPtrRefBase::operator IInspectable\*\* Operator

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
operator IInspectable**() const;
```

### Remarks

Casts the current [ptr_](#ptr) data member to a pointer-to-a-pointer-to the `IInspectable` interface.

An error is emitted if the current `ComPtrRefBase` doesn't derive from `IInspectable`.

This cast is available only if `__WRL_CLASSIC_COM__` is defined.

## <a name="operator-iunknown-star-star"></a> ComPtrRefBase::operator IUnknown** Operator

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
operator IUnknown**() const;
```

### Remarks

Casts the current [ptr_](#ptr) data member to a pointer-to-a-pointer-to the `IUnknown` interface.

An error is emitted if the current `ComPtrRefBase` doesn't derive from `IUnknown`.

## <a name="ptr"></a> ComPtrRefBase::ptr_

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
T* ptr_;
```

### Remarks

Pointer to the type specified by the current template parameter. `ptr_` is the protected data member.
