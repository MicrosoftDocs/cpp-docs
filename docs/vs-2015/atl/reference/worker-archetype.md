---
title: "Worker Archetype | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Worker archetype"
ms.assetid: 834145cd-09d3-4149-bc99-620e1871cbfb
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Worker Archetype
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Worker Archetype](https://docs.microsoft.com/cpp/atl/reference/worker-archetype).  
  
  
Classes that conform to the *worker* archetype provide the code to process work items queued on a thread pool.  
  
 **Implementation**  
  
 To implement a class conforming to this archetype, the class must provide the following features:  
  
|Method|Description|  
|------------|-----------------|  
|[Initialize](#workerarchetype__initialize)|Called to initialize the worker object before any requests are passed to [Execute](#workerarchetype_execute).|  
|[Execute](#workerarchetype__execute)|Called to process a work item.|  
|[Terminate](#workerarchetype__terminate)|Called to uninitialize the worker object after all requests have been passed to [Execute](#workerarchetype_execute).|  
  
|Typedef|Description|  
|-------------|-----------------|  
|[RequestType](#workerarchetype__requesttype)|A typedef for the type of work item that can be processed by the worker class.|  
  
 A typical *worker* class looks like this:  
  
 [!code-cpp[NVC_ATL_Utilities#137](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Utilities/Cpp/NVC_ATL_Utilities.cpp#137)]  
  
 **Existing Implementations**  
  
 These classes conform to this archetype:  
  
|Class|Description|  
|-----------|-----------------|  
|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|Receives requests from the thread pool and passes them on to a worker object that is created and destroyed for each request.|  
  
 **Use**  
  
 These template parameters expect the class to conform to this archetype:  
  
|Parameter name|Used by|  
|--------------------|-------------|  
|*Worker*|[CThreadPool](../../atl/reference/cthreadpool-class.md)|  
|*Worker*|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|  
  
### Requirements  
 **Header:** atlutil.h  
  
## <a name="workerarchetype__execute"></a>WorkerArchetype::Execute
Called to process a work item.  
  
  
  
```  
void Execute(
    RequestType request,  
    void* pvWorkerParam,  
    OVERLAPPED* pOverlapped);
```  
  
#### Parameters  
 `request`  
 The work item to be processed. The work item is of the same type as `RequestType`.  
  
 `pvWorkerParam`  
 A custom parameter understood by the worker class. Also passed to `WorkerArchetype::Initialize` and `Terminate`.  
  
 `pOverlapped`  
 A pointer to the [OVERLAPPED](http://msdn.microsoft.com/library/windows/desktop/ms684342) structure used to create the queue on which work items were queued.  
  
## <a name="workerarchetype__initialize"></a> WorkerArchetype::Initialize
Called to initialize the worker object before any requests are passed to `WorkerArchetype::Execute`.  
```
BOOL Initialize(void* pvParam) throw();
```  
  
#### Parameters  
 `pvParam`  
 A custom parameter understood by the worker class. Also passed to `WorkerArchetype::Terminate` and `WorkerArchetype::Execute`.  
  
### Return Value  
 Return **TRUE** on success, **FALSE** on failure.  
  
## <a name="workerarchetype__requesttype"></a> WorkerArchetype::RequestType
A typedef for the type of work item that can be processed by the worker class.  
  
```  
typedef MyRequestType RequestType;    
```  
  
### Remarks  
 This type must be used as the first parameter of `WorkerArchetype::Execute` and must be capable of being cast to and from a ULONG_PTR.  
  
## <a name="workerarchetype__terminate"></a> WorkerArchetype::Terminate
Called to uninitialize the worker object after all requests have been passed to `WorkerArchetype::Execute`).  
    
``` 
void Terminate(void* pvParam) throw();
```  
  
#### Parameters  
 `pvParam`  
 A custom parameter understood by the worker class. Also passed to `WorkerArchetype::Initialize` and `WorkerArchetype::Execute`.  
  
## See Also  
 [Archetypes](../../atl/reference/atl-archetypes.md)   
 [Concepts](../../atl/active-template-library-atl-concepts.md)   
 [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)









