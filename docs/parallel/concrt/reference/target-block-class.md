---
description: "Learn more about: target_block Class"
title: "target_block Class"
ms.date: "11/04/2016"
f1_keywords: ["target_block", "AGENTS/concurrency::target_block", "AGENTS/concurrency::target_block::target_block", "AGENTS/concurrency::target_block::propagate", "AGENTS/concurrency::target_block::send", "AGENTS/concurrency::target_block::async_send", "AGENTS/concurrency::target_block::decline_incoming_messages", "AGENTS/concurrency::target_block::enable_batched_processing", "AGENTS/concurrency::target_block::initialize_target", "AGENTS/concurrency::target_block::link_source", "AGENTS/concurrency::target_block::process_input_messages", "AGENTS/concurrency::target_block::process_message", "AGENTS/concurrency::target_block::propagate_message", "AGENTS/concurrency::target_block::register_filter", "AGENTS/concurrency::target_block::remove_sources", "AGENTS/concurrency::target_block::send_message", "AGENTS/concurrency::target_block::sync_send", "AGENTS/concurrency::target_block::unlink_source", "AGENTS/concurrency::target_block::unlink_sources", "AGENTS/concurrency::target_block::wait_for_async_sends"]
helpviewer_keywords: ["target_block class"]
ms.assetid: 3ce181b4-b94a-4894-bf7b-64fc09821f9f
---
# target_block Class

The `target_block` class is an abstract base class that provides basic link management functionality and error checking for target only blocks.

## Syntax

```cpp
template<class _SourceLinkRegistry, class _MessageProcessorType = ordered_message_processor<typename _SourceLinkRegistry::type::source_type>>
class target_block : public ITarget<typename _SourceLinkRegistry::type::source_type>;
```

### Parameters

*_SourceLinkRegistry*<br/>
The link registry to be used for holding the source links.

