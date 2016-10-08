---
title: "Worker Archetype"
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
ms.topic: reference
ms.assetid: 834145cd-09d3-4149-bc99-620e1871cbfb
caps.latest.revision: 11
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
# Worker Archetype
Classes that conform to the *worker* archetype provide the code to process work items queued on a thread pool.  
  
 **Implementation**  
  
 To implement a class conforming to this archetype, the class must provide the following features:  
  
|Method|Description|  
|------------|-----------------|  
|[Initialize](../VS_visualcpp/WorkerArchetype--Initialize.md)|Called to initialize the worker object before any requests are passed to [Execute](../VS_visualcpp/WorkerArchetype--Execute.md).|  
|[Execute](../VS_visualcpp/WorkerArchetype--Execute.md)|Called to process a work item.|  
|[Terminate](../VS_visualcpp/WorkerArchetype--Terminate.md)|Called to uninitialize the worker object after all requests have been passed to [Execute](../VS_visualcpp/WorkerArchetype--Execute.md).|  
  
|Typedef|Description|  
|-------------|-----------------|  
|[RequestType](../VS_visualcpp/WorkerArchetype--RequestType.md)|A typedef for the type of work item that can be processed by the worker class.|  
  
 A typical *worker* class looks like this:  
  
 [!CODE [NVC_ATL_Utilities#137](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Utilities#137)]  
  
 **Existing Implementations**  
  
 These classes conform to this archetype:  
  
|Class|Description|  
|-----------|-----------------|  
|[CNonStatelessWorker](../VS_visualcpp/CNonStatelessWorker-Class.md)|Receives requests from the thread pool and passes them on to a worker object that is created and destroyed for each request.|  
  
 **Use**  
  
 These template parameters expect the class to conform to this archetype:  
  
|Parameter name|Used by|  
|--------------------|-------------|  
|*Worker*|[CThreadPool](../VS_visualcpp/CThreadPool-Class.md)|  
|*Worker*|[CNonStatelessWorker](../VS_visualcpp/CNonStatelessWorker-Class.md)|  
  
## Requirements  
 **Header:** atlutil.h  
  
## See Also  
 [Archetypes](../VS_visualcpp/ATL-Archetypes.md)   
 [Concepts](../VS_visualcpp/Active-Template-Library--ATL--Concepts.md)   
 [ATL COM Desktop Components](../VS_visualcpp/ATL-COM-Desktop-Components.md)