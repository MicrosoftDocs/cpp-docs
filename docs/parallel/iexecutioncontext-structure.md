---
title: "IExecutionContext Structure"
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
  - "concrtrm/concurrency::IExecutionContext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IExecutionContext structure"
ms.assetid: f3108089-ecda-4b07-86db-3efae60c31e0
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
# IExecutionContext Structure
An interface to an execution context which can run on a given virtual processor and be cooperatively context switched.  
  
## Syntax  
  
```
struct IExecutionContext;
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IExecutionContext::Dispatch Method](#iexecutioncontext__dispatch_method)|The method that is called when a thread proxy starts executing a particular execution context. This should be the main worker routine for your scheduler.|  
|[IExecutionContext::GetId Method](#iexecutioncontext__getid_method)|Returns a unique identifier for the execution context.|  
|[IExecutionContext::GetProxy Method](#iexecutioncontext__getproxy_method)|Returns an interface to the thread proxy that is executing this context.|  
|[IExecutionContext::GetScheduler Method](#iexecutioncontext__getscheduler_method)|Returns an interface to the scheduler this execution context belongs to.|  
|[IExecutionContext::SetProxy Method](#iexecutioncontext__setproxy_method)|Associates a thread proxy with this execution context. The associated thread proxy invokes this method right before it starts executing the context's `Dispatch` method.|  
  
## Remarks  
 If you are implementing a custom scheduler that interfaces with the Concurrency Runtime's Resource Manager, you will need to implement the `IExecutionContext` interface. The threads created by the Resource Manager perform work on behalf of your scheduler by executing the `IExecutionContext::Dispatch` method.  
  
## Inheritance Hierarchy  
 `IExecutionContext`  
  
## Requirements  
 **Header:** concrtrm.h  
  
 **Namespace:** concurrency  
  
##  <a name="iexecutioncontext__dispatch_method"></a>  IExecutionContext::Dispatch Method  
 The method that is called when a thread proxy starts executing a particular execution context. This should be the main worker routine for your scheduler.  
  
```
virtual void Dispatch(_Inout_ DispatchState* pDispatchState) = 0;
```  
  
### Parameters  
 `pDispatchState`  
 A pointer to the state under which this execution context is being dispatched. For more information on dispatch state, see [DispatchState](../parallel/dispatchstate-structure.md).  
  
##  <a name="iexecutioncontext__getid_method"></a>  IExecutionContext::GetId Method  
 Returns a unique identifier for the execution context.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### Return Value  
 A unique integer identifier.  
  
### Remarks  
 You should use the method `GetExecutionContextId` to obtain a unique identifier for the object that implements the `IExecutionContext` interface, before you use the interface as a parameter to methods supplied by the Resource Manager. You are expected to return the same identifier when the `GetId` function is invoked.  
  
 An identifier obtained from a different source could result in undefined behavior.  
  
##  <a name="iexecutioncontext__getproxy_method"></a>  IExecutionContext::GetProxy Method  
 Returns an interface to the thread proxy that is executing this context.  
  
```
virtual IThreadProxy* GetProxy() = 0;
```  
  
### Return Value  
 An `IThreadProxy` interface. If the execution context's thread proxy has not been initialized with a call to `SetProxy`, the function must return `NULL`.  
  
### Remarks  
 The Resource Manager will invoke the `SetProxy` method on an execution context, with an `IThreadProxy` interface as a parameter, prior to entering the `Dispatch` method on the on the context. You are expected to store this argument and return it on calls to `GetProxy()`.  
  
##  <a name="iexecutioncontext__getscheduler_method"></a>  IExecutionContext::GetScheduler Method  
 Returns an interface to the scheduler this execution context belongs to.  
  
```
virtual IScheduler* GetScheduler() = 0;
```  
  
### Return Value  
 An `IScheduler` interface.  
  
### Remarks  
 You are required to initialize the execution context with a valid `IScheduler` interface before you use it as a parameter to methods supplied by the Resource Manager.  
  
##  <a name="iexecutioncontext__setproxy_method"></a>  IExecutionContext::SetProxy Method  
 Associates a thread proxy with this execution context. The associated thread proxy invokes this method right before it starts executing the context's `Dispatch` method.  
  
```
virtual void SetProxy(_Inout_ IThreadProxy* pThreadProxy) = 0;
```  
  
### Parameters  
 `pThreadProxy`  
 An interface to the thread proxy that is about to enter the `Dispatch` method on this execution context.  
  
### Remarks  
 You are expected to save the parameter `pThreadProxy` and return it on a call to the `GetProxy` method. The Resource Manager guarantees that the thread proxy associated with the execution context will not change while the thread proxy is executing the `Dispatch` method.  
  
## See Also  
 [concurrency Namespace](../parallel/concurrency-namespace.md)   
 [IScheduler Structure](../parallel/ischeduler-structure.md)   
 [IThreadProxy Structure](../parallel/ithreadproxy-structure.md)

