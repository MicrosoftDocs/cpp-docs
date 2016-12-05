---
title: "propagator_block Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::propagator_block"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "propagator_block class"
ms.assetid: 86aa75fd-eda5-42aa-aadf-25c0c1c9742d
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
# propagator_block Class
The `propagator_block` class is an abstract base class for message blocks that are both a source and target. It combines the functionality of both the `source_block` and `target_block` classes.  
  
## Syntax  
  
```
template<class _TargetLinkRegistry, class _SourceLinkRegistry, class _MessageProcessorType = ordered_message_processor<typename _TargetLinkRegistry::type::type>>
class propagator_block : public source_block<_TargetLinkRegistry,
    _MessageProcessorType>,
 public ITarget<typename _SourceLinkRegistry::type::source_type>;
```  
  
#### Parameters  
 `_TargetLinkRegistry`  
 The link registry to be used for holding the target links.  
  
 `_SourceLinkRegistry`  
 The link registry to be used for holding the source links.  
  
 `_MessageProcessorType`  
 The processor type for message processing.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`source_iterator`|The type of the iterator for the `source_link_manager` for this `propagator_block`.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[propagator_block::propagator_block Constructor](#ctor)|Constructs a `propagator_block` object.|  
|[propagator_block::~propagator_block Destructor](#dtor)|Destroys a `propagator_block` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[propagator_block::propagate Method](#propagate)|Asynchronously passes a message from a source block to this target block.|  
|[propagator_block::send Method](#send)|Synchronously initiates a message to this block. Called by an `ISource` block. When this function completes, the message will already have propagated into the block.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[propagator_block::decline_incoming_messages Method](#decline_incoming_messages)|Indicates to the block that new messages should be declined.|  
|[propagator_block::initialize_source_and_target Method](#initialize_source_and_target)|Initializes the base object. Specifically, the `message_processor` object needs to be initialized.|  
|[propagator_block::link_source Method](#link_source)|Links a specified source block to this `propagator_block` object.|  
|[propagator_block::process_input_messages Method](#process_input_messages)|Process input messages. This is only useful for propagator blocks, which derive from source_block (Overrides [source_block::process_input_messages](source-block-class.md#process_input_messages).)|  
|[propagator_block::propagate_message Method](#propagate_message)|When overridden in a derived class, this method asynchronously passes a message from an `ISource` block to this `propagator_block` object. It is invoked by the `propagate` method, when called by a source block.|  
|[propagator_block::register_filter Method](#register_filter)|Registers a filter method that will be invoked on every received message.|  
|[propagator_block::remove_network_links Method](#remove_network_links)|Removes all the source and target network links from this `propagator_block` object.|  
|[propagator_block::send_message Method](#send_message)|When overridden in a derived class, this method synchronously passes a message from an `ISource` block to this `propagator_block` object. It is invoked by the `send` method, when called by a source block.|  
|[propagator_block::unlink_source Method](#unlink_source)|Unlinks a specified source block from this `propagator_block` object.|  
|[propagator_block::unlink_sources Method](#unlink_sources)|Unlinks all source blocks from this `propagator_block` object. (Overrides [ITarget::unlink_sources](itarget-class.md#unlink_sources).)|  
  
## Remarks  
 To avoid multiple inheritance, the `propagator_block` class inherits from the `source_block` class and `ITarget` abstract class. Most of the functionality in the `target_block` class is replicated here.  
  
## Inheritance Hierarchy  
 [ISource](isource-class.md)  
  
 [ITarget](itarget-class.md)  
  
 [source_block](source-block-class.md)  
  
 `propagator_block`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="decline_incoming_messages"></a>  propagator_block::decline_incoming_messages Method  
 Indicates to the block that new messages should be declined.  
  
```
void decline_incoming_messages();
```  
  
### Remarks  
 This method is called by the destructor to ensure that new messages are declined while destruction is in progress.  
  
##  <a name="initialize_source_and_target"></a>  propagator_block::initialize_source_and_target Method  
 Initializes the base object. Specifically, the `message_processor` object needs to be initialized.  
  
```
void initialize_source_and_target(
    _Inout_opt_ Scheduler* _PScheduler = NULL,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup = NULL);
```  
  
### Parameters  
 `_PScheduler`  
 The scheduler to be used for scheduling tasks.  
  
 `_PScheduleGroup`  
 The schedule group to be used for scheduling tasks.  
  
##  <a name="link_source"></a>  propagator_block::link_source Method  
 Links a specified source block to this `propagator_block` object.  
  
```
virtual void link_source(_Inout_ ISource<_Source_type>* _PSource);
```  
  
### Parameters  
 `_PSource`  
 A pointer to the `ISource` block that is to be linked.  
  
##  <a name="process_input_messages"></a>  propagator_block::process_input_messages Method  
 Process input messages. This is only useful for propagator blocks, which derive from source_block  
  
```
virtual void process_input_messages(_Inout_ message<_Target_type>* _PMessage);
```  
  
### Parameters  
 `_PMessage`  
  
##  <a name="propagate"></a>  propagator_block::propagate Method  
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
 The `propagate` method is invoked on a target block by a linked source block. It queues up an asynchronous task to handle the message, if one is not already queued or executing.  
  
 The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if either the `_PMessage` or `_PSource` parameter is `NULL`.  
  
##  <a name="propagate_message"></a>  propagator_block::propagate_message Method  
 When overridden in a derived class, this method asynchronously passes a message from an `ISource` block to this `propagator_block` object. It is invoked by the `propagate` method, when called by a source block.  
  
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
  
##  <a name="ctor"></a>  propagator_block::propagator_block Constructor  
 Constructs a `propagator_block` object.  
  
```
propagator_block();
```  
  
##  <a name="dtor"></a>  propagator_block::~propagator_block Destructor  
 Destroys a `propagator_block` object.  
  
```
virtual ~propagator_block();
```  
  
##  <a name="register_filter"></a>  propagator_block::register_filter Method  
 Registers a filter method that will be invoked on every received message.  
  
```
void register_filter(filter_method const& _Filter);
```  
  
### Parameters  
 `_Filter`  
 The filter method.  
  
##  <a name="remove_network_links"></a>  propagator_block::remove_network_links Method  
 Removes all the source and target network links from this `propagator_block` object.  
  
```
void remove_network_links();
```  
  
##  <a name="send"></a>  propagator_block::send Method  
 Synchronously initiates a message to this block. Called by an `ISource` block. When this function completes, the message will already have propagated into the block.  
  
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
 This method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if either the `_PMessage` or `_PSource` parameter is `NULL`.  
  
##  <a name="send_message"></a>  propagator_block::send_message Method  
 When overridden in a derived class, this method synchronously passes a message from an `ISource` block to this `propagator_block` object. It is invoked by the `send` method, when called by a source block.  
  
```
virtual message_status send_message(
    _Inout_ message<_Source_type> *,
    _Inout_ ISource<_Source_type> *);
```  
  
### Return Value  
 A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.  
  
### Remarks  
 By default, this block returns `declined` unless overridden by a derived class.  
  
##  <a name="unlink_source"></a>  propagator_block::unlink_source Method  
 Unlinks a specified source block from this `propagator_block` object.  
  
```
virtual void unlink_source(_Inout_ ISource<_Source_type>* _PSource);
```  
  
### Parameters  
 `_PSource`  
 A pointer to the `ISource` block that is to be unlinked.  
  
##  <a name="unlink_sources"></a>  propagator_block::unlink_sources Method  
 Unlinks all source blocks from this `propagator_block` object.  
  
```
virtual void unlink_sources();
```  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [source_block Class](source-block-class.md)   
 [ITarget Class](itarget-class.md)
