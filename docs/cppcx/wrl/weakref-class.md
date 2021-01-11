---
description: "Learn more about: WeakRef Class"
title: "WeakRef Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::WeakRef", "client/Microsoft::WRL::WeakRef::~WeakRef", "client/Microsoft::WRL::WeakRef::As", "client/Microsoft::WRL::WeakRef::AsIID", "client/Microsoft::WRL::WeakRef::CopyTo", "client/Microsoft::WRL::WeakRef::operator&", "client/Microsoft::WRL::WeakRef::WeakRef"]
helpviewer_keywords: ["Microsoft::WRL::WeakRef class", "Microsoft::WRL::WeakRef::~WeakRef, destructor", "Microsoft::WRL::WeakRef::As method", "Microsoft::WRL::WeakRef::AsIID method", "Microsoft::WRL::WeakRef::CopyTo method", "Microsoft::WRL::WeakRef::operator& operator", "Microsoft::WRL::WeakRef::WeakRef, constructor"]
ms.assetid: 572be703-c641-496c-8af5-ad6164670ba1
---
# WeakRef Class

Represents a *weak reference* that can be used by only the Windows Runtime, not classic COM. A weak reference represents an object that might or might not be accessible.

## Syntax

```cpp
class WeakRef : public ComPtr<IWeakReference>;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[WeakRef::WeakRef Constructor](#weakref)|Initializes a new instance of the `WeakRef` class.|
|[WeakRef::~WeakRef Destructor](#tilde-weakref)|Deinitializes the current instance of the `WeakRef` class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[WeakRef::As Method](#as)|Sets the specified `ComPtr` pointer parameter to represent the specified interface.|
|[WeakRef::AsIID Method](#asiid)|Sets the specified `ComPtr` pointer parameter to represent the specified interface ID.|
|[WeakRef::CopyTo Method](#copyto)|Assigns a pointer to an interface, if available, to the specified pointer variable.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[WeakRef::operator& Operator](#operator-ampersand-operator)|Returns a `ComPtrRef` object that represents the current `WeakRef` object.|

## Remarks

A `WeakRef` object maintains a *strong reference*, which is associated with an object, and can be valid or invalid. Call the `As()` or `AsIID()` method to obtain a strong reference. When the strong reference is valid, it can access the associated object. When the strong reference is invalid (**`nullptr`**), the associated object is inaccessible.

A `WeakRef` object is typically used to represent an object whose existence is controlled by an external thread or application. For example, construct a `WeakRef` object from a reference to a file object. While the file is open, the strong reference is valid. But if the file is closed, the strong reference becomes invalid.

Note that there is a behavior change in the [As](#as), [AsIID](#asiid) and [CopyTo](#copyto) methods in the Windows 10 SDK. Previously, after calling any of these methods, you could check the `WeakRef` for **`nullptr`** to determine if a strong reference was successfully obtained, as in the following code:

```cpp
WeakRef wr;
strongComptrRef.AsWeak(&wr);

// Now suppose that the object strongComPtrRef points to no longer exists
// and the following code tries to get a strong ref from the weak ref:
ComPtr<ISomeInterface> strongRef;
HRESULT hr = wr.As(&strongRef);

// This check won't work with the Windows 10 SDK version of the library.
// Check the input pointer instead.
if(wr == nullptr)
{
    wprintf(L"Couldn’t get strong ref!");
}
```

The above code does not work when using the Windows 10 SDK (or later). Instead, check the pointer that was passed in for **`nullptr`**.

```cpp
if (strongRef == nullptr)
{
    wprintf(L"Couldn't get strong ref!");
}
```

## Inheritance Hierarchy

`ComPtr`

`WeakRef`

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL

## <a name="tilde-weakref"></a> WeakRef::~WeakRef Destructor

Deinitializes the current instance of the `WeakRef` class.

```cpp
~WeakRef();
```

## <a name="as"></a> WeakRef::As Method

Sets the specified `ComPtr` pointer parameter to represent the specified interface.

```cpp
template<typename U>
HRESULT As(
   _Out_ ComPtr<U>* ptr
);

