---
description: "Learn more about: agent Class"
title: "agent Class"
ms.date: "11/04/2016"
f1_keywords: ["agent", "AGENTS/concurrency::agent", "AGENTS/concurrency::agent::agent", "AGENTS/concurrency::agent::cancel", "AGENTS/concurrency::agent::start", "AGENTS/concurrency::agent::status", "AGENTS/concurrency::agent::status_port", "AGENTS/concurrency::agent::wait", "AGENTS/concurrency::agent::wait_for_all", "AGENTS/concurrency::agent::wait_for_one", "AGENTS/concurrency::agent::done", "AGENTS/concurrency::agent::run"]
helpviewer_keywords: ["agent class"]
ms.assetid: 1b09e3d2-5e37-4966-b016-907ef1512456
---
# agent Class

A class intended to be used as a base class for all independent agents. It is used to hide state from other agents and interact using message-passing.

## Syntax

```cpp
class agent;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[agent](#ctor)|Overloaded. Constructs an agent.|
|[~agent Destructor](#dtor)|Destroys the agent.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[cancel](#cancel)|Moves an agent from either the `agent_created` or `agent_runnable` states to the `agent_canceled` state.|
|[start](#start)|Moves an agent from the `agent_created` state to the `agent_runnable` state, and schedules it for execution.|
|[status](#status)|A synchronous source of status information from the agent.|
|[status_port](#status_port)|An asynchronous source of status information from the agent.|
|[wait](#wait)|Waits for an agent to complete its task.|
|[wait_for_all](#wait_for_all)|Waits for all of the specified agents to complete their tasks.|
|[wait_for_one](#wait_for_one)|Waits for any one of the specified agents to complete its task.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[done](#done)|Moves an agent into the `agent_done` state, indicating that the agent has completed.|
|[run](#run)|Represents the main task of an agent. `run` should be overridden in a derived class, and specifies what the agent should do after it has been started.|

## Remarks

For more information, see [Asynchronous Agents](../../../parallel/concrt/asynchronous-agents.md).

## Inheritance Hierarchy

`agent`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="ctor"></a> agent

Constructs an agent.

```cpp
agent();

agent(Scheduler& _PScheduler);

agent(ScheduleGroup& _PGroup);
```

### Parameters

*_PScheduler*<br/>
The `Scheduler` object within which the execution task of the agent is scheduled.

*_PGroup*<br/>
The `ScheduleGroup` object within which the execution task of the agent is scheduled. The `Scheduler` object used is implied by the schedule group.

### Remarks

The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PGroup` parameters.

## <a name="dtor"></a> ~agent

Destroys the agent.

```cpp
virtual ~agent();
```

### Remarks

It is an error to destroy an agent that is not in a terminal state (either `agent_done` or `agent_canceled`). This can be avoided by waiting for the agent to reach a terminal state in the destructor of a class that inherits from the `agent` class.

## <a name="cancel"></a> cancel

Moves an agent from either the `agent_created` or `agent_runnable` states to the `agent_canceled` state.

```cpp
bool cancel();
```

### Return Value

**`true`** if the agent was canceled, **`false`** otherwise. An agent cannot be canceled if it has already started running or has already completed.

## <a name="done"></a> done

Moves an agent into the `agent_done` state, indicating that the agent has completed.

```cpp
bool done();
```

### Return Value

**`true`** if the agent is moved to the `agent_done` state, **`false`** otherwise. An agent that has been canceled cannot be moved to the `agent_done` state.

### Remarks

This method should be called at the end of the `run` method, when you know the execution of your agent has completed.

## <a name="run"></a> run

Represents the main task of an agent. `run` should be overridden in a derived class, and specifies what the agent should do after it has been started.

```cpp
virtual void run() = 0;
```

### Remarks

The agent status is changed to `agent_started` right before this method is invoked. The method should invoke `done` on the agent with an appropriate status before returning, and may not throw any exceptions.

## <a name="start"></a> start

Moves an agent from the `agent_created` state to the `agent_runnable` state, and schedules it for execution.

```cpp
bool start();
```

### Return Value

**`true`** if the agent started correctly, **`false`** otherwise. An agent that has been canceled cannot be started.

## <a name="status"></a> status

A synchronous source of status information from the agent.

```cpp
agent_status status();
```

### Return Value

Returns the current state of the agent. Note that this returned state could change immediately after being returned.

## <a name="status_port"></a> status_port

An asynchronous source of status information from the agent.

```cpp
ISource<agent_status>* status_port();
```

### Return Value

Returns a message source that can send messages about the current state of the agent.

## <a name="wait"></a> wait

Waits for an agent to complete its task.

```cpp
static agent_status __cdecl wait(
    _Inout_ agent* _PAgent,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```

### Parameters

*_PAgent*<br/>
A pointer to the agent to wait for.

*_Timeout*<br/>
The maximum time for which to wait, in milliseconds.

### Return Value

The `agent_status` of the agent when the wait completes. This can either be `agent_canceled` or `agent_done`.

### Remarks

An agent task is completed when the agent enters the `agent_canceled` or `agent_done` states.

If the parameter `_Timeout` has a value other than the constant `COOPERATIVE_TIMEOUT_INFINITE`, the exception [operation_timed_out](operation-timed-out-class.md) is thrown if the specified amount of time expires before the agent has completed its task.

## <a name="wait_for_all"></a> wait_for_all

Waits for all of the specified agents to complete their tasks.

```cpp
static void __cdecl wait_for_all(
    size_t count,
    _In_reads_(count) agent** _PAgents,
    _Out_writes_opt_(count) agent_status* _PStatus = NULL,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```

### Parameters

*count*<br/>
The number of agent pointers present in the array `_PAgents`.

*_PAgents*<br/>
An array of pointers to the agents to wait for.

*_PStatus*<br/>
A pointer to an array of agent statuses. Each status value will represent the status of the corresponding agent when the method returns.

*_Timeout*<br/>
The maximum time for which to wait, in milliseconds.

### Remarks

An agent task is completed when the agent enters the `agent_canceled` or `agent_done` states.

If the parameter `_Timeout` has a value other than the constant `COOPERATIVE_TIMEOUT_INFINITE`, the exception [operation_timed_out](operation-timed-out-class.md) is thrown if the specified amount of time expires before the agent has completed its task.

## <a name="wait_for_one"></a> wait_for_one

Waits for any one of the specified agents to complete its task.

```cpp
static void __cdecl wait_for_one(
    size_t count,
    _In_reads_(count) agent** _PAgents,
    agent_status& _Status,
    size_t& _Index,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```

### Parameters

*count*<br/>
The number of agent pointers present in the array `_PAgents`.

*_PAgents*<br/>
An array of pointers to the agents to wait for.

*_Status*<br/>
A reference to a variable where the agent status will be placed.

*_Index*<br/>
A reference to a variable where the agent index will be placed.

*_Timeout*<br/>
The maximum time for which to wait, in milliseconds.

### Remarks

An agent task is completed when the agent enters the `agent_canceled` or `agent_done` states.

If the parameter `_Timeout` has a value other than the constant `COOPERATIVE_TIMEOUT_INFINITE`, the exception [operation_timed_out](operation-timed-out-class.md) is thrown if the specified amount of time expires before the agent has completed its task.

## See also

[concurrency Namespace](concurrency-namespace.md)
