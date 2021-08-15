---
description: "Learn more about: &lt;shared_mutex>"
title: "&lt;shared_mutex&gt;"
ms.date: "03/27/2019"
f1_keywords: ["<shared_mutex>", "shared_mutex/std::swap", "shared_mutex/std::shared_lock", "shared_mutex/std::shared_lock::shared_lock", "shared_mutex/std::shared_lock::operator=", "shared_mutex/std::shared_lock::operator =", "shared_mutex/std::shared_lock::lock", "shared_mutex/std::shared_lock::try_lock", "shared_mutex/std::shared_lock::try_lock_for", "shared_mutex/std::shared_lock::try_lock_until", "shared_mutex/std::shared_lock::unlock", "shared_mutex/std::shared_lock::swap", "shared_mutex/std::shared_lock::release", "shared_mutex/std::shared_lock::owns_lock", "shared_mutex/std::shared_lock::operator bool", "shared_mutex/std::shared_lock::mutex", "shared_mutex/std::shared_mutex", "shared_mutex/std::shared_mutex::native_handle_type", "shared_mutex/std::shared_mutex::shared_mutex", "shared_mutex/std::shared_mutex::operator=", "shared_mutex/std::shared_mutex::operator =", "shared_mutex/std::shared_mutex::lock", "shared_mutex/std::shared_mutex::try_lock", "shared_mutex/std::shared_mutex::unlock", "shared_mutex/std::shared_mutex::lock_shared", "shared_mutex/std::shared_mutex::try_lock_shared", "shared_mutex/std::shared_mutex::unlock_shared", "shared_mutex/std::shared_mutex::native_handle", "shared_mutex/std::shared_timed_mutex", "shared_mutex/std::shared_timed_mutex::shared_timed_mutex", "shared_mutex/std::shared_timed_mutex::operator=", "shared_mutex/std::shared_timed_mutex::operator =", "shared_mutex/std::shared_timed_mutex::lock", "shared_mutex/std::shared_timed_mutex::try_lock", "shared_mutex/std::shared_timed_mutex::try_lock_for", "shared_mutex/std::shared_timed_mutex::try_lock_until", "shared_mutex/std::shared_timed_mutex::unlock", "shared_mutex/std::shared_timed_mutex::lock_shared", "shared_mutex/std::shared_timed_mutex::try_lock_shared", "shared_mutex/std::shared_timed_mutex::try_lock_shared_for", "shared_mutex/std::shared_timed_mutex::try_lock_shared_until", "shared_mutex/std::shared_timed_mutex::unlock_shared"]
ms.assetid: 0b37a97d-ee5d-4050-b29f-09db9f76beb3
---
# &lt;shared_mutex>

The &lt;shared_mutex> header provides synchronization primitives for protection of shared data that can be accessed by multiple threads. In addition to the exclusive access control provided by mutex classes, the shared mutex classes also allow shared ownership by multiple threads for non-exclusive access. Shared mutexes can be used to control resources that can be read by several threads without causing a race condition, but must be written exclusively by a single thread.

The header &lt;shared_mutex> defines the classes `shared_mutex` and `shared_timed_mutex`, the class template `shared_lock`, and the template function `swap` for shared mutex support.

