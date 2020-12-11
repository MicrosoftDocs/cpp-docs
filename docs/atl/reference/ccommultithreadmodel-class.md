---
description: "Learn more about: CComMultiThreadModel Class"
title: "CComMultiThreadModel Class"
ms.date: "11/04/2016"
f1_keywords: ["CComMultiThreadModel", "ATLBASE/ATL::CComMultiThreadModel", "ATLBASE/ATL::CComMultiThreadModel::AutoCriticalSection", "ATLBASE/ATL::CComMultiThreadModel::CriticalSection", "ATLBASE/ATL::CComMultiThreadModel::ThreadModelNoCS", "ATLBASE/ATL::CComMultiThreadModel::Decrement", "ATLBASE/ATL::CComMultiThreadModel::Increment"]
helpviewer_keywords: ["ATL, multithreading", "CComMultiThreadModel class", "threading [ATL]"]
ms.assetid: db8f1662-2f7a-44b3-b341-ffbfb6e422a3
---
# CComMultiThreadModel Class

`CComMultiThreadModel` provides thread-safe methods for incrementing and decrementing the value of a variable.

## Syntax

```
class CComMultiThreadModel
```

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CComMultiThreadModel::AutoCriticalSection](#autocriticalsection)|References class [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md).|
|[CComMultiThreadModel::CriticalSection](#criticalsection)|References class [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).|
|[CComMultiThreadModel::ThreadModelNoCS](#threadmodelnocs)|References class [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComMultiThreadModel::Decrement](#decrement)|(Static) Decrements the value of the specified variable in a thread-safe manner.|
|[CComMultiThreadModel::Increment](#increment)|(Static) Increments the value of the specified variable in a thread-safe manner.|

## Remarks

Typically, you use `CComMultiThreadModel` through one of two **`typedef`** names, either [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel or [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel. The class referenced by each **`typedef`** depends on the threading model used, as shown in the following table:

|typedef|Single threading|Apartment threading|Free threading|
|-------------|----------------------|-------------------------|--------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

S= `CComSingleThreadModel`; M= `CComMultiThreadModel`

`CComMultiThreadModel` itself defines three **`typedef`** names. `AutoCriticalSection` and `CriticalSection` reference classes that provide methods for obtaining and releasing ownership of a critical section. `ThreadModelNoCS` references class [CComMultiThreadModelNoCS(ccommultithreadmodelnocs-class.md).

## Requirements

**Header:** atlbase.h

## <a name="autocriticalsection"></a> CComMultiThreadModel::AutoCriticalSection

When using `CComMultiThreadModel`, the **`typedef`** name `AutoCriticalSection` references class [CComAutoCriticalSection](ccomautocriticalsection-class.md), which provides methods for obtaining and releasing ownership of a critical section object.

```
typedef CComAutoCriticalSection AutoCriticalSection;
```

### Remarks

[CComSingleThreadModel](ccomsinglethreadmodel-class.md) and [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md) also contain definitions for `AutoCriticalSection`. The following table shows the relationship between the threading model class and the critical section class referenced by `AutoCriticalSection`:

|Class defined in|Class referenced|
|----------------------|----------------------|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

In addition to `AutoCriticalSection`, you can use the **`typedef`** name [CriticalSection](#criticalsection). You should not specify `AutoCriticalSection` in global objects or static class members if you want to eliminate the CRT startup code.

### Example

The following code is modeled after [CComObjectRootEx](ccomobjectrootex-class.md), and demonstrates `AutoCriticalSection` being used in a threading environment.

```cpp
template<class ThreadModel>
class CMyAutoCritClass
{
public:
   typedef ThreadModel _ThreadModel;
   typedef typename _ThreadModel::AutoCriticalSection _CritSec;

   CMyAutoCritClass() : m_dwRef(0) {}

   ULONG InternalAddRef()
   {
      return _ThreadModel::Increment(&m_dwRef);
   }
   ULONG InternalRelease()
   {
      return _ThreadModel::Decrement(&m_dwRef);
   }
   void Lock() { m_critsec.Lock( ); }
   void Unlock() { m_critsec.Unlock(); }

private:
   _CritSec m_critsec;
   LONG m_dwRef;
```

The following tables show the results of the `InternalAddRef` and `Lock` methods, depending on the `ThreadModel` template parameter and the threading model used by the application:

### ThreadModel = CComObjectThreadModel

|Method|Single or Apartment Threading|Free Threading|
|------------|-----------------------------------|--------------------|
|`InternalAddRef`|The increment is not thread-safe.|The increment is thread-safe.|
|`Lock`|Does nothing; there is no critical section to lock.|The critical section is locked.|

### ThreadModel = CComObjectThreadModel::ThreadModelNoCS

|Method|Single or Apartment Threading|Free Threading|
|------------|-----------------------------------|--------------------|
|`InternalAddRef`|The increment is not thread-safe.|The increment is thread-safe.|
|`Lock`|Does nothing; there is no critical section to lock.|Does nothing; there is no critical section to lock.|

## <a name="criticalsection"></a> CComMultiThreadModel::CriticalSection

When using `CComMultiThreadModel`, the **`typedef`** name `CriticalSection` references class [CComCriticalSection](ccomcriticalsection-class.md), which provides methods for obtaining and releasing ownership of a critical section object.

```
typedef CComCriticalSection CriticalSection;
```

### Remarks

[CComSingleThreadModel](ccomsinglethreadmodel-class.md) and [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md) also contain definitions for `CriticalSection`. The following table shows the relationship between the threading model class and the critical section class referenced by `CriticalSection`:

|Class defined in|Class referenced|
|----------------------|----------------------|
|`CComMultiThreadModel`|`CComCriticalSection`|
|`CComSingleThreadModel`|`CComFakeCriticalSection`|
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|

In addition to `CriticalSection`, you can use the **`typedef`** name [AutoCriticalSection](#autocriticalsection). You should not specify `AutoCriticalSection` in global objects or static class members if you want to eliminate the CRT startup code.

### Example

See [CComMultiThreadModel::AutoCriticalSection](#autocriticalsection).

## <a name="decrement"></a> CComMultiThreadModel::Decrement

This static function calls the Win32 function [InterlockedDecrement](/windows/win32/api/winnt/nf-winnt-interlockeddecrement), which decrements the value of the variable pointed to by *p*.

```
static ULONG WINAPI Decrement(LPLONG p) throw ();
```

### Parameters

*p*<br/>
[in] Pointer to the variable to be decremented.

### Return Value

If the result of the decrement is 0, then `Decrement` returns 0. If the result of the decrement is nonzero, the return value is also nonzero but may not equal the result of the decrement.

### Remarks

`InterlockedDecrement` prevents more than one thread from simultaneously using this variable.

## <a name="increment"></a> CComMultiThreadModel::Increment

This static function calls the Win32 function [InterlockedIncrement](/windows/win32/api/winnt/nf-winnt-interlockedincrement), which increments the value of the variable pointed to by *p*.

```
static ULONG WINAPI Increment(LPLONG p) throw ();
```

### Parameters

*p*<br/>
[in] Pointer to the variable to be incremented.

### Return Value

If the result of the increment is 0, then `Increment` returns 0. If the result of the increment is nonzero, the return value is also nonzero but may not equal the result of the increment.

### Remarks

`InterlockedIncrement` prevents more than one thread from simultaneously using this variable.

## <a name="threadmodelnocs"></a> CComMultiThreadModel::ThreadModelNoCS

When using `CComMultiThreadModel`, the **`typedef`** name `ThreadModelNoCS` references class [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md).

```
typedef CComMultiThreadModelNoCS ThreadModelNoCS;
```

### Remarks

`CComMultiThreadModelNoCS` provides thread-safe methods for incrementing and decrementing a variable; however, it does not provide a critical section.

[CComSingleThreadModel](ccomsinglethreadmodel-class.md) and `CComMultiThreadModelNoCS` also contain definitions for `ThreadModelNoCS`. The following table shows the relationship between the threading model class and the class referenced by `ThreadModelNoCS`:

|Class defined in|Class referenced|
|----------------------|----------------------|
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|
|`CComSingleThreadModel`|`CComSingleThreadModel`|
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|

### Example

See [CComMultiThreadModel::AutoCriticalSection](#autocriticalsection).

## See also

[CComSingleThreadModel Class](ccomsinglethreadmodel-class.md)<br/>
[CComAutoCriticalSection Class](ccomautocriticalsection-class.md)<br/>
[CComCriticalSection Class](ccomcriticalsection-class.md)<br/>
[Class Overview](../atl-class-overview.md)
