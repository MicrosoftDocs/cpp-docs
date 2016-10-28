---
title: "ISchedulerProxy Structure"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::ISchedulerProxy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ISchedulerProxy structure"
ms.assetid: af416973-7a1c-4c30-aa3b-4161c2aaea54
caps.latest.revision: 17
ms.author: "mithom"
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
# ISchedulerProxy Structure
The interface by which schedulers communicate with the Concurrency Runtime's Resource Manager to negotiate resource allocation.  
  
## Syntax  
  
```
struct ISchedulerProxy;
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ISchedulerProxy::BindContext Method](#ischedulerproxy__bindcontext_method)|Associates an execution context with a thread proxy, if it is not already associated with one.|  
|[ISchedulerProxy::CreateOversubscriber Method](#ischedulerproxy__createoversubscriber_method)|Creates a new virtual processor root on the hardware thread associated with an existing execution resource.|  
|[ISchedulerProxy::RequestInitialVirtualProcessors Method](#ischedulerproxy__requestinitialvirtualprocessors_method)|Requests an initial allocation of virtual processor roots. Every virtual processor root represents the ability to execute one thread that can perform work for the scheduler.|  
|[ISchedulerProxy::Shutdown Method](#ischedulerproxy__shutdown_method)|Notifies the Resource Manager that the scheduler is shutting down. This will cause the Resource Manager to immediately reclaim all resources granted to the scheduler.|  
|[ISchedulerProxy::SubscribeCurrentThread Method](#ischedulerproxy__subscribecurrentthread_method)|Registers the current thread with the Resource Manager, associating it with this scheduler.|  
|[ISchedulerProxy::UnbindContext Method](#ischedulerproxy__unbindcontext_method)|Disassociates a thread proxy from the execution context specified by the `pContext` parameter and returns it to the thread proxy factory's free pool. This method may only be called on an execution context which was bound via the [ISchedulerProxy::BindContext](#ischedulerproxy__bindcontext_method) method and has not yet been started via being the `pContext` parameter of an [IThreadProxy::SwitchTo](../parallel/ithreadproxy-structure.md#ithreadproxy__switchto_method) method call.|  
  
## Remarks  
 The Resource Manager hands an `ISchedulerProxy` interface to every scheduler that registers with it using the [IResourceManager::RegisterScheduler](../parallel/iresourcemanager-structure.md#iresourcemanager__registerscheduler_method) method.  
  
## Inheritance Hierarchy  
 `ISchedulerProxy`  
  
## Requirements  
 **Header:** concrtrm.h  
  
 **Namespace:** concurrency  
  
##  <a name="ischedulerproxy__bindcontext_method"></a>  ISchedulerProxy::BindContext Method  
 Associates an execution context with a thread proxy, if it is not already associated with one.  
  
```
virtual void BindContext(_Inout_ IExecutionContext* pContext) = 0;
```  
  
### Parameters  
 `pContext`  
 An interface to the execution context to associate with a thread proxy.  
  
### Remarks  
 Normally, the [IThreadProxy::SwitchTo](../parallel/ithreadproxy-structure.md#ithreadproxy__switchto_method) method will bind a thread proxy to an execution context on demand. There are, however, circumstances where it is necessary to bind a context in advance to ensure that the `SwitchTo` method switches to an already bound context. This is the case on a UMS scheduling context as it cannot call methods that allocate memory, and binding a thread proxy may involve memory allocation if a thread proxy is not readily available in the free pool of the thread proxy factory.  
  
 `invalid_argument` is thrown if the parameter `pContext` has the value `NULL`.  
  
##  <a name="ischedulerproxy__createoversubscriber_method"></a>  ISchedulerProxy::CreateOversubscriber Method  
 Creates a new virtual processor root on the hardware thread associated with an existing execution resource.  
  
```
virtual IVirtualProcessorRoot* CreateOversubscriber(_Inout_ IExecutionResource* pExecutionResource) = 0;
```  
  
### Parameters  
 `pExecutionResource`  
 An `IExecutionResource` interface that represents the hardware thread you want to oversubscribe.  
  
### Return Value  
 An `IVirtualProcessorRoot` interface.  
  
### Remarks  
 Use this method when your scheduler wants to oversubscribe a particular hardware thread for a limited amount of time. Once you are done with the virtual processor root, you should return it to the resource manager by calling the [Remove](../parallel/iexecutionresource-structure.md#iexecutionresource__remove_method) method on the `IVirtualProcessorRoot` interface.  
  
 You can even oversubscribe an existing virtual processor root, because the `IVirtualProcessorRoot` interface inherits from the `IExecutionResource` interface.  
  
##  <a name="ischedulerproxy__requestinitialvirtualprocessors_method"></a>  ISchedulerProxy::RequestInitialVirtualProcessors Method  
 Requests an initial allocation of virtual processor roots. Every virtual processor root represents the ability to execute one thread that can perform work for the scheduler.  
  
```
virtual IExecutionResource* RequestInitialVirtualProcessors(bool doSubscribeCurrentThread) = 0;
```  
  
### Parameters  
 `doSubscribeCurrentThread`  
 Whether to subscribe the current thread and account for it during resource allocation.  
  
### Return Value  
 The `IExecutionResource` interface for the current thread, if the parameter `doSubscribeCurrentThread` has the value `true`. If the value is `false`, the method returns `NULL`.  
  
### Remarks  
 Before a scheduler executes any work, it should use this method to request virtual processor roots from the Resource Manager. The Resource Manager will access the scheduler's policy using [IScheduler::GetPolicy](../parallel/ischeduler-structure.md#ischeduler__getpolicy_method) and use the values for the policy keys `MinConcurrency`, `MaxConcurrency` and `TargetOversubscriptionFactor` to determine how many hardware threads to assign to the scheduler initially and how many virtual processor roots to create for every hardware thread. For more information on how scheduler policies are used to determine a scheduler's initial allocation, see [PolicyElementKey](../parallel/concurrency-namespace-enums.md).  
  
 The Resource Manager grants resources to a scheduler by calling the method [IScheduler::AddVirtualProcessors](../parallel/ischeduler-structure.md#ischeduler__addvirtualprocessors_method) with a list of virtual processor roots. The method is invoked as a callback into the scheduler before this method returns.  
  
 If the scheduler requested subscription for the current thread by setting the parameter `doSubscribeCurrentThread` to `true`, the method returns an `IExecutionResource` interface. The subscription must be terminated at a later point by using the [IExecutionResource::Remove](../parallel/iexecutionresource-structure.md#iexecutionresource__remove_method) method.  
  
 When determining which hardware threads are selected, the Resource Manager will attempt to optimize for processor node affinity. If subscription is requested for the current thread, it is an indication that the current thread intends to participate in the work assigned to this scheduler. In such a case, the allocated virtual processors roots are located on the processor node the current thread is executing on, if possible.  
  
 The act of subscribing a thread increases the subscription level of the underlying hardware thread by one. The subscription level is reduced by one when the subscription is terminated. For more information on subscription levels, see [IExecutionResource::CurrentSubscriptionLevel](../parallel/iexecutionresource-structure.md#iexecutionresource__currentsubscriptionlevel_method).  
  
##  <a name="ischedulerproxy__shutdown_method"></a>  ISchedulerProxy::Shutdown Method  
 Notifies the Resource Manager that the scheduler is shutting down. This will cause the Resource Manager to immediately reclaim all resources granted to the scheduler.  
  
```
virtual void Shutdown() = 0;
```  
  
### Remarks  
 All `IExecutionContext` interfaces the scheduler received as a result of subscribing an external thread using the methods `ISchedulerProxy::RequestInitialVirtualProcessors` or `ISchedulerProxy::SubscribeCurrentThread` must be returned to the Resource Manager using `IExecutionResource::Remove` before a scheduler shuts itself down.  
  
 If your scheduler had any deactivated virtual processor roots, you must activate them using [IVirtualProcessorRoot::Activate](../parallel/ivirtualprocessorroot-structure.md#ivirtualprocessorroot__activate_method), and have the thread proxies executing on them leave the `Dispatch` method of the execution contexts they are dispatching before you invoke `Shutdown` on a scheduler proxy.  
  
 It is not necessary for the scheduler to individually return all of the virtual processor roots the Resource Manager granted to it via calls to the `Remove` method because all virtual processors roots will be returned to the Resource Manager at shutdown.  
  
##  <a name="ischedulerproxy__subscribecurrentthread_method"></a>  ISchedulerProxy::SubscribeCurrentThread Method  
 Registers the current thread with the Resource Manager, associating it with this scheduler.  
  
```
virtual IExecutionResource* SubscribeCurrentThread() = 0;
```  
  
### Return Value  
 The `IExecutionResource` interfacing representing the current thread in the runtime.  
  
### Remarks  
 Use this method if you want the Resource Manager to account for the current thread while allocating resources to your scheduler and other schedulers. It is especially useful when the thread plans to participate in the work queued to your scheduler, along with the virtual processor roots the scheduler receives from the Resource Manager. The Resource Manager uses information to prevent unnecessary oversubscription of hardware threads on the system.  
  
 The execution resource received via this method should be returned to the Resource Manager using the [IExecutionResource::Remove](../parallel/iexecutionresource-structure.md#iexecutionresource__remove_method) method. The thread that calls the `Remove` method must be the same thread that previously called the `SubscribeCurrentThread` method.  
  
 The act of subscribing a thread increases the subscription level of the underlying hardware thread by one. The subscription level is reduced by one when the subscription is terminated. For more information on subscription levels, see [IExecutionResource::CurrentSubscriptionLevel](../parallel/iexecutionresource-structure.md#iexecutionresource__currentsubscriptionlevel_method).  
  
##  <a name="ischedulerproxy__unbindcontext_method"></a>  ISchedulerProxy::UnbindContext Method  
 Disassociates a thread proxy from the execution context specified by the `pContext` parameter and returns it to the thread proxy factory's free pool. This method may only be called on an execution context which was bound via the [ISchedulerProxy::BindContext](#ischedulerproxy__bindcontext_method) method and has not yet been started via being the `pContext` parameter of an [IThreadProxy::SwitchTo](../parallel/ithreadproxy-structure.md#ithreadproxy__switchto_method) method call.  
  
```
virtual void UnbindContext(_Inout_ IExecutionContext* pContext) = 0;
```  
  
### Parameters  
 `pContext`  
 The execution context to disassociate from its thread proxy.  
  
## See Also  
 [concurrency Namespace](../parallel/concurrency-namespace.md)   
 [IScheduler Structure](../parallel/ischeduler-structure.md)   
 [IThreadProxy Structure](../parallel/ithreadproxy-structure.md)   
 [IVirtualProcessorRoot Structure](../parallel/ivirtualprocessorroot-structure.md)   
 [IResourceManager Structure](../parallel/iresourcemanager-structure.md)

