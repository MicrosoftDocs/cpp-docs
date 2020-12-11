---
description: "Learn more about: CComMultiThreadModelNoCS Class"
title: "CComMultiThreadModelNoCS Class"
ms.date: "11/04/2016"
f1_keywords: ["CComMultiThreadModelNoCS", "ATLBASE/ATL::CComMultiThreadModelNoCS", "ATLBASE/ATL::CComMultiThreadModelNoCS::AutoCriticalSection", "ATLBASE/ATL::CComMultiThreadModelNoCS::CriticalSection", "ATLBASE/ATL::CComMultiThreadModelNoCS::ThreadModelNoCS", "ATLBASE/ATL::CComMultiThreadModelNoCS::Decrement", "ATLBASE/ATL::CComMultiThreadModelNoCS::Increment"]
helpviewer_keywords: ["ATL, multithreading", "CComMultiThreadModelNoCS class", "threading [ATL]"]
ms.assetid: 2b3f7a45-fd72-452c-aaf3-ccdaa621c821
---
# CComMultiThreadModelNoCS Class

`CComMultiThreadModelNoCS` provides thread-safe methods for incrementing and decrementing the value of a variable, without critical section locking or unlocking functionality.

## Syntax

```
class CComMultiThreadModelNoCS
```

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CComMultiThreadModelNoCS::AutoCriticalSection](#autocriticalsection)|References class [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).|
|[CComMultiThreadModelNoCS::CriticalSection](#criticalsection)|References class `CComFakeCriticalSection`.|
|[CComMultiThreadModelNoCS::ThreadModelNoCS](#threadmodelnocs)|References class `CComMultiThreadModelNoCS`.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComMultiThreadModelNoCS::Decrement](#decrement)|(Static) Decrements the value of the specified variable in a thread-safe manner.|
|[CComMultiThreadModelNoCS::Increment](#increment)|(Static) Increments the value of the specified variable in a thread-safe manner.|

## Remarks

`CComMultiThreadModelNoCS` is similar to [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) in that it provides thread-safe methods for incrementing and decrementing a variable. However, when you reference a critical section class through `CComMultiThreadModelNoCS`, methods such as `Lock` and `Unlock` will do nothing.

Typically, you use `CComMultiThreadModelNoCS` through the `ThreadModelNoCS` **`typedef`** name. This **`typedef`** is defined in `CComMultiThreadModelNoCS`, `CComMultiThreadModel`, and [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md).

> [!NOTE]
> The global **`typedef`** names [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) and [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel) do not reference `CComMultiThreadModelNoCS`.

In addition to `ThreadModelNoCS`, `CComMultiThreadModelNoCS` defines `AutoCriticalSection` and `CriticalSection`. These latter two **`typedef`** names reference [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), which provides empty methods associated with obtaining and releasing a critical section.

## Requirements

**Header:** atlbase.h

## <a name="autocriticalsection"></a> CComMultiThreadModelNoCS::AutoCriticalSection

When using `CComMultiThreadModelNoCS`, the **`typedef`** name `AutoCriticalSection` references class [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection AutoCriticalSection;
```

### Remarks

Because `CComFakeCriticalSection` does not provide a critical section, its methods do nothing.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) and [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) also contain definitions for `AutoCriticalSection`. The following table shows the relationship between the threading model class and the critical section class referenced by `AutoCriticalSection`:

|Class defined in|Class referenced|
|----------------------|----------------------|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComAutoCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|

In addition to `AutoCriticalSection`, you can use the **`typedef`** name [CriticalSection](#criticalsection). You should not specify `AutoCriticalSection` in global objects or static class members if you want to eliminate the CRT startup code.

### Example

See [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="criticalsection"></a> CComMultiThreadModelNoCS::CriticalSection

When using `CComMultiThreadModelNoCS`, the **`typedef`** name `CriticalSection` references class [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).

```
typedef CComFakeCriticalSection CriticalSection;
```

### Remarks

Because `CComFakeCriticalSection` does not provide a critical section, its methods do nothing.

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) and [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) also contain definitions for `CriticalSection`. The following table shows the relationship between the threading model class and the critical section class referenced by `CriticalSection`:

|Class defined in|Class referenced|
|----------------------|----------------------|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|

In addition to `CriticalSection`, you can use the **`typedef`** name `AutoCriticalSection`. You should not specify `AutoCriticalSection` in global objects or static class members if you want to eliminate the CRT startup code.

### Example

See [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## <a name="decrement"></a> CComMultiThreadModelNoCS::Decrement

This static function calls the Win32 function [InterlockedDecrement](/windows/win32/api/winnt/nf-winnt-interlockeddecrement), which decrements the value of the variable pointed to by *p*.

```
static ULONG WINAPI Decrement(LPLONG p) throw();
```

### Parameters

*p*<br/>
[in] Pointer to the variable to be decremented.

### Return Value

If the result of the decrement is 0, then `Decrement` returns 0. If the result of the decrement is nonzero, the return value is also nonzero but may not equal the result of the decrement.

### Remarks

**InterlockedDecrement** prevents more than one thread from simultaneously using this variable.

## <a name="increment"></a> CComMultiThreadModelNoCS::Increment

This static function calls the Win32 function [InterlockedIncrement](/windows/win32/api/winnt/nf-winnt-interlockedincrement), which increments the value of the variable pointed to by *p*.

```
static ULONG WINAPI Increment(LPLONG p) throw();
```

### Parameters

*p*<br/>
[in] Pointer to the variable to be incremented.

### Return Value

If the result of the increment is 0, then **Increment** returns 0. If the result of the increment is nonzero, the return value is also nonzero but may not equal the result of the increment.

### Remarks

**InterlockedIncrement** prevents more than one thread from simultaneously using this variable.

## <a name="threadmodelnocs"></a> CComMultiThreadModelNoCS::ThreadModelNoCS

When using `CComMultiThreadModelNoCS`, the **`typedef`** name `ThreadModelNoCS` simply references `CComMultiThreadModelNoCS`.

```
typedef CComMultiThreadModelNoCS ThreadModelNoCS;
```

### Remarks

[CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) and [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) also contain definitions for `ThreadModelNoCS`. The following table shows the relationship between the threading model class and the class referenced by `ThreadModelNoCS`:

|Class defined in|Class referenced|
|----------------------|----------------------|
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|
|`CComSingleThreadModel`|`CComSingleThreadModel`|

Note that the definition of `ThreadModelNoCS` in `CComMultiThreadModelNoCS` provides symmetry with `CComMultiThreadModel` and `CComSingleThreadModel`. For example, suppose the sample code in `CComMultiThreadModel::AutoCriticalSection` declared the following **`typedef`**:

[!code-cpp[NVC_ATL_COM#37](../../atl/codesnippet/cpp/ccommultithreadmodelnocs-class_1.h)]

Regardless of the class specified for `ThreadModel` (such as `CComMultiThreadModelNoCS`), `_ThreadModel` resolves accordingly.

### Example

See [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).

## See also

[Class Overview](../../atl/atl-class-overview.md)
