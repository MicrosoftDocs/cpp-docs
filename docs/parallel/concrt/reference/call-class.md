---
description: "Learn more about: call Class"
title: "call Class"
ms.date: "11/04/2016"
f1_keywords: ["call", "AGENTS/concurrency::call", "AGENTS/concurrency::call::call", "AGENTS/concurrency::call::process_input_messages", "AGENTS/concurrency::call::process_message", "AGENTS/concurrency::call::propagate_message", "AGENTS/concurrency::call::send_message", "AGENTS/concurrency::call::supports_anonymous_source"]
helpviewer_keywords: ["call class"]
ms.assetid: 1521970a-1e9c-4b0c-a681-d18e40976f49
---
# call Class

A `call` messaging block is a multi-source, ordered `target_block` that invokes a specified function when receiving a message.

## Syntax

```cpp
template<class T, class _FunctorType = std::function<void(T const&)>>
class call : public target_block<multi_link_registry<ISource<T>>>;
```

### Parameters

*T*<br/>
The payload type of the messages propagated to this block.

*_FunctorType*<br/>
The signature of functions that this block can accept.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[call](#ctor)|Overloaded. Constructs a `call` messaging block.|
|[~call Destructor](#dtor)|Destroys the `call` messaging block.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[process_input_messages](#process_input_messages)|Executes the call function on the input messages.|
|[process_message](#process_message)|Processes a message that was accepted by this `call` messaging block.|
|[propagate_message](#propagate_message)|Asynchronously passes a message from an `ISource` block to this `call` messaging block. It is invoked by the `propagate` method, when called by a source block.|
|[send_message](#send_message)|Synchronously passes a message from an `ISource` block to this `call` messaging block. It is invoked by the `send` method, when called by a source block.|
|[supports_anonymous_source](#supports_anonymous_source)|Overrides the `supports_anonymous_source` method to indicate that this block can accept messages offered to it by a source that is not linked. (Overrides [ITarget::supports_anonymous_source](itarget-class.md#supports_anonymous_source).)|

## Remarks

For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).

## Inheritance Hierarchy

[ITarget](itarget-class.md)

[target_block](target-block-class.md)

`call`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="ctor"></a> call

Constructs a `call` messaging block.

```cpp
call(
    _Call_method const& _Func);

call(
    _Call_method const& _Func,
    filter_method const& _Filter);

call(
    Scheduler& _PScheduler,
    _Call_method const& _Func);

call(
    Scheduler& _PScheduler,
    _Call_method const& _Func,
    filter_method const& _Filter);

call(
    ScheduleGroup& _PScheduleGroup,
    _Call_method const& _Func);

call(
    ScheduleGroup& _PScheduleGroup,
    _Call_method const& _Func,
    filter_method const& _Filter);
```

### Parameters

*_Func*<br/>
A function that will be invoked for each accepted message.

*_Filter*<br/>
A filter function which determines whether offered messages should be accepted.

*_PScheduler*<br/>
The `Scheduler` object within which the propagation task for the `call` messaging block is scheduled.

*_PScheduleGroup*<br/>
The `ScheduleGroup` object within which the propagation task for the `call` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.

### Remarks

The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PScheduleGroup` parameters.

The type `_Call_method` is a functor with signature `void (T const &)` which is invoked by this `call` messaging block to process a message.

The type `filter_method` is a functor with signature `bool (T const &)` which is invoked by this `call` messaging block to determine whether or not it should accept an offered message.

## <a name="dtor"></a> ~call

Destroys the `call` messaging block.

```cpp
~call();
```

## <a name="process_input_messages"></a> process_input_messages

Executes the call function on the input messages.

```cpp
virtual void process_input_messages(_Inout_ message<T>* _PMessage);
```

### Parameters

*_PMessage*<br/>
A pointer to the message that is to be handled.

## <a name="process_message"></a> process_message

Processes a message that was accepted by this `call` messaging block.

```cpp
virtual void process_message(_Inout_ message<T>* _PMessage);
```

### Parameters

*_PMessage*<br/>
A pointer to the message that is to be handled.

## <a name="propagate_message"></a> propagate_message

Asynchronously passes a message from an `ISource` block to this `call` messaging block. It is invoked by the `propagate` method, when called by a source block.

```cpp
virtual message_status propagate_message(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource);
```

### Parameters

*_PMessage*<br/>
A pointer to the `message` object.

*_PSource*<br/>
A pointer to the source block offering the message.

### Return Value

A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.

## <a name="send_message"></a> send_message

Synchronously passes a message from an `ISource` block to this `call` messaging block. It is invoked by the `send` method, when called by a source block.

```cpp
virtual message_status send_message(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource);
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

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[transformer Class](transformer-class.md)
