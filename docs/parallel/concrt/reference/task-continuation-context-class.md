---
description: "Learn more about: task_continuation_context Class"
title: "task_continuation_context Class"
ms.date: "11/04/2016"
f1_keywords: ["task_continuation_context", "PPLTASKS/concurrency::task_continuation_context", "PPLTASKS/concurrency::task_continuation_context::get_current_winrt_context", "PPLTASKS/concurrency::task_continuation_context::use_arbitrary", "PPLTASKS/concurrency::task_continuation_context::use_current", "PPLTASKS/concurrency::task_continuation_context::use_default", "PPLTASKS/concurrency::task_continuation_context::use_synchronous_execution"]
helpviewer_keywords: ["task_continuation_context class"]
ms.assetid: 1fb5a76a-3682-45c2-a615-8b6b527741f0
---
# task_continuation_context Class

The `task_continuation_context` class allows you to specify where you would like a continuation to be executed. It is only useful to use this class from a Windows Runtime app. For non-Windows Runtime apps, the task continuation's execution context is determined by the runtime, and not configurable.

## Syntax

```cpp
class task_continuation_context : public details::_ContextCallback;
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[get_current_winrt_context](#get_current_winrt_context)|Returns a task continuation context object that represents the current winrt thread context.|
|[use_arbitrary](#use_arbitrary)|Creates a task continuation context which allows the Runtime to choose the execution context for a continuation.|
|[use_current](#use_current)|Returns a task continuation context object that represents the current execution context.|
|[use_default](#use_default)|Creates the default task continuation context.|
|[use_synchronous_execution](#use_synchronous_execution)|Returns a task continuation context object that represents the synchronous execution context.|

## Inheritance Hierarchy

`_ContextCallback`

`task_continuation_context`

## Requirements

**Header:** ppltasks.h

**Namespace:** concurrency

## <a name="get_current_winrt_context"></a> get_current_winrt_context

Returns a task continuation context object that represents the current WinRT thread context.

### Syntax

```cpp
static task_continuation_context get_current_winrt_context();
```

### Return Value

The current Windows Runtime thread context. Returns an empty task_continuation_context if called from a non-Windows Runtime context.

### Remarks

The `get_current_winrt_context` method captures the caller's Windows Runtime thread context. It returns an empty context to non-Windows Runtime callers.

The value returned by `get_current_winrt_context` can be used to indicate to the Runtime that the continuation should execute in the apartment model of the captured context (STA vs MTA), regardless of whether the antecedent task is apartment aware. An apartment aware task is a task that unwraps a Windows Runtime `IAsyncInfo` interface, or a task that is descended from such a task.

This method is similar to the  `use_current` method, but it is also available to native C++ code without C++/CX extension support. It is intended for use by advanced users writing C++/CX-agnostic library code for both native and Windows Runtime callers. Unless you need this functionality, we recommend the `use_current` method, which is only available to C++/CX clients.

## <a name="use_arbitrary"></a> use_arbitrary

Creates a task continuation context which allows the Runtime to choose the execution context for a continuation.

### Syntax

```cpp
static task_continuation_context use_arbitrary();
```

### Return Value

A task continuation context that represents an arbitrary location.

### Remarks

When this continuation context is used the continuation will execute in a context the runtime chooses even if the antecedent task is apartment aware.

`use_arbitrary` can be used to turn off the default behavior for a continuation on an apartment aware task created in an STA.

This method is only available to Windows Runtime apps.

## <a name="use_current"></a> use_current

Returns a task continuation context object that represents the current execution context.

```cpp
static task_continuation_context use_current();
```

### Return Value

The current execution context.

### Remarks

This method captures the caller's Windows Runtime context so that continuations can be executed in the right apartment.

The value returned by `use_current` can be used to indicate to the Runtime that the continuation should execute in the captured context (STA vs MTA) regardless of whether or not the antecedent task is apartment aware. An apartment aware task is a task that unwraps a Windows Runtime `IAsyncInfo` interface, or a task that is descended from such a task.

This method is only available to Windows Runtime apps.

## <a name="use_default"></a> use_default

Creates the default task continuation context.

```cpp
static task_continuation_context use_default();
```

### Return Value

The default continuation context.

### Remarks

The default context is used if you don't specify a continuation context when you call the `then` method. In Windows applications for Windows 7 and below, as well as desktop applications on Windows 8 and higher, the runtime determines where task continuations will execute. However, in a Windows Runtime app, the default continuation context for a continuation on an apartment aware task is the apartment where `then` is invoked.

An apartment aware task is a task that unwraps a Windows Runtime `IAsyncInfo` interface, or a task that is descended from such a task. Therefore, if you schedule a continuation on an apartment aware task in a Windows Runtime STA, the continuation will execute in that STA.

A continuation on a non-apartment aware task will execute in a context the Runtime chooses.

## <a name="use_synchronous_execution"></a> task_continuation_context::use_synchronous_execution

Returns a task continuation context object that represents the synchronous execution context.

### Syntax

```cpp
static task_continuation_context use_synchronous_execution();
```

### Return Value

The synchronous execution context.

### Remarks

The `use_synchronous_execution` method forces the continuation task to run synchronously on the context, causing its antecedent task's completion.

If the antecedent task has already completed when the continuation is attached, the continuation runs synchronously on the context that attaches the continuation.

## See also

[concurrency Namespace](concurrency-namespace.md)
