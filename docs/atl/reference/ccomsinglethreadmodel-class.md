---
description: "Learn more about: CComSingleThreadModel Class"
title: "CComSingleThreadModel Class"
ms.date: "2/29/2020"
f1_keywords: ["CComSingleThreadModel", "ATLBASE/ATL::CComSingleThreadModel", "ATLBASE/ATL::CComSingleThreadModel::AutoCriticalSection", "ATLBASE/ATL::CComSingleThreadModel::CriticalSection", "ATLBASE/ATL::CComSingleThreadModel::ThreadModelNoCS", "ATLBASE/ATL::CComSingleThreadModel::Decrement", "ATLBASE/ATL::CComSingleThreadModel::Increment"]
helpviewer_keywords: ["single-threaded applications", "CComSingleThreadModel class", "single-threaded applications, ATL"]
ms.assetid: e5dc30c7-405a-4ba4-8ae9-51937243fce8
---
# CComSingleThreadModel Class

This class provides methods for incrementing and decrementing the value of a variable.

## Syntax

```
class CComSingleThreadModel
```

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CComSingleThreadModel::AutoCriticalSection](#autocriticalsection)|References class [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).|
|[CComSingleThreadModel::CriticalSection](#criticalsection)|References class `CComFakeCriticalSection`.|
|[CComSingleThreadModel::ThreadModelNoCS](#threadmodelnocs)|References `CComSingleThreadModel`.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComSingleThreadModel::Decrement](#decrement)|Decrements the value of the specified variable. This implementation is not thread-safe.|
|[CComSingleThreadModel::Increment](#increment)|Increments the value of the specified variable. This implementation is not thread-safe.|

## Remarks

`CComSingleThreadModel` provides methods for incrementing and decrementing the value of a variable. Unlike [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) and [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md), these methods are not thread-safe.

Typically, you use `CComSingleThreadModel` through one of two **`typedef`** names, either [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) or [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel). The class referenced by each **`typedef`** depends on the threading model used, as shown in the following table:

|typedef|Single threading model|Apartment threading model|Free threading model|
|-------------|----------------------------|-------------------------------|--------------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

S= `CComSingleThreadModel`; M= `CComMultiThreadModel`

`CComSingleThreadModel` itself defines three **`typedef`** names. `ThreadModelNoCS` references `CComSingleThreadModel`. `AutoCriticalSection` and `CriticalSection` reference class [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), which provides empty methods associated with obtaining and releasing ownership of a critical section.

## Requirements

**Header:** atlbase.h

## <a name="autocriticalsection"></a> CComSingleThreadModel::AutoCriticalSection

When using `CComSingleThreadModel`, the **`typedef`** name `AutoCriticalSection` references class [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection AutoCriticalSection;
```

### Remarks

Because `CComFakeCriticalSection` does not provide a critical section, its methods do nothing.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) and [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contain definitions for `AutoCriticalSection`. The following table shows the relationship between the threading model class and the critical section class referenced by `AutoCriticalSection`:

|Class defined in|Class referenced|
|----------------------|----------------------|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComAutoCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

In addition to `AutoCriticalSection`, you can use the **`typedef`** name [CriticalSection](#criticalsection). You should not specify `AutoCriticalSection` in global objects or static class members if you want to eliminate the CRT startup code.

### Example

See [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="criticalsection"></a> CComSingleThreadModel::CriticalSection

When using `CComSingleThreadModel`, the **`typedef`** name `CriticalSection` references class [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection CriticalSection;
```

### Remarks

Because `CComFakeCriticalSection` does not provide a critical section, its methods do nothing.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) and [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contain definitions for `CriticalSection`. The following table shows the relationship between the threading model class and the critical section class referenced by `CriticalSection`:

|Class defined in|Class referenced|
|----------------------|----------------------|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

In addition to `CriticalSection`, you can use the **`typedef`** name [AutoCriticalSection](#autocriticalsection). You should not specify `AutoCriticalSection` in global objects or static class members if you want to eliminate the CRT startup code.

### Example

See [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="decrement"></a> CComSingleThreadModel::Decrement

This static function decrements the value of the variable pointed to by *p*.

```
static ULONG WINAPI Decrement(LPLONG p) throw();
```

### Parameters

*p*<br/>
[in] Pointer to the variable to be decremented.

### Return Value

The result of the decrement.

## <a name="increment"></a> CComSingleThreadModel::Increment

This static function increments the value of the variable pointed to by *p*.

```
static ULONG WINAPI Increment(LPLONG p) throw();
```

### Parameters

*p*<br/>
[in] Pointer to the variable to be incremented.

### Return Value

The result of the increment.

## <a name="threadmodelnocs"></a> CComSingleThreadModel::ThreadModelNoCS

When using `CComSingleThreadModel`, the **`typedef`** name `ThreadModelNoCS` simply references `CComSingleThreadModel`.

```
typedef CComSingleThreadModel ThreadModelNoCS;
```

### Remarks

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) and [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contain definitions for `ThreadModelNoCS`. The following table shows the relationship between the threading model class and the class referenced by `ThreadModelNoCS`:

|Class defined in|Class referenced|
|----------------------|----------------------|
|`CComSingleThreadModel`|`CComSingleThreadModel`|
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|

### Example

See [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## See also

[Class Overview](../../atl/atl-class-overview.md)
