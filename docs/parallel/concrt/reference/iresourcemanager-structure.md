---
title: "IResourceManager Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::IResourceManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IResourceManager structure"
ms.assetid: 3dd5ec2c-fe53-4121-ae77-1bc1d1167ff4
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
# IResourceManager Structure
An interface to the Concurrency Runtime's Resource Manager. This is the interface by which schedulers communicate with the Resource Manager.  
  
## Syntax  
  
```
struct IResourceManager;
```  
  
## Members  
  
### Public Enumerations  
  
|Name|Description|  
|----------|-----------------|  
|[IResourceManager::OSVersion Enumeration](#osversion)|An enumerated type that represents the operating system version.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IResourceManager::CreateNodeTopology Method](#createnodetopology)|Present only in debug builds of the runtime, this method is a test hook designed to facilitate testing of the Resource Manager on varying hardware topologies, without requiring actual hardware matching the configuration. With retail builds of the runtime, this method will return without performing any action.|  
|[IResourceManager::GetAvailableNodeCount Method](#getavailablenodecount)|Returns the number of nodes available to the Resource Manager.|  
|[IResourceManager::GetFirstNode Method](#getfirstnode)|Returns the first node in enumeration order as defined by the Resource Manager.|  
|[IResourceManager::Reference Method](#reference)|Increments the reference count on the Resource Manager instance.|  
|[IResourceManager::RegisterScheduler Method](#registerscheduler)|Registers a scheduler with the Resource Manager. Once the scheduler is registered, it should communicate with the Resource Manager using the `ISchedulerProxy` interface that is returned.|  
|[IResourceManager::Release Method](#release)|Decrements the reference count on the Resource Manager instance. The Resource Manager is destroyed when its reference count goes to `0`.|  
  
## Remarks  
 Use the [CreateResourceManager](concurrency-namespace-functions.md) function to obtain an interface to the singleton Resource Manager instance. The method increments a reference count on the Resource Manager, and you should invoke the [IResourceManager::Release](#release) method to release the reference when you are done with Resource Manager. Typically, each scheduler you create will invoke this method during creation, and release the reference to the Resource Manager after it shuts down.  
  
## Inheritance Hierarchy  
 `IResourceManager`  
  
## Requirements  
 **Header:** concrtrm.h  
  
 **Namespace:** concurrency  
  
##  <a name="createnodetopology"></a>  IResourceManager::CreateNodeTopology Method  
 Present only in debug builds of the runtime, this method is a test hook designed to facilitate testing of the Resource Manager on varying hardware topologies, without requiring actual hardware matching the configuration. With retail builds of the runtime, this method will return without performing any action.  
  
```
virtual void CreateNodeTopology(
    unsigned int nodeCount,
    _In_reads_(nodeCount) unsigned int* pCoreCount,
    _In_reads_opt_(nodeCount) unsigned int** pNodeDistance,
    _In_reads_(nodeCount) unsigned int* pProcessorGroups) = 0;
```  
  
### Parameters  
 `nodeCount`  
 The number of processor nodes being simulated.  
  
 `pCoreCount`  
 An array that specifies the number of cores on each node.  
  
 `pNodeDistance`  
 A matrix specifying the node distance between any two nodes. This parameter can have the value `NULL`.  
  
 `pProcessorGroups`  
 An array that specifies the processor group each node belongs to.  
  
### Remarks  
 [invalid_argument](../../../standard-library/invalid-argument-class.md) is thrown if the parameter `nodeCount` has the value `0` was passed in, or if the parameter `pCoreCount` has the value `NULL`.  
  
 [invalid_operation](invalid-operation-class.md) is thrown if this method is called while other schedulers exist in the process.  
  
##  <a name="getavailablenodecount"></a>  IResourceManager::GetAvailableNodeCount Method  
 Returns the number of nodes available to the Resource Manager.  
  
```
virtual unsigned int GetAvailableNodeCount() const = 0;
```  
  
### Return Value  
 The number of nodes available to the Resource Manager.  
  
##  <a name="getfirstnode"></a>  IResourceManager::GetFirstNode Method  
 Returns the first node in enumeration order as defined by the Resource Manager.  
  
```
virtual ITopologyNode* GetFirstNode() const = 0;
```  
  
### Return Value  
 The first node in enumeration order as defined by the Resource Manager.  
  
##  <a name="iresourcemanager__osversion"></a>  IResourceManager::OSVersion Enumeration  
 An enumerated type that represents the operating system version.  
  
```
enum OSVersion;
```  
  
##  <a name="reference"></a>  IResourceManager::Reference Method  
 Increments the reference count on the Resource Manager instance.  
  
```
virtual unsigned int Reference() = 0;
```  
  
### Return Value  
 The resulting reference count.  
  
##  <a name="registerscheduler"></a>  IResourceManager::RegisterScheduler Method  
 Registers a scheduler with the Resource Manager. Once the scheduler is registered, it should communicate with the Resource Manager using the `ISchedulerProxy` interface that is returned.  
  
```
virtual ISchedulerProxy *RegisterScheduler(
    _Inout_ IScheduler* pScheduler,
    unsigned int version) = 0;
```  
  
### Parameters  
 `pScheduler`  
 An `IScheduler` interface to the scheduler to be registered.  
  
 `version`  
 The version of communication interface the scheduler is using to communicate with the Resource Manager. Using a version allows the Resource Manager to evolve the communication interface while allowing schedulers to obtain access to older features. Schedulers that wish to use Resource Manager features present in Visual Studio 2010 should use the version `CONCRT_RM_VERSION_1`.  
  
### Return Value  
 The `ISchedulerProxy` interface the Resource Manager has associated with your scheduler. Your scheduler should use this interface to communicate with Resource Manager from this point on.  
  
### Remarks  
 Use this method to initiate communication with the Resource Manager. The method associates the `IScheduler` interface for your scheduler with an `ISchedulerProxy` interface and hands it back to you. You can use the returned interface to request execution resources for use by your scheduler, or to subscribe threads with the Resource Manager. The Resource Manager will use policy elements from the scheduler policy returned by the [IScheduler::GetPolicy](ischeduler-structure.md#getpolicy) method to determine what type of threads the scheduler will need to execute work. If your `SchedulerKind` policy key has the value `UmsThreadDefault` and the value is read back out of the policy as the value `UmsThreadDefault`, the `IScheduler` interface passed to the method must be an `IUMSScheduler` interface.  
  
 The method throws an `invalid_argument` exception if the parameter `pScheduler` has the value `NULL` or if the parameter `version` is not a valid version for the communication interface.  
  
##  <a name="release"></a>  IResourceManager::Release Method  
 Decrements the reference count on the Resource Manager instance. The Resource Manager is destroyed when its reference count goes to `0`.  
  
```
virtual unsigned int Release() = 0;
```  
  
### Return Value  
 The resulting reference count.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [ISchedulerProxy Structure](ischedulerproxy-structure.md)   
 [IScheduler Structure](ischeduler-structure.md)
