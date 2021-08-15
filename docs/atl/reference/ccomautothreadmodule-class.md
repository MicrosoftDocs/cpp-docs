---
description: "Learn more about: CComAutoThreadModule Class"
title: "CComAutoThreadModule Class"
ms.date: "11/04/2016"
f1_keywords: ["CComAutoThreadModule", "ATLBASE/ATL::CComAutoThreadModule", "ATLBASE/ATL::CreateInstance", "ATLBASE/ATL::GetDefaultThreads", "ATLBASE/ATL::Init", "ATLBASE/ATL::Lock", "ATLBASE/ATL::Unlock", "ATLBASE/ATL::dwThreadID", "ATLBASE/ATL::m_Allocator", "ATLBASE/ATL::m_nThreads", "ATLBASE/ATL::m_pApartments"]
helpviewer_keywords: ["CComAutoThreadModule class", "apartment model modules"]
ms.assetid: 13063ea5-a57e-4aac-97d3-227137262811
---
# CComAutoThreadModule Class

As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class ThreadAllocator = CComSimpleThreadAllocator>
class CComAutoThreadModule : public CComModule
```

#### Parameters

*ThreadAllocator*<br/>
[in] The class managing thread selection. The default value is [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

## Members

### Methods

|Function|Description|
|-|-|
|[CreateInstance](#createinstance)|Selects a thread and then creates an object in the associated apartment.|
|[GetDefaultThreads](#getdefaultthreads)|(Static) Dynamically calculates the number of threads for the module based on the number of processors.|
|[Init](#init)|Creates the module's threads.|
|[Lock](#lock)|Increments the lock count on the module and on the current thread.|
|[Unlock](#unlock)|Decrements the lock count on the module and on the current thread.|

### Data Members

|Data member|Description|
|-|-|
|[dwThreadID](#dwthreadid)|Contains the identifier of the current thread.|
|[m_Allocator](#m_allocator)|Manages thread selection.|
|[m_nThreads](#m_nthreads)|Contains the number of threads in the module.|
|[m_pApartments](#m_papartments)|Manages the module's apartments.|

## Remarks

> [!NOTE]
> This class is obsolete, having been replaced by the [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) and [CAtlModule](../../atl/reference/catlmodule-class.md) derived classes. The information that follows is for use with older releases of ATL.

`CComAutoThreadModule` derives from [CComModule](../../atl/reference/ccommodule-class.md) to implement a thread-pooled, apartment-model COM server for EXEs and Windows services. `CComAutoThreadModule` uses [CComApartment](../../atl/reference/ccomapartment-class.md) to manage an apartment for each thread in the module.

Derive your module from `CComAutoThreadModule` when you want to create objects in multiple apartments. You must also include the [DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) macro in your object's class definition to specify [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) as the class factory.

By default, the ATL COM AppWizard (the ATL Project Wizard in Visual Studio .NET) will derive your module from `CComModule`. To use `CComAutoThreadModule`, modify the class definition. For example:

[!code-cpp[NVC_ATL_AxHost#2](../../atl/codesnippet/cpp/ccomautothreadmodule-class_1.cpp)]

## Inheritance Hierarchy

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule](../../atl/reference/catlmodule-class.md)

`IAtlAutoThreadModule`

[CAtlModuleT](../../atl/reference/catlmodulet-class.md)

[CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)

[CComModule](../../atl/reference/ccommodule-class.md)

`CComAutoThreadModule`

## Requirements

**Header:** atlbase.h

## <a name="createinstance"></a> CComAutoThreadModule::CreateInstance

As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HRESULT CreateInstance(
    void* pfnCreateInstance,
    REFIID riid,
    void** ppvObj);
```

### Parameters

*pfnCreateInstance*<br/>
[in] A pointer to a creator function.

*riid*<br/>
[in] The IID of the requested interface.

*ppvObj*<br/>
[out] A pointer to the interface pointer identified by *riid*. If the object does not support this interface, *ppvObj* is set to NULL.

### Return Value

A standard HRESULT value.

### Remarks

Selects a thread and then creates an object in the associated apartment.

## <a name="dwthreadid"></a> CComAutoThreadModule::dwThreadID

As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
DWORD dwThreadID;
```

### Remarks

Contains the identifier of the current thread.

## <a name="getdefaultthreads"></a> CComAutoThreadModule::GetDefaultThreads

As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
static int GetDefaultThreads();
```

### Return Value

The number of threads to be created in the EXE module.

### Remarks

This static function dynamically calculates the maximum number of threads for the EXE module, based on the number of processors. By default, this return value is passed to the [Init](#init) method to create the threads.

## <a name="init"></a> CComAutoThreadModule::Init

As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
HRESULT Init(
    _ATL_OBJMAP_ENTRY* p,
    HINSTANCE h,
    const GUID* plibid = NULL,
    int nThreads = GetDefaultThreads());
```

### Parameters

*p*<br/>
[in] A pointer to an array of object map entries.

*h*<br/>
[in] The HINSTANCE passed to `DLLMain` or `WinMain`.

*plibid*<br/>
[in] A pointer to the LIBID of the type library associated with the project.

*nThreads*<br/>
[in] The number of threads to be created. By default, *nThreads* is the value returned by [GetDefaultThreads](#getdefaultthreads).

### Remarks

Initializes data members and creates the number of threads specified by *nThreads*.

## <a name="lock"></a> CComAutoThreadModule::Lock

As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
LONG Lock();
```

### Return Value

A value that may be useful for diagnostics or testing.

### Remarks

Performs an atomic increment on the lock count for the module and for the current thread. `CComAutoThreadModule` uses the module lock count to determine whether any clients are accessing the module. The lock count on the current thread is used for statistical purposes.

## <a name="m_allocator"></a> CComAutoThreadModule::m_Allocator

As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
ThreadAllocator  m_Allocator;
```

### Remarks

The object managing thread selection. By default, the `ThreadAllocator` class template parameter is [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

## <a name="m_nthreads"></a> CComAutoThreadModule::m_nThreads

As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
int m_nThreads;
```

### Remarks

Contains the number of threads in the EXE module. When [Init](#init) is called, `m_nThreads` is set to the *nThreads* parameter value. Each thread's associated apartment is managed by a [CComApartment](../../atl/reference/ccomapartment-class.md) object.

## <a name="m_papartments"></a> CComAutoThreadModule::m_pApartments

As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
CComApartment* m_pApartments;
```

### Remarks

Points to an array of [CComApartment](../../atl/reference/ccomapartment-class.md) objects, each of which manages an apartment in the module. The number of elements in the array is based on the [m_nThreads](#m_nthreads) member.

## <a name="unlock"></a> CComAutoThreadModule::Unlock

As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.

```
LONG Unlock();
```

### Return Value

A value that may be useful for diagnostics or testing.

### Remarks

Performs an atomic decrement on the lock count for the module and for the current thread. `CComAutoThreadModule` uses the module lock count to determine whether any clients are accessing the module. The lock count on the current thread is used for statistical purposes.

When the module lock count reaches zero, the module can be unloaded.

## See also

[Class Overview](../../atl/atl-class-overview.md)<br/>
[Module Classes](../../atl/atl-module-classes.md)
