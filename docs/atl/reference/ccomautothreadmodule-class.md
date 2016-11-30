---
title: "CComAutoThreadModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComAutoThreadModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComAutoThreadModule class"
  - "apartment model modules"
ms.assetid: 13063ea5-a57e-4aac-97d3-227137262811
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CComAutoThreadModule Class
As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template <class   ThreadAllocator = CComSimpleThreadAllocator>
    class CComAutoThreadModule :
    public CComModule
```  
  
#### Parameters  
 `ThreadAllocator`  
 [in] The class managing thread selection. The default value is [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CreateInstance](#ccomautothreadmodule__createinstance)|Selects a thread and then creates an object in the associated apartment.|  
|[GetDefaultThreads](#ccomautothreadmodule__getdefaultthreads)|(Static) Dynamically calculates the number of threads for the module based on the number of processors.|  
|[Init](#ccomautothreadmodule__init)|Creates the module's threads.|  
|[Lock](#ccomautothreadmodule__lock)|Increments the lock count on the module and on the current thread.|  
|[Unlock](#ccomautothreadmodule__unlock)|Decrements the lock count on the module and on the current thread.|  
  
### Data Members  
  
### Data Members  
  
|||  
|-|-|  
|[dwThreadID](#ccomautothreadmodule__dwthreadid)|Contains the identifier of the current thread.|  
|[m_Allocator](#ccomautothreadmodule__m_allocator)|Manages thread selection.|  
|[m_nThreads](#ccomautothreadmodule__m_nthreads)|Contains the number of threads in the module.|  
|[m_pApartments](#ccomautothreadmodule__m_papartments)|Manages the module's apartments.|  
  
## Remarks  
  
> [!NOTE]
>  This class is obsolete, having been replaced by the [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) and [CAtlModule](../../atl/reference/catlmodule-class.md) derived classes. The information that follows is for use with older releases of ATL.  
  
 `CComAutoThreadModule` derives from [CComModule](../../atl/reference/ccommodule-class.md) to implement a thread-pooled, apartment-model COM server for EXEs and Windows services. `CComAutoThreadModule` uses [CComApartment](../../atl/reference/ccomapartment-class.md) to manage an apartment for each thread in the module.  
  
 Derive your module from `CComAutoThreadModule` when you want to create objects in multiple apartments. You must also include the [DECLARE_CLASSFACTORY_AUTO_THREAD](http://msdn.microsoft.com/library/19d7105e-03e8-4412-9f5e-5384c8a5e18f) macro in your object's class definition to specify [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) as the class factory.  
  
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
  
##  <a name="ccomautothreadmodule__createinstance"></a>  CComAutoThreadModule::CreateInstance  
 As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.  
  
```
HRESULT CreateInstance(
    void* pfnCreateInstance,
    REFIID riid,
    void** ppvObj);
```  
  
### Parameters  
 *pfnCreateInstance*  
 [in] A pointer to a creator function.  
  
 `riid`  
 [in] The IID of the requested interface.  
  
 `ppvObj`  
 [out] A pointer to the interface pointer identified by `riid`. If the object does not support this interface, `ppvObj` is set to NULL.  
  
### Return Value  
 A standard HRESULT value.  
  
### Remarks  
 Selects a thread and then creates an object in the associated apartment.  
  
##  <a name="ccomautothreadmodule__dwthreadid"></a>  CComAutoThreadModule::dwThreadID  
 As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.  
  
```
DWORD dwThreadID;
```  
  
### Remarks  
 Contains the identifier of the current thread.  
  
##  <a name="ccomautothreadmodule__getdefaultthreads"></a>  CComAutoThreadModule::GetDefaultThreads  
 As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.  
  
```
static int GetDefaultThreads();
```  
  
### Return Value  
 The number of threads to be created in the EXE module.  
  
### Remarks  
 This static function dynamically calculates the maximum number of threads for the EXE module, based on the number of processors. By default, this return value is passed to the [Init](#ccomautothreadmodule__init) method to create the threads.  
  
##  <a name="ccomautothreadmodule__init"></a>  CComAutoThreadModule::Init  
 As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.  
  
```
HRESULT Init(
    _ATL_OBJMAP_ENTRY* p,
    HINSTANCE h,
    const GUID* plibid = NULL,
    int nThreads = GetDefaultThreads());
```  
  
### Parameters  
 `p`  
 [in] A pointer to an array of object map entries.  
  
 `h`  
 [in] The `HINSTANCE` passed to **DLLMain** or `WinMain`.  
  
 `plibid`  
 [in] A pointer to the LIBID of the type library associated with the project.  
  
 `nThreads`  
 [in] The number of threads to be created. By default, `nThreads` is the value returned by [GetDefaultThreads](#ccomautothreadmodule__getdefaultthreads).  
  
### Remarks  
 Initializes data members and creates the number of threads specified by `nThreads`.  
  
##  <a name="ccomautothreadmodule__lock"></a>  CComAutoThreadModule::Lock  
 As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.  
  
```
LONG Lock();
```  
  
### Return Value  
 A value that may be useful for diagnostics or testing.  
  
### Remarks  
 Performs an atomic increment on the lock count for the module and for the current thread. `CComAutoThreadModule` uses the module lock count to determine whether any clients are accessing the module. The lock count on the current thread is used for statistical purposes.  
  
##  <a name="ccomautothreadmodule__m_allocator"></a>  CComAutoThreadModule::m_Allocator  
 As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.  
  
```
ThreadAllocator
    m_Allocator;
```     
  
### Remarks  
 The object managing thread selection. By default, the `ThreadAllocator` class template parameter is [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).  
  
##  <a name="ccomautothreadmodule__m_nthreads"></a>  CComAutoThreadModule::m_nThreads  
 As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.  
  
```
int m_nThreads;
```  
  
### Remarks  
 Contains the number of threads in the EXE module. When [Init](#ccomautothreadmodule__init) is called, `m_nThreads` is set to the `nThreads` parameter value. Each thread's associated apartment is managed by a [CComApartment](../../atl/reference/ccomapartment-class.md) object.  
  
##  <a name="ccomautothreadmodule__m_papartments"></a>  CComAutoThreadModule::m_pApartments  
 As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.  
  
```
CComApartment* m_pApartments;
```  
  
### Remarks  
 Points to an array of [CComApartment](../../atl/reference/ccomapartment-class.md) objects, each of which manages an apartment in the module. The number of elements in the array is based on the [m_nThreads](#ccomautothreadmodule__m_nthreads) member.  
  
##  <a name="ccomautothreadmodule__unlock"></a>  CComAutoThreadModule::Unlock  
 As of ATL 7.0, `CComAutoThreadModule` is obsolete: see [ATL Module Classes](../../atl/atl-module-classes.md) for more details.  
  
```
LONG Unlock();
```  
  
### Return Value  
 A value that may be useful for diagnostics or testing.  
  
### Remarks  
 Performs an atomic decrement on the lock count for the module and for the current thread. `CComAutoThreadModule` uses the module lock count to determine whether any clients are accessing the module. The lock count on the current thread is used for statistical purposes.  
  
 When the module lock count reaches zero, the module can be unloaded.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)   
 [Module Classes](../../atl/atl-module-classes.md)
