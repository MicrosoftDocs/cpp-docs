---
description: "Learn more about: unbounded_buffer Class"
title: "unbounded_buffer Class"
ms.date: "11/04/2016"
f1_keywords: ["unbounded_buffer", "AGENTS/concurrency::unbounded_buffer", "AGENTS/concurrency::unbounded_buffer::unbounded_buffer", "AGENTS/concurrency::unbounded_buffer::dequeue", "AGENTS/concurrency::unbounded_buffer::enqueue", "AGENTS/concurrency::unbounded_buffer::accept_message", "AGENTS/concurrency::unbounded_buffer::consume_message", "AGENTS/concurrency::unbounded_buffer::link_target_notification", "AGENTS/concurrency::unbounded_buffer::process_input_messages", "AGENTS/concurrency::unbounded_buffer::propagate_message", "AGENTS/concurrency::unbounded_buffer::propagate_output_messages", "AGENTS/concurrency::unbounded_buffer::release_message", "AGENTS/concurrency::unbounded_buffer::reserve_message", "AGENTS/concurrency::unbounded_buffer::resume_propagation", "AGENTS/concurrency::unbounded_buffer::send_message", "AGENTS/concurrency::unbounded_buffer::supports_anonymous_source"]
ms.assetid: 6b1a939a-1819-4385-b1d8-708f83d4ec47
---
# unbounded_buffer Class

An `unbounded_buffer` messaging block is a multi-target, multi-source, ordered `propagator_block` capable of storing an unbounded number of messages.

## Syntax

```cpp
template<
   class             _Type
>
class unbounded_buffer : public propagator_block<multi_link_registry<ITarget<            _Type>>, multi_link_registry<ISource<            _Type>>>;
```

### Parameters

