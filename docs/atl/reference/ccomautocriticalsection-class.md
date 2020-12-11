---
description: "Learn more about: CComAutoCriticalSection Class"
title: "CComAutoCriticalSection Class"
ms.date: "11/04/2016"
f1_keywords: ["CComAutoCriticalSection", "ATLCORE/ATL::CComAutoCriticalSection", "ATLCORE/ATL::CComAutoCriticalSection::CComAutoCriticalSection"]
helpviewer_keywords: ["CComAutoCriticalSection class"]
ms.assetid: 491a9d90-3398-4f90-88f5-fd2172a46b30
---
# CComAutoCriticalSection Class

`CComAutoCriticalSection` provides methods for obtaining and releasing ownership of a critical section object.

## Syntax

```
class CComAutoCriticalSection : public CComCriticalSection
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComAutoCriticalSection::CComAutoCriticalSection](#ccomautocriticalsection)|The constructor.|
|[CComAutoCriticalSection::~CComAutoCriticalSection](#dtor)|The destructor.|

## Remarks

`CComAutoCriticalSection` is similar to class [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md), except `CComAutoCriticalSection` automatically initializes the critical section object in the constructor.

Typically, you use `CComAutoCriticalSection` through the **`typedef`** name [AutoCriticalSection](ccommultithreadmodel-class.md#autocriticalsection). This name references `CComAutoCriticalSection` when [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) is being used.

The `Init` and `Term` methods from [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) are not available when using this class.

## Inheritance Hierarchy

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

`CComAutoCriticalSection`

## Requirements

**Header:** atlcore.h

## <a name="ccomautocriticalsection"></a> CComAutoCriticalSection::CComAutoCriticalSection

The constructor.

```
CComAutoCriticalSection();
```

### Remarks

Calls the Win32 function [InitializeCriticalSection](/windows/win32/api/synchapi/nf-synchapi-initializecriticalsection), which initializes the critical section object.

## <a name="dtor"></a> CComAutoCriticalSection::~CComAutoCriticalSection

The destructor.

```
~CComAutoCriticalSection() throw();
```

### Remarks

The destructor calls [DeleteCriticalSection](/windows/win32/api/synchapi/nf-synchapi-deletecriticalsection), which releases all system resources used by the critical section object.

## See also

[CComFakeCriticalSection Class](../../atl/reference/ccomfakecriticalsection-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)
