---
title: "target_block Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::target_block"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "target_block class"
ms.assetid: 3ce181b4-b94a-4894-bf7b-64fc09821f9f
caps.latest.revision: 21
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
# target_block Class
The `target_block` class is an abstract base class that provides basic link management functionality and error checking for target only blocks.  
  
## Syntax  
  
```
template<class _SourceLinkRegistry, class _MessageProcessorType = ordered_message_processor<typename _SourceLinkRegistry::type::source_type>>
class target_block : public ITarget<typename _SourceLinkRegistry::type::source_type>;
```  
  
#### Parameters  
 `_SourceLinkRegistry`  
 The link registry to be used for holding the source links.  
  
 `_MessageProcessorType`  
 The processor type for message processing.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`source_iterator`|The type of the iterator for the `source_link_manager` for this `target_block` object.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[target_block::target_block Constructor](#ctor)|Constructs a `target_block` object.|  
|[target_block::~target_block Destructor](#dtor)|Destroys the `target_block` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[target_block::propagate Method](#propagate)|Asynchronously passes a message from a source block to this target block.|  
|[target_block::send Method](#send)|Synchronously passes a message from a source block to this target block.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[target_block::async_send Method](#async_send)|Asynchronously sends a message for processing.|  
|[target_block::decline_incoming_messages Method](#decline_incoming_messages)|Indicates to the block that new messages should be declined.|  
|[target_block::enable_batched_processing Method](#enable_batched_processing)|Enables batched processing for this block.|  
|[target_block::initialize_target Method](#initialize_target)|Initializes the base object. Specifically, the `message_processor` object needs to be initialized.|  
|[target_block::link_source Method](#link_source)|Links a specified source block to this `target_block` object.|  
|[target_block::process_input_messages Method](#process_input_messages)|Processes messages that are received as inputs.|  
|[target_block::process_message Method](#process_message)|When overridden in a derived class, processes a message that was accepted by this `target_block` object.|  
|[target_block::propagate_message Method](#propagate_message)|When overridden in a derived class, this method asynchronously passes a message from an `ISource` block to this `target_block` object. It is invoked by the `propagate` method, when called by a source block.|  
|[target_block::register_filter Method](#register_filter)|Registers a filter method that will be invoked on every message received.|  
|[target_block::remove_sources Method](#remove_sources)|Unlinks all sources after waiting for outstanding asynchronous send operations to complete.|  
|[target_block::send_message Method](#send_message)|When overridden in a derived class, this method synchronously passes a message from an `ISource` block to this `target_block` object. It is invoked by the `send` method, when called by a source block.|  
|[target_block::sync_send Method](#sync_send)|Synchronously send a message for processing.|  
|[target_block::unlink_source Method](#unlink_source)|Unlinks a specified source block from this `target_block` object.|  
|[target_block::unlink_sources Method](#unlink_sources)|Unlinks all source blocks from this `target_block` object. (Overrides [ITarget::unlink_sources](itarget-class.md#unlink_sources).)|  
|[target_block::wait_for_async_sends Method](#wait_for_async_sends)|Waits for all asynchronous propagations to complete.|  
  
## Inheritance Hierarchy  
 [ITarget](itarget-class.md)  
  
 `target_block`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="async_send"></a>  target_block::async_send Method  
 Asynchronously sends a message for processing.  
  
```
void async_send(_Inout_opt_ message<_Source_type>* _PMessage);
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the message being sent.  
  
##  <a name="decline_incoming_messages"></a>  target_block::decline_incoming_messages Method  
 Indicates to the block that new messages should be declined.  
  
```
void decline_incoming_messages();
```  
  
### Remarks  
 This method is called by the destructor to ensure that new messages are declined while destruction is in progress.  
  
##  <a name="enable_batched_processing"></a>  target_block::enable_batched_processing Method  
 Enables batched processing for this block.  
  
```
void enable_batched_processing();
```  
  
##  <a name="initialize_target"></a>  target_block::initialize_target Method  
 Initializes the base object. Specifically, the `message_processor` object needs to be initialized.  
  
```
void initialize_target(
    _Inout_opt_ Scheduler* _PScheduler = NULL,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup = NULL);
```  
  
### Parameters  
 `_PScheduler`  
 The scheduler to be used for scheduling tasks.  
  
 `_PScheduleGroup`  
 The schedule group to be used for scheduling tasks.  
  
##  <a name="link_source"></a>  target_block::link_source Method  
 Links a specified source block to this `target_block` object.  
  
```
virtual void link_source(_Inout_ ISource<_Source_type>* _PSource);
```  
  
### Parameters  
 `_PSource`  
 A pointer to the `ISource` block that is to be linked.  
  
### Remarks  
 This function should not be called directly on a `target_block` object. Blocks should be connected together using the `link_target` method on `ISource` blocks, which will invoke the `link_source` method on the corresponding target.  
  
##  <a name="process_input_messages"></a>  target_block::process_input_messages Method  
 Processes messages that are received as inputs.  
  
```
virtual void process_input_messages(_Inout_ message<_Source_type>* _PMessage);
```  
  
### Parameters  
 `_PMessage`  
  
##  <a name="process_message"></a>  target_block::process_message Method  
 When overridden in a derived class, processes a message that was accepted by this `target_block` object.  
  
```
virtual void process_message(message<_Source_type> *);
```  
  
##  <a name="propagate"></a>  target_block::propagate Method  
 Asynchronously passes a message from a source block to this target block.  
  
```
virtual message_status propagate(
    _Inout_opt_ message<_Source_type>* _PMessage,
    _Inout_opt_ ISource<_Source_type>* _PSource);
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the `message` object.  
  
 `_PSource`  
 A pointer to the source block offering the message.  
  
### Return Value  
 A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.  
  
### Remarks  
 The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if either the `_PMessage` or `_PSource` parameter is `NULL`.  
  
##  <a name="propagate_message"></a>  target_block::propagate_message Method  
 When overridden in a derived class, this method asynchronously passes a message from an `ISource` block to this `target_block` object. It is invoked by the `propagate` method, when called by a source block.  
  
```
virtual message_status propagate_message(
    _Inout_ message<_Source_type>* _PMessage,
    _Inout_ ISource<_Source_type>* _PSource) = 0;
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the `message` object.  
  
 `_PSource`  
 A pointer to the source block offering the message.  
  
### Return Value  
 A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.  
  
##  <a name="register_filter"></a>  target_block::register_filter Method  
 Registers a filter method that will be invoked on every message received.  
  
```
void register_filter(filter_method const& _Filter);
```  
  
### Parameters  
 `_Filter`  
 The filter method.  
  
##  <a name="remove_sources"></a>  target_block::remove_sources Method  
 Unlinks all sources after waiting for outstanding asynchronous send operations to complete.  
  
```
void remove_sources();
```  
  
### Remarks  
 All target blocks should call this routine to remove the sources in their destructor.  
  
##  <a name="send"></a>  target_block::send Method  
 Synchronously passes a message from a source block to this target block.  
  
```
virtual message_status send(
    _Inout_ message<_Source_type>* _PMessage,
    _Inout_ ISource<_Source_type>* _PSource);
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the `message` object.  
  
 `_PSource`  
 A pointer to the source block offering the message.  
  
### Return Value  
 A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.  
  
### Remarks  
 The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if either the `_PMessage` or `_PSource` parameter is `NULL`.  
  
 Using the `send` method outside of message initiation and to propagate messages within a network is dangerous and can lead to deadlock.  
  
 When `send` returns, the message has either already been accepted, and transferred into the target block, or it has been declined by the target.  
  
##  <a name="send_message"></a>  target_block::send_message Method  
 When overridden in a derived class, this method synchronously passes a message from an `ISource` block to this `target_block` object. It is invoked by the `send` method, when called by a source block.  
  
```
virtual message_status send_message(
    _Inout_ message<_Source_type> *,
    _Inout_ ISource<_Source_type> *);
```  
  
### Return Value  
 A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.  
  
### Remarks  
 By default, this block returns `declined` unless overridden by a derived class.  
  
##  <a name="sync_send"></a>  target_block::sync_send Method  
 Synchronously send a message for processing.  
  
```
void sync_send(_Inout_opt_ message<_Source_type>* _PMessage);
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the message being sent.  
  
##  <a name="ctor"></a>  target_block::target_block Constructor  
 Constructs a `target_block` object.  
  
```
target_block();
```  
  
##  <a name="dtor"></a>  target_block::~target_block Destructor  
 Destroys the `target_block` object.  
  
```
virtual ~target_block();
```  
  
##  <a name="unlink_source"></a>  target_block::unlink_source Method  
 Unlinks a specified source block from this `target_block` object.  
  
```
virtual void unlink_source(_Inout_ ISource<_Source_type>* _PSource);
```  
  
### Parameters  
 `_PSource`  
 A pointer to the `ISource` block that is to be unlinked.  
  
##  <a name="unlink_sources"></a>  target_block::unlink_sources Method  
 Unlinks all source blocks from this `target_block` object.  
  
```
virtual void unlink_sources();
```  
  
##  <a name="wait_for_async_sends"></a>  target_block::wait_for_async_sends Method  
 Waits for all asynchronous propagations to complete.  
  
```
void wait_for_async_sends();
```  
  
### Remarks  
 This method is used by message block destructors to ensure all asynchronous operations have had time to finish before destroying the block.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [ITarget Class](itarget-class.md)
