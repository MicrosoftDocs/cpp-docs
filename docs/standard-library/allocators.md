---
description: "Learn more about: Allocators"
title: "Allocators"
ms.date: "11/04/2016"
helpviewer_keywords: ["allocators", "C++ Standard Library, allocators"]
ms.assetid: ac95023b-9e7d-49f5-861a-bf7a9a340746
---
# Allocators

Allocators are used by the C++ Standard Library to handle the allocation and deallocation of elements stored in containers. All C++ Standard Library containers except std::array have a template parameter of type `allocator<Type>`, where `Type` represents the type of the container element. For example, the vector class is declared as follows:

```cpp
template <
    class Type,
    class Allocator = allocator<Type>
>
class vector
```

The C++ Standard Library provides a default implementation for an allocator. In C++11 and later, the default allocator is updated to expose a smaller interface; the new allocator is called a *minimal allocator*. In particular, the minimal allocator's `construct()` member supports move semantics, which can greatly improve performance. In most cases, this default allocator should be sufficient. In C++11 all the Standard Library types and functions that take an allocator type parameter support the minimal allocator interface, including `std::function`, `shared_ptr, allocate_shared()`, and `basic_string`.  For more information on the default allocator, see [allocator Class](allocator-class.md).

## Writing Your Own Allocator (C++11)

The default allocator uses **`new`** and **`delete`** to allocate and deallocate memory. If you want to use a different method of memory allocation, such as using shared memory, then you must create your own allocator. If you are targeting C++11 and you need to write a new custom allocator, make it a minimal allocator if possible. Even if you have already implemented an old-style allocator, consider modifying it to be a *minimal allocator* in order to take advantage of the more efficient `construct()` method that will be provided for you automatically.

A minimal allocator requires much less boilerplate and enable you to focus on the `allocate` and `deallocate` member functions which do all of the work. When creating a minimal allocator, do not implement any members except the ones shown in the example below:

1. a converting copy constructor (see example)

1. operator==

1. operator!=

1. allocate

1. deallocate

The C++11 default `construct()` member that will be provided for you does perfect forwarding and enables move semantics; it is much more efficient in many cases than the older version.

> [!WARNING]
> At compile time, the C++ Standard Library uses the allocator_traits class to detect which members you have explicitly provided and provides a default implementation for any members that are not present. Do not interfere with this mechanism by providing a specialization of allocator_traits for your allocator!

The following example shows a minimal implementation of an allocator that uses `malloc` and `free`. Note the use of the new exception type `std::bad_array_new_length` which is thrown if the array size is less than zero or greater than the maximum allowed size.

```cpp
#pragma once
#include <stdlib.h> //size_t, malloc, free
#include <new> // bad_alloc, bad_array_new_length
#include <memory>
template <class T>
struct Mallocator
{
    typedef T value_type;
    Mallocator() noexcept {} //default ctor not required by C++ Standard Library

    // A converting copy constructor:
    template<class U> Mallocator(const Mallocator<U>&) noexcept {}
    template<class U> bool operator==(const Mallocator<U>&) const noexcept
    {
        return true;
    }
    template<class U> bool operator!=(const Mallocator<U>&) const noexcept
    {
        return false;
    }
    T* allocate(const size_t n) const;
    void deallocate(T* const p, size_t) const noexcept;
};

template <class T>
T* Mallocator<T>::allocate(const size_t n) const
{
    if (n == 0)
    {
        return nullptr;
    }
    if (n > static_cast<size_t>(-1) / sizeof(T))
    {
        throw std::bad_array_new_length();
    }
    void* const pv = malloc(n * sizeof(T));
    if (!pv) { throw std::bad_alloc(); }
    return static_cast<T*>(pv);
}

template<class T>
void Mallocator<T>::deallocate(T * const p, size_t) const noexcept
{
    free(p);
}
```

## Writing Your Own Allocator (C++03)

In C++03, any allocator used with C++ Standard Library containers must implement the following type definitions:

:::row:::
   :::column:::
      `const_pointer`\
      `const_reference`
   :::column-end:::
   :::column:::
      `difference_type`\
      `pointer`
   :::column-end:::
   :::column:::
      `rebind`\
      `reference`
   :::column-end:::
   :::column:::
      `size_type`\
      `value_type`
   :::column-end:::
:::row-end:::

In addition, any allocator used with C++ Standard Library containers must implement the following methods:

:::row:::
   :::column:::
      Constructor\
      Copy constructor\
      Destructor
   :::column-end:::
   :::column:::
      `address`\
      `allocate`\
      `construct`
   :::column-end:::
   :::column:::
      `deallocate`\
      `destroy`\
      `max_size`
   :::column-end:::
   :::column:::
      `operator!=`\
      `operator==`
   :::column-end:::
:::row-end:::

For more information on these type definitions and methods, see [allocator Class](allocator-class.md).

## See also

[C++ Standard Library Reference](cpp-standard-library-reference.md)
