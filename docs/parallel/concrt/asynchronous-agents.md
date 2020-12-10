---
description: "Learn more about: Asynchronous Agents"
title: "Asynchronous Agents"
ms.date: "11/19/2018"
helpviewer_keywords: ["asynchronous agents", "agents [Concurrency Runtime]"]
ms.assetid: 6cf6ccc6-87f1-4e14-af15-ea8ba58fef1a
---
# Asynchronous Agents

An *asynchronous agent* (or just *agent*) is an application component that works asynchronously with other agents to solve larger computing tasks. Think of an agent as a task that has a set life cycle. For example, one agent might read data from an input/output device (such as the keyboard, a file on disk, or a network connection) and another agent might perform action on that data as it becomes available. The first agent uses message passing to inform the second agent that more data is available. The Concurrency Runtime task scheduler provides an efficient mechanism to enable agents to block and yield cooperatively without requiring less efficient preemption.

The Agents Library defines the [concurrency::agent](../../parallel/concrt/reference/agent-class.md) class to represent an asynchronous agent. `agent` is an abstract class that declares the virtual method [concurrency::agent::run](reference/agent-class.md#run). The `run` method executes the task that is performed by the agent. Because `run` is abstract, you must implement this method in every class that you derive from `agent`.

## Agent Life Cycle

Agents have a set life cycle. The [concurrency::agent_status](reference/concurrency-namespace-enums.md#agent_status) enumeration defines the various states of an agent. The following illustration is a state diagram that shows how agents progress from one state to another. In this illustration, solid lines represent methods that you call from your application; dotted lines represent methods that are called from the runtime.

![Agent State Diagram](../../parallel/concrt/media/agentstate.png "Agent State Diagram")

The following table describes each state in the `agent_status` enumeration.

|Agent State|Description|
|-----------------|-----------------|
|`agent_created`|The agent has not been scheduled for execution.|
|`agent_runnable`|The runtime is scheduling the agent for execution.|
|`agent_started`|The agent has started and is running.|
|`agent_done`|The agent finished.|
|`agent_canceled`|The agent was canceled before it entered the `started` state.|

`agent_created` is the initial state of an agent, `agent_runnable` and `agent_started` are the active states, and `agent_done` and `agent_canceled` are the terminal states.

Use the [concurrency::agent::status](reference/agent-class.md#status) method to retrieve the current state of an `agent` object. Although the `status` method is concurrency-safe, the state of the agent can change by the time the `status` method returns. For example, an agent could be in the `agent_started` state when you call the `status` method, but moved to the `agent_done` state just after the `status` method returns.

## Methods and Features

The following table shows some of the important methods that belong to the `agent` class. For more information about all of the `agent` class methods, see [agent Class](../../parallel/concrt/reference/agent-class.md).

|Method|Description|
|------------|-----------------|
|[start](reference/agent-class.md#start)|Schedules the `agent` object for execution and sets it to the `agent_runnable` state.|
|[run](reference/agent-class.md#run)|Executes the task that is to be performed by the `agent` object.|
|[done](reference/agent-class.md#done)|Moves an agent to the `agent_done` state.|
|[cancel](../../parallel/concrt/cancellation-in-the-ppl.md#cancel)|If the agent was not started, this method cancels execution of the agent and sets it to the `agent_canceled` state.|
|[status](reference/agent-class.md#status)|Retrieves the current state of the `agent` object.|
|[wait](reference/agent-class.md#wait)|Waits for the `agent` object to enter the `agent_done` or `agent_canceled` state.|
|[wait_for_all](reference/agent-class.md#wait_for_all)|Waits for all provided `agent` objects to enter the `agent_done` or `agent_canceled` state.|
|[wait_for_one](reference/agent-class.md#wait_for_one)|Waits for at least one of the provided `agent` objects to enter the `agent_done` or `agent_canceled` state.|

After you create an agent object, call the [concurrency::agent::start](reference/agent-class.md#start) method to schedule it for execution. The runtime calls the `run` method after it schedules the agent and sets it to the `agent_runnable` state.

The runtime does not manage exceptions that are thrown by asynchronous agents. For more information about exception handling and agents, see [Exception Handling](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

## Example

For an example that shows how to create a basic agent-based application, see [Walkthrough: Creating an Agent-Based Application](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md).

## See also

[Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md)
