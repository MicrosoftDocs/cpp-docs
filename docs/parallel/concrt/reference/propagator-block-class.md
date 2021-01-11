---
description: "Learn more about: propagator_block Class"
title: "propagator_block Class"
ms.date: "11/04/2016"
f1_keywords: ["propagator_block", "AGENTS/concurrency::propagator_block", "AGENTS/concurrency::propagator_block::propagator_block", "AGENTS/concurrency::propagator_block::propagate", "AGENTS/concurrency::propagator_block::send", "AGENTS/concurrency::propagator_block::decline_incoming_messages", "AGENTS/concurrency::propagator_block::initialize_source_and_target", "AGENTS/concurrency::propagator_block::link_source", "AGENTS/concurrency::propagator_block::process_input_messages", "AGENTS/concurrency::propagator_block::propagate_message", "AGENTS/concurrency::propagator_block::register_filter", "AGENTS/concurrency::propagator_block::remove_network_links", "AGENTS/concurrency::propagator_block::send_message", "AGENTS/concurrency::propagator_block::unlink_source", "AGENTS/concurrency::propagator_block::unlink_sources"]
helpviewer_keywords: ["propagator_block class"]
ms.assetid: 86aa75fd-eda5-42aa-aadf-25c0c1c9742d
---
# propagator_block Class

The `propagator_block` class is an abstract base class for message blocks that are both a source and target. It combines the functionality of both the `source_block` and `target_block` classes.

## Syntax

```cpp
template<class _TargetLinkRegistry, class _SourceLinkRegistry, class _MessageProcessorType = ordered_message_processor<typename _TargetLinkRegistry::type::type>>
class propagator_block : public source_block<_TargetLinkRegistry,
    _MessageProcessorType>,
public ITarget<typename _SourceLinkRegistry::type::source_type>;
```

### Parameters

*_TargetLinkRegistry*<br/>
The link registry to be used for holding the target links.

*_SourceLinkRegistry*<br/>
The link registry to be used for holding the source links.

*_MessageProcessorType*<br/>
The processor type for message processing.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`source_iterator`|The type of the iterator for the `source_link_manager` for this `propagator_block`.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[propagator_block](#ctor)|Constructs a `propagator_block` object.|
|[~propagator_block Destructor](#dtor)|Destroys a `propagator_block` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[propagate](#propagate)|Asynchronously passes a message from a source block to this target block.|
|[send](#send)|Synchronously initiates a message to this block. Called by an `ISource` block. When this function completes, the message will already have propagated into the block.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[decline_incoming_messages](#decline_incoming_messages)|Indicates to the block that new messages should be declined.|
|[initialize_source_and_target](#initialize_source_and_target)|Initializes the base object. Specifically, the `message_processor` object needs to be initialized.|
|[link_source](#link_source)|Links a specified source block to this `propagator_block` object.|
|[process_input_messages](#process_input_messages)|Process input messages. This is only useful for propagator blocks, which derive from source_block (Overrides [source_block::process_input_messages](source-block-class.md#process_input_messages).)|
|[propagate_message](#propagate_message)|When overridden in a derived class, this method asynchronously passes a message from an `ISource` block to this `propagator_block` object. It is invoked by the `propagate` method, when called by a source block.|
|[register_filter](#register_filter)|Registers a filter method that will be invoked on every received message.|
|[remove_network_links](#remove_network_links)|Removes all the source and target network links from this `propagator_block` object.|
|[send_message](#send_message)|When overridden in a derived class, this method synchronously passes a message from an `ISource` block to this `propagator_block` object. It is invoked by the `send` method, when called by a source block.|
|[unlink_source](#unlink_source)|Unlinks a specified source block from this `propagator_block` object.|
|[unlink_sources](#unlink_sources)|Unlinks all source blocks from this `propagator_block` object. (Overrides [ITarget::unlink_sources](itarget-class.md#unlink_sources).)|

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

## <a name="decline_incoming_messages"></a> decline_incoming_messages

Indicates to the block that new messages should be declined.

```cpp
void decline_incoming_messages();
```

### Remarks

This method is called by the destructor to ensure that new messages are declined while destruction is in progress.

## <a name="initialize_source_and_target"></a> initialize_source_and_target

Initializes the base object. Specifically, the `message_processor` object needs to be initialized.

```cpp
void initialize_source_and_target(
    _Inout_opt_ Scheduler* _PScheduler = NULL,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup = NULL);
```

### Parameters

*_PScheduler*<br/>
The scheduler to be used for scheduling tasks.

*_PScheduleGroup*<br/>
The schedule group to be used for scheduling tasks.

## <a name="link_source"></a> link_source

Links a specified source block to this `propagator_block` object.

```cpp
virtual void link_source(_Inout_ ISource<_Source_type>* _PSource);
```

### Parameters

*_PSource*<br/>
A pointer to the `ISource` block that is to be linked.

## <a name="process_input_messages"></a> process_input_messages

Process input messages. This is only useful for propagator blocks, which derive from source_block

```cpp
virtual void process_input_messages(_Inout_ message<_Target_type>* _PMessage);
```

### Parameters

*_PMessage*<br/>
A pointer to the message that is to be processed.

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

The `propagate` method is invoked on a target block by a linked source block. It queues up an asynchronous task to handle the message, if one is not already queued or executing.

The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if either the `_PMessage` or `_PSource` parameter is `NULL`.

## <a name="propagate_message"></a> propagate_message

When overridden in a derived class, this method asynchronously passes a message from an `ISource` block to this `propagator_block` object. It is invoked by the `propagate` method, when called by a source block.

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

## <a name="ctor"></a> propagator_block

Constructs a `propagator_block` object.

```cpp
propagator_block();
```

## <a name="dtor"></a> ~propagator_block

Destroys a `propagator_block` object.

```cpp
virtual ~propagator_block();
```

## <a name="register_filter"></a> register_filter

Registers a filter method that will be invoked on every received message.

```cpp
void register_filter(filter_method const& _Filter);
```

### Parameters

*_Filter*<br/>
The filter method.

## <a name="remove_network_links"></a> remove_network_links

Removes all the source and target network links from this `propagator_block` object.

```cpp
void remove_network_links();
```

## <a name="send"></a> send

Synchronously initiates a message to this block. Called by an `ISource` block. When this function completes, the message will already have propagated into the block.

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

This method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if either the `_PMessage` or `_PSource` parameter is `NULL`.

## <a name="send_message"></a> send_message

When overridden in a derived class, this method synchronously passes a message from an `ISource` block to this `propagator_block` object. It is invoked by the `send` method, when called by a source block.

```cpp
virtual message_status send_message(
    _Inout_ message<_Source_type> *,
    _Inout_ ISource<_Source_type> *);
```

### Return Value

A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.

### Remarks

By default, this block returns `declined` unless overridden by a derived class.

## <a name="unlink_source"></a> unlink_source

Unlinks a specified source block from this `propagator_block` object.

```cpp
virtual void unlink_source(_Inout_ ISource<_Source_type>* _PSource);
```

### Parameters

*_PSource*<br/>
A pointer to the `ISource` block that is to be unlinked.

## <a name="unlink_sources"></a> unlink_sources

Unlinks all source blocks from this `propagator_block` object.

```cpp
virtual void unlink_sources();
```

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[source_block Class](source-block-class.md)<br/>
[ITarget Class](itarget-class.md)
