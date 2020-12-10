---
description: "Learn more about: scoped_lock Class"
title: "scoped_lock Class"
ms.date: "11/04/2016"
f1_keywords: ["mutex/std::scoped_lock"]
---
# scoped_lock Class

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
}
```