*_MessageProcessorType*<br/>
The processor type for message processing.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`source_iterator`|The type of the iterator for the `source_link_manager` for this `target_block` object.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[target_block](#ctor)|Constructs a `target_block` object.|
|[~target_block Destructor](#dtor)|Destroys the `target_block` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[propagate](#propagate)|Asynchronously passes a message from a source block to this target block.|
|[send](#send)|Synchronously passes a message from a source block to this target block.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[async_send](#async_send)|Asynchronously sends a message for processing.|
|[decline_incoming_messages](#decline_incoming_messages)|Indicates to the block that new messages should be declined.|
|[enable_batched_processing](#enable_batched_processing)|Enables batched processing for this block.|
|[initialize_target](#initialize_target)|Initializes the base object. Specifically, the `message_processor` object needs to be initialized.|
|[link_source](#link_source)|Links a specified source block to this `target_block` object.|
|[process_input_messages](#process_input_messages)|Processes messages that are received as inputs.|
|[process_message](#process_message)|When overridden in a derived class, processes a message that was accepted by this `target_block` object.|
|[propagate_message](#propagate_message)|When overridden in a derived class, this method asynchronously passes a message from an `ISource` block to this `target_block` object. It is invoked by the `propagate` method, when called by a source block.|
|[register_filter](#register_filter)|Registers a filter method that will be invoked on every message received.|
|[remove_sources](#remove_sources)|Unlinks all sources after waiting for outstanding asynchronous send operations to complete.|
|[send_message](#send_message)|When overridden in a derived class, this method synchronously passes a message from an `ISource` block to this `target_block` object. It is invoked by the `send` method, when called by a source block.|
|[sync_send](#sync_send)|Synchronously send a message for processing.|
|[unlink_source](#unlink_source)|Unlinks a specified source block from this `target_block` object.|
|[unlink_sources](#unlink_sources)|Unlinks all source blocks from this `target_block` object. (Overrides [ITarget::unlink_sources](itarget-class.md#unlink_sources).)|
|[wait_for_async_sends](#wait_for_async_sends)|Waits for all asynchronous propagations to complete.|

## Inheritance Hierarchy

[ITarget](itarget-class.md)

`target_block`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="async_send"></a> async_send

Asynchronously sends a message for processing.

```cpp
void async_send(_Inout_opt_ message<_Source_type>* _PMessage);
```

### Parameters

*_PMessage*<br/>
A pointer to the message being sent.

## <a name="decline_incoming_messages"></a> decline_incoming_messages

Indicates to the block that new messages should be declined.

```cpp
void decline_incoming_messages();
```

### Remarks

This method is called by the destructor to ensure that new messages are declined while destruction is in progress.

## <a name="enable_batched_processing"></a> enable_batched_processing

Enables batched processing for this block.

```cpp
void enable_batched_processing();
```

## <a name="initialize_target"></a> initialize_target

Initializes the base object. Specifically, the `message_processor` object needs to be initialized.

```cpp
void initialize_target(
    _Inout_opt_ Scheduler* _PScheduler = NULL,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup = NULL);
```

### Parameters

*_PScheduler*<br/>
The scheduler to be used for scheduling tasks.

*_PScheduleGroup*<br/>
The schedule group to be used for scheduling tasks.

## <a name="link_source"></a> link_source

Links a specified source block to this `target_block` object.

```cpp
virtual void link_source(_Inout_ ISource<_Source_type>* _PSource);
```

### Parameters

*_PSource*<br/>
A pointer to the `ISource` block that is to be linked.

### Remarks

This function should not be called directly on a `target_block` object. Blocks should be connected together using the `link_target` method on `ISource` blocks, which will invoke the `link_source` method on the corresponding target.

## <a name="process_input_messages"></a> process_input_messages

Processes messages that are received as inputs.

```cpp
virtual void process_input_messages(_Inout_ message<_Source_type>* _PMessage);
```

### Parameters

*_PMessage*<br/>
A pointer to the message that is to be processed.

## <a name="process_message"></a> process_message

When overridden in a derived class, processes a message that was accepted by this `target_block` object.

```cpp
virtual void process_message(message<_Source_type> *);
```

## <a name="propagate"></a> propagate

Asynchronously passes a message from a source block to this target block.

```cpp
virtual message_status propagate(
    _Inout_opt_ message<_Source_type>* _PMessage,
    _Inout_opt_ ISource<_Source_type>* _PSource);
```

### Parameters

*_PMessage*<br/>
A pointer to the `message` object.

*_PSource*<br/>
A pointer to the source block offering the message.

### Return Value

A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.

### Remarks

The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if either the `_PMessage` or `_PSource` parameter is `NULL`.

## <a name="propagate_message"></a> propagate_message

When overridden in a derived class, this method asynchronously passes a message from an `ISource` block to this `target_block` object. It is invoked by the `propagate` method, when called by a source block.

```cpp
virtual message_status propagate_message(
    _Inout_ message<_Source_type>* _PMessage,
    _Inout_ ISource<_Source_type>* _PSource) = 0;
```

### Parameters

*_PMessage*<br/>
A pointer to the `message` object.

*_PSource*<br/>
A pointer to the source block offering the message.

### Return Value

A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.

## <a name="register_filter"></a> register_filter

Registers a filter method that will be invoked on every message received.

```cpp
void register_filter(filter_method const& _Filter);
```

### Parameters

*_Filter*<br/>
The filter method.

## <a name="remove_sources"></a> remove_sources

Unlinks all sources after waiting for outstanding asynchronous send operations to complete.

```cpp
void remove_sources();
```

### Remarks

All target blocks should call this routine to remove the sources in their destructor.

## <a name="send"></a> send

Synchronously passes a message from a source block to this target block.

```cpp
virtual message_status send(
    _Inout_ message<_Source_type>* _PMessage,
    _Inout_ ISource<_Source_type>* _PSource);
```

### Parameters

*_PMessage*<br/>
A pointer to the `message` object.

*_PSource*<br/>
A pointer to the source block offering the message.

### Return Value

A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.

### Remarks

The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if either the `_PMessage` or `_PSource` parameter is `NULL`.

Using the `send` method outside of message initiation and to propagate messages within a network is dangerous and can lead to deadlock.

When `send` returns, the message has either already been accepted, and transferred into the target block, or it has been declined by the target.

## <a name="send_message"></a> send_message

When overridden in a derived class, this method synchronously passes a message from an `ISource` block to this `target_block` object. It is invoked by the `send` method, when called by a source block.

```cpp
virtual message_status send_message(
    _Inout_ message<_Source_type> *,
    _Inout_ ISource<_Source_type> *);
```

### Return Value

A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.

### Remarks

By default, this block returns `declined` unless overridden by a derived class.

## <a name="sync_send"></a> sync_send

Synchronously send a message for processing.

```cpp
void sync_send(_Inout_opt_ message<_Source_type>* _PMessage);
```

### Parameters

*_PMessage*<br/>
A pointer to the message being sent.

## <a name="ctor"></a> target_block

Constructs a `target_block` object.

```cpp
target_block();
```

## <a name="dtor"></a> ~target_block

Destroys the `target_block` object.

```cpp
virtual ~target_block();
```

## <a name="unlink_source"></a> unlink_source

Unlinks a specified source block from this `target_block` object.

```cpp
virtual void unlink_source(_Inout_ ISource<_Source_type>* _PSource);
```

### Parameters

*_PSource*<br/>
A pointer to the `ISource` block that is to be unlinked.

## <a name="unlink_sources"></a> unlink_sources

Unlinks all source blocks from this `target_block` object.

```cpp
virtual void unlink_sources();
```

## <a name="wait_for_async_sends"></a> wait_for_async_sends

Waits for all asynchronous propagations to complete.

```cpp
void wait_for_async_sends();
```

### Remarks

This method is used by message block destructors to ensure all asynchronous operations have had time to finish before destroying the block.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[ITarget Class](itarget-class.md)
