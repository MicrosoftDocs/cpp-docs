---
description: "Learn more about: source_block Class"
title: "source_block Class"
ms.date: "11/04/2016"
f1_keywords: ["source_block", "AGENTS/concurrency::source_block", "AGENTS/concurrency::source_block::source_block", "AGENTS/concurrency::source_block::accept", "AGENTS/concurrency::source_block::acquire_ref", "AGENTS/concurrency::source_block::consume", "AGENTS/concurrency::source_block::link_target", "AGENTS/concurrency::source_block::release", "AGENTS/concurrency::source_block::release_ref", "AGENTS/concurrency::source_block::reserve", "AGENTS/concurrency::source_block::unlink_target", "AGENTS/concurrency::source_block::unlink_targets", "AGENTS/concurrency::source_block::accept_message", "AGENTS/concurrency::source_block::async_send", "AGENTS/concurrency::source_block::consume_message", "AGENTS/concurrency::source_block::enable_batched_processing", "AGENTS/concurrency::source_block::initialize_source", "AGENTS/concurrency::source_block::link_target_notification", "AGENTS/concurrency::source_block::process_input_messages", "AGENTS/concurrency::source_block::propagate_output_messages", "AGENTS/concurrency::source_block::propagate_to_any_targets", "AGENTS/concurrency::source_block::release_message", "AGENTS/concurrency::source_block::remove_targets", "AGENTS/concurrency::source_block::reserve_message", "AGENTS/concurrency::source_block::resume_propagation", "AGENTS/concurrency::source_block::sync_send", "AGENTS/concurrency::source_block::unlink_target_notification", "AGENTS/concurrency::source_block::wait_for_outstanding_async_sends"]
helpviewer_keywords: ["source_block class"]
ms.assetid: fbdd4146-e8d0-42e8-b714-fe633f69ffbf
---
# source_block Class

The `source_block` class is an abstract base class for source-only blocks. The class provides basic link management functionality as well as common error checks.

## Syntax

```cpp
template<class _TargetLinkRegistry, class _MessageProcessorType = ordered_message_processor<typename _TargetLinkRegistry::type::type>>
class source_block : public ISource<typename _TargetLinkRegistry::type::type>;
```

### Parameters

*_TargetLinkRegistry*<br/>
Link registry to be used for holding the target links.

