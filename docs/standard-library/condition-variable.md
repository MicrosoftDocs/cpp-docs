---
description: "Learn more about: &lt;condition_variable&gt;"
title: "&lt;condition_variable&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<condition_variable>"]
ms.assetid: 8567f7cc-20bd-42a7-9137-87c46f878009
---
# &lt;condition_variable&gt;

Defines the classes [condition_variable](../standard-library/condition-variable-class.md) and [condition_variable_any](../standard-library/condition-variable-any-class.md) that are used to create objects that wait for a condition to become true.

This header uses Concurrency Runtime (ConcRT) so that you can use it together with other ConcRT mechanisms. For more information about ConcRT, see [Concurrency Runtime](../parallel/concrt/concurrency-runtime.md).

## Requirements

**Header:** \<condition_variable>

**Namespace:** std

> [!NOTE]
> In code that is compiled by using **/clr**, this header is blocked.

### Remarks

Code that waits for a condition variable must also use a `mutex`. A calling thread must lock the `mutex` before it calls the functions that wait for the condition variable. The `mutex` is then locked when the called function returns. The `mutex` is not locked while the thread waits for the condition to become true. So that there are no unpredictable results, each thread that waits for a condition variable must use the same `mutex` object.

Objects of type `condition_variable_any` can be used with a mutex of any type. The type of the mutex that is used does not have to provide the `try_lock` method. Objects of type `condition_variable` can only be used with a mutex of type `unique_lock<mutex>`. Objects of this type may be faster than objects of type `condition_variable_any<unique_lock<mutex>>`.

To wait for an event, first lock the mutex, and then call one of the `wait` methods on the condition variable. The `wait` call blocks until another thread signals the condition variable.

*Spurious wakeups* occur when threads that are waiting for condition variables become unblocked without appropriate notifications. To recognize such spurious wakeups, code that waits for a condition to become true should explicitly check that condition when the code returns from a wait function. This is usually done by using a loop; you can use `wait(unique_lock<mutex>& lock, Predicate pred)` to perform this loop for you.

```cpp
while (condition is false)
    wait for condition variable;
```

The `condition_variable_any` and `condition_variable` classes each have three methods that wait for a condition.

- `wait` waits for an unbounded time period.

- `wait_until` waits until a specified `time`.

- `wait_for` waits for a specified `time interval`.

Each of these methods has two overloaded versions. One just waits and can wake up spuriously. The other takes an additional template argument that defines a predicate. The method does not return until the predicate is **`true`**.

Each class also has two methods that are used to notify a condition variable that its condition is **`true`**.

- `notify_one` wakes up one of the threads that is waiting for the condition variable.

- `notify_all` wakes up all of the threads that are waiting for the condition variable.

## Functions and Enums

```cpp
void notify_all_at_thread_exit(condition_variable& cond, unique_lock<mutex> lk);

enum class cv_status { no_timeout, timeout };
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[condition_variable Class](../standard-library/condition-variable-class.md)\
[condition_variable_any Class](../standard-library/condition-variable-any-class.md)
