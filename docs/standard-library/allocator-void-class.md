---
description: "Learn more about: allocator&lt;void&gt; Class"
title: "allocator&lt;void&gt; Class"
ms.date: "11/04/2016"
f1_keywords: ["memory/std::allocator<void>", "allocator<void>"]
helpviewer_keywords: ["allocator<void> class"]
ms.assetid: abfb40f5-c600-46a6-b130-f42c6535b2bd
---
# allocator&lt;void&gt; Class

A specialization of the class template allocator to type **`void`**, defining the types that make sense in this context.

## Syntax

```cpp
template <>
class allocator<void> {
    typedef void *pointer;
    typedef const void *const_pointer;
    typedef void value_type;
    template <class Other>
    struct rebind;
    allocator();
    allocator(const allocator<void>&);

    template <class Other>
    allocator(const allocator<Other>&);

    template <class Other>
    allocator<void>& operator=(const allocator<Other>&);
};
```

## Remarks

The class explicitly specializes class template [allocator](allocator-class.md) for type **`void`**. Its constructors and assignment operator behave the same as for the class template, but it defines only the following types:

- [const_pointer](allocator-class.md#const_pointer).

- [pointer](allocator-class.md#pointer).

- [value_type](allocator-class.md#value_type).

- [rebind](allocator-class.md#rebind), a nested class template.
