---
description: "Learn more about: ComPtr Class"
title: "ComPtr Class"
ms.date: "06/02/2020"
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::ComPtr", "client/Microsoft::WRL::ComPtr::As", "client/Microsoft::WRL::ComPtr::AsIID", "client/Microsoft::WRL::ComPtr::AsWeak", "client/Microsoft::WRL::ComPtr::Attach", "client/Microsoft::WRL::ComPtr::ComPtr", "client/Microsoft::WRL::ComPtr::CopyTo", "client/Microsoft::WRL::ComPtr::Detach", "client/Microsoft::WRL::ComPtr::Get", "client/Microsoft::WRL::ComPtr::GetAddressOf", "client/Microsoft::WRL::ComPtr::InternalAddRef", "client/Microsoft::WRL::ComPtr::InternalRelease", "client/Microsoft::WRL::ComPtr::operator&", "client/Microsoft::WRL::ComPtr::operator->", "client/Microsoft::WRL::ComPtr::operator=", "client/Microsoft::WRL::ComPtr::operator==", "client/Microsoft::WRL::ComPtr::operator!=", "client/Microsoft::WRL::ComPtr::operator Microsoft::WRL::Details::BoolType", "client/Microsoft::WRL::ComPtr::ptr_", "client/Microsoft::WRL::ComPtr::ReleaseAndGetAddressOf", "client/Microsoft::WRL::ComPtr::Reset", "client/Microsoft::WRL::ComPtr::Swap", "client/Microsoft::WRL::ComPtr::~ComPtr"]
helpviewer_keywords: ["Microsoft::WRL::ComPtr class", "Microsoft::WRL::ComPtr::As method", "Microsoft::WRL::ComPtr::AsIID method", "Microsoft::WRL::ComPtr::AsWeak method", "Microsoft::WRL::ComPtr::Attach method", "Microsoft::WRL::ComPtr::ComPtr, constructor", "Microsoft::WRL::ComPtr::CopyTo method", "Microsoft::WRL::ComPtr::Detach method", "Microsoft::WRL::ComPtr::Get method", "Microsoft::WRL::ComPtr::GetAddressOf method", "Microsoft::WRL::ComPtr::InternalAddRef method", "Microsoft::WRL::ComPtr::InternalRelease method", "Microsoft::WRL::ComPtr::operator& operator", "Microsoft::WRL::ComPtr::operator-> operator", "Microsoft::WRL::ComPtr::operator= operator", "Microsoft::WRL::ComPtr::operator== operator", "Microsoft::WRL::ComPtr::operator!= operator", "Microsoft::WRL::ComPtr::operator Microsoft::WRL::Details::BoolType operator", "Microsoft::WRL::ComPtr::ptr_ data member", "Microsoft::WRL::ComPtr::ReleaseAndGetAddressOf method", "Microsoft::WRL::ComPtr::Reset method", "Microsoft::WRL::ComPtr::Swap method", "Microsoft::WRL::ComPtr::~ComPtr, destructor"]
ms.assetid: a6551902-6819-478a-8df7-b6f312ab1fb0
---
# ComPtr Class

Creates a *smart pointer* type that represents the interface specified by the template parameter. `ComPtr` automatically maintains a reference count for the underlying interface pointer and releases the interface when the reference count goes to zero.

## Syntax

```cpp
template <typename T>
class ComPtr;

template<class T>
friend class ComPtr;
```

### Parameters

*T*<br/>
The interface that the `ComPtr` represents.

*U*<br/>
A class to which the current `ComPtr` is a friend. (The template that uses this parameter is protected.)

## Remarks

`ComPtr<>` declares a type that represents the underlying interface pointer. Use `ComPtr<>` to declare a variable and then use the arrow member-access operator (`->`) to access an interface member function.

For more information about smart pointers, see the "COM Smart Pointers" subsection of the [COM Coding Practices](/windows/win32/LearnWin32/com-coding-practices) article.

