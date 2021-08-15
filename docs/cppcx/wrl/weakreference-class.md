---
description: "Learn more about: WeakReference Class"
title: "WeakReference Class"
ms.date: "09/24/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::WeakReference", "implements/Microsoft::WRL::Details::WeakReference::DecrementStrongReference", "implements/Microsoft::WRL::Details::WeakReference::IncrementStrongReference", "implements/Microsoft::WRL::Details::WeakReference::Resolve", "implements/Microsoft::WRL::Details::WeakReference::SetUnknown", "implements/Microsoft::WRL::Details::WeakReference::~WeakReference", "implements/Microsoft::WRL::Details::WeakReference::WeakReference"]
helpviewer_keywords: ["Microsoft::WRL::Details::WeakReference class", "Microsoft::WRL::Details::WeakReference::DecrementStrongReference method", "Microsoft::WRL::Details::WeakReference::IncrementStrongReference method", "Microsoft::WRL::Details::WeakReference::Resolve method", "Microsoft::WRL::Details::WeakReference::SetUnknown method", "Microsoft::WRL::Details::WeakReference::~WeakReference, destructor", "Microsoft::WRL::Details::WeakReference::WeakReference, constructor"]
ms.assetid: 3f4c956b-dbbd-49b1-8cfa-9509a9956c97
---
# WeakReference Class

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
class WeakReference;
```

## Remarks

Represents a *weak reference* that can be used with the Windows Runtime or classic COM. A weak reference represents an object that might or might not be accessible.

A `WeakReference` object maintains a *strong reference*, which is a pointer to an object, and a *strong reference count*, which is the number of copies of the strong reference that have been distributed by the `Resolve()` method. While the strong reference count is nonzero, the strong reference is valid and the object is accessible. When the strong reference count becomes zero, the strong reference is invalid and the object is inaccessible.

A `WeakReference` object is typically used to represent an object whose existence is controlled by an external thread or application. For example, construct a `WeakReference` object from a reference to a file object. While the file is open, the strong reference is valid. But if the file is closed, the strong reference becomes invalid.

The `WeakReference` methods are thread safe.

## Members

### Public Constructors

Name                                                  | Description
----------------------------------------------------- | ---------------------------------------------------------------------------
[WeakReference::WeakReference](#weakreference)        | Initializes a new instance of the `WeakReference` class.
[WeakReference::~WeakReference](#tilde-weakreference) | Deinitializes (destroys) the current instance of the `WeakReference` class.

### Public Methods

Name                                                                 | Description
-------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------
[WeakReference::DecrementStrongReference](#decrementstrongreference) | Decrements the strong reference count of the current `WeakReference` object.
[WeakReference::IncrementStrongReference](#incrementstrongreference) | Increments the strong reference count of the current `WeakReference` object.
[WeakReference::Resolve](#resolve)                                   | Sets the specified pointer to the current strong reference value if the strong reference count is nonzero.
[WeakReference::SetUnknown](#setunknown)                             | Sets the strong reference of the current `WeakReference` object to the specified interface pointer.

## Inheritance Hierarchy

`WeakReference`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## <a name="tilde-weakreference"></a> WeakReference::~WeakReference

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
virtual ~WeakReference();
```

### Return Value

### Remarks

Deinitializes the current instance of the `WeakReference` class.

## <a name="decrementstrongreference"></a> WeakReference::DecrementStrongReference

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
ULONG DecrementStrongReference();
```

### Remarks

Decrements the strong reference count of the current `WeakReference` object.

When the strong reference count becomes zero, the strong reference is set to **`nullptr`**.

### Return Value

The decremented strong reference count.

## <a name="incrementstrongreference"></a> WeakReference::IncrementStrongReference

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
ULONG IncrementStrongReference();
```

### Return Value

The incremented strong reference count.

### Remarks

Increments the strong reference count of the current `WeakReference` object.

## <a name="resolve"></a> WeakReference::Resolve

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
STDMETHOD(Resolve)
   (REFIID riid,
   _Deref_out_opt_ IInspectable **ppvObject
);
```

### Parameters

*riid*<br/>
An interface ID.

*ppvObject*<br/>
When this operation completes, a copy of the current strong reference if the strong reference count is nonzero.

### Return Value

- S_OK if this operation is successful and the strong reference count is zero. The *ppvObject* parameter is set to **`nullptr`**.

- S_OK if this operation is successful and the strong reference count is nonzero. The *ppvObject* parameter is set to the strong reference.

- Otherwise, an HRESULT that indicates the reason this operation failed.

### Remarks

Sets the specified pointer to the current strong reference value if the strong reference count is nonzero.

## <a name="setunknown"></a> WeakReference::SetUnknown

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
void SetUnknown(
   _In_ IUnknown* unk
);
```

### Parameters

*unk*<br/>
A pointer to the `IUnknown` interface of an object.

### Remarks

Sets the strong reference of the current `WeakReference` object to the specified interface pointer.

## <a name="weakreference"></a> WeakReference::WeakReference

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
WeakReference();
```

### Remarks

Initializes a new instance of the `WeakReference` class.

The strong reference pointer for the `WeakReference` object is initialized to **`nullptr`**, and the strong reference count is initialized to 1.
