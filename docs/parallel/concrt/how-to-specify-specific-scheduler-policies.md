---
description: "Learn more about: How to: Specify Specific Scheduler Policies"
title: "How to: Specify Specific Scheduler Policies"
ms.date: "11/04/2016"
helpviewer_keywords: ["specifying scheduler policies [Concurrency Runtime]", "scheduler policies, specifying [Concurrency Runtime]"]
ms.assetid: 9c5149f9-ac34-4ff3-9e79-0bad103e4e6b
---
# How to: Specify Specific Scheduler Policies

Scheduler policies let you control the strategy that the scheduler uses when it manages tasks. This topic shows how to use a scheduler policy to increase the thread priority of a task that prints a progress indicator to the console.

For an example that uses custom scheduler policies together with asynchronous agents, see [How to: Create Agents that Use Specific Scheduler Policies](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md).

## Example

The following example performs two tasks in parallel. The first task computes the n<sup>th</sup> Fibonacci number. The second task prints a progress indicator to the console.

The first task uses recursive decomposition to compute the Fibonacci number. That is, each task recursively creates subtasks to compute the overall result. A task that uses recursive decomposition might use all available resources, and thereby starve other tasks. In this example, the task that prints the progress indicator might not receive timely access to computing resources.

To provide the task that prints a progress message fair access to computing resources, this example uses steps that are described in [How to: Manage a Scheduler Instance](../../parallel/concrt/how-to-manage-a-scheduler-instance.md) to create a scheduler instance that has a custom policy. The custom policy specifies the thread priority to be the highest priority class.

This example uses the [concurrency::call](../../parallel/concrt/reference/call-class.md) and [concurrency::timer](../../parallel/concrt/reference/timer-class.md) classes to print the progress indicator. These classes have versions of their constructors that take a reference to a [concurrency::Scheduler](../../parallel/concrt/reference/scheduler-class.md) object that schedules them. The example uses the default scheduler to schedule the task that computes the Fibonacci number and the scheduler instance to schedule the task that prints the progress indicator.

To illustrate the benefits of using a scheduler that has a custom policy, this example performs the overall task two times. The example first uses the default scheduler to schedule both tasks. The example then uses the default scheduler to schedule the first task, and a scheduler that has a custom policy to schedule the second task.

[!code-cpp[concrt-scheduler-policy#1](../../parallel/concrt/codesnippet/cpp/how-to-specify-specific-scheduler-policies_1.cpp)]

This example produces the following output.

```Output
Default scheduler:
...........................................................................done
Scheduler that has a custom policy:
...........................................................................done
```

Although both sets of tasks produce the same result, the version that uses a custom policy enables the task that prints the progress indicator to run at an elevated priority so that it behaves more responsively.

## Compiling the Code

Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `scheduler-policy.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc scheduler-policy.cpp**

## See also

[Scheduler Policies](../../parallel/concrt/scheduler-policies.md)<br/>
[How to: Manage a Scheduler Instance](../../parallel/concrt/how-to-manage-a-scheduler-instance.md)<br/>
[How to: Create Agents that Use Specific Scheduler Policies](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)
