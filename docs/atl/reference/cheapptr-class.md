---
description: "Learn more about: CHeapPtr Class"
title: "CHeapPtr Class"
ms.date: "11/04/2016"
f1_keywords: ["CHeapPtr", "ATLCORE/ATL::CHeapPtr", "ATLCORE/ATL::CHeapPtr::CHeapPtr", "ATLCORE/ATL::CHeapPtr::Allocate", "ATLCORE/ATL::CHeapPtr::Reallocate"]
helpviewer_keywords: ["CHeapPtr class"]
ms.assetid: e5c5bfd4-9bf1-4164-8a83-8155fe253454
---
# CHeapPtr Class

A smart pointer class for managing heap pointers.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<typename T, class Allocator=CCRTAllocator>
class CHeapPtr : public CHeapPtrBase<T, Allocator>
```

#### Parameters

*T*<br/>
The object type to be stored on the heap.

*Allocator*<br/>
The memory allocation class to use.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CHeapPtr::CHeapPtr](#cheapptr)|The constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CHeapPtr::Allocate](#allocate)|Call this method to allocate memory on the heap to store objects.|
|[CHeapPtr::Reallocate](#reallocate)|Call this method to reallocate the memory on the heap.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CHeapPtr::operator =](#operator_eq)|The assignment operator.|

## Remarks

`CHeapPtr` is derived from [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md) and by default uses the CRT routines (in [CCRTAllocator](../../atl/reference/ccrtallocator-class.md)) to allocate and free memory. The class [CHeapPtrList](../../atl/reference/cheapptrlist-class.md) may be used to construct a list of heap pointers. See also [CComHeapPtr](../../atl/reference/ccomheapptr-class.md), which uses COM memory allocation routines.

## Inheritance Hierarchy

[CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)

`CHeapPtr`

## Requirements

**Header:** atlcore.h

## <a name="allocate"></a> CHeapPtr::Allocate

Call this method to allocate memory on the heap to store objects.

```
bool Allocate(size_t nElements = 1) throw();
```

### Parameters

*nElements*<br/>
The number of elements used to calculate the amount of memory to allocate. The default value is 1.

### Return Value

Returns true if the memory was successfully allocated, false on failure.

### Remarks

The allocator routines are used to reserve enough memory on the heap to store *nElement* objects of a type defined in the constructor.

### Example

[!code-cpp[NVC_ATL_Utilities#77](../../atl/codesnippet/cpp/cheapptr-class_1.cpp)]

## <a name="cheapptr"></a> CHeapPtr::CHeapPtr

The constructor.

```
CHeapPtr() throw();
explicit CHeapPtr(T* p) throw();
CHeapPtr(CHeapPtr<T, Allocator>& p) throw();
```

### Parameters

*p*<br/>
An existing heap pointer or `CHeapPtr`.

### Remarks

The heap pointer can optionally be created using an existing pointer, or a `CHeapPtr` object. If so, the new `CHeapPtr` object assumes responsibility for managing the new pointer and resources.

### Example

[!code-cpp[NVC_ATL_Utilities#78](../../atl/codesnippet/cpp/cheapptr-class_2.cpp)]

## <a name="operator_eq"></a> CHeapPtr::operator =

Assignment operator.

```
CHeapPtr<T, Allocator>& operator=(
    CHeapPtr<T, Allocator>& p) throw();
```

### Parameters

*p*<br/>
An existing `CHeapPtr` object.

### Return Value

Returns a reference to the updated `CHeapPtr`.

### Example

[!code-cpp[NVC_ATL_Utilities#80](../../atl/codesnippet/cpp/cheapptr-class_3.cpp)]

## <a name="reallocate"></a> CHeapPtr::Reallocate

Call this method to reallocate the memory on the heap.

```
bool Reallocate(size_t nElements) throw();
```

### Parameters

*nElements*<br/>
The new number of elements used to calculate the amount of memory to allocate.

### Return Value

Returns true if the memory was successfully allocated, false on failure.

### Example

[!code-cpp[NVC_ATL_Utilities#79](../../atl/codesnippet/cpp/cheapptr-class_4.cpp)]

## See also

[CHeapPtrBase Class](../../atl/reference/cheapptrbase-class.md)<br/>
[CCRTAllocator Class](../../atl/reference/ccrtallocator-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
