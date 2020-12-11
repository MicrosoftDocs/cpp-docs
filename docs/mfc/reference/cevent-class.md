---
description: "Learn more about: CEvent Class"
title: "CEvent Class"
ms.date: "11/04/2016"
f1_keywords: ["CEvent", "AFXMT/CEvent", "AFXMT/CEvent::CEvent", "AFXMT/CEvent::PulseEvent", "AFXMT/CEvent::ResetEvent", "AFXMT/CEvent::SetEvent", "AFXMT/CEvent::Unlock"]
helpviewer_keywords: ["CEvent [MFC], CEvent", "CEvent [MFC], PulseEvent", "CEvent [MFC], ResetEvent", "CEvent [MFC], SetEvent", "CEvent [MFC], Unlock"]
ms.assetid: df676042-ce27-4702-800a-e73ff4f44395
---
# CEvent Class

Represents an event, which is a synchronization object that enables one thread to notify another that an event has occurred.

## Syntax

```
class CEvent : public CSyncObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CEvent::CEvent](#cevent)|Constructs a `CEvent` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CEvent::PulseEvent](#pulseevent)|Sets the event to available (signaled), releases waiting threads, and sets the event to unavailable (nonsignaled).|
|[CEvent::ResetEvent](#resetevent)|Sets the event to unavailable (nonsignaled).|
|[CEvent::SetEvent](#setevent)|Sets the event to available (signaled) and releases any waiting threads.|
|[CEvent::Unlock](#unlock)|Releases the event object.|

## Remarks

Events are useful when a thread must know when to perform its task. For example, a thread that copies data to a data archive must be notified when new data is available. By using a `CEvent` object to notify the copy thread when new data is available, the thread can perform its task as soon as possible.

`CEvent` objects have two types: manual and automatic.

An automatic `CEvent` object automatically returns to a non-signaled (unavailable) state after at least one thread is released. By default, a `CEvent` object is automatic unless you pass `TRUE` for the *bManualReset* parameter during construction.

A manual `CEvent` object stays in the state set by [SetEvent](#setevent) or [ResetEvent](#resetevent) until the other function is called. To create a manual `CEvent` object, pass `TRUE` for the `bManualReset` parameter during construction.

To use a `CEvent` object, construct the `CEvent` object when it is required. Specify the name of the event you want to wait on, and also specify that your application should initially own it. You can then access the event when the constructor returns. Call [SetEvent](#setevent) to signal (make available) the event object and then call [Unlock](#unlock) when you are done accessing the controlled resource.

An alternative method for using `CEvent` objects is to add a variable of type `CEvent` as a data member to the class you want to control. During construction of the controlled object, call the constructor of the `CEvent` data member and specify whether the event is initially signaled, and also specifythe type of event object you want, the name of the event (if it will be used across process boundaries), and any security attributes you want.

To access a resource controlled by a `CEvent` object in this manner, first create a variable of either type [CSingleLock](../../mfc/reference/csinglelock-class.md) or type [CMultiLock](../../mfc/reference/cmultilock-class.md) in the access method of your resource. Then call the `Lock` method of the lock object (for example, [CMultiLock::Lock](../../mfc/reference/cmultilock-class.md#lock)). At this point, your thread will either gain access to the resource, wait for the resource to be released and gain access, or wait for the resource to be released, time out, and fail to gain access to the resource. In any case, your resource has been accessed in a thread-safe manner. To release the resource, call `SetEvent` to signal the event object, and then use the `Unlock` method of the lock object (for example, [CMultiLock::Unlock](../../mfc/reference/cmultilock-class.md#unlock)), or let the lock object fall out of scope.

For more information about how to use `CEvent` objects, see [Multithreading: How to Use the Synchronization Classes](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## Example

[!code-cpp[NVC_MFC_Utilities#45](../../mfc/codesnippet/cpp/cevent-class_1.cpp)]

[!code-cpp[NVC_MFC_Utilities#46](../../mfc/codesnippet/cpp/cevent-class_2.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CSyncObject](../../mfc/reference/csyncobject-class.md)

`CEvent`

## Requirements

**Header:** afxmt.h

## <a name="cevent"></a> CEvent::CEvent

Constructs a named or unnamed `CEvent` object.

```
CEvent(
    BOOL bInitiallyOwn = FALSE,
    BOOL bManualReset = FALSE,
    LPCTSTR lpszName = NULL,
    LPSECURITY_ATTRIBUTES lpsaAttribute = NULL);
