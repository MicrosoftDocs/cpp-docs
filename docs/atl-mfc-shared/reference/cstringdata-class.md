---
description: "Learn more about: CStringData Class"
title: "CStringData Class"
ms.date: "11/04/2016"
f1_keywords: ["CStringData", "ATLSIMPSTR/ATL::CStringData", "ATLSIMPSTR/ATL::AddRef", "ATLSIMPSTR/ATL::data", "ATLSIMPSTR/ATL::IsLocked", "ATLSIMPSTR/ATL::IsShared", "ATLSIMPSTR/ATL::Lock", "ATLSIMPSTR/ATL::Release", "ATLSIMPSTR/ATL::Unlock", "ATLSIMPSTR/ATL::nAllocLength", "ATLSIMPSTR/ATL::nDataLength", "ATLSIMPSTR/ATL::nRefs", "ATLSIMPSTR/ATL::pStringMgr"]
helpviewer_keywords: ["CStringData class", "shared classes, CStringData"]
ms.assetid: 4e31b5ca-3dbe-4fd5-b692-8211fbfb2593
---
# CStringData Class

This class represents the data of a string object.

## Syntax

```
struct CStringData
```

## Members

### Methods

|Name|Description|
|-|-|
|[AddRef](#addref)|Increments the reference count of the string data object.|
|[data](#data)|Retrieves the character data of a string object.|
|[IsLocked](#islocked)|Determines if the buffer of the associated string object is locked.|
|[IsShared](#isshared)|Determines if the buffer of the associated string object is currently shared.|
|[Lock](#lock)|Locks the buffer of the associated string object.|
|[Release](#release)|Releases the specified string object.|
|[Unlock](#unlock)|Unlocks the buffer of the associated string object.|

### Data Members

|Name|Description|
|-|-|
|[nAllocLength](#nalloclength)|Length of allocated data in `XCHAR`s (not including terminating null)|
|[nDataLength](#ndatalength)|Length of currently used data in `XCHAR`s (not including terminating null)|
|[nRefs](#nrefs)|The current reference count of the object.|
|[pStringMgr](#pstringmgr)|A pointer to the string manager of this string object.|

## Remarks

This class should only be used by developers implementing custom string managers. For more information on custom string managers, see [Memory Management and CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md)

This class encapsulates various types of information and data associated with a higher string object, such as [CStringT](../../atl-mfc-shared/reference/cstringt-class.md), [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), or [CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md) objects. Every higher string object contains a pointer to its associated `CStringData` object, allowing multiple string objects to point to the same string data object. This relationship is represented by the reference count (`nRefs`) of the `CStringData` object.

> [!NOTE]
> In certain cases, a string type (such as `CFixedString`) will not share a string data object with more than one higher string object. For more information on this, see [Memory Management and CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

This data is composed of:

- The memory manager (of type [IAtlStringMgr](../../atl-mfc-shared/reference/iatlstringmgr-class.md)) of the string.

- The current length ( [nDataLength](#ndatalength)) of the string.

- The allocated length ( [nAllocLength](#nalloclength)) of the string. For performance reasons, this can differ from the current string length

- The current reference count ( [nRefs](#nrefs)) of the `CStringData` object. This value is used in determining how many string objects are sharing the same `CStringData` object.

- The actual character buffer ( [data](#data)) of the string.

   > [!NOTE]
   > The actual character buffer of the string object is allocated by the string manager and is appended to the `CStringData` object.

## Requirements

**Header:** atlsimpstr.h

## <a name="addref"></a> CStringData::AddRef

Increments the reference count of the string object.

```cpp
void AddRef() throw();
```

### Remarks

Increments the reference count of the string object.

> [!NOTE]
> Do not call this method on a string with a negative reference count, since a negative count indicates that the string buffer is locked.

## <a name="data"></a> CStringData::data

Returns a pointer to the character buffer of a string object.

```cpp
void* data() throw();
```

### Return Value

A pointer to the character buffer of the string object.

### Remarks

Call this function to return the current character buffer of the associated string object.

> [!NOTE]
> This buffer is not allocated by the `CStringData` object but by the string manager when needed. When allocated, the buffer is appended to the string data object.

## <a name="islocked"></a> CStringData::IsLocked

Determines if the character buffer is locked.

```
bool IsLocked() const throw();
```

### Return Value

Returns TRUE if the buffer is locked; otherwise FALSE.

### Remarks

Call this function to determine if the character buffer of a string object is currently locked.

## <a name="isshared"></a> CStringData::IsShared

Determines if the character buffer is shared.

```
bool IsShared() const throw();
```

### Return Value

Returns TRUE if the buffer is shared; otherwise FALSE.

### Remarks

Call this function to determine if the character buffer of a string data object is currently shared among multiple string objects.

## <a name="lock"></a> CStringData::Lock

Locks the character buffer of the associated string object.

```cpp
void Lock() throw();
```

### Remarks

Call this function to lock the character buffer of the string data object. Locking and unlocking is used when direct access to the character buffer is required by the developer. A good example of locking is demonstrated by the [LockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) and [UnlockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) methods of `CSimpleStringT`.

> [!NOTE]
> A character buffer can only be locked if the buffer is not shared among higher string objects.

## <a name="nalloclength"></a> CStringData::nAllocLength

Length of the allocated character buffer.

```
int nAllocLength;
```

### Remarks

Stores the length of the allocated data buffer in `XCHAR`s (not including terminating null).

## <a name="ndatalength"></a> CStringData::nDataLength

Current length of the string object.

```
int nDataLength;
```

### Remarks

Stores the length of currently used data in `XCHAR`s (not including terminating null).

## <a name="nrefs"></a> CStringData::nRefs

Reference count of the string data object.

```
long nRefs;
```

### Remarks

Stores the reference count of the string data object. This count indicates the number of higher string objects that are associated with the string data object. A negative value indicates that the string data object is currently locked.

## <a name="pstringmgr"></a> CStringData::pStringMgr

The memory manager of the associated string object.

```
IAtlStringMgr* pStringMgr;
```

### Remarks

Stores the memory manager for the associated string object. For more information on memory managers and strings, see [Memory Management and CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="release"></a> CStringData::Release

Decrements the reference count of the string data object.

```cpp
void Release() throw();
```

### Remarks

Call this function to decrement the reference count, freeing the `CStringData` structure if the reference count hits zero. This is commonly done when a string object is deleted, and therefore no longer needs to reference the string data object.

For example, the following code would call `CStringData::Release` for the string data object associated with `str1`:

[!code-cpp[NVC_ATLMFC_Utilities#104](../../atl-mfc-shared/codesnippet/cpp/cstringdata-class_1.cpp)]

## <a name="unlock"></a> CStringData::Unlock

Unlocks the character buffer of the associated string object.

```cpp
void Unlock() throw();
```

### Remarks

Call this function to unlock the character buffer of the string data object. Once a buffer is unlocked, it is shareable and can be reference counted.

> [!NOTE]
> Each call to `Lock` must be matched by a corresponding call to `Unlock`.

Locking and unlocking is used when the developer must ensure that the string data not be shared. A good example of locking is demonstrated by the [LockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#lockbuffer) and [UnlockBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#unlockbuffer) methods of `CSimpleStringT`.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)
