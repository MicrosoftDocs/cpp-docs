---
title: "accelerator_view Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# accelerator_view Class
Represents a virtual device abstraction on a C++ AMP data-parallel accelerator.  
  
## Syntax  
  
```  
class accelerator_view;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view::accelerator_view Constructor](../Topic/accelerator_view::accelerator_view%20Constructor.md)|Initializes a new instance of the `accelerator_view` class.|  
|[accelerator_view::~accelerator_view Destructor](../Topic/accelerator_view::~accelerator_view%20Destructor.md)|Destroys the `accelerator_view` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view::create_marker Method](reference/accelerator_view-class.md#accelerator_view__create_marker_method)|Returns a future to track the completion of all commands submitted so far to this `accelerator_view` object.|  
|[accelerator_view::flush Method](reference/accelerator_view-class.md#accelerator_view__flush_method)|Submits all pending commands queued to the `accelerator_view` object to the accelerator for execution.|  
|[accelerator_view::get_accelerator Method](reference/accelerator_view-class.md#accelerator_view__get_accelerator_method)|Returns the `accelerator` object for the `accelerator_view` object.|  
|[accelerator_view::get_is_auto_selection Method](reference/accelerator_view-class.md#accelerator_view__get_is_auto_selection_method)|Returns a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the `accelerator_view` object is passed to a [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each_function).|  
|[accelerator_view::get_is_debug Method](reference/accelerator_view-class.md#accelerator_view__get_is_debug_method)|Returns a Boolean value that indicates whether the `accelerator_view` object has the DEBUG layer enabled for extensive error reporting.|  
|[accelerator_view::get_queuing_mode Method](reference/accelerator_view-class.md#accelerator_view__get_queuing_mode_method)|Returns the queuing mode for the `accelerator_view` object.|  
|[accelerator_view::get_version Method](reference/accelerator_view-class.md#accelerator_view__get_version_method)|Returns the version of the `accelerator_view`.|  
|[accelerator_view::wait Method](reference/accelerator_view-class.md#accelerator_view__wait_method)|Waits for all commands submitted to the `accelerator_view` object to finish.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view::operator!= Operator](../Topic/accelerator_view::operator!=%20Operator.md)|Compares this `accelerator_view` object with another and returns `false` if they are the same; otherwise, returns `true`.|  
|[accelerator_view::operator= Operator](../Topic/accelerator_view::operator=%20Operator.md)|Copies the contents of the specified `accelerator_view` object into this one.|  
|[accelerator_view::operator== Operator](../Topic/accelerator_view::operator==%20Operator.md)|Compares this `accelerator_view` object with another and returns `true` if they are the same; otherwise, returns `false`.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view::accelerator Data Member](reference/accelerator_view-class.md#accelerator_view__accelerator_data_member)|Gets the `accelerator` object for the `accelerator_view` object.|  
|[accelerator_view::is_auto_selection Data Member](reference/accelerator_view-class.md#accelerator_view__is_auto_selection_data_member)|Gets a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the `accelerator_view` object is passed to a [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each_function).|  
|[accelerator_view::is_debug Data Member](reference/accelerator_view-class.md#accelerator_view__is_debug_data_member)|Gets a Boolean value that indicates whether the `accelerator_view` object has the DEBUG layer enabled for extensive error reporting.|  
|[accelerator_view::queuing_mode Data Member](reference/accelerator_view-class.md#accelerator_view__queuing_mode_data_member)|Gets the queuing mode for the `accelerator_view` object.|  
|[accelerator_view::version Data Member](reference/accelerator_view-class.md#accelerator_view__version_data_member)|Gets the version of the accelerator.|  
  
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
