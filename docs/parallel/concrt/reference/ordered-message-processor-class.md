---
title: "ordered_message_processor Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::ordered_message_processor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ordered_message_processor class"
ms.assetid: 787adfb7-7f79-4a70-864a-80e3b64088cd
caps.latest.revision: 17
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
# ordered_message_processor Class
An `ordered_message_processor` is a `message_processor` that allows message blocks to process messages in the order they were received.  
  
## Syntax  
  
```
template<class T>
class ordered_message_processor : public message_processor<T>;
```  
  
#### Parameters  
 `T`  
 The payload type of messages handled by the processor.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`type`|A type alias for `T`.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[ordered_message_processor::ordered_message_processor Constructor](#ctor)|Constructs an `ordered_message_processor` object.|  
|[ordered_message_processor::~ordered_message_processor Destructor](#dtor)|Destroys the `ordered_message_processor` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ordered_message_processor::async_send Method](#async_send)|Asynchronously queues up messages and starts a processing task, if this has not been done already. (Overrides [message_processor::async_send](message-processor-class.md#async_send).)|  
|[ordered_message_processor::initialize Method](#initialize)|Initializes the `ordered_message_processor` object with the appropriate callback function, scheduler and schedule group.|  
|[ordered_message_processor::initialize_batched_processing Method](#initialize_batched_processing)|Initialize batched message processing|  
|[ordered_message_processor::sync_send Method](#sync_send)|Synchronously queues up messages and starts a processing task, if this has not been done already. (Overrides [message_processor::sync_send](message-processor-class.md#sync_send).)|  
|[ordered_message_processor::wait Method](#wait)|A processor-specific spin wait used in destructors of message blocks to make sure that all asynchronous processing tasks have time to finish before destroying the block. (Overrides [message_processor::wait](message-processor-class.md#wait).)|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ordered_message_processor::process_incoming_message Method](#process_incoming_message)|The processing function that is called asynchronously. It dequeues messages and begins processing them. (Overrides [message_processor::process_incoming_message](message-processor-class.md#process_incoming_message).)|  
  
## Inheritance Hierarchy  
 [message_processor](message-processor-class.md)  
  
 `ordered_message_processor`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="async_send"></a>  ordered_message_processor::async_send Method  
 Asynchronously queues up messages and starts a processing task, if this has not been done already.  
  
```
virtual void async_send(_Inout_opt_ message<T>* _Msg);
```  
  
### Parameters  
 `_Msg`  
 A pointer to a message.  
  
##  <a name="initialize"></a>  ordered_message_processor::initialize Method  
 Initializes the `ordered_message_processor` object with the appropriate callback function, scheduler and schedule group.  
  
```
void initialize(
    _Inout_opt_ Scheduler* _PScheduler,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup,
    _Handler_method const& _Handler);
```  
  
### Parameters  
 `_PScheduler`  
 A pointer to the scheduler to be used for scheduling light-weight tasks.  
  
 `_PScheduleGroup`  
 A pointer to the schedule group to be used for scheduling light-weight tasks.  
  
 `_Handler`  
 The handler functor invoked during callback.  
  
##  <a name="initialize_batched_processing"></a>  ordered_message_processor::initialize_batched_processing Method  
 Initialize batched message processing  
  
```
virtual void initialize_batched_processing(
    _Handler_method const& _Processor,
    _Propagator_method const& _Propagator);
```  
  
### Parameters  
 `_Processor`  
 The processor functor invoked during callback.  
  
 `_Propagator`  
 The propagator functor invoked during callback.  
  
##  <a name="ctor"></a>  ordered_message_processor::ordered_message_processor Constructor  
 Constructs an `ordered_message_processor` object.  
  
```
ordered_message_processor();
```  
  
### Remarks  
 This `ordered_message_processor` will not schedule asynchronous or synchronous handlers until the `initialize` function is called.  
  
##  <a name="dtor"></a>  ordered_message_processor::~ordered_message_processor Destructor  
 Destroys the `ordered_message_processor` object.  
  
```
virtual ~ordered_message_processor();
```  
  
### Remarks  
 Waits for all outstanding asynchronous operations before destroying the processor.  
  
##  <a name="process_incoming_message"></a>  ordered_message_processor::process_incoming_message Method  
 The processing function that is called asynchronously. It dequeues messages and begins processing them.  
  
```
virtual void process_incoming_message();
```  
  
##  <a name="sync_send"></a>  ordered_message_processor::sync_send Method  
 Synchronously queues up messages and starts a processing task, if this has not been done already.  
  
```
virtual void sync_send(_Inout_opt_ message<T>* _Msg);
```  
  
### Parameters  
 `_Msg`  
 A pointer to a message.  
  
##  <a name="wait"></a>  ordered_message_processor::wait Method  
 A processor-specific spin wait used in destructors of message blocks to make sure that all asynchronous processing tasks have time to finish before destroying the block.  
  
```
virtual void wait();
```  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