template<typename U>
HRESULT As(
   _Out_ Details::ComPtrRef<ComPtr<U>> ptr
);
```

### Parameters

*U*<br/>
An interface ID.

*ptr*<br/>
When this operation completes, an object that represents parameter *U*.

### Return Value

- S_OK if this operation succeeds; otherwise, an HRESULT that indicates the reason the operation failed, and *ptr* is set to **`nullptr`**.

- S_OK if this operation succeeds, but the current `WeakRef` object has already been released. Parameter *ptr* is set to **`nullptr`**.

- S_OK if this operation succeeds, but the current `WeakRef` object is not derived from parameter *U*. Parameter *ptr* is set to **`nullptr`**.

### Remarks

An error is emitted if parameter *U* is `IWeakReference`, or is not derived from `IInspectable`.

The first template is the form that you should use in your code. The second template is an internal, helper specialization that supports C++ language features such as the [auto](../../cpp/auto-cpp.md) type deduction keyword.

Starting in the Windows 10 SDK, this method does not set the `WeakRef` instance to **`nullptr`** if the weak reference could not be obtained, so you should avoid error-checking code that checks the `WeakRef` for **`nullptr`**. Instead, check *ptr* for **`nullptr`**.

## <a name="asiid"></a> WeakRef::AsIID Method

Sets the specified `ComPtr` pointer parameter to represent the specified interface ID.

```cpp
HRESULT AsIID(
   REFIID riid,
   _Out_ ComPtr<IInspectable>* ptr
);
```

### Parameters

*riid*<br/>
An interface ID.

*ptr*<br/>
When this operation completes, an object that represents parameter *riid*.

### Return Value

- S_OK if this operation succeeds; otherwise, an HRESULT that indicates the reason the operation failed, and *ptr* is set to **`nullptr`**.

- S_OK if this operation succeeds, but the current `WeakRef` object has already been released. Parameter *ptr* is set to **`nullptr`**.

- S_OK if this operation succeeds, but the current `WeakRef` object is not derived from parameter *riid*. Parameter *ptr* is set to **`nullptr`**. (For more information, see Remarks.)

### Remarks

An error is emitted if parameter *riid* is not derived from `IInspectable`. This error supersedes the return value.

The first template is the form that you should use in your code. The second template (not shown here, but declared in the header file) is an internal, helper specialization that supports C++ language features such as the [auto](../../cpp/auto-cpp.md) type deduction keyword.

Starting in the Windows 10 SDK, this method does not set the `WeakRef` instance to **`nullptr`** if the weak reference could not be obtained, so you should avoid error-checking code that checks the `WeakRef` for **`nullptr`**. Instead, check *ptr* for **`nullptr`**.

## <a name="copyto"></a> WeakRef::CopyTo Method

Assigns a pointer to an interface, if available, to the specified pointer variable.

```cpp
HRESULT CopyTo(
   REFIID riid,
   _Deref_out_ IInspectable** ptr
);

template<typename U>
HRESULT CopyTo(
   _Deref_out_ U** ptr
);

HRESULT CopyTo(
   _Deref_out_ IWeakReference** ptr
);
```

### Parameters

*U*<br/>
Pointer an `IInspectable` interface. An error is emitted if *U* is not derived from `IInspectable`.

*riid*<br/>
An interface ID. An error is emitted if *riid* is not derived from `IWeakReference`.

*ptr*<br/>
A doubly-indirect pointer to `IInspectable` or `IWeakReference`.

### Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure. For more information, see **Remarks**.

### Remarks

A return value of S_OK means that this operation succeeded, but doesn't indicate whether the weak reference was resolved to a strong reference. If S_OK is returned, test that parameter *p* is a strong reference; that is, parameter *p* isn't equal to **`nullptr`**.

Starting in the Windows 10 SDK, this method does not set the `WeakRef` instance to **`nullptr`** if the weak reference could not be obtained, so you should avoid error checking code that checks the `WeakRef` for **`nullptr`**. Instead, check *ptr* for **`nullptr`**.

## <a name="operator-ampersand-operator"></a> WeakRef::operator&amp; Operator

Returns a `ComPtrRef` object that represents the current `WeakRef` object.

```cpp
Details::ComPtrRef<WeakRef> operator&() throw()
```

### Return Value

A `ComPtrRef` object that represents the current `WeakRef` object.

### Remarks

This is an internal helper operator that is not meant to be used in your code.

## <a name="weakref"></a> WeakRef::WeakRef Constructor

Initializes a new instance of the `WeakRef` class.

```cpp
WeakRef();
WeakRef(
   decltype(__nullptr)
);

WeakRef(
   _In_opt_ IWeakReference* ptr
);

WeakRef(
   const ComPtr<IWeakReference>& ptr
);

WeakRef(
   const WeakRef& ptr
);

WeakRef(
   _Inout_ WeakRef&& ptr
);
```

### Parameters

*ptr*<br/>
A pointer, reference, or rvalue-reference to an existing object that initializes the current `WeakRef` object.

### Remarks

The first constructor initializes an empty `WeakRef` object. The second constructor initializes a `WeakRef` object from a pointer to the `IWeakReference` interface. The third constructor initializes a `WeakRef` object from a reference to a `ComPtr<IWeakReference>` object. The fourth and fifth constructors initializes a `WeakRef` object from another `WeakRef` object.
