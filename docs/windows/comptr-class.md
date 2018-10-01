---
title: "ComPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "10/01/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::ComPtr", "client/Microsoft::WRL::ComPtr::As", "client/Microsoft::WRL::ComPtr::AsIID", "client/Microsoft::WRL::ComPtr::AsWeak", "client/Microsoft::WRL::ComPtr::Attach", "client/Microsoft::WRL::ComPtr::ComPtr", "client/Microsoft::WRL::ComPtr::CopyTo", "client/Microsoft::WRL::ComPtr::Detach", "client/Microsoft::WRL::ComPtr::Get", "client/Microsoft::WRL::ComPtr::GetAddressOf", "client/Microsoft::WRL::ComPtr::InternalAddRef", "client/Microsoft::WRL::ComPtr::InternalRelease", "client/Microsoft::WRL::ComPtr::operator&", "client/Microsoft::WRL::ComPtr::operator->", "client/Microsoft::WRL::ComPtr::operator=", "client/Microsoft::WRL::ComPtr::operator==", "client/Microsoft::WRL::ComPtr::operator!=", "client/Microsoft::WRL::ComPtr::operator Microsoft::WRL::Details::BoolType", "client/Microsoft::WRL::ComPtr::ptr_", "client/Microsoft::WRL::ComPtr::ReleaseAndGetAddressOf", "client/Microsoft::WRL::ComPtr::Reset", "client/Microsoft::WRL::ComPtr::Swap", "client/Microsoft::WRL::ComPtr::~ComPtr"]
dev_langs: ["C++"]
helpviewer_keywords: ["Microsoft::WRL::ComPtr class", "Microsoft::WRL::ComPtr::As method", "Microsoft::WRL::ComPtr::AsIID method", "Microsoft::WRL::ComPtr::AsWeak method", "Microsoft::WRL::ComPtr::Attach method", "Microsoft::WRL::ComPtr::ComPtr, constructor", "Microsoft::WRL::ComPtr::CopyTo method", "Microsoft::WRL::ComPtr::Detach method", "Microsoft::WRL::ComPtr::Get method", "Microsoft::WRL::ComPtr::GetAddressOf method", "Microsoft::WRL::ComPtr::InternalAddRef method", "Microsoft::WRL::ComPtr::InternalRelease method", "Microsoft::WRL::ComPtr::operator& operator", "Microsoft::WRL::ComPtr::operator-> operator", "Microsoft::WRL::ComPtr::operator= operator", "Microsoft::WRL::ComPtr::operator== operator", "Microsoft::WRL::ComPtr::operator!= operator", "Microsoft::WRL::ComPtr::operator Microsoft::WRL::Details::BoolType operator", "Microsoft::WRL::ComPtr::ptr_ data member", "Microsoft::WRL::ComPtr::ReleaseAndGetAddressOf method", "Microsoft::WRL::ComPtr::Reset method", "Microsoft::WRL::ComPtr::Swap method", "Microsoft::WRL::ComPtr::~ComPtr, destructor"]
ms.assetid: a6551902-6819-478a-8df7-b6f312ab1fb0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtr Class

Creates a *smart pointer* type that represents the interface specified by the template parameter. **ComPtr** automatically maintains a reference count for the underlying interface pointer and releases the interface when the reference count goes to zero.

## Syntax

```cpp
template <typename T>
class ComPtr;

template<class T>
friend class ComPtr;
```

### Parameters

*T*<br/>
The interface that the **ComPtr** represents.

*U*<br/>
A class to which the current **ComPtr** is a friend. (The template that uses this parameter is protected.)

## Remarks

`ComPtr<>` declares a type that represents the underlying interface pointer. Use `ComPtr<>` to declare a variable and then use the arrow member-access operator (`->`) to access an interface member function.