*_Type*<br/>
The payload type of the messages stored and propagated by the buffer.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[unbounded_buffer](#ctor)|Overloaded. Constructs an `unbounded_buffer` messaging block.|
|[~unbounded_buffer Destructor](#dtor)|Destroys the `unbounded_buffer` messaging block.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[dequeue](#dequeue)|Removes an item from the `unbounded_buffer` messaging block.|
|[enqueue](#enqueue)|Adds an item to the `unbounded_buffer` messaging block.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[accept_message](#accept_message)|Accepts a message that was offered by this `unbounded_buffer` messaging block, transferring ownership to the caller.|
|[consume_message](#consume_message)|Consumes a message previously offered by the `unbounded_buffer` messaging block and reserved by the target, transferring ownership to the caller.|
|[link_target_notification](#link_target_notification)|A callback that notifies that a new target has been linked to this `unbounded_buffer` messaging block.|
|[process_input_messages](#process_input_messages)|Places the `message` `_PMessage` in this `unbounded_buffer` messaging block and tries to offer it to all of the linked targets.|
|[propagate_message](#propagate_message)|Asynchronously passes a message from an `ISource` block to this `unbounded_buffer` messaging block. It is invoked by the `propagate` method, when called by a source block.|
|[propagate_output_messages](#propagate_output_messages)|Places the `message` `_PMessage` in this `unbounded_buffer` messaging block and tries to offer it to all of the linked targets. (Overrides [source_block::propagate_output_messages](source-block-class.md#propagate_output_messages).)|
|[release_message](#release_message)|Releases a previous message reservation. (Overrides [source_block::release_message](source-block-class.md#release_message).)|
|[reserve_message](#reserve_message)|Reserves a message previously offered by this `unbounded_buffer` messaging block. (Overrides [source_block::reserve_message](source-block-class.md#reserve_message).)|
|[resume_propagation](#resume_propagation)|Resumes propagation after a reservation has been released. (Overrides [source_block::resume_propagation](source-block-class.md#resume_propagation).)|
|[send_message](#send_message)|Synchronously passes a message from an `ISource` block to this `unbounded_buffer` messaging block. It is invoked by the `send` method, when called by a source block.|
|[supports_anonymous_source](#supports_anonymous_source)|Overrides the `supports_anonymous_source` method to indicate that this block can accept messages offered to it by a source that is not linked. (Overrides [ITarget::supports_anonymous_source](itarget-class.md#supports_anonymous_source).)|

For more information, see [Asynchronous Message Blocks](../asynchronous-message-blocks.md).

## Inheritance Hierarchy

[ISource](isource-class.md)

[ITarget](itarget-class.md)

[source_block](source-block-class.md)

[propagator_block](propagator-block-class.md)

`unbounded_buffer`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="accept_message"></a> accept_message

Accepts a message that was offered by this `unbounded_buffer` messaging block, transferring ownership to the caller.

```cpp
virtual message<_Type> * accept_message(
   runtime_object_identity                 _MsgId
);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the offered `message` object.

### Return Value

A pointer to the `message` object that the caller now has ownership of.

## <a name="consume_message"></a> consume_message

Consumes a message previously offered by the `unbounded_buffer` messaging block and reserved by the target, transferring ownership to the caller.

```cpp
virtual message<_Type> * consume_message(
   runtime_object_identity                 _MsgId
);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being consumed.

### Return Value

A pointer to the `message` object that the caller now has ownership of.

### Remarks

Similar to `accept`, but is always preceded by a call to `reserve`.

## <a name="dequeue"></a> dequeue

Removes an item from the `unbounded_buffer` messaging block.

```cpp
_Type dequeue();
```

### Return Value

The payload of the message removed from the `unbounded_buffer`.

## <a name="enqueue"></a> enqueue

Adds an item to the `unbounded_buffer` messaging block.

```cpp
bool enqueue(
   _Type const&                 _Item
);
```

### Parameters

*_Item*<br/>
The item to add.

### Return Value

**`true`** if the item was accepted, **`false`** otherwise.

## <a name="link_target_notification"></a> link_target_notification

A callback that notifies that a new target has been linked to this `unbounded_buffer` messaging block.

```cpp
virtual void link_target_notification(
   _Inout_ ITarget<_Type> *                 _PTarget
);
```

### Parameters

*_PTarget*<br/>
A pointer to the newly linked target.

## <a name="propagate_message"></a> propagate_message

Asynchronously passes a message from an `ISource` block to this `unbounded_buffer` messaging block. It is invoked by the `propagate` method, when called by a source block.

```cpp
virtual message_status propagate_message(
   _Inout_ message<_Type> *                 _PMessage,
   _Inout_ ISource<_Type> *                 _PSource
);
```

### Parameters

*_PMessage*<br/>
A pointer to the `message` object.

*_PSource*<br/>
A pointer to the source block offering the message.

### Return Value

A [message_status](concurrency-namespace-enums.md#message_status) indication of what the target decided to do with the message.

## <a name="propagate_output_messages"></a> propagate_output_messages

Places the `message` `_PMessage` in this `unbounded_buffer` messaging block and tries to offer it to all of the linked targets.

```cpp
virtual void propagate_output_messages();
```

### Remarks

If another message is already ahead of this one in the `unbounded_buffer`, propagation to linked targets will not occur until any earlier messages have been accepted or consumed. The first linked target to successfully `accept` or `consume` the message takes ownership, and no other target can then get the message.

## <a name="process_input_messages"></a> process_input_messages

Places the `message` `_PMessage` in this `unbounded_buffer` messaging block and tries to offer it to all of the linked targets.

```cpp
virtual void process_input_messages(
   _Inout_ message<_Type> *                 _PMessage
);
```

### Parameters

*_PMessage*<br/>
A pointer to the message that is to be processed.

## <a name="release_message"></a> release_message

Releases a previous message reservation.

```cpp
virtual void release_message(
   runtime_object_identity                 _MsgId
);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being released.

## <a name="reserve_message"></a> reserve_message

Reserves a message previously offered by this `unbounded_buffer` messaging block.

```cpp
virtual bool reserve_message(
   runtime_object_identity                 _MsgId
);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being reserved.

### Return Value

**`true`** if the message was successfully reserved, **`false`** otherwise.

### Remarks

After `reserve` is called, if it returns **`true`**, either `consume` or `release` must be called to either take or release ownership of the message.

## <a name="resume_propagation"></a> resume_propagation

Resumes propagation after a reservation has been released.

```cpp
virtual void resume_propagation();
```

## <a name="send_message"></a> send_message

Synchronously passes a message from an `ISource` block to this `unbounded_buffer` messaging block. It is invoked by the `send` method, when called by a source block.

```cpp
virtual message_status send_message(
   _Inout_ message<_Type> *                 _PMessage,
   _Inout_ ISource<_Type> *                 _PSource
);
```

### Parameters

*_PMessage*<br/>
A pointer to the `message` object.

*_PSource*<br/>
A pointer to the source block offering the message.

### Return Value

A [message_status](concurrency-namespace-enums.md#message_status) indication of what the target decided to do with the message.

## <a name="supports_anonymous_source"></a> supports_anonymous_source

Overrides the `supports_anonymous_source` method to indicate that this block can accept messages offered to it by a source that is not linked.

```cpp
virtual bool supports_anonymous_source();
```

### Return Value

**`true`** because the block does not postpone offered messages.

## <a name="ctor"></a> unbounded_buffer

Constructs an `unbounded_buffer` messaging block.

```cpp
unbounded_buffer();

unbounded_buffer(
   filter_method const&                 _Filter
);

unbounded_buffer(
   Scheduler&                 _PScheduler
);

unbounded_buffer(
   Scheduler&                 _PScheduler,
   filter_method const&                 _Filter
);

unbounded_buffer(
   ScheduleGroup&                 _PScheduleGroup
);

unbounded_buffer(
   ScheduleGroup&                 _PScheduleGroup,
   filter_method const&                 _Filter
);
```

### Parameters

*_Filter*<br/>
A filter function which determines whether offered messages should be accepted.

*_PScheduler*<br/>
The `Scheduler` object within which the propagation task for the `unbounded_buffer` messaging block is scheduled.

*_PScheduleGroup*<br/>
The `ScheduleGroup` object within which the propagation task for the `unbounded_buffer` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.

### Remarks

The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PScheduleGroup` parameters.

The type `filter_method` is a functor with signature `bool (_Type const &)` which is invoked by this `unbounded_buffer` messaging block to determine whether or not it should accept an offered message.

## <a name="dtor"></a> ~unbounded_buffer

Destroys the `unbounded_buffer` messaging block.

```cpp
~unbounded_buffer();
```

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[overwrite_buffer Class](overwrite-buffer-class.md)<br/>
[single_assignment Class](single-assignment-class.md)
