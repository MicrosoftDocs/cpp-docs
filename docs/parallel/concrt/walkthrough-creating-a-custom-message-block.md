---
description: "Learn more about: Walkthrough: Creating a Custom Message Block"
title: "Walkthrough: Creating a Custom Message Block"
ms.date: "04/25/2019"
helpviewer_keywords: ["creating custom message blocks Concurrency Runtime]", "custom message blocks, creating [Concurrency Runtime]"]
ms.assetid: 4c6477ad-613c-4cac-8e94-2c9e63cd43a1
---
# Walkthrough: Creating a Custom Message Block

This document describes how to create a custom message block type that orders incoming messages by priority.

Although the built-in message block types provide a wide-range of functionality, you can create your own message block type and customize it to meet the requirements of your application. For a description of the built-in message block types that are provided by the Asynchronous Agents Library, see [Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md).

## Prerequisites

Read the following documents before you start this walkthrough:

- [Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md)

- [Message Passing Functions](../../parallel/concrt/message-passing-functions.md)

## <a name="top"></a> Sections

This walkthrough contains the following sections:

- [Designing a Custom Message Block](#design)

- [Defining the priority_buffer Class](#class)

- [The Complete Example](#complete)

## <a name="design"></a> Designing a Custom Message Block

Message blocks participate in the act of sending and receiving messages. A message block that sends messages is known as a *source block*. A message block that receives messages is known as a *target block*. A message block that both sends and receives messages is known as a *propagator block*. The Agents Library uses the abstract class [concurrency::ISource](../../parallel/concrt/reference/isource-class.md) to represent source blocks and the abstract class [concurrency::ITarget](../../parallel/concrt/reference/itarget-class.md) to represent target blocks. Message block types that act as sources derive from `ISource`; message block types that act as targets derive from `ITarget`.

Although you can derive your message block type directly from `ISource` and `ITarget`, the Agents Library defines three base classes that perform much of the functionality that is common to all message block types, for example, handling errors and connecting message blocks together in a concurrency-safe manner. The [concurrency::source_block](../../parallel/concrt/reference/source-block-class.md) class derives from `ISource` and sends messages to other blocks. The [concurrency::target_block](../../parallel/concrt/reference/target-block-class.md) class derives from `ITarget` and receives messages from other blocks. The [concurrency::propagator_block](../../parallel/concrt/reference/propagator-block-class.md) class derives from `ISource` and `ITarget` and sends messages to other blocks and it receives messages from other blocks. We recommend that you use these three base classes to handle infrastructure details so that you can focus on the behavior of your message block.

The `source_block`, `target_block`, and `propagator_block` classes are templates that are parameterized on a type that manages the connections, or links, between source and target blocks and on a type that manages how messages are processed. The Agents Library defines two types that perform link management, [concurrency::single_link_registry](../../parallel/concrt/reference/single-link-registry-class.md) and [concurrency::multi_link_registry](../../parallel/concrt/reference/multi-link-registry-class.md). The `single_link_registry` class enables a message block to be linked to one source or to one target. The `multi_link_registry` class enables a message block to be linked to multiple sources or multiple targets. The Agents Library defines one class that performs message management, [concurrency::ordered_message_processor](../../parallel/concrt/reference/ordered-message-processor-class.md). The `ordered_message_processor` class enables message blocks to process messages in the order in which it receives them.

To better understand how message blocks relate to their sources and targets, consider the following example. This example shows the declaration of the [concurrency::transformer](../../parallel/concrt/reference/transformer-class.md) class.

[!code-cpp[concrt-priority-buffer#20](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_1.cpp)]

The `transformer` class derives from `propagator_block`, and therefore acts as both a source block and as a target block. It accepts messages of type `_Input` and sends messages of type `_Output`. The `transformer` class specifies `single_link_registry` as the link manager for any target blocks and `multi_link_registry` as the link manager for any source blocks. Therefore, a `transformer` object can have up to one target and an unlimited number of sources.

A class that derives from `source_block` must implement six methods: [propagate_to_any_targets](reference/source-block-class.md#propagate_to_any_targets), [accept_message](reference/source-block-class.md#accept_message), [reserve_message](reference/source-block-class.md#reserve_message), [consume_message](reference/source-block-class.md#consume_message), [release_message](reference/source-block-class.md#release_message), and [resume_propagation](reference/source-block-class.md#resume_propagation). A class that derives from `target_block` must implement the [propagate_message](reference/propagator-block-class.md#propagate_message) method and can optionally implement the [send_message](reference/propagator-block-class.md#send_message) method. Deriving from `propagator_block` is functionally equivalent to deriving from both `source_block` and `target_block`.

The `propagate_to_any_targets` method is called by the runtime to asynchronously or synchronously process any incoming messages and propagate out any outgoing messages. The `accept_message` method is called by target blocks to accept messages. Many message block types, such as `unbounded_buffer`, send messages only to the first target that would receive it. Therefore, it transfers ownership of the message to the target. Other message block types, such as [concurrency::overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md), offer messages to each of its target blocks. Therefore, `overwrite_buffer` creates a copy of the message for each of its targets.

The `reserve_message`, `consume_message`, `release_message`, and `resume_propagation` methods enable message blocks to participate in message reservation. Target blocks call the `reserve_message` method when they are offered a message and have to reserve the message for later use. After a target block reserves a message, it can call the `consume_message` method to consume that message or the `release_message` method to cancel the reservation. As with the `accept_message` method, the implementation of `consume_message` can either transfer ownership of the message or return a copy of the message. After a target block either consumes or releases a reserved message, the runtime calls the `resume_propagation` method. Typically, this method continues message propagation, starting with the next message in the queue.

The runtime calls the `propagate_message` method to asynchronously transfer a message from another block to the current one. The `send_message` method resembles `propagate_message`, except that it synchronously, instead of asynchronously, sends the message to the target blocks. The default implementation of `send_message` rejects all incoming messages. The runtime does not call either of these methods if the message does not pass the optional filter function that is associated with the target block. For more information about message filters, see [Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md).

[[Top](#top)]

## <a name="class"></a> Defining the priority_buffer Class

The `priority_buffer` class is a custom message block type that orders incoming messages first by priority, and then by the order in which messages are received. The `priority_buffer` class resembles the [concurrency::unbounded_buffer](reference/unbounded-buffer-class.md) class because it holds a queue of messages, and also because it acts as both a source and a target message block and can have both multiple sources and multiple targets. However, `unbounded_buffer` bases message propagation only on the order in which it receives messages from its sources.

The `priority_buffer` class receives messages of type std::[tuple](../../standard-library/tuple-class.md) that contain `PriorityType` and `Type` elements. `PriorityType` refers to the type that holds the priority of each message; `Type` refers to the data portion of the message. The `priority_buffer` class sends messages of type `Type`. The `priority_buffer` class also manages two message queues: a [std::priority_queue](../../standard-library/priority-queue-class.md) object for incoming messages and a std::[queue](../../standard-library/queue-class.md) object for outgoing messages. Ordering messages by priority is useful when a `priority_buffer` object receives multiple messages simultaneously or when it receives multiple messages before any messages are read by consumers.

In addition to the seven methods that a class that derives from `propagator_block` must implement, the `priority_buffer` class also overrides the `link_target_notification` and `send_message` methods. The `priority_buffer` class also defines two public helper methods, `enqueue` and `dequeue`, and a private helper method, `propagate_priority_order`.

The following procedure describes how to implement the `priority_buffer` class.

#### To define the priority_buffer class

1. Create a C++ header file and name it `priority_buffer.h`. Alternatively, you can use an existing header file that is part of your project.

1. In `priority_buffer.h`, add the following code.

    [!code-cpp[concrt-priority-buffer#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_2.h)]

1. In the `std` namespace, define specializations of [std::less](../../standard-library/less-struct.md) and [std::greater](../../standard-library/greater-struct.md) that act on concurrency::[message](../../parallel/concrt/reference/message-class.md) objects.

    [!code-cpp[concrt-priority-buffer#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_3.h)]

   The `priority_buffer` class stores `message` objects in a `priority_queue` object. These type specializations enable the priority queue to sort messages according to their priority. The priority is the first element of the `tuple` object.

1. In the `concurrencyex` namespace, declare the `priority_buffer` class.

    [!code-cpp[concrt-priority-buffer#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_4.h)]

   The `priority_buffer` class derives from `propagator_block`. Therefore, it can both send and receive messages. The `priority_buffer` class can have multiple targets that receive messages of type `Type`. It can also have multiple sources that send messages of type `tuple<PriorityType, Type>`.

1. In the **`private`** section of the `priority_buffer` class, add the following member variables.

    [!code-cpp[concrt-priority-buffer#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_5.h)]

   The `priority_queue` object holds incoming messages; the `queue` object holds outgoing messages. A `priority_buffer` object can receive multiple messages simultaneously; the `critical_section` object synchronizes access to the queue of input messages.

1. In the **`private`** section, define the copy constructor and the assignment operator. This prevents `priority_queue` objects from being assignable.

    [!code-cpp[concrt-priority-buffer#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_6.h)]

1. In the **`public`** section, define the constructors that are common to many message block types. Also define the destructor.

    [!code-cpp[concrt-priority-buffer#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_7.h)]

1. In the **`public`** section, define the methods `enqueue` and `dequeue`. These helper methods provide an alternative way to send messages to and receive messages from a `priority_buffer` object.

    [!code-cpp[concrt-priority-buffer#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_8.h)]

1. In the **`protected`** section, define the `propagate_to_any_targets` method.

    [!code-cpp[concrt-priority-buffer#9](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_9.h)]

   The `propagate_to_any_targets` method transfers the message that is at the front of the input queue to the output queue and propagates out all messages in the output queue.

1. In the **`protected`** section, define the `accept_message` method.

    [!code-cpp[concrt-priority-buffer#8](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_10.h)]

   When a target block calls the `accept_message` method, the `priority_buffer` class transfers ownership of the message to the first target block that accepts it. (This resembles the behavior of `unbounded_buffer`.)

1. In the **`protected`** section, define the `reserve_message` method.

    [!code-cpp[concrt-priority-buffer#10](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_11.h)]

   The `priority_buffer` class permits a target block to reserve a message when the provided message identifier matches the identifier of the message that is at the front of the queue. In other words, a target can reserve the message if the `priority_buffer` object has not yet received an additional message and has not yet  propagated out the current one.

1. In the **`protected`** section, define the `consume_message` method.

    [!code-cpp[concrt-priority-buffer#11](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_12.h)]

   A target block calls `consume_message` to transfer ownership of the message that it reserved.

1. In the **`protected`** section, define the `release_message` method.

    [!code-cpp[concrt-priority-buffer#12](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_13.h)]

   A target block calls `release_message` to cancel its reservation to a message.

1. In the **`protected`** section, define the `resume_propagation` method.

    [!code-cpp[concrt-priority-buffer#13](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_14.h)]

   The runtime calls `resume_propagation` after a target block either consumes or releases a reserved message. This method propagates out any messages that are in the output queue.

1. In the **`protected`** section, define the `link_target_notification` method.

    [!code-cpp[concrt-priority-buffer#14](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_15.h)]

   The `_M_pReservedFor` member variable is defined by the base class, `source_block`. This member variable points to the target block, if any, that is holding a reservation to the message that is at the front of the output queue. The runtime calls `link_target_notification` when a new target is linked to the `priority_buffer` object. This method propagates out any messages that are in the output queue if no target is holding a reservation.

1. In the **`private`** section, define the `propagate_priority_order` method.

    [!code-cpp[concrt-priority-buffer#15](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_16.h)]

   This method propagates out all messages from the output queue. Every message in the queue is offered to every target block until one of the target blocks accepts the message. The `priority_buffer` class preserves the order of the outgoing messages. Therefore, the first message in the output queue must be accepted by a target block before this method offers any other message to the target blocks.

1. In the **`protected`** section, define the `propagate_message` method.

    [!code-cpp[concrt-priority-buffer#16](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_17.h)]

   The `propagate_message` method enables the `priority_buffer` class to act as a message receiver, or target. This method receives the message that is offered by the provided source block and inserts that message into the priority queue. The `propagate_message` method then asynchronously sends all output messages to the target blocks.

   The runtime calls this method when you call the [concurrency::asend](reference/concurrency-namespace-functions.md#asend) function or when the message block is connected to other message blocks.

1. In the **`protected`** section, define the `send_message` method.

    [!code-cpp[concrt-priority-buffer#17](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_18.h)]

   The `send_message` method resembles `propagate_message`. However it sends the output messages synchronously instead of asynchronously.

   The runtime calls this method during a synchronous send operation, such as when you call the [concurrency::send](reference/concurrency-namespace-functions.md#send) function.

The `priority_buffer` class contains constructor overloads that are typical in many message block types. Some constructor overloads take [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) or [concurrency::ScheduleGroup](../../parallel/concrt/reference/schedulegroup-class.md) objects, which enable the message block to be managed by a specific task scheduler. Other constructor overloads take a filter function. Filter functions enable message blocks to accept or reject a message on the basis of its payload. For more information about message filters, see [Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md). For more information about task schedulers, see [Task Scheduler](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

Because the `priority_buffer` class orders messages by priority and then by the order in which messages are received, this class is most useful when it receives messages asynchronously, for example, when you call the [concurrency::asend](reference/concurrency-namespace-functions.md#asend) function or when the message block is connected to other message blocks.

[[Top](#top)]

## <a name="complete"></a> The Complete Example

The following example shows the complete definition of the `priority_buffer` class.

[!code-cpp[concrt-priority-buffer#18](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_19.h)]

The following example concurrently performs a number of `asend` and [concurrency::receive](reference/concurrency-namespace-functions.md#receive) operations on a `priority_buffer` object.

[!code-cpp[concrt-priority-buffer#19](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-a-custom-message-block_20.cpp)]

This example produces the following sample output.

```Output
36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36
24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24
12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12
```

The `priority_buffer` class orders messages first by priority and then by the order in which it receives messages. In this example, messages with greater numerical priority are inserted towards the front of the queue.

[[Top](#top)]

## Compiling the Code

Copy the example code and paste it in a Visual Studio project, or paste the definition of the `priority_buffer` class in a file that is named `priority_buffer.h` and the test program in a file that is named `priority_buffer.cpp` and then run the following command in a Visual Studio Command Prompt window.

**cl.exe /EHsc priority_buffer.cpp**

## See also

[Concurrency Runtime Walkthroughs](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Message Passing Functions](../../parallel/concrt/message-passing-functions.md)
