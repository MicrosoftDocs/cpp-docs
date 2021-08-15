---
description: "Learn more about: transformer Class"
title: "transformer Class"
ms.date: "11/04/2016"
f1_keywords: ["transformer", "AGENTS/concurrency::transformer", "AGENTS/concurrency::transformer::transformer", "AGENTS/concurrency::transformer::accept_message", "AGENTS/concurrency::transformer::consume_message", "AGENTS/concurrency::transformer::link_target_notification", "AGENTS/concurrency::transformer::propagate_message", "AGENTS/concurrency::transformer::propagate_to_any_targets", "AGENTS/concurrency::transformer::release_message", "AGENTS/concurrency::transformer::reserve_message", "AGENTS/concurrency::transformer::resume_propagation", "AGENTS/concurrency::transformer::send_message", "AGENTS/concurrency::transformer::supports_anonymous_source"]
helpviewer_keywords: ["transformer class"]
ms.assetid: eea71925-7043-4a92-bfd4-dbc0ece5d081
---
# transformer Class

A `transformer` messaging block is a single-target, multi-source, ordered `propagator_block` which can accept messages of one type and is capable of storing an unbounded number of messages of a different type.

## Syntax

```cpp
template<class _Input, class _Output>
class transformer : public propagator_block<single_link_registry<ITarget<_Output>>,
    multi_link_registry<ISource<_Input>>>;
```

### Parameters

*_Input*<br/>
The payload type of the messages accepted by the buffer.

*_Output*<br/>
The payload type of the messages stored and propagated out by the buffer.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[transformer](#ctor)|Overloaded. Constructs a `transformer` messaging block.|
|[~transformer Destructor](#dtor)|Destroys the `transformer` messaging block.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[accept_message](#accept_message)|Accepts a message that was offered by this `transformer` messaging block, transferring ownership to the caller.|
|[consume_message](#consume_message)|Consumes a message previously offered by the `transformer` and reserved by the target, transferring ownership to the caller.|
|[link_target_notification](#link_target_notification)|A callback that notifies that a new target has been linked to this `transformer` messaging block.|
|[propagate_message](#propagate_message)|Asynchronously passes a message from an `ISource` block to this `transformer` messaging block. It is invoked by the `propagate` method, when called by a source block.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Executes the transformer function on the input messages.|
|[release_message](#release_message)|Releases a previous message reservation. (Overrides [source_block::release_message](source-block-class.md#release_message).)|
|[reserve_message](#reserve_message)|Reserves a message previously offered by this `transformer` messaging block. (Overrides [source_block::reserve_message](source-block-class.md#reserve_message).)|
|[resume_propagation](#resume_propagation)|Resumes propagation after a reservation has been released. (Overrides [source_block::resume_propagation](source-block-class.md#resume_propagation).)|
|[send_message](#send_message)|Synchronously passes a message from an `ISource` block to this `transformer` messaging block. It is invoked by the `send` method, when called by a source block.|
|[supports_anonymous_source](#supports_anonymous_source)|Overrides the `supports_anonymous_source` method to indicate that this block can accept messages offered to it by a source that is not linked. (Overrides [ITarget::supports_anonymous_source](itarget-class.md#supports_anonymous_source).)|

## Remarks

For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).

## Inheritance Hierarchy

[ISource](isource-class.md)

[ITarget](itarget-class.md)

[source_block](source-block-class.md)

[propagator_block](propagator-block-class.md)

`transformer`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="accept_message"></a> accept_message

Accepts a message that was offered by this `transformer` messaging block, transferring ownership to the caller.

```cpp
virtual message<_Output>* accept_message(runtime_object_identity _MsgId);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the offered `message` object.

### Return Value

A pointer to the `message` object that the caller now has ownership of.

## <a name="consume_message"></a> consume_message

Consumes a message previously offered by the `transformer` and reserved by the target, transferring ownership to the caller.

```cpp
virtual message<_Output>* consume_message(runtime_object_identity _MsgId);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being consumed.

### Return Value

A pointer to the `message` object that the caller now has ownership of.

### Remarks

Similar to `accept`, but is always preceded by a call to `reserve`.

## <a name="link_target_notification"></a> link_target_notification

A callback that notifies that a new target has been linked to this `transformer` messaging block.

```cpp
virtual void link_target_notification(_Inout_ ITarget<_Output> *);
```

## <a name="propagate_message"></a> propagate_message

Asynchronously passes a message from an `ISource` block to this `transformer` messaging block. It is invoked by the `propagate` method, when called by a source block.

```cpp
virtual message_status propagate_message(
    _Inout_ message<_Input>* _PMessage,
    _Inout_ ISource<_Input>* _PSource);
```

### Parameters

*_PMessage*<br/>
A pointer to the `message` object.

*_PSource*<br/>
A pointer to the source block offering the message.

### Return Value

A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.

## <a name="propagate_to_any_targets"></a> propagate_to_any_targets

Executes the transformer function on the input messages.

```cpp
virtual void propagate_to_any_targets(_Inout_opt_ message<_Output> *);
```

## <a name="release_message"></a> release_message

Releases a previous message reservation.

```cpp
virtual void release_message(runtime_object_identity _MsgId);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being released.

## <a name="reserve_message"></a> reserve_message

Reserves a message previously offered by this `transformer` messaging block.

```cpp
virtual bool reserve_message(runtime_object_identity _MsgId);
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

Synchronously passes a message from an `ISource` block to this `transformer` messaging block. It is invoked by the `send` method, when called by a source block.

```cpp
virtual message_status send_message(
    _Inout_ message<_Input>* _PMessage,
    _Inout_ ISource<_Input>* _PSource);
```

### Parameters

*_PMessage*<br/>
A pointer to the `message` object.

*_PSource*<br/>
A pointer to the source block offering the message.

### Return Value

A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.

## <a name="supports_anonymous_source"></a> supports_anonymous_source

Overrides the `supports_anonymous_source` method to indicate that this block can accept messages offered to it by a source that is not linked.

```cpp
virtual bool supports_anonymous_source();
```

### Return Value

**`true`** because the block does not postpone offered messages.

## <a name="ctor"></a> transformer

Constructs a `transformer` messaging block.

```cpp
transformer(
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget = NULL);

transformer(
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget,
    filter_method const& _Filter);

transformer(
    Scheduler& _PScheduler,
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget = NULL);

transformer(
    Scheduler& _PScheduler,
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget,
    filter_method const& _Filter);

transformer(
    ScheduleGroup& _PScheduleGroup,
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget = NULL);

transformer(
    ScheduleGroup& _PScheduleGroup,
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget,
    filter_method const& _Filter);
```

### Parameters

*_Func*<br/>
A function that will be invoked for each accepted message.

*_PTarget*<br/>
A pointer to a target block to link with the transformer.

*_Filter*<br/>
A filter function which determines whether offered messages should be accepted.

*_PScheduler*<br/>
The `Scheduler` object within which the propagation task for the `transformer` messaging block is scheduled.

*_PScheduleGroup*<br/>
The `ScheduleGroup` object within which the propagation task for the `transformer` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.

### Remarks

The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PScheduleGroup` parameters.

The type `_Transform_method` is a functor with signature `_Output (_Input const &)` which is invoked by this `transformer` messaging block to process a message.

The type `filter_method` is a functor with signature `bool (_Input const &)` which is invoked by this `transformer` messaging block to determine whether or not it should accept an offered message.

## <a name="dtor"></a> ~transformer

Destroys the `transformer` messaging block.

```cpp
~transformer();
```

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[call Class](call-class.md)
