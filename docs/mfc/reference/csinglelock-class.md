---
description: "Learn more about: CSingleLock Class"
title: "CSingleLock Class"
ms.date: "11/04/2016"
f1_keywords: ["CSingleLock", "AFXMT/CSingleLock", "AFXMT/CSingleLock::CSingleLock", "AFXMT/CSingleLock::IsLocked", "AFXMT/CSingleLock::Lock", "AFXMT/CSingleLock::Unlock"]
helpviewer_keywords: ["CSingleLock [MFC], CSingleLock", "CSingleLock [MFC], IsLocked", "CSingleLock [MFC], Lock", "CSingleLock [MFC], Unlock"]
ms.assetid: 7dae7288-8066-4a3e-85e0-78d28bfc6bc8
---
# CSingleLock Class

Represents the access-control mechanism used in controlling access to a resource in a multithreaded program.

## Syntax

```
class CSingleLock
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSingleLock::CSingleLock](#csinglelock)|Constructs a `CSingleLock` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSingleLock::IsLocked](#islocked)|Determines if the object is locked.|
|[CSingleLock::Lock](#lock)|Waits on a synchronization object.|
|[CSingleLock::Unlock](#unlock)|Releases a synchronization object.|

## Remarks

`CSingleLock` does not have a base class.

In order to use the synchronization classes [CSemaphore](../../mfc/reference/csemaphore-class.md), [CMutex](../../mfc/reference/cmutex-class.md), [CCriticalSection](../../mfc/reference/ccriticalsection-class.md), and [CEvent](../../mfc/reference/cevent-class.md), you must create either a `CSingleLock` or [CMultiLock](../../mfc/reference/cmultilock-class.md) object to wait on and release the synchronization object. Use `CSingleLock` when you only need to wait on one object at a time. Use `CMultiLock` when there are multiple objects that you could use at a particular time.

To use a `CSingleLock` object, call its constructor inside a member function in the controlled resource's class. Then call the [IsLocked](#islocked) member function to determine if the resource is available. If it is, continue with the remainder of the member function. If the resource is unavailable, either wait for a specified amount of time for the resource to be released, or return failure. After use of the resource is complete, either call the [Unlock](#unlock) function if the `CSingleLock` object is to be used again, or allow the `CSingleLock` object to be destroyed.

`CSingleLock` objects require the presence of an object derived from [CSyncObject](../../mfc/reference/csyncobject-class.md). This is usually a data member of the controlled resource's class. For more information on how to use `CSingleLock` objects, see the article [Multithreading: How to Use the Synchronization Classes](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## Inheritance Hierarchy

`CSingleLock`

## Requirements

**Header:** afxmt.h

## <a name="csinglelock"></a> CSingleLock::CSingleLock

Constructs a `CSingleLock` object.

```
explicit CSingleLock(
    CSyncObject* pObject,
    BOOL bInitialLock = FALSE);
```

### Parameters

*pObject*<br/>
Points to the synchronization object to be accessed. Cannot be NULL.

*bInitialLock*<br/>
Specifies whether to initially attempt to access the supplied object.

### Remarks

This function is generally called from within an access member function of the controlled resource.

### Example

[!code-cpp[NVC_MFC_Utilities#19](../../mfc/codesnippet/cpp/csinglelock-class_1.h)]

## <a name="islocked"></a> CSingleLock::IsLocked

Determines if the object associated with the `CSingleLock` object is nonsignaled (unavailable).

```
BOOL IsLocked();
```

### Return Value

Nonzero if the object is locked; otherwise 0.

### Example

[!code-cpp[NVC_MFC_Utilities#20](../../mfc/codesnippet/cpp/csinglelock-class_2.h)]

## <a name="lock"></a> CSingleLock::Lock

Call this function to gain access to the resource controlled by the synchronization object supplied to the `CSingleLock` constructor.

```
BOOL Lock(DWORD dwTimeOut = INFINITE);
```

### Parameters

*dwTimeOut*<br/>
Specifies the amount of time to wait for the synchronization object to be available (signaled). If INFINITE, `Lock` will wait until the object is signaled before returning.

### Return Value

Nonzero if the function was successful; otherwise 0.

### Remarks

If the synchronization object is signaled, `Lock` will return successfully and the thread now owns the object. If the synchronization object is nonsignaled (unavailable), `Lock` will wait for the synchronization object to become signaled up to the number of milliseconds specified in the *dwTimeOut* parameter. If the synchronization object did not become signaled in the specified amount of time, `Lock` returns failure.

### Example

[!code-cpp[NVC_MFC_Utilities#21](../../mfc/codesnippet/cpp/csinglelock-class_3.h)]

## <a name="unlock"></a> CSingleLock::Unlock

Releases the synchronization object owned by `CSingleLock`.

```
BOOL Unlock();

BOOL Unlock(
    LONG lCount,
    LPLONG lPrevCount = NULL);
```

### Parameters

*lCount*<br/>
Number of accesses to release. Must be greater than 0. If the specified amount would cause the object's count to exceed its maximum, the count is not changed and the function returns FALSE.

*lPrevCount*<br/>
Points to a variable to receive the previous count of the synchronization object. If NULL, the previous count is not returned.

### Return Value

Nonzero if the function was successful; otherwise 0.

### Remarks

This function is called by `CSingleLock`'s destructor.

If you need to release more than one access count of a semaphore, use the second form of `Unlock` and specify the number of accesses to release.

### Example

[!code-cpp[NVC_MFC_Utilities#21](../../mfc/codesnippet/cpp/csinglelock-class_3.h)]

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CMultiLock Class](../../mfc/reference/cmultilock-class.md)
