---
description: "Learn more about: CComFakeCriticalSection Class"
title: "CComFakeCriticalSection Class"
ms.date: "11/04/2016"
f1_keywords: ["CComFakeCriticalSection", "ATLCORE/ATL::CComFakeCriticalSection", "ATLCORE/ATL::CComFakeCriticalSection::Init", "ATLCORE/ATL::CComFakeCriticalSection::Lock", "ATLCORE/ATL::CComFakeCriticalSection::Term", "ATLCORE/ATL::CComFakeCriticalSection::Unlock"]
helpviewer_keywords: ["CComFakeCriticalSection class"]
ms.assetid: a4811b97-96bb-493b-ab9f-62822aeddb10
---
# CComFakeCriticalSection Class

This class provides the same methods as [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) but does not provide a critical section.

## Syntax

```
class CComFakeCriticalSection
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComFakeCriticalSection::Init](#init)|Does nothing since there is no critical section.|
|[CComFakeCriticalSection::Lock](#lock)|Does nothing since there is no critical section.|
|[CComFakeCriticalSection::Term](#term)|Does nothing since there is no critical section.|
|[CComFakeCriticalSection::Unlock](#unlock)|Does nothing since there is no critical section.|

## Remarks

`CComFakeCriticalSection` mirrors the methods found in [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md). However, `CComFakeCriticalSection` does not provide a critical section; therefore, its methods do nothing.

Typically, you use `CComFakeCriticalSection` through a **`typedef`** name, either `AutoCriticalSection` or `CriticalSection`. When using [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) or [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md), both of these **`typedef`** names reference `CComFakeCriticalSection`. When using [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md), they reference [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md) and `CComCriticalSection`, respectively.

## Requirements

**Header:** atlcore.h

## <a name="init"></a> CComFakeCriticalSection::Init

Does nothing since there is no critical section.

```
HRESULT Init() throw();
```

### Return Value

Returns S_OK.

## <a name="lock"></a> CComFakeCriticalSection::Lock

Does nothing since there is no critical section.

```
HRESULT Lock() throw();
```

### Return Value

Returns S_OK.

## <a name="term"></a> CComFakeCriticalSection::Term

Does nothing since there is no critical section.

```
HRESULT Term() throw();
```

### Return Value

Returns S_OK.

## <a name="unlock"></a> CComFakeCriticalSection::Unlock

Does nothing since there is no critical section.

```
HRESULT Unlock() throw();
```

### Return Value

Returns S_OK.

## See also

[Class Overview](../../atl/atl-class-overview.md)
