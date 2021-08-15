---
description: "Learn more about: CComSafeDeleteCriticalSection Class"
title: "CComSafeDeleteCriticalSection Class"
ms.date: "11/04/2016"
f1_keywords: ["CComSafeDeleteCriticalSection", "ATLCORE/ATL::CComSafeDeleteCriticalSection", "ATLCORE/ATL::CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection", "ATLCORE/ATL::CComSafeDeleteCriticalSection::Init", "ATLCORE/ATL::CComSafeDeleteCriticalSection::Lock", "ATLCORE/ATL::CComSafeDeleteCriticalSection::Term", "ATLCORE/ATL::m_bInitialized"]
helpviewer_keywords: ["CComSafeDeleteCriticalSection class"]
ms.assetid: 4d2932c4-ba8f-48ec-8664-1db8bed01314
---
# CComSafeDeleteCriticalSection Class

This class provides methods for obtaining and releasing ownership of a critical section object.

## Syntax

```
class CComSafeDeleteCriticalSection : public CComCriticalSection
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection](#ccomsafedeletecriticalsection)|The constructor.|
|[CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComSafeDeleteCriticalSection::Init](#init)|Creates and initializes a critical section object.|
|[CComSafeDeleteCriticalSection::Lock](#lock)|Obtains ownership of the critical section object.|
|[CComSafeDeleteCriticalSection::Term](#term)|Releases system resources used by the critical section object.|

### Data Members

|Data member|Description|
|-|-|
|[m_bInitialized](#m_binitialized)|Flags whether the internal `CRITICAL_SECTION` object has been initialized.|

## Remarks

`CComSafeDeleteCriticalSection` derives from the class [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md). However, `CComSafeDeleteCriticalSection` provides additional safety mechanisms over [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).

When an instance of `CComSafeDeleteCriticalSection` goes out of scope or is explicitly deleted from memory, the underlying critical section object will automatically be cleaned up if it is still valid. In addition, the [CComSafeDeleteCriticalSection::Term](#term) method will exit gracefully if the underlying critical section object has not yet been allocated or has already been released from memory.

See [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) for more information on critical section helper classes.

## Inheritance Hierarchy

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

`CComSafeDeleteCriticalSection`

## Requirements

**Header:** atlcore.h

## <a name="ccomsafedeletecriticalsection"></a> CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection

The constructor.

```
CComSafeDeleteCriticalSection();
```

### Remarks

Sets the [m_bInitialized](#m_binitialized) data member to FALSE.

## <a name="dtor"></a> CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection

The destructor.

```
~CComSafeDeleteCriticalSection() throw();
```

### Remarks

Releases the internal `CRITICAL_SECTION` object from memory if the [m_bInitialized](#m_binitialized) data member is set to TRUE.

## <a name="init"></a> CComSafeDeleteCriticalSection::Init

Calls the base class implementation of [Init](/visualstudio/debugger/init) and sets [m_bInitialized](#m_binitialized) to TRUE if successful.

```
HRESULT Init() throw();
```

### Return Value

Returns the result of [CComCriticalSection::Init](../../atl/reference/ccomcriticalsection-class.md#init).

## <a name="lock"></a> CComSafeDeleteCriticalSection::Lock

Calls the base class implementation of [Lock](ccomcriticalsection-class.md#lock).

```
HRESULT Lock();
```

### Return Value

Returns the result of [CComCriticalSection::Lock](../../atl/reference/ccomcriticalsection-class.md#lock).

### Remarks

This method assumes the [m_bInitialized](#m_binitialized) data member is set to TRUE upon entry. An assertion is generated in Debug builds if this condition is not met.

For more information on the behavior of the function, refer to [CComCriticalSection::Lock](../../atl/reference/ccomcriticalsection-class.md#lock).

## <a name="m_binitialized"></a> CComSafeDeleteCriticalSection::m_bInitialized

Flags whether the internal `CRITICAL_SECTION` object has been initialized.

```
bool m_bInitialized;
```

### Remarks

The `m_bInitialized` data member is used to track validity of the underlying `CRITICAL_SECTION` object associated with the [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) class. The underlying `CRITICAL_SECTION` object will not be attempted to be released from memory if this flag is not set to TRUE.

## <a name="term"></a> CComSafeDeleteCriticalSection::Term

Calls the base class implementation of [CComCriticalSection::Term](../../atl/reference/ccomcriticalsection-class.md#term) if the internal `CRITICAL_SECTION` object is valid.

```
HRESULT Term() throw();
```

### Return Value

Returns the result of [CComCriticalSection::Term](../../atl/reference/ccomcriticalsection-class.md#term), or S_OK if [m_bInitialized](#m_binitialized) was set to FALSE upon entry.

### Remarks

It is safe to call this method even if the internal `CRITICAL_SECTION` object is not valid. The destructor of this class calls this method if the [m_bInitialized](#m_binitialized) data member is set to TRUE.

## See also

[CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
