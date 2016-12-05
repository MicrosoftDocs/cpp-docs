---
title: "CurrentScheduler Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::CurrentScheduler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CurrentScheduler class"
ms.assetid: 31c20e0e-4cdf-49b4-8220-d726130aad2b
caps.latest.revision: 20
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
# CurrentScheduler Class
Represents an abstraction for the current scheduler associated with the calling context.  
  
## Syntax  
  
```
class CurrentScheduler;
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CurrentScheduler::Create Method](#create)|Creates a new scheduler whose behavior is described by the `_Policy` parameter and attaches it to the calling context. The newly created scheduler will become the current scheduler for the calling context.|  
|[CurrentScheduler::CreateScheduleGroup Method](#createschedulegroup)|Overloaded. Creates a new schedule group within the scheduler associated with the calling context. The version that takes the parameter `_Placement` causes tasks within the newly created schedule group to be biased towards executing at the location specified by that parameter.|  
|[CurrentScheduler::Detach Method](#detach)|Detaches the current scheduler from the calling context and restores the previously attached scheduler as the current scheduler, if one exists. After this method returns, the calling context is then managed by the scheduler that was previously attached to the context using either the `CurrentScheduler::Create` or `Scheduler::Attach` method.|  
|[CurrentScheduler::Get Method](#get)|Returns a pointer to the scheduler associated with the calling context, also referred to as the current scheduler.|  
|[CurrentScheduler::GetNumberOfVirtualProcessors Method](#getnumberofvirtualprocessors)|Returns the current number of virtual processors for the scheduler associated with the calling context.|  
|[CurrentScheduler::GetPolicy Method](#getpolicy)|Returns a copy of the policy that the current scheduler was created with.|  
|[CurrentScheduler::Id Method](#id)|Returns a unique identifier for the current scheduler.|  
|[CurrentScheduler::IsAvailableLocation Method](#isavailablelocation)|Determines whether a given location is available on the current scheduler.|  
|[CurrentScheduler::RegisterShutdownEvent Method](#registershutdownevent)|Causes the Windows event handle passed in the `_ShutdownEvent` parameter to be signaled when the scheduler associated with the current context shuts down and destroys itself. At the time the event is signaled, all work that had been scheduled to the scheduler is complete. Multiple shutdown events can be registered through this method.|  
|[CurrentScheduler::ScheduleTask Method](#scheduletask)|Overloaded. Schedules a light-weight task within the scheduler associated with the calling context. The light-weight task will be placed in a schedule group determined by the runtime. The version that takes the parameter `_Placement` causes the task to be biased towards executing at the specified location.|  
  
## Remarks  
 If there is no scheduler (see [Scheduler](scheduler-class.md)) associated with the calling context, many methods within the `CurrentScheduler` class will result in attachment of the process' default scheduler. This may also imply that the process' default scheduler is created during such a call.  
  
## Inheritance Hierarchy  
 `CurrentScheduler`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="create"></a>  CurrentScheduler::Create Method  
 Creates a new scheduler whose behavior is described by the `_Policy` parameter and attaches it to the calling context. The newly created scheduler will become the current scheduler for the calling context.  
  
```
static void __cdecl Create(const SchedulerPolicy& _Policy);
```  
  
### Parameters  
 `_Policy`  
 The scheduler policy that describes the behavior of the newly created scheduler.  
  
### Remarks  
 The attachment of the scheduler to the calling context implicitly places a reference count on the scheduler.  
  
 After a scheduler is created with the `Create` method, you must call the [CurrentScheduler::Detach](#detach) method at some point in the future in order to allow the scheduler to shut down.  
  
 If this method is called from a context that is already attached to a different scheduler, the existing scheduler is remembered as the previous scheduler, and the newly created scheduler becomes the current scheduler. When you call the `CurrentScheduler::Detach` method at a later point, the previous scheduler is restored as the current scheduler.  
  
 This method can throw a variety of exceptions, including [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md) and [invalid_scheduler_policy_value](invalid-scheduler-policy-value-class.md).  
  
##  <a name="createschedulegroup"></a>  CurrentScheduler::CreateScheduleGroup Method  
 Creates a new schedule group within the scheduler associated with the calling context. The version that takes the parameter `_Placement` causes tasks within the newly created schedule group to be biased towards executing at the location specified by that parameter.  
  
```
static ScheduleGroup* __cdecl CreateScheduleGroup();