For more information about smart pointers, see the "COM Smart Pointers" subsection of the [COM Coding Practices](/windows/desktop/LearnWin32/com-coding-practices)topic in the MSDN Library.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`InterfaceType`|A synonym for the type specified by the *T* template parameter.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[ComPtr::ComPtr Constructor](../windows/comptr-comptr-constructor.md)|Intializes a new instance of the **ComPtr** class. Overloads provide default, copy, move, and conversion constructors.|
|[ComPtr::~ComPtr Destructor](../windows/comptr-tilde-comptr-destructor.md)|Deinitializes an instance of **ComPtr**.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[ComPtr::As Method](../windows/comptr-as-method.md)|Returns a **ComPtr** object that represents the interface identified by the specified template parameter.|
|[ComPtr::AsIID Method](../windows/comptr-asiid-method.md)|Returns a **ComPtr** object that represents the interface identified by the specified interface ID.|
|[ComPtr::AsWeak Method](../windows/comptr-asweak-method.md)|Retrieves a weak reference to the current object.|
|[ComPtr::Attach Method](../windows/comptr-attach-method.md)|Associates this **ComPtr** with the interface type specified by the current template type parameter.|
|[ComPtr::CopyTo Method](../windows/comptr-copyto-method.md)|Copies the current or specified interface associated with this **ComPtr** to the specified output pointer.|
|[ComPtr::Detach Method](../windows/comptr-detach-method.md)|Disassociates this **ComPtr** from the interface that it represents.|
|[ComPtr::Get Method](../windows/comptr-get-method.md)|Retrieves a pointer to the interface that is associated with this **ComPtr**.|
|[ComPtr::GetAddressOf Method](../windows/comptr-getaddressof-method.md)|Retrieves the address of the [ptr_](../windows/comptr-ptr-data-member.md) data member, which contains a pointer to the interface represented by this **ComPtr**.|
|[ComPtr::ReleaseAndGetAddressOf Method](../windows/comptr-releaseandgetaddressof-method.md)|Releases the interface associated with this **ComPtr** and then retrieves the address of the [ptr_](../windows/comptr-ptr-data-member.md) data member, which contains a pointer to the interface that was released.|
|[ComPtr::Reset](../windows/comptr-reset.md)|Releases all references for the pointer to the interface that is associated with this **ComPtr**.|
|[ComPtr::Swap Method](../windows/comptr-swap-method.md)|Exchanges the interface managed by the current **ComPtr** with the interface managed by the specified **ComPtr**.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[ComPtr::InternalAddRef Method](../windows/comptr-internaladdref-method.md)|Increments the reference count of the interface associated with this **ComPtr**.|
|[ComPtr::InternalRelease Method](../windows/comptr-internalrelease-method.md)|Performs a COM Release operation on the interface associated with this **ComPtr**.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[ComPtr::operator Microsoft::WRL::Details::BoolType Operator](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md)|Indicates whether or not a **ComPtr** is managing the object lifetime of an interface.|
|[ComPtr::operator& Operator](../windows/comptr-operator-ampersand-operator.md)|Retrieves the address of the current **ComPtr**.|
|[ComPtr::operator= Operator](../windows/comptr-operator-assign-operator.md)|Assigns a value to the current **ComPtr**.|
|[ComPtr::operator-> Operator](../windows/comptr-operator-arrow-operator.md)|Retrieves a pointer to the type specified by the current template parameter.|
|[ComPtr::operator== Operator](../windows/comptr-operator-equality-operator.md)|Indicates whether two **ComPtr** objects are equal.|
|[ComPtr::operator!= Operator](../windows/comptr-operator-inequality-operator.md)|Indicates whether two **ComPtr** objects are not equal.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[ComPtr::ptr_ Data Member](../windows/comptr-ptr-data-member.md)|Contains a pointer to the interface that is associated with, and managed by this **ComPtr**.|

## Inheritance Hierarchy

`ComPtr`

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL

# ComPtr::~ComPtr Destructor

Deinitializes an instance of **ComPtr**.

## Syntax

```cpp
WRL_NOTHROW ~ComPtr();
```

# ComPtr::As Method

Returns a **ComPtr** object that represents the interface identified by the specified template parameter.

## Syntax

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
A **ComPtr** object that represents the interface specified by parameter *U*. Parameter *p* must not refer to the current **ComPtr** object.

## Remarks

The first template is the form that you should use in your code. The second template is an internal, helper specialization that supports C++ language features such as the [auto](../cpp/auto-cpp.md) type deduction keyword.

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

