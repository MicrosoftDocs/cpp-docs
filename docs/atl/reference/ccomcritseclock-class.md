---
description: "Learn more about: CComCritSecLock Class"
title: "CComCritSecLock Class"
ms.date: "11/04/2016"
f1_keywords: ["CComCritSecLock", "ATLBASE/ATL::CComCritSecLock", "ATLBASE/ATL::CComCritSecLock::CComCritSecLock", "ATLBASE/ATL::CComCritSecLock::Lock", "ATLBASE/ATL::CComCritSecLock::Unlock"]
helpviewer_keywords: ["CComCritSecLock class"]
ms.assetid: 223152a1-86c3-4ef9-89a7-f455fe791b0e
---
# CComCritSecLock Class

This class provides methods for locking and unlocking a critical section object.

## Syntax

```
template<class TLock> class CComCritSecLock
```

#### Parameters

*TLock*<br/>
The object to be locked and unlocked.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComCritSecLock::CComCritSecLock](#ctor)|The constructor.|
|[CComCritSecLock::~CComCritSecLock](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComCritSecLock::Lock](#lock)|Call this method to lock the critical section object.|
|[CComCritSecLock::Unlock](#unlock)|Call this method to unlock the critical section object.|

## Remarks

Use this class to lock and unlock objects in a safer way than with the [CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md) or [CComAutoCriticalSection Class](../../atl/reference/ccomautocriticalsection-class.md).

## Requirements

**Header:** atlbase.h

## <a name="ctor"></a> CComCritSecLock::CComCritSecLock

The constructor.

```
CComCritSecLock(TLock& cs, bool bInitialLock = true);
```

### Parameters

*cs*<br/>
The critical section object.

*bInitialLock*<br/>
The initial lock state: **`true`** means locked.

### Remarks

Initializes the critical section object.

## <a name="dtor"></a> CComCritSecLock::~CComCritSecLock

The destructor.

```
~CComCritSecLock() throw();
```

### Remarks

Unlocks the critical section object.

## <a name="lock"></a> CComCritSecLock::Lock

Call this method to lock the critical section object.

```
HRESULT Lock() throw();
```

### Return Value

Returns S_OK if the object has successfully been locked, or an error HRESULT on failure.

### Remarks

If the object is already locked, an ASSERT error will occur in debug builds.

## <a name="unlock"></a> CComCritSecLock::Unlock

Call this method to unlock the critical section object.

```cpp
void Unlock() throw();
```

### Remarks

If the object is already unlocked, an ASSERT error will occur in debug builds.

## See also

[CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)<br/>
[CComAutoCriticalSection Class](../../atl/reference/ccomautocriticalsection-class.md)
