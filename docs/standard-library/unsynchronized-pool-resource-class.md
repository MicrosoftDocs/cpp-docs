---
title: "unsynchonized_pool_resource Class"
ms.date: "11/04/2016"
f1_keywords: ["memory_resource/std::unsynchronized_pool_resource"]
helpviewer_keywords: ["std::unsynchronized_pool_resource"]
---
# unsynchronized_pool_resource Class

## Syntax

```cpp
class unsynchronized_pool_resource : public memory_resource {
public:
unsynchronized_pool_resource(const pool_options& opts,
memory_resource* upstream);
unsynchronized_pool_resource()
: unsynchronized_pool_resource(pool_options(), get_default_resource()) {}
explicit unsynchronized_pool_resource(memory_resource* upstream)
: unsynchronized_pool_resource(pool_options(), upstream) {}
explicit unsynchronized_pool_resource(const pool_options& opts)
: unsynchronized_pool_resource(opts, get_default_resource()) {}
unsynchronized_pool_resource(const unsynchronized_pool_resource&) = delete;
virtual ~unsynchronized_pool_resource();
unsynchronized_pool_resource&
operator=(const unsynchronized_pool_resource&) = delete;
void release();
memory_resource *upstream_resource() const;
pool_options options() const;
protected:
void* do_allocate(size_t bytes, size_t alignment) override;
void do_deallocate(void* p, size_t bytes, size_t alignment) override;
bool do_is_equal(const memory_resource& other) const noexcept override;
};
```

## See also

[\<memory_resource>](../standard-library/memory-resource.md)