# ComPtr::AsIID Method

Returns a **ComPtr** object that represents the interface identified by the specified interface ID.

## Syntax

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
If the object has an interface whose ID equals *riid*, a doubly-indirect pointer to the interface specified by the *riid* parameter; otherwise, a pointer to `IUnknown`.

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

# ComPtr::AsWeak Method

Retrieves a weak reference to the current object.

## Syntax

```cpp
HRESULT AsWeak(
   _Out_ WeakRef* pWeakRef
);
```

### Parameters

*pWeakRef*<br/>
When this operation completes, a pointer to a weak reference object.

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

# ComPtr::Attach Method

Associates this **ComPtr** with the interface type specified by the current template type parameter.

## Syntax

```cpp
void Attach(
   _In_opt_ InterfaceType* other
);
```

### Parameters

*other*<br/>
An interface type.

# ComPtr::ComPtr Constructor

Intializes a new instance of the **ComPtr** class. Overloads provide default, copy, move, and conversion constructors.

## Syntax

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
   typename ENABLE_IF<__is_convertible_to(U*,
   T*),
   void *>;
WRL_NOTHROW ComPtr(
   _Inout_ ComPtr &&other
);
template<class U>
WRL_NOTHROW ComPtr(
   _Inout_ ComPtr<U>&& other,
   typename ENABLE_IF<__is_convertible_to(U*,
   T*),
   void *>;
```

### Parameters

*U*<br/>
The type of the *other* parameter.

*other*<br/>
An object of type *U*.

## Return Value

## Remarks

The first constructor is the default constructor, which implictly creates an empty object. The second constructor specifies [__nullptr](../windows/nullptr-cpp-component-extensions.md), which explicitly creates an empty object.

The third constructor creates an object from the object specified by a pointer.

The fourth and fifth constructors are copy constructors. The fifth constructor copies an object if it is convertible to the current type.

The sixth and seventh constructors are move constructors. The seventh constructor moves an object if it is convertible to the current type.

# ComPtr::CopyTo Method

Copies the current or specified interface associated with this **ComPtr** to the specified pointer.

## Syntax

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

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates why the implicit `QueryInterface` operation failed.

## Remarks

The first function returns a copy of a pointer to the interface associated with this **ComPtr**. This function always returns S_OK.

The second function performs a `QueryInterface` operation on the interface associated with this **ComPtr** for the interface specified by the *riid* parameter.

The third function performs a `QueryInterface` operation on the interface associated with this **ComPtr** for the underlying interface of the  *U* parameter.

# ComPtr::Detach Method

Disassociates this **ComPtr** object from the interface that it represents.

## Syntax

```cpp
T* Detach();
```

## Return Value

A pointer to the interface that was represented by this **ComPtr** object.

# ComPtr::Get Method

Retrieves a pointer to the interface that is associated with this **ComPtr**.

## Syntax

```cpp
T* Get() const;
```

## Return Value

Pointer to the interface that is associated with this **ComPtr**.

# ComPtr::GetAddressOf Method

Retrieves the address of the [ptr_](../windows/comptr-ptr-data-member.md) data member, which contains a pointer to the interface represented by this **ComPtr**.

## Syntax

```cpp
T* const* GetAddressOf() const;
T** GetAddressOf();
```

## Return Value

The address of a variable.

# ComPtr::InternalAddRef Method

Increments the reference count of the interface associated with this **ComPtr**.

## Syntax

```cpp
void InternalAddRef() const;
```

## Remarks

This method is protected.

# ComPtr::InternalRelease Method

Performs a COM Release operation on the interface associated with this **ComPtr**.

## Syntax

```cpp
void InternalRelease();
```

## Remarks

This method is protected.

# ComPtr::operator&amp; Operator

Releases the interface associated with this **ComPtr** object and then retrieves the address of the **ComPtr** object.

## Syntax

```cpp
Details::ComPtrRef<WeakRef> operator&()

const Details::ComPtrRef<const WeakRef> operator&() const
```

## Return Value

A weak reference to the current **ComPtr**.

## Remarks

This method differs from [ComPtr::GetAddressOf](../windows/comptr-getaddressof-method.md) in that this method releases a reference to the interface pointer. Use `ComPtr::GetAddressOf` when you require the address of the interface pointer but do not want to release that interface.

# ComPtr::operator-&gt; Operator

Retrieves a pointer to the type specified by the current template parameter.

## Syntax

```cpp
WRL_NOTHROW Microsoft::WRL::Details::RemoveIUnknown<InterfaceType>* operator->() const;
```

## Return Value

Pointer to the type specified by the current template type name.

## Remarks

This helper function removes unnecessary overhead caused by using the STDMETHOD macro. This function makes `IUnknown` types **private** instead of **virtual**.

# ComPtr::operator= Operator

Assigns a value to the current **ComPtr**.

## Syntax

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
A pointer, reference, or rvalue reference to a type or another **ComPtr**.

## Return Value

A reference to the current **ComPtr**.

## Remarks

The first version of this operator assigns an empty value to the current **ComPtr**.

In the second version, if the assigning interface pointer is not the same as the current **ComPtr** interface pointer, the second interface pointer is assigned to the current **ComPtr**.

In the third version, the assigning interface pointer is assigned to the current **ComPtr**.

In the fourth version, if the interface pointer of the assigning value is not the same as the current **ComPtr** interface pointer, the second interface pointer is assigned to the current **ComPtr**.

The fifth version is a copy operator; a reference to a **ComPtr** is assigned to the current **ComPtr**.

The sixth version is a copy operator that uses move semantics; an rvalue reference to a **ComPtr** if any type is static cast and then assigned to the current **ComPtr**.

The seventh version is a copy operator that uses move semantics; an rvalue reference to a **ComPtr** of type *U* is static cast then and assigned to the current **ComPtr**.

# ComPtr::operator== Operator

Indicates whether two **ComPtr** objects are equal.

## Syntax

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
A reference to a **ComPtr** object.

*b*<br/>
A reference to another **ComPtr** object.

## Return Value

The first operator yields **true** if object *a* is equal to object *b*; otherwise, **false**.

The second and third operators yield **true** if object *a* is equal to **nullptr**; otherwise, **false**.

# ComPtr::operator!= Operator

Indicates whether two **ComPtr** objects are not equal.

## Syntax

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
A reference to a **ComPtr** object.

*b*<br/>
A reference to another **ComPtr** object.

## Return Value

The first operator yields **true** if object *a* is not equal to object *b*; otherwise, **false**.

The second and third operators yield **true** if object *a* is not equal to **nullptr**; otherwise, **false**.

# ComPtr::operator Microsoft::WRL::Details::BoolType Operator

Indicates whether or not a **ComPtr** is managing the object lifetime of an interface.

## Syntax

```cpp
WRL_NOTHROW operator Microsoft::WRL::Details::BoolType() const;
```

## Return Value

If an interface is associated with this **ComPtr**, the address of the [BoolStruct::Member](../windows/boolstruct-member-data-member.md) data member; otherwise, **nullptr**.

# ComPtr::ptr_ Data Member

Contains a pointer to the interface that is associated with, and managed by this **ComPtr**.

## Syntax

```cpp
InterfaceType *ptr_;
```

## Remarks

**ptr_** is an internal, protected data member.

# ComPtr::ReleaseAndGetAddressOf Method

Releases the interface associated with this **ComPtr** and then retrieves the address of the [ptr_](../windows/comptr-ptr-data-member.md) data member, which contains a pointer to the interface that was released.

## Syntax

```cpp
T** ReleaseAndGetAddressOf();
```

## Return Value

The address of the [ptr_](../windows/comptr-ptr-data-member.md) data member of this **ComPtr**.

# ComPtr::Reset

Releases all references for the pointer to the interface that is associated with this **ComPtr**.

## Syntax

```cpp
unsigned long Reset();
```

## Return Value

The number of references released, if any.

# ComPtr::Swap Method

Exchanges the interface managed by the current **ComPtr** with the interface managed by the specified **ComPtr**.

## Syntax

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
A **ComPtr**.