static ScheduleGroup* __cdecl CreateScheduleGroup(location& _Placement);
```  
  
### Parameters  
 `_Placement`  
 A reference to a location where the tasks within the schedule group will be biased towards executing at.  
  
### Return Value  
 A pointer to the newly created schedule group. This `ScheduleGroup` object has an initial reference count placed on it.  
  
### Remarks  
 This method will result in the process' default scheduler being created and/or attached to the calling context if there is no scheduler currently associated with the calling context.  
  
 You must invoke the [Release](schedulegroup-class.md#release) method on a schedule group when you are done scheduling work to it. The scheduler will destroy the schedule group when all work queued to it has completed.  
  
 Note that if you explicitly created this scheduler, you must release all references to schedule groups within it, before you release your reference on the scheduler, by detaching the current context from it.  
  
##  <a name="detach"></a>  CurrentScheduler::Detach Method  
 Detaches the current scheduler from the calling context and restores the previously attached scheduler as the current scheduler, if one exists. After this method returns, the calling context is then managed by the scheduler that was previously attached to the context using either the `CurrentScheduler::Create` or `Scheduler::Attach` method.  
  
```
static void __cdecl Detach();
```  
  
### Remarks  
 The `Detach` method implicitly removes a reference count from the scheduler.  
  
 If there is no scheduler attached to the calling context, calling this method will result in a [scheduler_not_attached](scheduler-not-attached-class.md) exception being thrown.  
  
 Calling this method from a context that is internal to and managed by a scheduler, or a context that was attached using a method other than the [Scheduler::Attach](scheduler-class.md#attach) or [CurrentScheduler::Create](#create) methods, will result in an [improper_scheduler_detach](improper-scheduler-detach-class.md) exception being thrown.  
  
##  <a name="get"></a>  CurrentScheduler::Get Method  
 Returns a pointer to the scheduler associated with the calling context, also referred to as the current scheduler.  
  
```
static Scheduler* __cdecl Get();
```  
  
### Return Value  
 A pointer to the scheduler associated with the calling context (the current scheduler).  
  
### Remarks  
 This method will result in the process' default scheduler being created and/or attached to the calling context if there is no scheduler currently associated with the calling context. No additional reference is placed on the `Scheduler` object returned by this method.  
  
##  <a name="getnumberofvirtualprocessors"></a>  CurrentScheduler::GetNumberOfVirtualProcessors Method  
 Returns the current number of virtual processors for the scheduler associated with the calling context.  
  
```
static unsigned int __cdecl GetNumberOfVirtualProcessors();
```  
  
### Return Value  
 If a scheduler is associated with the calling context, the current number of virtual processors for that scheduler; otherwise, the value `-1`.  
  
### Remarks  
 This method will not result in scheduler attachment if the calling context is not already associated with a scheduler.  
  
 The return value from this method is an instantaneous sampling of the number of virtual processors for the scheduler associated with the calling context. This value can be stale the moment it is returned.  
  
##  <a name="getpolicy"></a>  CurrentScheduler::GetPolicy Method  
 Returns a copy of the policy that the current scheduler was created with.  
  
```
static SchedulerPolicy __cdecl GetPolicy();
```  
  
### Return Value  
 A copy of the policy that that the current scheduler was created with.  
  
### Remarks  
 This method will result in the process' default scheduler being created and/or attached to the calling context if there is no scheduler currently associated with the calling context.  
  
##  <a name="id"></a>  CurrentScheduler::Id Method  
 Returns a unique identifier for the current scheduler.  
  
```
static unsigned int __cdecl Id();
```  
  
### Return Value  
 If a scheduler is associated with the calling context, a unique identifier for that scheduler; otherwise, the value `-1`.  
  
### Remarks  
 This method will not result in scheduler attachment if the calling context is not already associated with a scheduler.  
  
##  <a name="isavailablelocation"></a>  CurrentScheduler::IsAvailableLocation Method  
 Determines whether a given location is available on the current scheduler.  
  
```
static bool __cdecl IsAvailableLocation(const location& _Placement);
```  
  
### Parameters  
 `_Placement`  
 A reference to the location to query the current scheduler about.  
  
### Return Value  
 An indication of whether or not the location specified by the `_Placement` argument is available on the current scheduler.  
  
### Remarks  
 This method will not result in scheduler attachment if the calling context is not already associated with a scheduler.  
  
 Note that the return value is an instantaneous sampling of whether the given location is available. In the presence of multiple schedulers, dynamic resource management can add or take away resources from schedulers at any point. Should this happen, the given location can change availability.  
  
##  <a name="registershutdownevent"></a>  CurrentScheduler::RegisterShutdownEvent Method  
 Causes the Windows event handle passed in the `_ShutdownEvent` parameter to be signaled when the scheduler associated with the current context shuts down and destroys itself. At the time the event is signaled, all work that had been scheduled to the scheduler is complete. Multiple shutdown events can be registered through this method.  
  
```
static void __cdecl RegisterShutdownEvent(HANDLE _ShutdownEvent);
```  
  
### Parameters  
 `_ShutdownEvent`  
 A handle to a Windows event object which will be signaled by the runtime when the scheduler associated with the current context shuts down and destroys itself.  
  
### Remarks  
 If there is no scheduler attached to the calling context, calling this method will result in a [scheduler_not_attached](scheduler-not-attached-class.md) exception being thrown.  
  
##  <a name="scheduletask"></a>  CurrentScheduler::ScheduleTask Method  
 Schedules a light-weight task within the scheduler associated with the calling context. The light-weight task will be placed in a schedule group determined by the runtime. The version that takes the parameter `_Placement` causes the task to be biased towards executing at the specified location.  
  
```
static void __cdecl ScheduleTask(
    TaskProc _Proc,
    _Inout_opt_ void* _Data);

static void __cdecl ScheduleTask(
    TaskProc _Proc,
    _Inout_opt_ void* _Data,
    location& _Placement);
```  
  
### Parameters  
 `_Proc`  
 A pointer to the function to execute to perform the body of the light-weight task.  
  
 `_Data`  
 A void pointer to the data that will be passed as a parameter to the body of the task.  
  
 `_Placement`  
 A reference to a location where the light-weight task will be biased towards executing at.  
  
### Remarks  
 This method will result in the process' default scheduler being created and/or attached to the calling context if there is no scheduler currently associated with the calling context.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [Scheduler Class](scheduler-class.md)   
 [PolicyElementKey Enumeration](concurrency-namespace-enums.md)   
 [Task Scheduler](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)



