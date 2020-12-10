---
description: "Learn more about: IAtlStringMgr Class"
title: "IAtlStringMgr Class"
ms.date: "10/18/2018"
f1_keywords: ["IAtlStringMgr", "ATLSIMPSTR/ATL::IAtlStringMgr", "ATLSIMPSTR/ATL::Allocate", "ATLSIMPSTR/ATL::Clone", "ATLSIMPSTR/ATL::Free", "ATLSIMPSTR/ATL::GetNilString", "ATLSIMPSTR/ATL::Reallocate"]
helpviewer_keywords: ["shared classes, IAtlStringMgr", "memory, managing", "IAtlStringMgr class"]
ms.assetid: 722f0346-a770-4aa7-8f94-177be8dba823
---
# IAtlStringMgr Class

This class represents the interface to a `CStringT` memory manager.

## Syntax

```
__interface IAtlStringMgr
```

## Members

### Methods

|Name|Description|
|-|-|
|[Allocate](#allocate)|Call this method to allocate a new string data structure.|
|[Clone](#clone)|Call this method to return a pointer to a new string manager for use with another instance of `CSimpleStringT`.|
|[Free](#free)|Call this method to free a string data structure.|
|[GetNilString](#getnilstring)|Returns a pointer to the `CStringData` object used by empty string objects.|
|[Reallocate](#reallocate)|Call this method to reallocate a string data structure.|

## Remarks

This interface manages the memory used by the MFC-independent string classes; such as [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), [CStringT](../../atl-mfc-shared/reference/cstringt-class.md), and [CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md).

You can also use this class to implement a custom memory manager for your custom string class. For more information, see [Memory Management and CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## Requirements

**Header:** atlsimpstr.h

## <a name="allocate"></a> IAtlStringMgr::Allocate

Allocates a new string data structure.

```
CStringData* Allocate(int nAllocLength,int nCharSize) throw();
```

### Parameters

*nAllocLength*<br/>
The number of characters in the new memory block.

*nCharSize*<br/>
The size (in bytes) of the character type used by the string manager.

### Return Value

Returns a pointer to the newly allocated memory block.

> [!NOTE]
> Do not signal a failed allocation by throwing an exception. Instead, a failed allocation should be signaled by returning NULL.

### Remarks

Call [IAtlStringMgr::Free](#free) or [IAtlStringMgr::ReAllocate](#reallocate) to free the memory allocated by this method.

> [!NOTE]
> For usage examples, see [Memory Management and CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="clone"></a> IAtlStringMgr::Clone

Returns a pointer to a new string manager for use with another instance of `CSimpleStringT`.

```
IAtlStringMgr* Clone() throw();
```

### Return Value

Returns a copy of the `IAtlStringMgr` object.

### Remarks

Commonly called by the framework when a string manager is needed for a new string. In most cases, the **`this`** pointer is returned.

However, if the memory manager does not support being used by multiple instances of `CSimpleStringT`, a pointer to a sharable string manager should be returned.

> [!NOTE]
> For usage examples, see [Memory Management and CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="free"></a> IAtlStringMgr::Free

Frees a string data structure.

```cpp
void Free(CStringData* pData) throw();
```

### Parameters

*pData*<br/>
A pointer to the memory block to be freed.

### Remarks

Frees the specified memory block previously allocated by [Allocate](#allocate) or [Reallocate](../../atl/reference/iatlmemmgr-class.md#reallocate).

> [!NOTE]
> For usage examples, see [Memory Management and CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="getnilstring"></a> IAtlStringMgr::GetNilString

Returns a pointer to a string data structure for an empty string.

```
CStringData* GetNilString() throw();
```

### Return Value

A pointer to the `CStringData` object used to represent an empty string.

### Remarks

Call this function to return a representation of an empty string.

> [!NOTE]
> When implementing a custom string manager, this function must never fail. You can ensure this by embedding an instance of `CNilStringData` in the string manager class, and return a pointer to that instance.

> [!NOTE]
> For usage examples, see [Memory Management and CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="reallocate"></a> IAtlStringMgr::Reallocate

Reallocates a string data structure.

```
CStringData* Reallocate(
    CStringData* pData,
    int nAllocLength,
    int nCharSize) throw();
```

### Parameters

*pData*<br/>
Pointer to the memory previously allocated by this memory manager.

*nAllocLength*<br/>
The number of characters in the new memory block.

*nCharSize*<br/>
The size (in bytes) of the character type used by the string manager.

### Return Value

Returns a pointer to the start of the newly allocated memory block.

### Remarks

Call this function to resize the existing memory block specified by *pData*.

Call [IAtlStringMgr::Free](#free) to free the memory allocated by this method.

> [!NOTE]
> For usage examples, see [Memory Management and CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)