## Members

### Public Typedefs

Name            | Description
--------------- | ---------------------------------------------------------------
`InterfaceType` | A synonym for the type specified by the *T* template parameter.

### Public Constructors

Name                             | Description
-------------------------------- | --------------------------------------------------------------------------------------------------------------------
[ComPtr::ComPtr](#comptr)        | Initializes a new instance of the `ComPtr` class. Overloads provide default, copy, move, and conversion constructors.
[ComPtr::~ComPtr](#tilde-comptr) | Deinitializes an instance of `ComPtr`.

### Public Methods

Name                                                      | Description
--------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ComPtr::As](#as)                                         | Returns a `ComPtr` object that represents the interface identified by the specified template parameter.
[ComPtr::AsIID](#asiid)                                   | Returns a `ComPtr` object that represents the interface identified by the specified interface ID.
[ComPtr::AsWeak](#asweak)                                 | Retrieves a weak reference to the current object.
[ComPtr::Attach](#attach)                                 | Associates this `ComPtr` with the interface type specified by the current template type parameter.
[ComPtr::CopyTo](#copyto)                                 | Copies the current or specified interface associated with this `ComPtr` to the specified output pointer.
[ComPtr::Detach](#detach)                                 | Disassociates this `ComPtr` from the interface that it represents.
[ComPtr::Get](#get)                                       | Retrieves a pointer to the interface that is associated with this `ComPtr`.
[ComPtr::GetAddressOf](#getaddressof)                     | Retrieves the address of the [ptr_](#ptr) data member, which contains a pointer to the interface represented by this `ComPtr`.
[ComPtr::ReleaseAndGetAddressOf](#releaseandgetaddressof) | Releases the interface associated with this `ComPtr` and then retrieves the address of the [ptr_](#ptr) data member, which contains a pointer to the interface that was released.
[ComPtr::Reset](#reset)                                   | Releases the interface associated with this `ComPtr` and returns the new reference count.
[ComPtr::Swap](#swap)                                     | Exchanges the interface managed by the current `ComPtr` with the interface managed by the specified `ComPtr`.

### Protected Methods

Name                                        | Description
------------------------------------------- | --------------------------------------------------------------------------------
[ComPtr::InternalAddRef](#internaladdref)   | Increments the reference count of the interface associated with this `ComPtr`.
[ComPtr::InternalRelease](#internalrelease) | Performs a COM Release operation on the interface associated with this `ComPtr`.

### Public Operators

Name                                                                                           | Description
---------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------
[ComPtr::operator&](#operator-ampersand)                                                       | Retrieves the address of the current `ComPtr`.
[ComPtr::operator->](#operator-arrow)                                                          | Retrieves a pointer to the type specified by the current template parameter.
[ComPtr::operator=](#operator-assign)                                                          | Assigns a value to the current `ComPtr`.
[ComPtr::operator==](#operator-equality)                                                       | Indicates whether two `ComPtr` objects are equal.
[ComPtr::operator!=](#operator-inequality)                                                     | Indicates whether two `ComPtr` objects aren't equal.
[ComPtr::operator Microsoft::WRL::Details::BoolType](#operator-microsoft-wrl-details-booltype) | Indicates whether a `ComPtr` is managing the object lifetime of an interface.

### Protected Data Members

Name                 | Description
-------------------- | ------------------------------------------------------------------------------------------
[ComPtr::ptr_](#ptr) | Contains a pointer to the interface that is associated with, and managed by this `ComPtr`.

## Inheritance Hierarchy

`ComPtr`

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL

## <a name="tilde-comptr"></a> ComPtr::~ComPtr

Deinitializes an instance of `ComPtr`.

```cpp
WRL_NOTHROW ~ComPtr();
```

## <a name="as"></a> ComPtr::As

Returns a `ComPtr` object that represents the interface identified by the specified template parameter.

```cpp
template<typename U>
HRESULT As(
   _Out_ ComPtr<U>* p
) const;

template<typename U>
HRESULT As(
   _Out_ Details::ComPtrRef<ComPtr<U>> p
) const;
```

### Parameters

*U*<br/>
The interface to be represented by parameter *p*.

*p*<br/>
A `ComPtr` object that represents the interface specified by parameter *U*. Parameter *p* must not refer to the current `ComPtr` object.

### Remarks

The first template is the form that you should use in your code. The second template is an internal, helper specialization. It supports C++ language features such as the [auto](../../cpp/auto-cpp.md) type deduction keyword.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## <a name="asiid"></a> ComPtr::AsIID

Returns a `ComPtr` object that represents the interface identified by the specified interface ID.

```cpp
WRL_NOTHROW HRESULT AsIID(
   REFIID riid,
   _Out_ ComPtr<IUnknown>* p
) const;
```

### Parameters

*riid*<br/>
An interface ID.

*p*<br/>
If the object has an interface whose ID equals *riid*, a doubly indirect pointer to the interface specified by the *riid* parameter. Otherwise, a pointer to `IUnknown`.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## <a name="asweak"></a> ComPtr::AsWeak

Retrieves a weak reference to the current object.

```cpp
HRESULT AsWeak(
   _Out_ WeakRef* pWeakRef
);
```

### Parameters

*pWeakRef*<br/>
When this operation completes, a pointer to a weak reference object.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## <a name="attach"></a> ComPtr::Attach

Associates this `ComPtr` with the interface type specified by the current template type parameter.

```cpp
void Attach(
   _In_opt_ InterfaceType* other
);
```

### Parameters

*other*<br/>
An interface type.

## <a name="comptr"></a> ComPtr::ComPtr

Initializes a new instance of the `ComPtr` class. Overloads provide default, copy, move, and conversion constructors.

```cpp
WRL_NOTHROW ComPtr();

WRL_NOTHROW ComPtr(
   decltype(__nullptr)
);

template<class U>
WRL_NOTHROW ComPtr(
   _In_opt_ U *other
);

WRL_NOTHROW ComPtr(
   const ComPtr& other
);

template<class U>
WRL_NOTHROW ComPtr(
   const ComPtr<U> &other,
   typename ENABLE_IF<__is_convertible_to(U*, T*), void *>
);

WRL_NOTHROW ComPtr(
   _Inout_ ComPtr &&other
);

template<class U>
WRL_NOTHROW ComPtr(
   _Inout_ ComPtr<U>&& other, typename ENABLE_IF<__is_convertible_to(U*, T*), void *>
);
```

### Parameters

*U*<br/>
The type of the *other* parameter.

*other*<br/>
An object of type *U*.

### Return Value

### Remarks

The first constructor is the default constructor, which implicitly creates an empty object. The second constructor specifies [__nullptr](../../extensions/nullptr-cpp-component-extensions.md), which explicitly creates an empty object.

The third constructor creates an object from the object specified by a pointer. The ComPtr now owns the pointed-to memory and maintains a reference count to it.

The fourth and fifth constructors are copy constructors. The fifth constructor copies an object if it's convertible to the current type.

The sixth and seventh constructors are move constructors. The seventh constructor moves an object if it's convertible to the current type.

## <a name="copyto"></a> ComPtr::CopyTo

Copies the current or specified interface associated with this `ComPtr` to the specified pointer.

```cpp
HRESULT CopyTo(
   _Deref_out_ InterfaceType** ptr
);

HRESULT CopyTo(
   REFIID riid,
   _Deref_out_ void** ptr
) const;

template<typename U>
HRESULT CopyTo(
   _Deref_out_ U** ptr
) const;
```

### Parameters

*U*<br/>
A type name.

*ptr*<br/>
When this operation completes, a pointer to the requested interface.

*riid*<br/>
An interface ID.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates why the implicit `QueryInterface` operation failed.

### Remarks

The first function returns a copy of a pointer to the interface associated with this `ComPtr`. This function always returns S_OK.

The second function performs a `QueryInterface` operation on the interface associated with this `ComPtr` for the interface specified by the *riid* parameter.

The third function performs a `QueryInterface` operation on the interface associated with this `ComPtr` for the underlying interface of the  *U* parameter.

## <a name="detach"></a> ComPtr::Detach

Disassociates this `ComPtr` object from the interface that it represents.

```cpp
T* Detach();
```

### Return Value

A pointer to the interface that was represented by this `ComPtr` object.

## <a name="get"></a> ComPtr::Get

Retrieves a pointer to the interface that is associated with this `ComPtr`.

```cpp
T* Get() const;
```

### Return Value

Pointer to the interface that is associated with this `ComPtr`.

## <a name="getaddressof"></a> ComPtr::GetAddressOf

Retrieves the address of the [ptr_](#ptr) data member, which contains a pointer to the interface represented by this `ComPtr`.

```cpp
T* const* GetAddressOf() const;
T** GetAddressOf();
```

### Return Value

The address of a variable.

## <a name="internaladdref"></a> ComPtr::InternalAddRef

Increments the reference count of the interface associated with this `ComPtr`.

```cpp
void InternalAddRef() const;
```

### Remarks

This method is protected.

## <a name="internalrelease"></a> ComPtr::InternalRelease

Performs a COM Release operation on the interface associated with this `ComPtr`.

```cpp
unsigned long InternalRelease();
```

### Remarks

This method is protected.

## <a name="operator-ampersand"></a> ComPtr::operator&amp;

Releases the interface associated with this `ComPtr` object and then retrieves the address of the `ComPtr` object.

```cpp
Details::ComPtrRef<WeakRef> operator&()

const Details::ComPtrRef<const WeakRef> operator&() const
```

### Return Value

A weak reference to the current `ComPtr`.

### Remarks

This method differs from [ComPtr::GetAddressOf](#getaddressof) in that this method releases a reference to the interface pointer. Use `ComPtr::GetAddressOf` when you require the address of the interface pointer but don't want to release that interface.

## <a name="operator-arrow"></a> ComPtr::operator-&gt;

Retrieves a pointer to the type specified by the current template parameter.

```cpp
WRL_NOTHROW Microsoft::WRL::Details::RemoveIUnknown<InterfaceType>* operator->() const;
```

### Return Value

Pointer to the type specified by the current template type name.

### Remarks

This helper function removes unnecessary overhead caused by using the STDMETHOD macro. This function makes `IUnknown` types **`private`** instead of **`virtual`**.

## <a name="operator-assign"></a> ComPtr::operator=

Assigns a value to the current `ComPtr`.

```cpp
WRL_NOTHROW ComPtr& operator=(
   decltype(__nullptr)
);
WRL_NOTHROW ComPtr& operator=(
   _In_opt_ T *other
);
template <typename U>
WRL_NOTHROW ComPtr& operator=(
   _In_opt_ U *other
);
WRL_NOTHROW ComPtr& operator=(
   const ComPtr &other
);
template<class U>
WRL_NOTHROW ComPtr& operator=(
   const ComPtr<U>& other
);
WRL_NOTHROW ComPtr& operator=(
   _Inout_ ComPtr &&other
);
template<class U>
WRL_NOTHROW ComPtr& operator=(
   _Inout_ ComPtr<U>&& other
);
```

### Parameters

*U*<br/>
A class.

*other*<br/>
A pointer, reference, or rvalue reference to a type or another `ComPtr`.

### Return Value

A reference to the current `ComPtr`.

### Remarks

The first version of this operator assigns an empty value to the current `ComPtr`.

In the second version, if the assigning interface pointer isn't the same as the current `ComPtr` interface pointer, the second interface pointer is assigned to the current `ComPtr`.

In the third version, the assigning interface pointer is assigned to the current `ComPtr`.

In the fourth version, if the interface pointer of the assigning value isn't the same as the current `ComPtr` interface pointer, the second interface pointer is assigned to the current `ComPtr`.

The fifth version is a copy operator; a reference to a `ComPtr` is assigned to the current `ComPtr`.

The sixth version is a copy operator that uses move semantics; an rvalue reference to a `ComPtr` if any type is static cast and then assigned to the current `ComPtr`.

The seventh version is a copy operator that uses move semantics; an rvalue reference to a `ComPtr` of type *U* is static cast then and assigned to the current `ComPtr`.

## <a name="operator-equality"></a> ComPtr::operator==

Indicates whether two `ComPtr` objects are equal.

```cpp
bool operator==(
   const ComPtr<T>& a,
   const ComPtr<U>& b
);

bool operator==(
   const ComPtr<T>& a,
   decltype(__nullptr)
);

bool operator==(
   decltype(__nullptr),
   const ComPtr<T>& a
);
```

### Parameters

*a*<br/>
A reference to a `ComPtr` object.

*b*<br/>
A reference to another `ComPtr` object.

### Return Value

The first operator yields **`true`** if object *a* is equal to object *b*; otherwise, **`false`**.

The second and third operators yield **`true`** if object *a* is equal to **`nullptr`**; otherwise, **`false`**.

## <a name="operator-inequality"></a> ComPtr::operator!=

Indicates whether two `ComPtr` objects aren't equal.

```cpp
bool operator!=(
   const ComPtr<T>& a,
   const ComPtr<U>& b
);

bool operator!=(
   const ComPtr<T>& a,
   decltype(__nullptr)
);

bool operator!=(
   decltype(__nullptr),
   const ComPtr<T>& a
);
```

### Parameters

*a*<br/>
A reference to a `ComPtr` object.

*b*<br/>
A reference to another `ComPtr` object.

### Return Value

The first operator yields **`true`** if object *a* is not equal to object *b*; otherwise, **`false`**.

The second and third operators yield **`true`** if object *a* is not equal to **`nullptr`**; otherwise, **`false`**.

## <a name="operator-microsoft-wrl-details-booltype"></a> ComPtr::operator Microsoft::WRL::Details::BoolType

Indicates whether a `ComPtr` is managing the object lifetime of an interface.

```cpp
WRL_NOTHROW operator Microsoft::WRL::Details::BoolType() const;
```

### Return Value

If an interface is associated with this `ComPtr`, the address of the [BoolStruct::Member](boolstruct-structure.md#member) data member; otherwise, **`nullptr`**.

## <a name="ptr"></a> ComPtr::ptr_

Contains a pointer to the interface that is associated with, and managed by this `ComPtr`.

```cpp
InterfaceType *ptr_;
```

### Remarks

`ptr_` is an internal, protected data member.

## <a name="releaseandgetaddressof"></a> ComPtr::ReleaseAndGetAddressOf

Releases the interface associated with this `ComPtr` and then retrieves the address of the [ptr_](#ptr) data member, which contains a pointer to the interface that was released.

```cpp
T** ReleaseAndGetAddressOf();
```

### Return Value

The address of the [ptr_](#ptr) data member of this `ComPtr`.

## <a name="reset"></a> ComPtr::Reset

Releases the interface associated with this `ComPtr` and returns the new reference count.

```cpp
unsigned long Reset();
```

### Return Value

The number of references remaining to the underlying interface, if any.

## <a name="swap"></a> ComPtr::Swap

Exchanges the interface managed by the current `ComPtr` with the interface managed by the specified `ComPtr`.

```cpp
void Swap(
   _Inout_ ComPtr&& r
);

void Swap(
   _Inout_ ComPtr& r
);
```

### Parameters

*r*<br/>
A `ComPtr`.
