---
description: "Learn more about: CHeapPtrBase class"
title: "CHeapPtrBase class"
ms.date: "11/04/2016"
f1_keywords: ["CHeapPtrBase", "ATLCORE/ATL::CHeapPtrBase", "ATLCORE/ATL::CHeapPtrBase::AllocateBytes", "ATLCORE/ATL::CHeapPtrBase::Attach", "ATLCORE/ATL::CHeapPtrBase::Detach", "ATLCORE/ATL::CHeapPtrBase::Free", "ATLCORE/ATL::CHeapPtrBase::ReallocateBytes", "ATLCORE/ATL::CHeapPtrBase::m_pData"]
helpviewer_keywords: ["CHeapPtrBase class"]
ms.assetid: 501ac1b2-fb34-4c72-b7e6-a4f1fc8fda21
---
# `CHeapPtrBase` class

This class forms the basis for several smart heap pointer classes.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```cpp
template <class T, class Allocator = CCRTAllocator>
class CHeapPtrBase
```

#### Parameters

*`T`*\
The object type to be stored on the heap.

*`Allocator`*\
The memory allocation class to use. By default CRT routines are used to allocate and free memory.

## Members

### Public constructors

| Name | Description |
|--|--|
| [`CHeapPtrBase::~CHeapPtrBase`](#dtor) | The destructor. |

### Public methods

| Name | Description |
|--|--|
| [`CHeapPtrBase::AllocateBytes`](#allocatebytes) | Call this method to allocate memory. |
| [`CHeapPtrBase::Attach`](#attach) | Call this method to take ownership of an existing pointer. |
| [`CHeapPtrBase::Detach`](#detach) | Call this method to release ownership of a pointer. |
| [`CHeapPtrBase::Free`](#free) | Call this method to delete an object pointed to by a `CHeapPtrBase`. |
| [`CHeapPtrBase::ReallocateBytes`](#reallocatebytes) | Call this method to reallocate memory. |

### Public operators

| Name | Description |
|--|--|
| [`CHeapPtrBase::operator T*`](#operator_t_star) | The cast operator. |
| [`CHeapPtrBase::operator &`](#operator_amp) | The & operator. |
| [`CHeapPtrBase::operator ->`](#operator_ptr) | The pointer-to-member operator. |

### Public data members

| Name | Description |
|--|--|
| [`CHeapPtrBase::m_pData`](#m_pdata) | The pointer data member variable. |

## Remarks

This class forms the basis for several smart heap pointer classes. The derived classes, for example, [`CHeapPtr`](../../atl/reference/cheapptr-class.md) and [`CComHeapPtr`](../../atl/reference/ccomheapptr-class.md), add their own constructors and operators. See these classes for implementation examples.

## Requirements

**Header:** atlcore.h

## <a name="allocatebytes"></a> `CHeapPtrBase::AllocateBytes`

Call this method to allocate memory.

```cpp
bool AllocateBytes(size_t nBytes) throw();
```

### Parameters

*`nBytes`*\
The number of bytes of memory to allocate.

### Return value

Returns true if the memory is successfully allocated, false otherwise.

### Remarks

In debug builds, an assertion failure will occur if the [`CHeapPtrBase::m_pData`](#m_pdata) member variable currently points to an existing value; that is, it's not equal to NULL.

## <a name="attach"></a> `CHeapPtrBase::Attach`

Call this method to take ownership of an existing pointer.

```cpp
void Attach(T* pData) throw();
```

### Parameters

*`pData`*\
The `CHeapPtrBase` object will take ownership of this pointer.

### Remarks

When a `CHeapPtrBase` object takes ownership of a pointer, it will automatically delete the pointer and any allocated data when it goes out of scope.

In debug builds, an assertion failure will occur if the [`CHeapPtrBase::m_pData`](#m_pdata) member variable currently points to an existing value; that is, it's not equal to NULL.

## <a name="dtor"></a> `CHeapPtrBase::~CHeapPtrBase`

The destructor.

```cpp
~CHeapPtrBase() throw();
```

### Remarks

Frees all allocated resources.

## <a name="detach"></a> `CHeapPtrBase::Detach`

Call this method to release ownership of a pointer.

```cpp
T* Detach() throw();
```

### Return value

Returns a copy of the pointer.

### Remarks

Releases ownership of a pointer, sets the [`CHeapPtrBase::m_pData`](#m_pdata) member variable to NULL, and returns a copy of the pointer.

## <a name="free"></a> `CHeapPtrBase::Free`

Call this method to delete an object pointed to by a `CHeapPtrBase`.

```cpp
void Free() throw();
```

### Remarks

The object pointed to by the `CHeapPtrBase` is freed, and the [`CHeapPtrBase::m_pData`](#m_pdata) member variable is set to NULL.

## <a name="m_pdata"></a> `CHeapPtrBase::m_pData`

The pointer data member variable.

```cpp
T* m_pData;
```

### Remarks

This member variable holds the pointer information.

## <a name="operator_amp"></a> `CHeapPtrBase::operator &`

The & operator.

```cpp
T** operator&() throw();
```

### Return value

Returns the address of the object pointed to by the `CHeapPtrBase` object.

## <a name="operator_ptr"></a> `CHeapPtrBase::operator ->`

The pointer-to-member operator.

```cpp
T* operator->() const throw();
```

### Return value

Returns the value of the [`CHeapPtrBase::m_pData`](#m_pdata) member variable.

### Remarks

Use this operator to call a method in a class pointed to by the `CHeapPtrBase` object. In debug builds, an assertion failure will occur if the `CHeapPtrBase` points to NULL.

## <a name="operator_t_star"></a> `CHeapPtrBase::operator T*`

The cast operator.

```cpp
operator T*() const throw();
```

### Remarks

Returns [`CHeapPtrBase::m_pData`](#m_pdata).

## <a name="reallocatebytes"></a> `CHeapPtrBase::ReallocateBytes`

Call this method to reallocate memory.

```cpp
bool ReallocateBytes(size_t nBytes) throw();
```

### Parameters

*`nBytes`*\
The new amount of memory to allocate, in bytes.

### Return value

Returns true if the memory is successfully allocated, false otherwise.

## See also

[`CHeapPtr` class](../../atl/reference/cheapptr-class.md)\
[`CComHeapPtr` class](../../atl/reference/ccomheapptr-class.md)\
[Class overview](../../atl/atl-class-overview.md)
