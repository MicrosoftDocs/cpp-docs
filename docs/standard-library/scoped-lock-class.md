---
title: "scoped_lock Class"
description: "Learn more about: scoped_lock Class"
ms.date: 04/10/2026
f1_keywords: ["mutex/std::scoped_lock"]
ai-usage: ai-generated
---
# scoped_lock Class

The `scoped_lock` class acquires one or more mutexes on construction and releases them on destruction. When multiple mutexes are provided, a deadlock-avoidance algorithm (equivalent to `std::lock`) is used to prevent deadlocks. Introduced in C++17.

## Syntax

```cpp

// Single mutex type version
template <class _Mutex>
class _NODISCARD_LOCK scoped_lock<_Mutex> {
public:
    using mutex_type = _Mutex;

    explicit scoped_lock(_Mutex& _Mtx) : _MyMutex(_Mtx) { // construct and lock
        _MyMutex.lock();
    }

    explicit scoped_lock(adopt_lock_t, _Mutex& _Mtx) noexcept
        : _MyMutex(_Mtx) {} // construct but don't lock

    ~scoped_lock() noexcept {
        _MyMutex.unlock();
    }

    scoped_lock(const scoped_lock&)            = delete; // prevent creating a new scoped_lock by copying an existing one
    scoped_lock& operator=(const scoped_lock&) = delete; // prevent assigning one scoped_lock to another
};

// multiple mutex types version
template <class... MutexTypes>
class scoped_lock {
    explicit scoped_lock(MutexTypes&... m);
    explicit scoped_lock(MutexTypes&... m, adopt_lock_t);
    ~scoped_lock();
    scoped_lock(const scoped_lock&) = delete; // prevent creating a new scoped_lock by copying an existing one
    scoped_lock& operator=(const scoped_lock&) = delete; // prevent assigning one scoped_lock to another
};
```

## Remarks

`adopt_lock_t` is a tag type that indicates the `scoped_lock` constructor should assume ownership of mutexes that are already locked by the calling thread. This allows you to create a `scoped_lock` object without locking the mutexes again, which can be useful in certain scenarios where you have already acquired the locks and want to manage their lifetime with a `scoped_lock`.

The `scoped_lock` class manages locking and unlocking of one or more mutexes throughout a scope. When you create a `scoped_lock` object, it acquires ownership of the mutexes passed to it. When the `scoped_lock` object is destroyed (for example, when it goes out of scope), the mutexes are released. This ensures that mutexes are always properly released, even if an exception is thrown.

If you need to lock only a single mutex, consider using [`lock_guard`](lock-guard-class.md) or [`unique_lock`](unique-lock-class.md). Use `scoped_lock` when you need to lock multiple mutexes simultaneously without risk of deadlock.

The `scoped_lock` class isn't copyable.

If only one mutex type is passed to `scoped_lock`, the `scoped_lock` provides a type alias named `mutex_type` that refers to that one mutex type. However, if you create a `scoped_lock` with two or more mutex types, the `mutex_type` alias does not exist because `mutex_type` only makes sense when there is a single underlying mutex type. With multiple mutexes, there isn’t one mutex type to expose.

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

**Header:** `<mutex>`

**Namespace:** `std`

## See also

[`lock_guard` class](lock-guard-class.md)\
[`unique_lock` class](unique-lock-class.md)\
[`<mutex>`](mutex.md)
