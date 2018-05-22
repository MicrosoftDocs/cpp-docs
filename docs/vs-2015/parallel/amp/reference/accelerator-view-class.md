---
title: "accelerator_view Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::accelerator_view"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "accelerator_view class"
ms.assetid: 9f298c21-bf62-46e0-88b8-01c5c78ef144
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# accelerator_view Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

Represents a virtual device abstraction on a C++ AMP data-parallel accelerator.  
  
## Syntax  
  
```  
class accelerator_view;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view::accelerator_view Constructor](http://msdn.microsoft.com/library/22342bbd-02db-4337-b88c-3d74792811ff)|Initializes a new instance of the `accelerator_view` class.|  
|[accelerator_view::~accelerator_view Destructor](http://msdn.microsoft.com/library/c4a0056d-3c25-485b-8e0a-5a3fb5d747e3)|Destroys the `accelerator_view` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view::create_marker Method](http://msdn.microsoft.com/library/6a5fc539-b5a4-4ddf-8201-a5fa633385ee)|Returns a future to track the completion of all commands submitted so far to this `accelerator_view` object.|  
|[accelerator_view::flush Method](http://msdn.microsoft.com/library/914020f3-c6f4-47ec-8826-74d580807145)|Submits all pending commands queued to the `accelerator_view` object to the accelerator for execution.|  
|[accelerator_view::get_accelerator Method](http://msdn.microsoft.com/library/59af4efb-18f0-47f6-a1e9-a3a6933cdc26)|Returns the `accelerator` object for the `accelerator_view` object.|  
|[accelerator_view::get_is_auto_selection Method](http://msdn.microsoft.com/library/6389fb49-122d-4bbc-b5cb-b792a571ff4e)|Returns a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the `accelerator_view` object is passed to a [parallel_for_each](http://msdn.microsoft.com/library/449013a2-5f16-4280-ac1a-0d850f7d5160).|  
|[accelerator_view::get_is_debug Method](http://msdn.microsoft.com/library/3de75c76-715b-44c2-a8b0-0b576e4722a4)|Returns a Boolean value that indicates whether the `accelerator_view` object has the DEBUG layer enabled for extensive error reporting.|  
|[accelerator_view::get_queuing_mode Method](http://msdn.microsoft.com/library/6f0b7fc3-157d-4e3a-a6a5-c4f61ccd4299)|Returns the queuing mode for the `accelerator_view` object.|  
|[accelerator_view::get_version Method](http://msdn.microsoft.com/library/c51826b5-09fd-403e-8e6e-e514a0b03772)|Returns the version of the `accelerator_view`.|  
|[accelerator_view::wait Method](http://msdn.microsoft.com/library/c34ac1b3-e5bf-4a4e-86a3-420d23f0e2e9)|Waits for all commands submitted to the `accelerator_view` object to finish.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view::operator!= Operator](http://msdn.microsoft.com/library/e27cc235-d333-453c-b5d6-2eacb6c9fb9d)|Compares this `accelerator_view` object with another and returns `false` if they are the same; otherwise, returns `true`.|  
|[accelerator_view::operator= Operator](http://msdn.microsoft.com/library/ac4aa0a2-6da9-4aea-a2e0-06b81abb81ab)|Copies the contents of the specified `accelerator_view` object into this one.|  
|[accelerator_view::operator== Operator](http://msdn.microsoft.com/library/bd8db2fd-1c44-4e9a-ae1b-1995e915b142)|Compares this `accelerator_view` object with another and returns `true` if they are the same; otherwise, returns `false`.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view::accelerator Data Member](http://msdn.microsoft.com/library/1772c499-7fc0-4a14-9220-3726e17cc91f)|Gets the `accelerator` object for the `accelerator_view` object.|  
|[accelerator_view::is_auto_selection Data Member](http://msdn.microsoft.com/library/aeccabce-3d77-4e19-9334-eb881acf073f)|Gets a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the `accelerator_view` object is passed to a [parallel_for_each](http://msdn.microsoft.com/library/449013a2-5f16-4280-ac1a-0d850f7d5160).|  
|[accelerator_view::is_debug Data Member](http://msdn.microsoft.com/library/a6340f3b-48bd-4a95-9e5e-bd3780132da7)|Gets a Boolean value that indicates whether the `accelerator_view` object has the DEBUG layer enabled for extensive error reporting.|  
|[accelerator_view::queuing_mode Data Member](http://msdn.microsoft.com/library/1bde0543-f974-4a9c-8457-52a28014683b)|Gets the queuing mode for the `accelerator_view` object.|  
|[accelerator_view::version Data Member](http://msdn.microsoft.com/library/d2f8717b-1dca-4157-a061-f559166cbee1)|Gets the version of the accelerator.|  
  
## Inheritance Hierarchy  
 `accelerator_view`  
  
## Remarks  
 An `accelerator_view` object represents a logical, isolated view of an accelerator. A single physical compute device can have many logical, isolated `accelerator_view` objects. Each accelerator has a default `accelerator_view` object. Additional `accelerator_view` objects can be created.  
  
 Physical devices can be shared among many client threads. Client threads can cooperatively use the same `accelerator_view` object of an accelerator, or each client can communicate with a compute device via an independent `accelerator_view` object for isolation from other client threads.  
  
 An `accelerator_view` object can have one of two [queuing_mode Enumeration](../../../parallel/amp/reference/queuing-mode-enumeration.md) states. If the queuing mode is `immediate`, commands like `copy` and `parallel_for_each` are sent to the corresponding accelerator device as soon as they return to the caller. If the queuing mode is `deferred`, such commands are queued up on a command queue that corresponds to the `accelerator_view` object. Commands are not actually sent to the device until `flush()` is called.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
