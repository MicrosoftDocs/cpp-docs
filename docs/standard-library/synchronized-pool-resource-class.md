---
description: "Learn more about: synchronized_pool_resource Class"
title: "synchonized_pool_resource Class"
ms.date: "11/04/2016"
f1_keywords: ["memory_resource/std::synchronized_pool_resource"]
helpviewer_keywords: ["std::synchronized_pool_resource"]
---
# synchronized_pool_resource Class

## Syntax

```cpp
class synchronized_pool_resource : public memory_resource {
    synchronized_pool_resource(const pool_options& opts, memory_resource* upstream);
    synchronized_pool_resource()
        : synchronized_pool_resource(pool_options(), get_default_resource()) {}
    explicit synchronized_pool_resource(memory_resource* upstream)
        : synchronized_pool_resource(pool_options(), upstream) {}
    explicit synchronized_pool_resource(const pool_options& opts)
        : synchronized_pool_resource(opts, get_default_resource()) {}
    synchronized_pool_resource(const synchronized_pool_resource&) = delete;
    virtual ~synchronized_pool_resource();
    synchronized_pool_resource&
        operator=(const synchronized_pool_resource&) = delete;
    void release();
    memory_resource* upstream_resource() const;
    pool_options options() const;
};
```
