---
title: "Context Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::Context"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Context class"
ms.assetid: c0d553f3-961d-4ecd-9a29-4fa4351673b8
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
# Context Class
Represents an abstraction for an execution context.  
  
## Syntax  
  
```
class Context;
```  
  
## Members  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Context::~Context Destructor](#dtor)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Context::Block Method](#block)|Blocks the current context.|  
|[Context::CurrentContext Method](#currentcontext)|Returns a pointer to the current context.|  
|[Context::GetId Method](#getid)|Returns an identifier for the context that is unique within the scheduler to which the context belongs.|  
|[Context::GetScheduleGroupId Method](#getschedulegroupid)|Returns an identifier for the schedule group that the context is currently working on.|  
|[Context::GetVirtualProcessorId Method](#getvirtualprocessorid)|Returns an identifier for the virtual processor that the context is currently executing on.|  
|[Context::Id Method](#id)|Returns an identifier for the current context that is unique within the scheduler to which the current context belongs.|  
|[Context::IsCurrentTaskCollectionCanceling Method](#iscurrenttaskcollectioncanceling)|Returns an indication of whether the task collection which is currently executing inline on the current context is in the midst of an active cancellation (or will be shortly).|  
|[Context::IsSynchronouslyBlocked Method](#issynchronouslyblocked)|Determines whether or not the context is synchronously blocked. A context is considered to be synchronously blocked if it explicitly performed an action which led to blocking.|  
|[Context::Oversubscribe Method](#oversubscribe)|Injects an additional virtual processor into a scheduler for the duration of a block of code when invoked on a context executing on one of the virtual processors in that scheduler.|  
|[Context::ScheduleGroupId Method](#schedulegroupid)|Returns an identifier for the schedule group that the current context is working on.|  
|[Context::Unblock Method](#unblock)|Unblocks the context and causes it to become runnable.|  
|[Context::VirtualProcessorId Method](#virtualprocessorid)|Returns an identifier for the virtual processor that the current context is executing on.|  
|[Context::Yield Method](#yield)|Yields execution so that another context can execute. If no other context is available to yield to, the scheduler can yield to another operating system thread.|  
  
## Remarks  
 The Concurrency Runtime scheduler (see [Scheduler](scheduler-class.md)) uses execution contexts to execute the work queued to it by your application. A Win32 thread is an example of an execution context on a Windows operating system.  
  
 At any time, the concurrency level of a scheduler is equal to the number of virtual processors granted to it by the Resource Manager. A virtual processor is an abstraction for a processing resource and maps to a hardware thread on the underlying system. Only a single scheduler context can execute on a virtual processor at a given time.  
  
 The scheduler is cooperative in nature and an executing context can yield its virtual processor to a different context at any time if it wishes to enter a wait state. When its wait it satisfied, it cannot resume until an available virtual processor from the scheduler begins executing it.  
  
## Inheritance Hierarchy  
 `Context`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="block"></a>  Context::Block Method  
 Blocks the current context.  
  
```
static void __cdecl Block();
```  
  
### Remarks  
 This method will result in the process' default scheduler being created and/or attached to the calling context if there is no scheduler currently associated with the calling context.  
  
 If the calling context is running on a virtual processor, the virtual processor will find another runnable context to execute or can potentially create a new one.  
  
 After the `Block` method has been called or will be called, you must pair it with a call to the [Unblock](#unblock) method from another execution context in order for it to run again. Be aware that there is a critical period between the point where your code publishes its context for another thread to be able to call the `Unblock` method and the point where the actual method call to `Block` is made. During this period, you must not call any method which can in turn block and unblock for its own reasons (for example, acquiring a lock). Calls to the `Block` and `Unblock` method do not track the reason for the blocking and unblocking. Only one object should have ownership of a `Block`- `Unblock` pair.  
  
 This method can throw a variety of exceptions, including [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md).  
  
##  <a name="dtor"></a>  Context::~Context Destructor  
  
```
virtual ~Context();
```  
  
##  <a name="currentcontext"></a>  Context::CurrentContext Method  
 Returns a pointer to the current context.  
  
```
static Context* __cdecl CurrentContext();
```  
  
### Return Value  
 A pointer to the current context.  
  
### Remarks  
 This method will result in the process' default scheduler being created and/or attached to the calling context if there is no scheduler currently associated with the calling context.  
  
##  <a name="getid"></a>  Context::GetId Method  
 Returns an identifier for the context that is unique within the scheduler to which the context belongs.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### Return Value  
 An identifier for the context that is unique within the scheduler to which the context belongs.  
  
##  <a name="getschedulegroupid"></a>  Context::GetScheduleGroupId Method  
 Returns an identifier for the schedule group that the context is currently working on.  
  
```
virtual unsigned int GetScheduleGroupId() const = 0;
```  
  
### Return Value  
 An identifier for the schedule group the context is currently working on.  
  
### Remarks  
 The return value from this method is an instantaneous sampling of the schedule group that the context is executing on. If this method is called on a context other than the current context, the value can be stale the moment it is returned and cannot be relied upon. Typically, this method is used for debugging or tracing purposes only.  
  
##  <a name="getvirtualprocessorid"></a>  Context::GetVirtualProcessorId Method  
 Returns an identifier for the virtual processor that the context is currently executing on.  
  
```
virtual unsigned int GetVirtualProcessorId() const = 0;
```  
  
### Return Value  
 If the context is currently executing on a virtual processor, an identifier for the virtual processor that the context is currently executing on; otherwise, the value `-1`.  
  
### Remarks  
 The return value from this method is an instantaneous sampling of the virtual processor that the context is executing on. This value can be stale the moment it is returned and cannot be relied upon. Typically, this method is used for debugging or tracing purposes only.  
  
##  <a name="id"></a>  Context::Id Method  
 Returns an identifier for the current context that is unique within the scheduler to which the current context belongs.  
  
```
static unsigned int __cdecl Id();
```  
  
### Return Value  
 If the current context is attached to a scheduler, an identifier for the current context that is unique within the scheduler to which the current context belongs; otherwise, the value `-1`.  
  
##  <a name="iscurrenttaskcollectioncanceling"></a>  Context::IsCurrentTaskCollectionCanceling Method  
 Returns an indication of whether the task collection which is currently executing inline on the current context is in the midst of an active cancellation (or will be shortly).  
  
```
static bool __cdecl IsCurrentTaskCollectionCanceling();
```  
  
### Return Value  
 If a scheduler is attached to the calling context and a task group is executing a task inline on that context, an indication of whether that task group is in the midst of an active cancellation (or will be shortly); otherwise, the value `false`.  
  
##  <a name="issynchronouslyblocked"></a>  Context::IsSynchronouslyBlocked Method  
 Determines whether or not the context is synchronously blocked. A context is considered to be synchronously blocked if it explicitly performed an action which led to blocking.  
  
```
virtual bool IsSynchronouslyBlocked() const = 0;
```  
  
### Return Value  
 Whether the context is synchronously blocked.  
  
### Remarks  
 A context is considered to be synchronously blocked if it explicitly performed an action which led to blocking. On the thread scheduler, this would indicate a direct call to the `Context::Block` method or a synchronization object which was built using the `Context::Block` method.  
  
 The return value from this method is an instantaneous sample of whether the context is synchronously blocked. This value may be stale the moment it is returned and can only be used under very specific circumstances.  
  
##  <a name="operator_delete"></a>  Context::operator delete Operator  
 A `Context` object is destroyed internally by the runtime. It can not be explicitly deleted.  
  
```
void operator delete(void* _PObject);
```  
  
### Parameters  
 `_PObject`  
 A pointer to the object to be deleted.  
  
##  <a name="oversubscribe"></a>  Context::Oversubscribe Method  
 Injects an additional virtual processor into a scheduler for the duration of a block of code when invoked on a context executing on one of the virtual processors in that scheduler.  
  
```
static void __cdecl Oversubscribe(bool _BeginOversubscription);
```  
  
### Parameters  
 `_BeginOversubscription`  
 If `true`, an indication that an extra virtual processor should be added for the duration of the oversubscription. If `false`, an indication that the oversubscription should end and the previously added virtual processor should be removed.  
  
##  <a name="schedulegroupid"></a>  Context::ScheduleGroupId Method  
 Returns an identifier for the schedule group that the current context is working on.  
  
```
static unsigned int __cdecl ScheduleGroupId();
```  
  
### Return Value  
 If the current context is attached to a scheduler and working on a schedule group, an identifier for the scheduler group that the current context is working on; otherwise, the value `-1`.  
  
##  <a name="unblock"></a>  Context::Unblock Method  
 Unblocks the context and causes it to become runnable.  
  
```
virtual void Unblock() = 0;
```  
  
### Remarks  
 It is perfectly legal for a call to the `Unblock` method to come before a corresponding call to the [Block](#block) method. As long as calls to the `Block` and `Unblock` methods are properly paired, the runtime properly handles the natural race of either ordering. An `Unblock` call coming before a `Block` call simply negates the effect of the `Block` call.  
  
 There are several exceptions which can be thrown from this method. If a context attempts to call the `Unblock` method on itself, a [context_self_unblock](context-self-unblock-class.md) exception will be thrown. If calls to `Block` and `Unblock` are not properly paired (for example, two calls to `Unblock` are made for a context which is currently running), a [context_unblock_unbalanced](context-unblock-unbalanced-class.md) exception will be thrown.  
  
 Be aware that there is a critical period between the point where your code publishes its context for another thread to be able to call the `Unblock` method and the point where the actual method call to `Block` is made. During this period, you must not call any method which can in turn block and unblock for its own reasons (for example, acquiring a lock). Calls to the `Block` and `Unblock` method do not track the reason for the blocking and unblocking. Only one object should have ownership of a `Block` and `Unblock` pair.  
  
##  <a name="virtualprocessorid"></a>  Context::VirtualProcessorId Method  
 Returns an identifier for the virtual processor that the current context is executing on.  
  
```
static unsigned int __cdecl VirtualProcessorId();
```  
  
### Return Value  
 If the current context is attached to a scheduler, an identifier for the virtual processor that the current context is executing on; otherwise, the value `-1`.  
  
### Remarks  
 The return value from this method is an instantaneous sampling of the virtual processor that the current context is executing on. This value can be stale the moment it is returned and cannot be relied upon. Typically, this method is used for debugging or tracing purposes only.  
  
##  <a name="yield"></a>  Context::Yield Method  
 Yields execution so that another context can execute. If no other context is available to yield to, the scheduler can yield to another operating system thread.  
  
```
static void __cdecl Yield();
```  
  
### Remarks  
 This method will result in the process' default scheduler being created and/or attached to the calling context if there is no scheduler currently associated with the calling context.  
  
##  <a name="yieldexecution"></a>  Context::YieldExecution Method  
 Yields execution so that another context can execute. If no other context is available to yield to, the scheduler can yield to another operating system thread.  
  
```
static void __cdecl YieldExecution();
```  
  
### Remarks  
 This method will result in the process' default scheduler being created and/or attached to the calling context if there is no scheduler currently associated with the calling context.  
  
 This function is new in [!INCLUDE[vs_dev14](../../../ide/includes/vs_dev14_md.md)] and is identical to the [Yield](#yield) function but does not conflict with the Yield macro in Windows.h.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [Scheduler Class](scheduler-class.md)   
 [Task Scheduler](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)



