---
description: "Learn more about: memory_resource Class"
title: "memory_resource Class"
ms.date: "11/04/2016"
f1_keywords: ["memory_resource/std::memory_resource"]
helpviewer_keywords: ["std::memory_resource"]
---
# memory_resource Class

## Syntax

```cpp
class memory_resource {
    static constexpr size_t max_align = alignof(max_align_t); // exposition only

    virtual ~memory_resource();
    void* allocate(size_t bytes, size_t alignment = max_align);
    void deallocate(void* p, size_t bytes, size_t alignment = max_align);
    bool is_equal(const memory_resource& other) const noexcept;
};
```
