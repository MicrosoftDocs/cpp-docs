---
title: "CNonStatelessWorker Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "ATL.CNonStatelessWorker<Worker>"
  - "ATL::CNonStatelessWorker"
  - "ATL.CNonStatelessWorker"
  - "CNonStatelessWorker"
  - "ATL::CNonStatelessWorker<Worker>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CNonStatelessWorker class"
ms.assetid: d00936c6-9e7d-49fb-b87d-417b963367d1
caps.latest.revision: 16
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
# CNonStatelessWorker Class
Receives requests from a thread pool and passes them on to a worker object that is created and destroyed on each request.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template <class Worker>  class CNonStatelessWorker
```  
  
#### Parameters  
 *Worker*  
 A worker thread class conforming to the [worker archetype](../atl/worker-archetype.md) suitable for handling requests queued on [CThreadPool](../atl/cthreadpool-class.md).  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CNonStatelessWorker::RequestType](../Topic/CNonStatelessWorker::RequestType.md)|Implementation of [WorkerArchetype::RequestType](../atl/workerarchetype--requesttype.md).|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CNonStatelessWorker::Execute](../Topic/CNonStatelessWorker::Execute.md)|Implementation of [WorkerArchetype::Execute](../atl/workerarchetype--execute.md).|  
|[CNonStatelessWorker::Initialize](../Topic/CNonStatelessWorker::Initialize.md)|Implementation of [WorkerArchetype::Initialize](../atl/workerarchetype--initialize.md).|  
|[CNonStatelessWorker::Terminate](../Topic/CNonStatelessWorker::Terminate.md)|Implementation of [WorkerArchetype::Terminate](../atl/workerarchetype--terminate.md).|  
  
## Remarks  
 This class is a simple worker thread for use with [CThreadPool](../atl/cthreadpool-class.md). This class doesn't provide any request-handling capabilities of its own. Instead, it instantiates one instance of *Worker* per request and delegates the implementation of its methods to that instance.  
  
 The benefit of this class is that it provides a convenient way to change the state model for existing worker thread classes. `CThreadPool` will create a single worker for the lifetime of the thread, so if the worker class holds state, it will hold it across multiple requests. By simply wrapping that class in the `CNonStatelessWorker` template before using it with `CThreadPool`, the lifetime of the worker and the state it holds is limited to a single request.  
  
## Requirements  
 **Header:** atlutil.h  
  
##  <a name="cnonstatelessworker__execute"></a>  CNonStatelessWorker::Execute  
 Implementation of [WorkerArchetype::Execute](../atl/workerarchetype--execute.md).  
  
```
void Execute(
    Worker::RequestType  request,
    void*  pvWorkerParam,
    OVERLAPPED*  pOverlapped);
```  
  
### Remarks  
 This method creates an instance of the *Worker* class on the stack and calls [Initialize](../atl/workerarchetype--initialize.md) on that object. If the initialization is successful, this method also calls [Execute](../atl/workerarchetype--execute.md) and [Terminate](../atl/workerarchetype--terminate.md) on the same object.  
  
##  <a name="cnonstatelessworker__initialize"></a>  CNonStatelessWorker::Initialize  
 Implementation of [WorkerArchetype::Initialize](../atl/workerarchetype--initialize.md).  
  
```
BOOL Initialize(void*  /* pvParam
 */) throw();
```  
  
### Return Value  
 Always returns TRUE.  
  
### Remarks  
 This class does not do any initialization in `Initialize`.  
  
##  <a name="cnonstatelessworker__requesttype"></a>  CNonStatelessWorker::RequestType  
 Implementation of [WorkerArchetype::RequestType](../atl/workerarchetype--requesttype.md).  
  
```
typedef Worker::RequestType RequestType;
```  
  
### Remarks  
 This class handles the same type of work item as the class used for the *Worker* template parameter. See [CNonStatelessWorker Overview](../atl/cnonstatelessworker-class.md) for details.  
  
##  <a name="cnonstatelessworker__terminate"></a>  CNonStatelessWorker::Terminate  
 Implementation of [WorkerArchetype::Terminate](../atl/workerarchetype--terminate.md).  
  
```
void Terminate(void*  /* pvParam
 */) throw();
```  
  
### Remarks  
 This class does not do any cleanup in `Terminate`.  
  
## See Also  
 [CThreadPool Class](../atl/cthreadpool-class.md)   
 [Worker Archetype](../atl/worker-archetype.md)   
 [Classes](../atl/atl-classes.md)

