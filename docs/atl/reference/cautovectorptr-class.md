---
description: "Learn more about: CAutoVectorPtr Class"
title: "CAutoVectorPtr Class"
ms.date: "11/04/2016"
f1_keywords: ["CAutoVectorPtr", "ATLBASE/ATL::CAutoVectorPtr", "ATLBASE/ATL::CAutoVectorPtr::CAutoVectorPtr", "ATLBASE/ATL::CAutoVectorPtr::Allocate", "ATLBASE/ATL::CAutoVectorPtr::Attach", "ATLBASE/ATL::CAutoVectorPtr::Detach", "ATLBASE/ATL::CAutoVectorPtr::Free", "ATLBASE/ATL::CAutoVectorPtr::m_p"]
helpviewer_keywords: ["CAutoVectorPtr class"]
ms.assetid: 0030362b-6bc4-4a47-9b5b-3c3899dceab4
---
# CAutoVectorPtr Class

This class represents a smart pointer object using vector new and delete operators.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<typename T>
class CAutoVectorPtr
```

#### Parameters

*T*<br/>
The pointer type.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAutoVectorPtr::CAutoVectorPtr](#cautovectorptr)|The constructor.|
|[CAutoVectorPtr::~CAutoVectorPtr](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAutoVectorPtr::Allocate](#allocate)|Call this method to allocate the memory required by the array of objects pointed to by `CAutoVectorPtr`.|
|[CAutoVectorPtr::Attach](#attach)|Call this method to take ownership of an existing pointer.|
|[CAutoVectorPtr::Detach](#detach)|Call this method to release ownership of a pointer.|
|[CAutoVectorPtr::Free](#free)|Call this method to delete an object pointed to by a `CAutoVectorPtr`.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CAutoVectorPtr::operator T *](#operator_t__star)|The cast operator.|
|[CAutoVectorPtr::operator =](#operator_eq)|The assignment operator.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CAutoVectorPtr::m_p](#m_p)|The pointer data member variable.|

## Remarks

This class provides methods for creating and managing a smart pointer, which will help protect against memory leaks by automatically freeing resources when it falls out of scope. `CAutoVectorPtr` is similar to `CAutoPtr`, the only difference being that `CAutoVectorPtr` uses [vector new&#91;&#93;](../../standard-library/new-operators.md#op_new_arr) and [vector delete&#91;&#93;](../../standard-library/new-operators.md#op_delete_arr) to allocate and free memory instead of the C++ **`new`** and **`delete`** operators. See [CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md) if collection classes of `CAutoVectorPtr` are required.

See [CAutoPtr](../../atl/reference/cautoptr-class.md) for an example of using a smart pointer class.

## Requirements

**Header:** atlbase.h

## <a name="allocate"></a> CAutoVectorPtr::Allocate

Call this method to allocate the memory required by the array of objects pointed to by `CAutoVectorPtr`.

```
bool Allocate(size_t nElements) throw();
```

### Parameters

*nElements*<br/>
The number of elements in the array.

### Return Value

Returns true if the memory is successfully allocated, false on failure.

### Remarks

In debug builds, an assertion failure will occur if the [CAutoVectorPtr::m_p](#m_p) member variable currently points to an existing value; that is, it is not equal to NULL.

## <a name="attach"></a> CAutoVectorPtr::Attach

Call this method to take ownership of an existing pointer.

```cpp
void Attach(T* p) throw();
```

### Parameters

*p*<br/>
The `CAutoVectorPtr` object will take ownership of this pointer.

### Remarks

When a `CAutoVectorPtr` object takes ownership of a pointer, it will automatically delete the pointer and any allocated data when it goes out of scope. If [CAutoVectorPtr::Detach](#detach) is called, the programmer is again given responsibility for freeing any allocated resources.

In debug builds, an assertion failure will occur if the [CAutoVectorPtr::m_p](#m_p) member variable currently points to an existing value; that is, it is not equal to NULL.

## <a name="cautovectorptr"></a> CAutoVectorPtr::CAutoVectorPtr

The constructor.

```
CAutoVectorPtr() throw();
explicit CAutoVectorPtr(T* p) throw();
CAutoVectorPtr(CAutoVectorPtr<T>& p) throw();
```

### Parameters

*p*<br/>
An existing pointer.

### Remarks

The `CAutoVectorPtr` object can be created using an existing pointer, in which case it transfers ownership of the pointer.

## <a name="dtor"></a> CAutoVectorPtr::~CAutoVectorPtr

The destructor.

```
~CAutoVectorPtr() throw();
```

### Remarks

Frees any allocated resources. Calls [CAutoVectorPtr::Free](#free).

## <a name="detach"></a> CAutoVectorPtr::Detach

Call this method to release ownership of a pointer.

```
T* Detach() throw();
```

### Return Value

Returns a copy of the pointer.

### Remarks

Releases ownership of a pointer, sets the [CAutoVectorPtr::m_p](#m_p) member variable to NULL, and returns a copy of the pointer. After calling `Detach`, it is up to the programmer to free any allocated resources over which the `CAutoVectorPtr` object may have previously assumed responsibility.

## <a name="free"></a> CAutoVectorPtr::Free

Call this method to delete an object pointed to by a `CAutoVectorPtr`.

```cpp
void Free() throw();
```

### Remarks

The object pointed to by the `CAutoVectorPtr` is freed, and the [CAutoVectorPtr::m_p](#m_p) member variable is set to NULL.

## <a name="m_p"></a> CAutoVectorPtr::m_p

The pointer data member variable.

```
T* m_p;
```

### Remarks

This member variable holds the pointer information.

## <a name="operator_eq"></a> CAutoVectorPtr::operator =

The assignment operator.

```
CAutoVectorPtr<T>& operator= (CAutoVectorPtr<T>& p) throw();
```

### Parameters

*p*<br/>
A pointer.

### Return Value

Returns a reference to a **CAutoVectorPtr\< T >**.

### Remarks

The assignment operator detaches the `CAutoVectorPtr` object from any current pointer and attaches the new pointer, *p*, in its place.

## <a name="operator_t__star"></a> CAutoVectorPtr::operator T *

The cast operator.

```
operator T*() const throw();
```

### Remarks

Returns a pointer to the object data type defined in the class template.

## See also

[CAutoPtr Class](../../atl/reference/cautoptr-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