```

### Parameters

*bInitiallyOwn*<br/>
If TRUE, the thread for the `CMultilock` or `CSingleLock` object is enabled. Otherwise, all threads wanting to access the resource must wait.

*bManualReset*<br/>
If TRUE, specifies that the event object is a manual event, otherwise the event object is an automatic event.

*lpszName*<br/>
Name of the `CEvent` object. Must be supplied if the object will be used across process boundaries. If the name matches an existing event, the constructor builds a new `CEvent` object which references the event of that name. If the name matches an existing synchronization object that is not an event, the construction will fail. If NULL, the name will be null.

*lpsaAttribute*<br/>
Security attributes for the event object. For a full description of this structure, see [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) in the Windows SDK.

### Remarks

To access or release a `CEvent` object, create a [CMultiLock](../../mfc/reference/cmultilock-class.md) or [CSingleLock](../../mfc/reference/csinglelock-class.md) object and call its [Lock](../../mfc/reference/csinglelock-class.md#lock) and [Unlock](../../mfc/reference/csinglelock-class.md#unlock) member functions.

To change the state of a `CEvent` object to signaled (threads do not have to wait), call [SetEvent](#setevent) or [PulseEvent](#pulseevent). To set the state of a `CEvent` object to nonsignaled (threads must wait), call [ResetEvent](#resetevent).

> [!IMPORTANT]
> After creating the `CEvent` object, use [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) to ensure that the mutex didn't already exist. If the mutex did exist unexpectedly, it may indicate a rogue process is squatting and may be intending to use the mutex maliciously. In this case, the recommended security-conscious procedure is to close the handle and continue as if there was a failure in creating the object.

## <a name="pulseevent"></a> CEvent::PulseEvent

Sets the state of the event to signaled (available), releases any waiting threads, and resets it to nonsignaled (unavailable) automatically.

```
BOOL PulseEvent();
```

### Return Value

Nonzero if the function was successful; otherwise 0.

### Remarks

If the event is manual, all waiting threads are released, the event is set to nonsignaled, and `PulseEvent` returns. If the event is automatic, a single thread is released, the event is set to nonsignaled, and `PulseEvent` returns.

If no threads are waiting, or no threads can be released immediately, `PulseEvent` sets the state of the event to nonsignaled and returns.

`PulseEvent` uses the underlying Win32 `PulseEvent` function, which can be momentarily removed from the wait state by a kernel-mode asynchronous procedure call. Therefore, `PulseEvent` is unreliable and should not be used by new applications. For more information, see the [PulseEvent function](/windows/win32/api/winbase/nf-winbase-pulseevent).

## <a name="resetevent"></a> CEvent::ResetEvent

Sets the state of the event to nonsignaled until explicitly set to signaled by the [SetEvent](#setevent) member function.

```
BOOL ResetEvent();
```

### Return Value

Nonzero if the function was successful; otherwise 0.

### Remarks

This causes all threads wishing to access this event to wait.

This member function is not used by automatic events.

## <a name="setevent"></a> CEvent::SetEvent

Sets the state of the event to signaled, releasing any waiting threads.

```
BOOL SetEvent();
```

### Return Value

Nonzero if the function was successful, otherwise 0.

### Remarks

If the event is manual, the event will remain signaled until [ResetEvent](#resetevent) is called. More than one thread can be released in this case. If the event is automatic, the event will remain signaled until a single thread is released. The system will then set the state of the event to nonsignaled. If no threads are waiting, the state remains signaled until one thread is released.

## <a name="unlock"></a> CEvent::Unlock

Releases the event object.

```
BOOL Unlock();
```

### Return Value

Nonzero if the thread owned the event object and the event is an automatic event; otherwise 0.

### Remarks

This member function is called by threads that currently own an automatic event to release it after they are done, if their lock object is to be reused. If the lock object is not to be reused, this function will be called by the lock object's destructor.

## See also

[CSyncObject Class](../../mfc/reference/csyncobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
