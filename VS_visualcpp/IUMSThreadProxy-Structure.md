---
title: "IUMSThreadProxy Structure"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 61c69b7e-5c37-4048-bcb4-e75c536afd86
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# IUMSThreadProxy Structure
An abstraction for a thread of execution. If you want your scheduler to be granted user-mode schedulable (UMS) threads, set the value for the scheduler policy element `SchedulerKind` to `UmsThreadDefault`, and implement the `IUMSScheduler` interface. UMS threads are only supported on 64-bit operating systems with version Windows 7 and higher.  
  
## Syntax  
  
```  
struct IUMSThreadProxy : public IThreadProxy;  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IUMSThreadProxy::EnterCriticalRegion Method](#iumsthreadproxy__entercriticalregion_method)|Called in order to enter a critical region. When inside a critical region, the scheduler will not observe asynchronous blocking operations that happen during the region. This means that the scheduler will not be reentered for page faults, thread suspensions, kernel asynchronous procedure calls (APCs), and so forth, for a UMS thread.|  
|[IUMSThreadProxy::EnterHyperCriticalRegion Method](#iumsthreadproxy__enterhypercriticalregion_method)|Called in order to enter a hyper-critical region. When inside a hyper-critical region, the scheduler will not observe any blocking operations that happen during the region. This means the scheduler will not be reentered for blocking function calls, lock acquisition attempts which block, page faults, thread suspensions, kernel asynchronous procedure calls (APCs), and so forth, for a UMS thread.|  
|[IUMSThreadProxy::ExitCriticalRegion Method](#iumsthreadproxy__exitcriticalregion_method)|Called in order to exit a critical region.|  
|[IUMSThreadProxy::ExitHyperCriticalRegion Method](#iumsthreadproxy__exithypercriticalregion_method)|Called in order to exit a hyper-critical region.|  
|[IUMSThreadProxy::GetCriticalRegionType Method](#iumsthreadproxy__getcriticalregiontype_method)|Returns what kind of critical region the thread proxy is within. Because hyper-critical regions are a superset of critical regions, if code has entered a critical region and then a hyper-critical region, `InsideHyperCriticalRegion` will be returned.|  
  
## Inheritance Hierarchy  
 [IThreadProxy](../VS_visualcpp/IThreadProxy-Structure.md)  
  
 `IUMSThreadProxy`  
  
## Requirements  
 **Header:** concrtrm.h  
  
 **Namespace:** concurrency  
  
##  <a name="iumsthreadproxy__entercriticalregion_method"></a>  IUMSThreadProxy::EnterCriticalRegion Method  
 Called in order to enter a critical region. When inside a critical region, the scheduler will not observe asynchronous blocking operations that happen during the region. This means that the scheduler will not be reentered for page faults, thread suspensions, kernel asynchronous procedure calls (APCs), and so forth, for a UMS thread.  
  
```  
virtual int EnterCriticalRegion() = 0;  
```  
  
### Return Value  
 The new depth of critical region. Critical regions are reentrant.  
  
##  <a name="iumsthreadproxy__enterhypercriticalregion_method"></a>  IUMSThreadProxy::EnterHyperCriticalRegion Method  
 Called in order to enter a hyper-critical region. When inside a hyper-critical region, the scheduler will not observe any blocking operations that happen during the region. This means the scheduler will not be reentered for blocking function calls, lock acquisition attempts which block, page faults, thread suspensions, kernel asynchronous procedure calls (APCs), and so forth, for a UMS thread.  
  
```  
virtual int EnterHyperCriticalRegion() = 0;  
```  
  
### Return Value  
 The new depth of hyper-critical region. Hyper-critical regions are reentrant.  
  
### Remarks  
 The scheduler must be extraordinarily careful about what methods it calls and what locks it acquires in such regions. If code in such a region blocks on a lock that is held by something the scheduler is responsible for scheduling, deadlock may ensue.  
  
##  <a name="iumsthreadproxy__exitcriticalregion_method"></a>  IUMSThreadProxy::ExitCriticalRegion Method  
 Called in order to exit a critical region.  
  
```  
virtual int ExitCriticalRegion() = 0;  
```  
  
### Return Value  
 The new depth of critical region. Critical regions are reentrant.  
  
##  <a name="iumsthreadproxy__exithypercriticalregion_method"></a>  IUMSThreadProxy::ExitHyperCriticalRegion Method  
 Called in order to exit a hyper-critical region.  
  
```  
virtual int ExitHyperCriticalRegion() = 0;  
```  
  
### Return Value  
 The new depth of hyper-critical region. Hyper-critical regions are reentrant.  
  
##  <a name="iumsthreadproxy__getcriticalregiontype_method"></a>  IUMSThreadProxy::GetCriticalRegionType Method  
 Returns what kind of critical region the thread proxy is within. Because hyper-critical regions are a superset of critical regions, if code has entered a critical region and then a hyper-critical region, `InsideHyperCriticalRegion` will be returned.  
  
```  
virtual CriticalRegionType GetCriticalRegionType() const = 0;  
```  
  
### Return Value  
 The type of critical region the thread proxy is within.  
  
## See Also  
 [concurrency Namespace](../VS_visualcpp/concurrency-Namespace.md)   
 [IUMSScheduler Structure](../VS_visualcpp/IUMSScheduler-Structure.md)   
 [SchedulerType Enumeration](concurrency_namespace_Enumerations)