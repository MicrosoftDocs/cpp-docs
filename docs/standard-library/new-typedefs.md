---
description: "Learn more about: &lt;new&gt; typedefs"
title: "&lt;new&gt; typedefs"
ms.date: "11/04/2016"
f1_keywords: ["new/std::new_handler"]
ms.assetid: aef01de1-06b5-4b6c-aebc-2c9f423d7e47
---
# &lt;new&gt; typedefs

## <a name="hardware_constructive_interference_size"></a> hardware_constructive_interference_size

```cpp
inline constexpr size_t hardware_constructive_interference_size = implementation-defined;
```

### Remarks

This number is the maximum recommended size of contiguous memory occupied by two objects accessed with temporal locality by concurrent threads. It shall be at least `alignof(max_align_t)`.

### Example

```cpp
struct together {
    atomic<int> dog;
    int puppy;
};

struct kennel {
    // Other data members...
    alignas(sizeof(together)) together pack;
    // Other data members...
};

static_assert(sizeof(together) <= hardware_constructive_interference_size);
```

## <a name="hardware_destructive_interference_size"></a> hardware_destructive_interference_size

```cpp
inline constexpr size_t hardware_destructive_interference_size = implementation-defined;
```

### Remarks

This number is the minimum recommended offset between two concurrently-accessed objects to avoid additional performance degradation due to contention introduced by the implementation. It shall be at least `alignof(max_align_t)`.

### Example

```cpp
struct keep_apart {
    alignas(hardware_destructive_interference_size) atomic<int> cat;
    alignas(hardware_destructive_interference_size) atomic<int> dog;
};
```

## <a name="new_handler"></a> new_handler

The type points to a function suitable for use as a new handler.

```cpp
typedef void (*new_handler)();
```

### Remarks

This type of handler function is called by **operator new** or `operator new[]` when they cannot satisfy a request for additional storage.

### Example

See [set_new_handler](../standard-library/new-functions.md#set_new_handler) for an example using `new_handler` as a return value.
