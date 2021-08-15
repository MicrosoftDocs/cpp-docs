---
description: "Learn more about: How to: Select Among Completed Tasks"
title: "How to: Select Among Completed Tasks"
ms.date: "11/04/2016"
helpviewer_keywords: ["selecting among completed tasks [Concurrency Runtime]", "completed tasks, selecting among [Concurrency Runtime]"]
ms.assetid: c8ccc160-043f-4599-847b-32ed270bb257
---
# How to: Select Among Completed Tasks

This example shows how to use the [concurrency::choice](../../parallel/concrt/reference/choice-class.md) and [concurrency::join](../../parallel/concrt/reference/join-class.md) classes to select the first task to complete a search algorithm.

## Example

The following example performs two search algorithms in parallel and selects the first algorithm to complete. This example defines the `employee` type, which holds a numeric identifier and a salary for an employee. The `find_employee` function finds the first employee that has the provided identifier or the provided salary. The `find_employee` function also handles the case where no employee has the provided identifier or salary. The `wmain` function creates an array of `employee` objects and searches for several identifier and salary values.

The example uses a `choice` object to select among the following cases:

1. An employee who has the provided identifier exists.

1. An employee who has the provided salary exists.

1. No employee who has the provided identifier or salary exists.

For the first two cases, the example uses a [concurrency::single_assignment](../../parallel/concrt/reference/single-assignment-class.md) object to hold the identifier and another `single_assignment` object to hold the salary. The example uses a `join` object for the third case. The `join` object is composed of two additional `single_assignment` objects, one for the case where no employee who has the provided identifier exists, and one for the case where no employee who has the provided salary exists. The `join` object sends a message when each of its members receives a message. In this example, the `join` object sends a message when no employee who has the provided identifier or salary exists.

The example uses a [concurrency::structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) object to run both search algorithms in parallel. Each search task writes to one of the `single_assignment` objects to indicate whether the given employee exists. The example uses the [concurrency::receive](reference/concurrency-namespace-functions.md#receive) function to obtain the index of the first buffer that contains a message and a **`switch`** block to print the result.

[!code-cpp[concrt-find-employee#1](../../parallel/concrt/codesnippet/cpp/how-to-select-among-completed-tasks_1.cpp)]

This example produces the following output.

```Output
Employee with id 14758 has salary 27780.00.
Employee with salary 29150.00 has id 84345.
Employee with id 61935 has salary 29905.00.
No employee has id 899 or salary 31223.00.
```

This example uses the [concurrency::make_choice](reference/concurrency-namespace-functions.md#make_choice) helper function to create `choice` objects and the [concurrency::make_join](reference/concurrency-namespace-functions.md#make_join) helper function to create `join` objects.

## Compiling the Code

Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `find-employee.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc find-employee.cpp**

## See also

[Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Message Passing Functions](../../parallel/concrt/message-passing-functions.md)<br/>
[choice Class](../../parallel/concrt/reference/choice-class.md)<br/>
[join Class](../../parallel/concrt/reference/join-class.md)
