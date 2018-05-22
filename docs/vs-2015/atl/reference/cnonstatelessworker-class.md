---
title: "CNonStatelessWorker Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CNonStatelessWorker Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CNonStatelessWorker Class](https://docs.microsoft.com/cpp/atl/reference/cnonstatelessworker-class).  
  
  
Receives requests from a thread pool and passes them on to a worker object that is created and destroyed on each request.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template <class Worker>  
class CNonStatelessWorker
```  
  
#### Parameters  
 *Worker*  
 A worker thread class conforming to the [worker archetype](../../atl/reference/worker-archetype.md) suitable for handling requests queued on [CThreadPool](../../atl/reference/cthreadpool-class.md).  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CNonStatelessWorker::RequestType](#cnonstatelessworker__requesttype)|Implementation of [WorkerArchetype::RequestType](http://msdn.microsoft.com/library/22a4a478-9cbe-4230-b0b7-0f85ecb219dc).|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CNonStatelessWorker::Execute](#cnonstatelessworker__execute)|Implementation of [WorkerArchetype::Execute](http://msdn.microsoft.com/library/f5d1de03-b034-4d54-898f-cbdedd68e04d).|  
|[CNonStatelessWorker::Initialize](#cnonstatelessworker__initialize)|Implementation of [WorkerArchetype::Initialize](http://msdn.microsoft.com/library/5d82463f-dba9-461c-bc8d-692ff15ed17e).|  
|[CNonStatelessWorker::Terminate](#cnonstatelessworker__terminate)|Implementation of [WorkerArchetype::Terminate](http://msdn.microsoft.com/library/9bb841f2-fed6-4808-a2af-440b25ec91db).|  
  
## Remarks  
 This class is a simple worker thread for use with [CThreadPool](../../atl/reference/cthreadpool-class.md). This class doesn't provide any request-handling capabilities of its own. Instead, it instantiates one instance of *Worker* per request and delegates the implementation of its methods to that instance.  
  
 The benefit of this class is that it provides a convenient way to change the state model for existing worker thread classes. `CThreadPool` will create a single worker for the lifetime of the thread, so if the worker class holds state, it will hold it across multiple requests. By simply wrapping that class in the `CNonStatelessWorker` template before using it with `CThreadPool`, the lifetime of the worker and the state it holds is limited to a single request.  
  
## Requirements  
 **Header:** atlutil.h  
  
##  <a name="cnonstatelessworker__execute"></a>  CNonStatelessWorker::Execute  
 Implementation of [WorkerArchetype::Execute](http://msdn.microsoft.com/library/f5d1de03-b034-4d54-898f-cbdedd68e04d).  
  
```
void Execute(
    Worker::RequestType request,
    void* pvWorkerParam,
    OVERLAPPED* pOverlapped);
```  
  
### Remarks  
 This method creates an instance of the *Worker* class on the stack and calls [Initialize](http://msdn.microsoft.com/library/5d82463f-dba9-461c-bc8d-692ff15ed17e) on that object. If the initialization is successful, this method also calls [Execute](http://msdn.microsoft.com/library/f5d1de03-b034-4d54-898f-cbdedd68e04d) and [Terminate](http://msdn.microsoft.com/library/9bb841f2-fed6-4808-a2af-440b25ec91db) on the same object.  
  
##  <a name="cnonstatelessworker__initialize"></a>  CNonStatelessWorker::Initialize  
 Implementation of [WorkerArchetype::Initialize](http://msdn.microsoft.com/library/5d82463f-dba9-461c-bc8d-692ff15ed17e).  
  
```
BOOL Initialize(void* /* pvParam */) throw();
```  
  
### Return Value  
 Always returns TRUE.  
  
### Remarks  
 This class does not do any initialization in `Initialize`.  
  
##  <a name="cnonstatelessworker__requesttype"></a>  CNonStatelessWorker::RequestType  
 Implementation of [WorkerArchetype::RequestType](http://msdn.microsoft.com/library/22a4a478-9cbe-4230-b0b7-0f85ecb219dc).  
  
```
typedef Worker::RequestType RequestType;
```  
  
### Remarks  
 This class handles the same type of work item as the class used for the *Worker* template parameter. See [CNonStatelessWorker Overview](../../atl/reference/cnonstatelessworker-class.md) for details.  
  
##  <a name="cnonstatelessworker__terminate"></a>  CNonStatelessWorker::Terminate  
 Implementation of [WorkerArchetype::Terminate](http://msdn.microsoft.com/library/9bb841f2-fed6-4808-a2af-440b25ec91db).  
  
```
void Terminate(void* /* pvParam */) throw();
```  
  
### Remarks  
 This class does not do any cleanup in `Terminate`.  
  
## See Also  
 [CThreadPool Class](../../atl/reference/cthreadpool-class.md)   
 [Worker Archetype](../../atl/reference/worker-archetype.md)   
 [Classes](../../atl/reference/atl-classes.md)