*_MessageProcessorType*<br/>
Processor type for message processing.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`target_iterator`|The iterator to walk the connected targets.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[source_block](#ctor)|Constructs a `source_block` object.|
|[~source_block Destructor](#dtor)|Destroys the `source_block` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[accept](#accept)|Accepts a message that was offered by this `source_block` object, transferring ownership to the caller.|
|[acquire_ref](#acquire_ref)|Acquires a reference count on this `source_block` object, to prevent deletion.|
|[consume](#consume)|Consumes a message previously offered by this `source_block` object and successfully reserved by the target, transferring ownership to the caller.|
|[link_target](#link_target)|Links a target block to this `source_block` object.|
|[release](#release)|Releases a previous successful message reservation.|
|[release_ref](#release_ref)|Releases a reference count on this `source_block` object.|
|[reserve](#reserve)|Reserves a message previously offered by this `source_block` object.|
|[unlink_target](#unlink_target)|Unlinks a target block from this `source_block` object.|
|[unlink_targets](#unlink_targets)|Unlinks all target blocks from this `source_block` object. (Overrides [ISource::unlink_targets](isource-class.md#unlink_targets).)|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[accept_message](#accept_message)|When overridden in a derived class, accepts an offered message by the source. Message blocks should override this method to validate the `_MsgId` and return a message.|
|[async_send](#async_send)|Asynchronously queues up messages and starts a propagation task, if this has not been done already|
|[consume_message](#consume_message)|When overridden in a derived class, consumes a message that was previously reserved.|
|[enable_batched_processing](#enable_batched_processing)|Enables batched processing for this block.|
|[initialize_source](#initialize_source)|Initializes the `message_propagator` within this `source_block`.|
|[link_target_notification](#link_target_notification)|A callback that notifies that a new target has been linked to this `source_block` object.|
|[process_input_messages](#process_input_messages)|Process input messages. This is only useful for propagator blocks, which derive from source_block|
|[propagate_output_messages](#propagate_output_messages)|Propagate messages to targets.|
|[propagate_to_any_targets](#propagate_to_any_targets)|When overridden in a derived class, propagates the given message to any or all of the linked targets. This is the main propagation routine for message blocks.|
|[release_message](#release_message)|When overridden in a derived class, releases a previous message reservation.|
|[remove_targets](#remove_targets)|Removes all target links for this source block. This should be called from the destructor.|
|[reserve_message](#reserve_message)|When overridden in a derived class, reserves a message previously offered by this `source_block` object.|
|[resume_propagation](#resume_propagation)|When overridden in a derived class, resumes propagation after a reservation has been released.|
|[sync_send](#sync_send)|Synchronously queues up messages and starts a propagation task, if this has not been done already.|
|[unlink_target_notification](#unlink_target_notification)|A callback that notifies that a target has been unlinked from this `source_block` object.|
|[wait_for_outstanding_async_sends](#wait_for_outstanding_async_sends)|Waits for all asynchronous propagations to complete. This propagator-specific spin wait is used in destructors of message blocks to make sure that all asynchronous propagations have time to finish before destroying the block.|

## Remarks

Message blocks should derive from this block to take advantage of link management and synchronization provided by this class.

## Inheritance Hierarchy

[ISource](isource-class.md)

`source_block`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="accept"></a> accept

Accepts a message that was offered by this `source_block` object, transferring ownership to the caller.

```cpp
virtual message<_Target_type>* accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the offered `message` object.

*_PTarget*<br/>
A pointer to the target block that is calling the `accept` method.

### Return Value

A pointer to the `message` object that the caller now has ownership of.

### Remarks

The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_PTarget` is `NULL`.

The `accept` method is called by a target while a message is being offered by this `ISource` block. The message pointer returned may be different from the one passed into the `propagate` method of the `ITarget` block, if this source decides to make a copy of the message.

## <a name="accept_message"></a> accept_message

When overridden in a derived class, accepts an offered message by the source. Message blocks should override this method to validate the `_MsgId` and return a message.

```cpp
virtual message<_Target_type>* accept_message(runtime_object_identity _MsgId) = 0;
```

### Parameters

*_MsgId*<br/>
The runtime object identity of the `message` object.

### Return Value

A pointer to the message that the caller now has ownership of.

### Remarks

To transfer ownership, the original message pointer should be returned. To maintain ownership, a copy of message payload needs to be made and returned.

## <a name="acquire_ref"></a> acquire_ref

Acquires a reference count on this `source_block` object, to prevent deletion.

```cpp
virtual void acquire_ref(_Inout_ ITarget<_Target_type> *);
```

### Remarks

This method is called by an `ITarget` object that is being linked to this source during the `link_target` method.

## <a name="async_send"></a> async_send

Asynchronously queues up messages and starts a propagation task, if this has not been done already

```cpp
virtual void async_send(_Inout_opt_ message<_Target_type>* _Msg);
```

### Parameters

*_Msg*<br/>
A pointer to a `message` object to asynchronously send.

## <a name="consume"></a> consume

Consumes a message previously offered by this `source_block` object and successfully reserved by the target, transferring ownership to the caller.

```cpp
virtual message<_Target_type>* consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the reserved `message` object.

*_PTarget*<br/>
A pointer to the target block that is calling the `consume` method.

### Return Value

A pointer to the `message` object that the caller now has ownership of.

### Remarks

The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_PTarget` is `NULL`.

The method throws a [bad_target](bad-target-class.md) exception if the parameter `_PTarget` does not represent the target that called `reserve`.

The `consume` method is similar to `accept`, but must always be preceded by a call to `reserve` that returned **`true`**.

## <a name="consume_message"></a> consume_message

When overridden in a derived class, consumes a message that was previously reserved.

```cpp
virtual message<_Target_type>* consume_message(runtime_object_identity _MsgId) = 0;
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being consumed.

### Return Value

A pointer to the message that the caller now has ownership of.

### Remarks

Similar to `accept`, but is always preceded by a call to `reserve`.

## <a name="enable_batched_processing"></a> enable_batched_processing

Enables batched processing for this block.

```cpp
void enable_batched_processing();
```

## <a name="initialize_source"></a> initialize_source

Initializes the `message_propagator` within this `source_block`.

```cpp
void initialize_source(
    _Inout_opt_ Scheduler* _PScheduler = NULL,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup = NULL);
```

### Parameters

*_PScheduler*<br/>
The scheduler to be used for scheduling tasks.

*_PScheduleGroup*<br/>
The schedule group to be used for scheduling tasks.

## <a name="link_target"></a> link_target

Links a target block to this `source_block` object.

```cpp
virtual void link_target(_Inout_ ITarget<_Target_type>* _PTarget);
```

### Parameters

*_PTarget*<br/>
A pointer to an `ITarget` block to link to this `source_block` object.

### Remarks

The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_PTarget` is `NULL`.

## <a name="link_target_notification"></a> link_target_notification

A callback that notifies that a new target has been linked to this `source_block` object.

```cpp
virtual void link_target_notification(_Inout_ ITarget<_Target_type> *);
```

## <a name="process_input_messages"></a> process_input_messages

Process input messages. This is only useful for propagator blocks, which derive from source_block

```cpp
virtual void process_input_messages(_Inout_ message<_Target_type>* _PMessage);
```

### Parameters

*_PMessage*<br/>
A pointer to the message that is to be processed.

## <a name="propagate_output_messages"></a> propagate_output_messages

Propagate messages to targets.

```cpp
virtual void propagate_output_messages();
```

## <a name="propagate_to_any_targets"></a> propagate_to_any_targets

When overridden in a derived class, propagates the given message to any or all of the linked targets. This is the main propagation routine for message blocks.

```cpp
virtual void propagate_to_any_targets(_Inout_opt_ message<_Target_type>* _PMessage);
```

### Parameters

*_PMessage*<br/>
A pointer to the message that is to be propagated.

## <a name="release"></a> release

Releases a previous successful message reservation.

```cpp
virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the reserved `message` object.

*_PTarget*<br/>
A pointer to the target block that is calling the `release` method.

### Remarks

The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_PTarget` is `NULL`.

The method throws a [bad_target](bad-target-class.md) exception if the parameter `_PTarget` does not represent the target that called `reserve`.

## <a name="release_message"></a> release_message

When overridden in a derived class, releases a previous message reservation.

```cpp
virtual void release_message(runtime_object_identity _MsgId) = 0;
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being released.

## <a name="release_ref"></a> release_ref

Releases a reference count on this `source_block` object.

```cpp
virtual void release_ref(_Inout_ ITarget<_Target_type>* _PTarget);
```

### Parameters

*_PTarget*<br/>
A pointer to the target block that is calling this method.

### Remarks

This method is called by an `ITarget` object that is being unlinked from this source. The source block is allowed to release any resources reserved for the target block.

## <a name="remove_targets"></a> remove_targets

Removes all target links for this source block. This should be called from the destructor.

```cpp
void remove_targets();
```

## <a name="reserve"></a> reserve

Reserves a message previously offered by this `source_block` object.

```cpp
virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the offered `message` object.

*_PTarget*<br/>
A pointer to the target block that is calling the `reserve` method.

### Return Value

**`true`** if the message was successfully reserved, **`false`** otherwise. Reservations can fail for many reasons, including: the message was already reserved or accepted by another target, the source could deny reservations, and so forth.

### Remarks

The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_PTarget` is `NULL`.

After you call `reserve`, if it succeeds, you must call either `consume` or `release` in order to take or give up possession of the message, respectively.

## <a name="reserve_message"></a> reserve_message

When overridden in a derived class, reserves a message previously offered by this `source_block` object.

```cpp
virtual bool reserve_message(runtime_object_identity _MsgId) = 0;
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being reserved.

### Return Value

**`true`** if the message was successfully reserved, **`false`** otherwise.

### Remarks

After `reserve` is called, if it returns **`true`**, either `consume` or `release` must be called to either take or release ownership of the message.

## <a name="resume_propagation"></a> resume_propagation

When overridden in a derived class, resumes propagation after a reservation has been released.

```cpp
virtual void resume_propagation() = 0;
```

## <a name="ctor"></a> source_block

Constructs a `source_block` object.

```cpp
source_block();
```

## <a name="dtor"></a> ~source_block

Destroys the `source_block` object.

```cpp
virtual ~source_block();
```

## <a name="sync_send"></a> sync_send

Synchronously queues up messages and starts a propagation task, if this has not been done already.

```cpp
virtual void sync_send(_Inout_opt_ message<_Target_type>* _Msg);
```

### Parameters

*_Msg*<br/>
A pointer to a `message` object to synchronously send.

## <a name="unlink_target"></a> unlink_target

Unlinks a target block from this `source_block` object.

```cpp
virtual void unlink_target(_Inout_ ITarget<_Target_type>* _PTarget);
```

### Parameters

*_PTarget*<br/>
A pointer to an `ITarget` block to unlink from this `source_block` object.

### Remarks

The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_PTarget` is `NULL`.

## <a name="unlink_target_notification"></a> unlink_target_notification

A callback that notifies that a target has been unlinked from this `source_block` object.

```cpp
virtual void unlink_target_notification(_Inout_ ITarget<_Target_type>* _PTarget);
```

### Parameters

*_PTarget*<br/>
The `ITarget` block that was unlinked.

## <a name="unlink_targets"></a> unlink_targets

Unlinks all target blocks from this `source_block` object.

```cpp
virtual void unlink_targets();
```

## <a name="wait_for_outstanding_async_sends"></a> wait_for_outstanding_async_sends

Waits for all asynchronous propagations to complete. This propagator-specific spin wait is used in destructors of message blocks to make sure that all asynchronous propagations have time to finish before destroying the block.

```cpp
void wait_for_outstanding_async_sends();
```

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[ISource Class](isource-class.md)