|Classes|Description|
|-------------|-----------------|
|[shared_mutex Class](#class_shared_mutex)|A shared mutex type that can be locked exclusively by one agent or shared non-exclusively by multiple agents.|
|[shared_timed_mutex Class](#class_shared_timed_mutex)|A shared timed mutex type that can be locked exclusively by one agent or shared non-exclusively by multiple agents.|
|[shared_lock Class](#class_shared_lock)|A class template that wraps a shared mutex to support timed lock operations and non-exclusive sharing by multiple agents.|

|Functions|Description|
|---------------|-----------------|
|[swap](#function_swap)|Swaps the content of the shared mutex objects referenced by the function parameters.|

## Syntax

```cpp
namespace std {
    class shared_mutex;
    class shared_timed_mutex;
    template <class Mutex>
class shared_lock;
    template <class Mutex>
void swap(shared_lock<Mutex>& x, shared_lock<Mutex>& y) noexcept;
}
```

## Remarks

An instance of the class `shared_mutex` is a *shared mutex type*, a type that controls the shared ownership of a mutex within a scope. A shared mutex type meets all the requirements of a mutex type, as well as members to support shared non-exclusive ownership.

A shared mutex type supports the additional methods `lock_shared`, `unlock_shared`, and `try_lock_shared`:

- The `lock_shared` method blocks the calling thread until the thread obtains shared ownership of the mutex.

- The `unlock_shared` method releases shared ownership of the mutex held by the calling thread.

- The `try_lock_shared` method tries to obtain shared ownership of the mutex without blocking. Its return type is convertible to **`bool`** and is **`true`** if the method obtains ownership, but is otherwise **`false`**.

The class `shared_timed_mutex` is a *shared timed mutex type*, a type that meets the requirements of both a shared mutex type and a timed mutex type.

A shared timed mutex type supports the additional methods `try_lock_shared_for` and `try_lock_shared_until`:

- The `try_lock_shared_for` method attempts to obtain shared ownership of the mutex until the duration specified by the parameter has passed. If the duration is not positive, the method is equivalent to `try_lock_shared`. The method does not return within the duration specified unless shared ownership is obtained. Its return value is **`true`** if the method obtains ownership, but is otherwise **`false`**.

- The `try_lock_shared_until` method attempts to obtain shared ownership of the mutex until the specified absolute time has passed. If the specified time has already passed, the method is equivalent to `try_lock_shared`. The method does not return before the time specified unless shared ownership is obtained. Its return value is **`true`** if the method obtains ownership, but is otherwise **`false`**.

The `shared_lock` class template extends support for timed locking and transfer of ownership to a shared mutex. Ownership of the mutex may be obtained at or after construction, and may be transferred to another `shared_lock` object. Objects of type `shared_lock` can be moved, but not copied.

> [!WARNING]
> Beginning in Visual Studio 2015, the C++ Standard Library synchronization types are based on Windows synchronization primitives and no longer use ConcRT (except when the target platform is Windows XP). The types defined in &lt;shared_mutex> should not be used with any ConcRT types or functions.

## Classes

### <a name="class_shared_mutex"></a> shared_mutex Class

Class `shared_mutex` implements a non-recursive mutex with shared ownership semantics.

```cpp
class shared_mutex {
public:
   shared_mutex();
   ~shared_mutex();
   shared_mutex(const shared_mutex&) = delete;
   shared_mutex& operator=(const shared_mutex&) = delete;
   // Exclusive ownership
   void lock();
   // blocking
   bool try_lock();
   void unlock();
   // Shared ownership
   void lock_shared();
   // blocking
   bool try_lock_shared();
   void unlock_shared();
   // Getters
   typedef void** native_handle_type; // implementation defined
   native_handle_type native_handle();
   };
```

### <a name="class_shared_timed_mutex"></a> shared_timed_mutex Class

Class `shared_timed_mutex` implements a non-recursive mutex with shared ownership semantics that meets the requirements of a timed mutex type.

```cpp
class shared_timed_mutex {
public:
   shared_timed_mutex();
   ~shared_timed_mutex();
   shared_timed_mutex(const shared_timed_mutex&) = delete;
   shared_timed_mutex& operator=(const shared_timed_mutex&) = delete;
   // Exclusive ownership
   void lock();
   // blocking
   bool try_lock();
   template <class Rep, class Period>
   bool try_lock_for(const chrono::duration<Rep, Period>& rel_time);
   template <class Clock, class Duration>
   bool try_lock_until(const chrono::time_point<Clock, Duration>& abs_time);
   void unlock();
   // Shared ownership
   void lock_shared();
   // blocking
   bool try_lock_shared();
   template <class Rep, class Period>
   bool try_lock_shared_for(const chrono::duration<Rep, Period>& rel_time);
   template <class Clock, class Duration>
   bool try_lock_shared_until(const chrono::time_point<Clock, Duration>& abs_time);
   void unlock_shared();
   };
```

### <a name="class_shared_lock"></a> shared_lock Class

Class template `shared_lock` controls the shared ownership of a shared mutex object within a scope. The template parameter must be a shared mutex type.

```cpp
class shared_lock {
public:
   typedef Mutex mutex_type;
   shared_lock() noexcept;
   explicit shared_lock(mutex_type& m);
   // blocking
   shared_lock(mutex_type& m, defer_lock_t) noexcept;
   shared_lock(mutex_type& m, try_to_lock_t);
   shared_lock(mutex_type& m, adopt_lock_t);
   template <class Clock, class Duration>
   shared_lock(mutex_type& m,
   const chrono::time_point<Clock, Duration>& abs_time);
   template <class Rep, class Period>
   shared_lock(mutex_type& m,
   const chrono::duration<Rep, Period>& rel_time);
   ~shared_lock();
   shared_lock(shared_lock const&) = delete;
   shared_lock& operator=(shared_lock const&) = delete;
   shared_lock(shared_lock&& u) noexcept;
   shared_lock& operator=(shared_lock&& u) noexcept;
   void lock();
   // blocking
   bool try_lock();
   template <class Rep, class Period>
   bool try_lock_for(const chrono::duration<Rep, Period>& rel_time);
   template <class Clock, class Duration>
   bool try_lock_until(const chrono::time_point<Clock, Duration>& abs_time);
   void unlock();
   // Setters
   void swap(shared_lock& u) noexcept;
   mutex_type* release() noexcept;
   // Getters
   bool owns_lock() const noexcept;
   explicit operator bool () const noexcept;
   mutex_type* mutex() const noexcept;
private:
   mutex_type* pm; // exposition only
   bool owns; // exposition only
   };
```

## Functions

### <a name="function_swap"></a> swap

Swaps the `shared_lock` objects.

```cpp
template <class Mutex>
void swap(shared_lock<Mutex>& x, shared_lock<Mutex>& y) noexcept;
```

Exchanges the content of two `shared_lock` objects. Effectively the same as `x.swap(y)`.

## Requirements

**Header:** &lt;shared_mutex>

**Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[&lt;mutex>](../standard-library/mutex.md)
