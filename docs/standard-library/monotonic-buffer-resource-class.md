---
description: "Learn more about: monotonic_buffer_resource Class"
title: "monotonic_buffer_resource Class"
ms.date: "11/04/2016"
f1_keywords: ["memory_resource/std::monotonic_buffer_resource"]
helpviewer_keywords: ["std::monotonic_buffer_resource"]
---
# monotonic_buffer_resource Class

## Syntax

```cpp
class monotonic_buffer_resource : public memory_resource {
    memory_resource *upstream_rsrc; // exposition only
    void *current_buffer; // exposition only
    size_t next_buffer_size; // exposition only

    explicit monotonic_buffer_resource(memory_resource *upstream);
    monotonic_buffer_resource(size_t initial_size, memory_resource *upstream);
    monotonic_buffer_resource(void *buffer, size_t buffer_size, memory_resource *upstream);
    monotonic_buffer_resource()
        : monotonic_buffer_resource(get_default_resource()) {}
    explicit monotonic_buffer_resource(size_t initial_size)
        : monotonic_buffer_resource(initial_size, get_default_resource()) {}
    monotonic_buffer_resource(void *buffer, size_t buffer_size)
        : monotonic_buffer_resource(buffer, buffer_size, get_default_resource()) {}
    monotonic_buffer_resource(const monotonic_buffer_resource&) = delete;
    virtual ~monotonic_buffer_resource();
    monotonic_buffer_resource
        operator=(const monotonic_buffer_resource&) = delete;
    void release();
    memory_resource* upstream_resource() const;
};
```
