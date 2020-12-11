---
description: "Learn more about: Asynchronous Agents Library"
title: "Asynchronous Agents Library"
ms.date: "11/19/2018"
helpviewer_keywords: ["Agents Library", "Asynchronous Agents Library"]
ms.assetid: d2a72a31-8ba6-4220-ad7a-e403a6acaa42
---
# Asynchronous Agents Library

The Asynchronous Agents Library (or just *Agents Library*) provides a programming model that lets you increase the robustness of concurrency-enabled application development. The Agents Library is a C++ template library that promotes an actor-based programming model and in-process message passing for coarse-grained dataflow and pipelining tasks. The Agents Library builds on the scheduling and resource management components of the Concurrency Runtime.

## Programming Model

The Agents Library provides alternatives to shared state by letting you connect isolated components through an asynchronous communication model that is based on dataflow instead of control flow. *Dataflow* refers to a programming model where computations are made when all required data is available; *control flow* refers to a programming model where computations are made in a predetermined order.

The dataflow programming model is related to the concept of *message passing*, where independent components of a program communicate with one another by sending messages.

The Agents Library is composed of three components: *asynchronous agents*, *asynchronous message blocks*, and *message-passing functions*. Agents maintain state, and use message blocks and message-passing functions to communicate with one another and with external components. Message-passing functions enable agents to send and receive messages to and from the external components. Asynchronous message blocks hold messages and enable agents to communicate in a synchronized manner.

The following illustration shows how two agents use message blocks and message-passing functions to communicate. In this illustration, `agent1` sends a message to `agent2` by using the [concurrency::send](reference/concurrency-namespace-functions.md#send) function and a [concurrency::unbounded_buffer](reference/unbounded-buffer-class.md) object. `agent2` uses the [concurrency::receive](reference/concurrency-namespace-functions.md#receive) function to read the message. `agent2` uses the same method to send a message to `agent1`. Dashed arrows represent the flow of data between agents. Solid arrows connect the agents to the message blocks that they write to or read from.

![The components of the Agents Library](../../parallel/concrt/media/agent_librarycomp.png "The components of the Agents Library")

A code example that implements this illustration is shown later in this topic.

The agent programming model has several advantages over other concurrency and synchronization mechanisms, for example, events. One advantage is that by using message passing to transmit state changes between objects, you can isolate access to shared resources, and thereby improve scalability. An advantage to message passing is that it ties synchronization to data instead of tying it to an external synchronization object. This simplifies data transmission among components and can eliminate programming errors in your applications.

## When to Use the Agents Library

Use the Agents library when you have multiple operations that must communicate with one another asynchronously. Message blocks and message-passing functions let you write parallel applications without requiring synchronization mechanisms such as locks. This lets you focus on application logic.

The agent programming model is often used to create *data pipelines* or *networks*. A data pipeline is a series of components, each of which performs a specific task that contributes to a larger goal. Every component in a dataflow pipeline performs work when it receives a message from another component. The result of that work is passed to other components in the pipeline or network. The components can use more fine-grained concurrency functionality from other libraries, for example, the [Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md).

## Example

The following example implements the illustration shown earlier in this topic.

[!code-cpp[concrt-basic-agents#1](../../parallel/concrt/codesnippet/cpp/asynchronous-agents-library_1.cpp)]

This example produces the following output:

```Output
agent1: sending request...
agent2: received 'request'.
agent2: sending response...
agent1: received '42'.
```

The following topics describe the functionality used in this example.

## Related Topics

[Asynchronous Agents](../../parallel/concrt/asynchronous-agents.md)<br/>
Describes the role of asynchronous agents in solving larger computing tasks.

[Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
Describes the various message block types that are provided by the Agents Library.

[Message Passing Functions](../../parallel/concrt/message-passing-functions.md)<br/>
Describes the various message passing routines that are provided by the Agents Library.

[How to: Implement Various Producer-Consumer Patterns](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md)<br/>
Describes how to implement the producer-consumer pattern in your application.

[How to: Provide Work Functions to the call and transformer Classes](../../parallel/concrt/how-to-provide-work-functions-to-the-call-and-transformer-classes.md)<br/>
Illustrates several ways to provide work functions to the [concurrency::call](../../parallel/concrt/reference/call-class.md) and [concurrency::transformer](../../parallel/concrt/reference/transformer-class.md) classes.

[How to: Use transformer in a Data Pipeline](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)<br/>
Shows how to use the [concurrency::transformer](../../parallel/concrt/reference/transformer-class.md) class in a data pipeline.

[How to: Select Among Completed Tasks](../../parallel/concrt/how-to-select-among-completed-tasks.md)<br/>
Shows how to use the [concurrency::choice](../../parallel/concrt/reference/choice-class.md) and [concurrency::join](../../parallel/concrt/reference/join-class.md) classes to select the first task to complete a search algorithm.

[How to: Send a Message at a Regular Interval](../../parallel/concrt/how-to-send-a-message-at-a-regular-interval.md)<br/>
Shows how to use the [concurrency::timer](../../parallel/concrt/reference/timer-class.md) class to send a message at a regular interval.

[How to: Use a Message Block Filter](../../parallel/concrt/how-to-use-a-message-block-filter.md)<br/>
Demonstrates how to use a filter to enable an asynchronous message block to accept or reject messages.

[Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
Describes how to use various parallel patterns, such as parallel algorithms, in your applications.

[Concurrency Runtime](../../parallel/concrt/concurrency-runtime.md)<br/>
Describes the Concurrency Runtime, which simplifies parallel programming, and contains links to related topics.
