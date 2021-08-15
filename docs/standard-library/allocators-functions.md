---
description: "Learn more about: &lt;allocators&gt; macros"
title: "&lt;allocators&gt; macros"
ms.date: "11/04/2016"
f1_keywords: ["allocators/std::ALLOCATOR_DECL", "allocators/std::CACHE_CHUNKLIST", "allocators/std::CACHE_FREELIST", "allocators/std::CACHE_SUBALLOC", "allocators/std::SYNC_DEFAULT"]
ms.assetid: 9cb5ee07-1ff9-4594-ae32-3c8c6efb511a
helpviewer_keywords: ["std::ALLOCATOR_DECL [C++]", "std::CACHE_CHUNKLIST [C++]", "std::CACHE_FREELIST [C++]", "std::CACHE_SUBALLOC [C++]", "std::SYNC_DEFAULT [C++]"]
---
# &lt;allocators&gt; macros

:::row:::
   :::column span="":::
      [`ALLOCATOR_DECL`](#allocator_decl)\
      [`CACHE_CHUNKLIST`](#cache_chunklist)
   :::column-end:::
   :::column span="":::
      [`CACHE_FREELIST`](#cache_freelist)
   :::column-end:::
   :::column span="":::
      [`CACHE_SUBALLOC`](#cache_suballoc)
   :::column-end:::
   :::column span="":::
      [`SYNC_DEFAULT`](#sync_default)
   :::column-end:::
:::row-end:::

## <a name="allocator_decl"></a> ALLOCATOR_DECL

Yields an allocator class template.

```cpp
#define ALLOCATOR_DECL(cache, sync, name) <alloc_template>
```

### Remarks

The macro yields a template definition `template <class Type> class name {.....}` and a specialization `template <> class name<void> {.....}` which together define an allocator class template that uses the synchronization filter `sync` and a cache of type `cache`.

For compilers that can compile rebind, the resulting template definition looks like this:

```cpp
struct rebind
   {    /* convert a name<Type> to a name<Other> */
   typedef name<Other> other;
   };
```

For compilers that cannot compile rebind the resulting template definition looks like this:

```cpp
template <class Type<class name
    : public stdext::allocators::allocator_base<Type,
    sync<stdext::allocators::rts_alloc<cache>>>
{
public:
    name() {}
    template <class Other>
    name(const name<Other>&) {}
    template <class Other>
    name& operator= (const name<Other>&)
    {
        return *this;
    }
};
```

## <a name="cache_chunklist"></a> CACHE_CHUNKLIST

Yields `stdext::allocators::cache_chunklist<sizeof(Type)>`.

```cpp
#define CACHE_CHUNKLIST <cache_class>
```

### Remarks

## <a name="cache_freelist"></a> CACHE_FREELIST

Yields `stdext::allocators::cache_freelist<sizeof(Type), max>`.

```cpp
#define CACHE_FREELIST(max) <cache_class>
```

### Remarks

## <a name="cache_suballoc"></a> CACHE_SUBALLOC

Yields `stdext::allocators::cache_suballoc<sizeof(Type)>`.

```cpp
#define CACHE_SUBALLOC <cache_class>
```

### Remarks

## <a name="sync_default"></a> SYNC_DEFAULT

Yields a synchronization filter.

```cpp
#define SYNC_DEFAULT <sync_template>
```

### Remarks

If a compiler supports compiling both single-threaded and multi-threaded applications, for single-threaded applications the macro yields `stdext::allocators::sync_none`; in all other cases it yields `stdext::allocators::sync_shared`.

## See also

[\<allocators>](allocators-header.md)
