---
title: "scoped_lock Class"
description: "Learn more about: scoped_lock Class"
ms.date: 11/04/2016
f1_keywords: ["mutex/std::scoped_lock"]
---
# scoped_lock Class

The `scoped_lock` class is an RAII (Resource Acquisition Is Initialization) wrapper that acquires one or more mutexes on construction and releases them on destruction. When multiple mutexes are provided, they are locked using a deadlock-avoidance algorithm (equivalent to `std::lock`), which prevents deadlocks regardless of the order in which different threads lock the same set of mutexes. Introduced in C++17.

## Syntax

```cpp
template <class... MutexTypes>
class scoped_lock {
    using mutex_type = Mutex; // If MutexTypes... consists of the single type Mutex
    explicit scoped_lock(MutexTypes&... m);
    explicit scoped_lock(MutexTypes&... m, adopt_lock_t);
    ~scoped_lock();
    scoped_lock(const scoped_lock&) = delete;
    scoped_lock& operator=(const scoped_lock&) = delete;
};
```

## Remarks

The `scoped_lock` class manages locking and unlocking of one or more mutexes throughout a scope. When you create a `scoped_lock` object, it acquires ownership of the mutexes passed to it. When the `scoped_lock` object is destroyed (for example, when it goes out of scope), the mutexes are released. This ensures that mutexes are always properly released, even if an exception is thrown.

If you need to lock only a single mutex, consider using [`lock_guard`](lock-guard-class.md) or [`unique_lock`](unique-lock-class.md). Use `scoped_lock` when you need to lock multiple mutexes simultaneously without risk of deadlock.

### Constructors

| Constructor | Description |
|---|---|
| `scoped_lock(MutexTypes&... m)` | Constructs a `scoped_lock` object and locks all the supplied mutexes. If multiple mutexes are supplied, they're locked using a deadlock-avoidance algorithm. |
| `scoped_lock(MutexTypes&... m, adopt_lock_t)` | Constructs a `scoped_lock` object and adopts ownership of the supplied mutexes, which must already be locked by the calling thread. |

### Destructor

| Destructor | Description |
|---|---|
| `~scoped_lock()` | Destroys the `scoped_lock` object and releases all owned mutexes. |

## Example

```cpp
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

std::mutex mutex1;
std::mutex mutex2;
int shared_data1 = 0;
int shared_data2 = 0;

void update_both(int iterations)
{
    for (int i = 0; i < iterations; ++i)
    {
        // Lock both mutexes simultaneously without risk of deadlock
        std::scoped_lock lock(mutex1, mutex2);
        ++shared_data1;
        ++shared_data2;
    }
}

int main()
{
    std::vector<std::thread> threads;
    for (int i = 0; i < 4; ++i)
    {
        threads.emplace_back(update_both, 1000);
    }

    for (auto& t : threads)
    {
        t.join();
    }

    std::cout << "shared_data1: " << shared_data1 << '\n';
    std::cout << "shared_data2: " << shared_data2 << '\n';
    // Output:
    // shared_data1: 4000
    // shared_data2: 4000
}
```

## Requirements

**Header:** \<mutex>

**Namespace:** std

## See also

[Header files reference](../standard-library/header-files-reference.md)\
[`lock_guard` Class](lock-guard-class.md)\
[`unique_lock` Class](unique-lock-class.md)\
[`<mutex>`](mutex.md)
