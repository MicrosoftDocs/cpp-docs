---
description: "Learn more about: CComApartment Class"
title: "CComApartment Class"
ms.date: "11/04/2016"
f1_keywords: ["CComApartment", "ATLBASE/ATL::CComApartment", "ATLBASE/ATL::CComApartment::CComApartment", "ATLBASE/ATL::CComApartment::Apartment", "ATLBASE/ATL::CComApartment::GetLockCount", "ATLBASE/ATL::CComApartment::Lock", "ATLBASE/ATL::CComApartment::Unlock", "ATLBASE/ATL::CComApartment::m_dwThreadID", "ATLBASE/ATL::CComApartment::m_hThread", "ATLBASE/ATL::CComApartment::m_nLockCnt"]
helpviewer_keywords: ["apartments in ATL EXE modules", "CComApartment class"]
ms.assetid: dbc177d7-7ee4-45f2-b563-d578a467ca93
---
# CComApartment Class

This class provides support for managing an apartment in a thread-pooled EXE module.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CComApartment
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComApartment::CComApartment](#ccomapartment)|The constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComApartment::Apartment](#apartment)|Marks the thread's starting address.|
|[CComApartment::GetLockCount](#getlockcount)|Returns the thread's current lock count.|
|[CComApartment::Lock](#lock)|Increments the thread's lock count.|
|[CComApartment::Unlock](#unlock)|Decrements the thread's lock count.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CComApartment::m_dwThreadID](#m_dwthreadid)|Contains the thread's identifier.|
|[CComApartment::m_hThread](#m_hthread)|Contains the thread's handle.|
|[CComApartment::m_nLockCnt](#m_nlockcnt)|Contains the thread's current lock count.|

## Remarks

`CComApartment` is used by [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md) to manage an apartment in a thread-pooled EXE module. `CComApartment` provides methods for incrementing and decrementing the lock count on a thread.

## Requirements

**Header:** atlbase.h

## <a name="apartment"></a> CComApartment::Apartment

Marks the thread's starting address.

```
DWORD Apartment();
```

### Return Value

Always 0.

### Remarks

Automatically set during [CComAutoThreadModule::Init](../../atl/reference/ccomautothreadmodule-class.md#init).

## <a name="ccomapartment"></a> CComApartment::CComApartment

The constructor.

```
CComApartment();
```

### Remarks

Initializes the `CComApartment` data members [m_nLockCnt](#m_nlockcnt) and [m_hThread](#m_hthread).

## <a name="getlockcount"></a> CComApartment::GetLockCount

Returns the thread's current lock count.

```
LONG GetLockCount();
```

### Return Value

The lock count on the thread.

## <a name="lock"></a> CComApartment::Lock

Increments the thread's lock count.

```
LONG Lock();
```

### Return Value

A value that may be useful for diagnostics or testing.

### Remarks

Called by [CComAutoThreadModule::Lock](../../atl/reference/ccomautothreadmodule-class.md#lock).

The lock count on the thread is used for statistical purposes.

## <a name="m_dwthreadid"></a> CComApartment::m_dwThreadID

Contains the thread's identifier.

```
DWORD m_dwThreadID;
```

## <a name="m_hthread"></a> CComApartment::m_hThread

Contains the thread's handle.

```
HANDLE m_hThread;
```

## <a name="m_nlockcnt"></a> CComApartment::m_nLockCnt

Contains the thread's current lock count.

```
LONG m_nLockCnt;
```

## <a name="unlock"></a> CComApartment::Unlock

Decrements the thread's lock count.

```
LONG Unlock();
```

### Return Value

A value that may be useful for diagnostics or testing.

### Remarks

Called by [CComAutoThreadModule::Unlock](../../atl/reference/ccomautothreadmodule-class.md#lock).

The lock count on the thread is used for statistical purposes.

## See also

[Class Overview](../../atl/atl-class-overview.md)
