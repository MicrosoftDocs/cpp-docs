---
title: "CAtlAutoThreadModuleT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CAtlAutoThreadModuleT", "ATLBASE/ATL::CAtlAutoThreadModuleT", "ATLBASE/ATL::CAtlAutoThreadModuleT::GetDefaultThreads"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAtlAutoThreadModuleT class"]
ms.assetid: ae1667c6-3fb8-47bc-b35d-9ea5e9896d7f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CAtlAutoThreadModuleT Class

This class provides methods for implementing a thread-pooled, apartment-model COM server.

> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class T, 
         class ThreadAllocator = CComSimpleThreadAllocator,
         DWORD dwWait = INFINITE>  
class ATL_NO_VTABLE CAtlAutoThreadModuleT : public IAtlAutoThreadModule
```

#### Parameters

*T*  
The class which will implement the COM server.

*ThreadAllocator*  
The class managing thread selection. The default value is [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

*dwWait*  
Specifies the time-out interval, in milliseconds. The default is INFINITE, which means the method's time-out interval never elapses.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAtlAutoThreadModuleT::GetDefaultThreads](#getdefaultthreads)|This static function dynamically calculates and returns the maximum number of threads for the EXE module, based on the number of processors.|

## Remarks

The class [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) derives from `CAtlAutoThreadModuleT` in order to implement a thread-pooled, apartment-model COM server. It replaces the obsolete class [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

> [!NOTE]
>  This class should not be used in a DLL, as the default *dwWait* value of INFINITE will cause a deadlock when the DLL is unloaded.

## Inheritance Hierarchy

`IAtlAutoThreadModule`

`CAtlAutoThreadModuleT`

## Requirements

**Header:** atlbase.h

##  <a name="getdefaultthreads"></a>  CAtlAutoThreadModuleT::GetDefaultThreads

This static function dynamically calculates and returns the maximum number of threads for the EXE module, based on the number of processors.

```
static int GetDefaultThreads();
```

### Return Value

The number of threads to be created in the EXE module.

### Remarks

Override this method if you want to use a different method for calculating the number of threads. By default, the number of threads is based on the number of processors.

## See Also

[IAtlAutoThreadModule Class](../../atl/reference/iatlautothreadmodule-class.md)   
[Class Overview](../../atl/atl-class-overview.md)   
[IAtlAutoThreadModule Class](../../atl/reference/iatlautothreadmodule-class.md)   
[Module Classes](../../atl/atl-module-classes.md)
