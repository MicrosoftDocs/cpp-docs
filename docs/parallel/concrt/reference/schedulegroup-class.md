---
title: "ScheduleGroup Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::ScheduleGroup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ScheduleGroup class"
ms.assetid: 86d380ff-f2e8-411c-b1a8-22bd3079824a
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
# ScheduleGroup Class
Represents an abstraction for a schedule group. Schedule groups organize a set of related work that benefits from being scheduled close together either temporally, by executing another task in the same group before moving to another group, or spatially, by executing multiple items within the same group on the same NUMA node or physical socket.  
  
## Syntax  
  
```
class ScheduleGroup;
```  
  
## Members  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[ScheduleGroup::~ScheduleGroup Destructor](#dtor)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ScheduleGroup::Id Method](#id)|Returns an identifier for the schedule group that is unique within the scheduler to which the group belongs.|  
|[ScheduleGroup::Reference Method](#reference)|Increments the schedule group reference count.|  
|[ScheduleGroup::Release Method](#release)|Decrements the scheduler group reference count.|  
|[ScheduleGroup::ScheduleTask Method](#scheduletask)|Schedules a light-weight task within the schedule group.|  
  
## Inheritance Hierarchy  
 `ScheduleGroup`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="id"></a>  ScheduleGroup::Id Method  
 Returns an identifier for the schedule group that is unique within the scheduler to which the group belongs.  
  
```
virtual unsigned int Id() const = 0;
```  
  
### Return Value  
 An identifier for the schedule group that is unique within the scheduler to which the group belongs.  
  
##  <a name="operator_delete"></a>  ScheduleGroup::operator delete Operator  
 A `ScheduleGroup` object is destroyed internally by the runtime when all external references to it are released. It cannot be explicitly deleted.  
  
```
void operator delete(
    void* _PObject);

void operator delete(
    void* _PObject,
    int,
 const char *,
    int);
```    
  
### Parameters  
 `_PObject`  
 A pointer to the object to be deleted.  
  
##  <a name="reference"></a>  ScheduleGroup::Reference Method  
 Increments the schedule group reference count.  
  
```
virtual unsigned int Reference() = 0;
```  
  
### Return Value  
 The newly incremented reference count.  
  
### Remarks  
 This is typically used to manage the lifetime of the schedule group for composition. When the reference count of a schedule group falls to zero, the schedule group is deleted by the runtime. A schedule group created using either the [CurrentScheduler::CreateScheduleGroup](currentscheduler-class.md#createschedulegroup) method, or the [Scheduler::CreateScheduleGroup](scheduler-class.md#createschedulegroup) method starts out with a reference count of one.  
  
##  <a name="release"></a>  ScheduleGroup::Release Method  
 Decrements the scheduler group reference count.  
  
```
virtual unsigned int Release() = 0;
```  
  
### Return Value  
 The newly decremented reference count.  
  
### Remarks  
 This is typically used to manage the lifetime of the schedule group for composition. When the reference count of a schedule group falls to zero, the schedule group is deleted by the runtime. After you have called the `Release` method the specific number of times to remove the creation reference count and any additional references placed using the `Reference` method, you cannot utilize the schedule group further. Doing so will result in undefined behavior.  
  
 A schedule group is associated with a particular scheduler instance. You must ensure that all references to the schedule group are released before all references to the scheduler are released, because the latter could result in the scheduler being destroyed. Doing otherwise results in undefined behavior.  
  
##  <a name="dtor"></a>  ScheduleGroup::~ScheduleGroup Destructor  
  
```
virtual ~ScheduleGroup();
```  
  
##  <a name="scheduletask"></a>  ScheduleGroup::ScheduleTask Method  
 Schedules a light-weight task within the schedule group.  
  
```
virtual void ScheduleTask(
    TaskProc _Proc,
    _Inout_opt_ void* _Data) = 0;
```  
  
### Parameters  
 `_Proc`  
 A pointer to the function to execute to perform the body of the light-weight task.  
  
 `_Data`  
 A void pointer to the data that will be passed as a parameter to the body of the task.  
  
### Remarks  
 Calling the `ScheduleTask` method implicitly places a reference count on the schedule group which is removed by the runtime at an appropriate time after the task executes.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [CurrentScheduler Class](currentscheduler-class.md)   
 [Scheduler Class](scheduler-class.md)   
 [Task Scheduler](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)



