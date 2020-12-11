---
description: "Learn more about: How to: Create Agents that Use Specific Scheduler Policies"
title: "How to: Create Agents that Use Specific Scheduler Policies"
ms.date: "11/04/2016"
helpviewer_keywords: ["scheduler policies, agents [Concurrency Runtime]", "creating agents that use specific policies [Concurrency Runtime]"]
ms.assetid: 46a3e265-0777-4ec3-a142-967bafc49d67
---
# How to: Create Agents that Use Specific Scheduler Policies

An agent is an application component that works asynchronously with other components to solve larger computing tasks. An agent typically has a set life cycle and maintains state.

Every agent can have unique application requirements. For example, an agent that enables user interaction (either retrieving input or displaying output) might require higher priority access to computing resources. Scheduler policies let you control the strategy that the scheduler uses when it manages tasks. This topic demonstrates how to create agents that use specific scheduler policies.

For a basic example that uses custom scheduler policies together with asynchronous message blocks, see [How to: Specify Specific Scheduler Policies](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md).

This topic uses functionality from the Asynchronous Agents Library, such as agents, message blocks, and message-passing functions, to perform work. For more information about the Asynchronous Agents Library, see [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md).

## Example

The following example defines two classes that derive from [concurrency::agent](../../parallel/concrt/reference/agent-class.md): `permutor` and `printer`. The `permutor` class computes all permutations of a given input string. The `printer` class prints progress messages to the console. The `permutor` class performs a computationally-intensive operation, which might use all available computing resources. To be useful, the `printer` class must print each progress message in a timely manner.

To provide the `printer` class fair access to computing resources, this example uses steps that are described in [How to: Manage a Scheduler Instance](../../parallel/concrt/how-to-manage-a-scheduler-instance.md) to create a scheduler instance that has a custom policy. The custom policy specifies the thread priority to be the highest priority class.

To illustrate the benefits of using a scheduler that has a custom policy, this example performs the overall task two times. The example first uses the default scheduler to schedule both tasks. The example then uses the default scheduler to schedule the `permutor` object, and a scheduler that has a custom policy to schedule the `printer` object.

[!code-cpp[concrt-permute-strings#1](../../parallel/concrt/codesnippet/cpp/how-to-create-agents-that-use-specific-scheduler-policies_1.cpp)]

This example produces the following output.

```Output
With default scheduler:
Computing all permutations of 'Grapefruit'...
100% complete...

With higher context priority:
Computing all permutations of 'Grapefruit'...
100% complete...
```

Although both sets of tasks produce the same result, the version that uses a custom policy enables the `printer` object to run at an elevated priority so that it behaves more responsively.

## Compiling the Code

Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `permute-strings.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc permute-strings.cpp**

## See also

[Scheduler Policies](../../parallel/concrt/scheduler-policies.md)<br/>
[Asynchronous Agents](../../parallel/concrt/asynchronous-agents.md)
