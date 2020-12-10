---
description: "Learn more about: &lt;thread&gt;"
title: "&lt;thread&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<thread>"]
ms.assetid: 0c858405-4efb-449d-bf76-70d3693c9234
---
# &lt;thread&gt;

Include the standard header \<thread> to define the class `thread` and various supporting functions.

## Syntax

```cpp
#include <thread>
```

## Remarks

> [!NOTE]
> In code that is compiled by using **/clr**, this header is blocked.

The `__STDCPP_THREADS__` macro is defined as a nonzero value to indicate that threads are supported by this header.

## Members

### Public Classes

|Name|Description|
|----------|-----------------|
|[thread Class](../standard-library/thread-class.md)|Defines an object that is used to observe and manage a thread of execution in an application.|

### Public Structures

|Name|Description|
|----------|-----------------|
|[hash Structure (C++ Standard Library)](../standard-library/hash-structure-stl.md)|Defines a member function that returns a value that is uniquely determined by a `thread::id`. The member function defines a [hash](../standard-library/hash-class.md) function that is suitable for mapping values of type `thread::id` to a distribution of index values.|

### Public Functions

|Name|Description|
|----------|-----------------|
|[get_id](../standard-library/thread-functions.md#get_id)|Uniquely identifies the current thread of execution.|
|[sleep_for](../standard-library/thread-functions.md#sleep_for)|Blocks the calling thread.|
|[sleep_until](../standard-library/thread-functions.md#sleep_until)|Blocks the calling thread at least until the specified time.|
|[swap](../standard-library/thread-functions.md#swap)|Exchanges the states of two `thread` objects.|
|[yield](../standard-library/thread-functions.md#yield)|Signals the operating system to run other threads, even if the current thread would ordinarily continue to run.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator>= Operator](../standard-library/thread-operators.md#op_gt_eq)|Determines whether one `thread::id` object is greater than or equal to another.|
|[operator> Operator](../standard-library/thread-operators.md#op_gt)|Determines whether one `thread::id` object is greater than another.|
|[operator<= Operator](../standard-library/thread-operators.md#op_lt_eq)|Determines whether one `thread::id` object is less than or equal to another.|
|[operator< Operator](../standard-library/thread-operators.md#op_lt)|Determines whether one `thread::id` object is less than another.|
|[operator!= Operator](../standard-library/thread-operators.md#op_neq)|Compares two `thread::id` objects for inequality.|
|[operator== Operator](../standard-library/thread-operators.md#op_eq_eq)|Compares two `thread::id` objects for equality.|
|[operator<< Operator](../standard-library/thread-operators.md#op_lt_lt)|Inserts a text representation of a `thread::id` object into a stream.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
