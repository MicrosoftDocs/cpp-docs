---
description: "Learn more about: &lt;future&gt;"
title: "&lt;future&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<future>"]
ms.assetid: 2f5830fc-455d-44f9-9e3d-94ea051596a2
---
# &lt;future&gt;

Include the standard header \<future> to define class templates and supporting templates that simplify running a function—possibly in a separate thread—and retrieving its result. The result is either the value that is returned by the function or an exception that is emitted by the function but is not caught in the function.

This header uses Concurrency Runtime (ConcRT) so that you can use it together with other ConcRT mechanisms. For more information about ConcRT, see [Concurrency Runtime](../parallel/concrt/concurrency-runtime.md).

## Syntax

```cpp
#include <future>
```

## Remarks

> [!NOTE]
> In code that is compiled by using **/clr**, this header is blocked.

An *asynchronous provider* stores the result of a function call. An *asynchronous return object* is used to retrieve the result of a function call. An *associated asynchronous state* provides communication between an asynchronous provider and one or more asynchronous return objects.

A program does not directly create any associated asynchronous state objects. The program creates an asynchronous provider whenever it needs one and from that it creates an asynchronous return object that shares its associated asynchronous state with the provider. Asynchronous providers and asynchronous return objects manage the objects that hold their shared associated asynchronous state. When the last object that references the associated asynchronous state releases it, the object that holds the associated asynchronous state is destroyed.

An asynchronous provider or an asynchronous return object that has no associated asynchronous state is *empty*.

An associated asynchronous state is *ready* only if its asynchronous provider has stored a return value or stored an exception.

The template function `async` and the class templates `promise` and `packaged_task` are asynchronous providers. The class templates `future` and `shared_future` describe asynchronous return objects.

Each of the class templates `promise`, `future`, and `shared_future` has a specialization for the type **`void`** and a partial specialization for storing and retrieving a value by reference. These specializations differ from the primary template only in the signatures and semantics of the functions that store and retrieve the returned value.

The class templates `future` and `shared_future` never block in their destructors, except in one case that's preserved for backward compatibility: Unlike all other futures, for a `future`—or the last `shared_future`—that's attached to a task started with `std::async`, the destructor blocks if the task has not completed; that is, it blocks if this thread did not yet call `.get()` or `.wait()` and the task is still running. The following usability note has been added to the description of `std::async` in the draft standard: "[Note: If a future obtained from std::async is moved outside the local scope, other code that uses the future must be aware that the future’s destructor may block for the shared state to become ready.—end note]" In all other cases, `future` and `shared_future` destructors are required and are guaranteed to never block.

## Members

### Classes

|Name|Description|
|----------|-----------------|
|[future Class](../standard-library/future-class.md)|Describes an asynchronous return object.|
|[future_error Class](../standard-library/future-error-class.md)|Describes an exception object that can be thrown by methods of types that manage `future` objects.|
|[packaged_task Class](../standard-library/packaged-task-class.md)|Describes an asynchronous provider that is a call wrapper and whose call signature is `Ty(ArgTypes...)`. Its associated asynchronous state holds a copy of its callable object in addition to the potential result.|
|[promise Class](../standard-library/promise-class.md)|Describes an asynchronous provider.|
|[shared_future Class](../standard-library/shared-future-class.md)|Describes an asynchronous return object. In contrast with a `future` object, an asynchronous provider can be associated with any number of `shared_future` objects.|

### Structures

|Name|Description|
|----------|-----------------|
|[is_error_code_enum Structure](../standard-library/is-error-code-enum-structure.md)|Specialization that indicates that `future_errc` is suitable for storing an `error_code`.|
|[uses_allocator Structure](../standard-library/uses-allocator-structure.md)|Specialization that always holds true.|

### Functions

|Name|Description|
|----------|-----------------|
|[async](../standard-library/future-functions.md#async)|Represents an asynchronous provider.|
|[future_category](../standard-library/future-functions.md#future_category)|Returns a reference to the `error_category` object that characterizes errors that are associated with `future` objects.|
|[make_error_code](../standard-library/future-functions.md#make_error_code)|Creates an `error_code` that has the `error_category` object that characterizes `future` errors.|
|[make_error_condition](../standard-library/future-functions.md#make_error_condition)|Creates an `error_condition` that has the `error_category` object that characterizes `future` errors.|
|[swap](../standard-library/future-functions.md#swap)|Exchanges the associated asynchronous state of one `promise` object with that of another.|

### Enumerations

|Name|Description|
|----------|-----------------|
|[future_errc](../standard-library/future-enums.md#future_errc)|Supplies symbolic names for the errors that are reported by the `future_error` class.|
|[future_status](../standard-library/future-enums.md#future_status)|Supplies symbolic names for the reasons that a timed wait function can return.|
|[launch](../standard-library/future-enums.md#launch)|Represents a bitmask type that describes the possible modes for the template function `async`.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
