---
description: "Learn more about: Sample Container Class"
title: "Sample Container Class"
ms.date: "11/04/2016"
helpviewer_keywords: ["container classes [C++]"]
ms.assetid: 5b1451f2-c708-45da-bbf0-9e42fd687a1a
---
# Sample Container Class

> [!NOTE]
> This topic is in the Microsoft C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Describes an object that controls a varying-length sequence of elements, typically of type `Ty`. The sequence is stored in different ways, depending on the actual container.

A container constructor or member function may find occasion to call the constructor **Ty**(**const Ty&**) or the function **Ty::operator=**(**const Ty&**). If such a call throws an exception, the container object is obliged to maintain its integrity, and to rethrow any exception it catches. You can safely swap, assign to, erase, or destroy a container object after it throws one of these exceptions. In general, however, you cannot otherwise predict the state of the sequence controlled by the container object.

A few additional caveats:

- If the expression `~Ty` throws an exception, the resulting state of the container object is undefined.

- If the container stores an allocator object *al*, and *al* throws an exception other than as a result of a call to `al.allocate`, the resulting state of the container object is undefined.

- If the container stores a function object *comp*, to determine how to order the controlled sequence, and *comp* throws an exception of any kind, the resulting state of the container object is undefined.

The container classes defined by C++ Standard Library satisfy several additional requirements, as described in the following paragraphs.

Container class template [list](../standard-library/list-class.md) provides deterministic, and useful, behavior even in the presence of the exceptions described above. For example, if an exception is thrown during the insertion of one or more elements, the container is left unaltered and the exception is rethrown.

For *all* the container classes defined by C++ Standard Library, if an exception is thrown during calls to the following member functions, `insert`, `push_back`, or `push_front`, the container is left unaltered and the exception is rethrown.

For *all* the container classes defined by C++ Standard Library, no exception is thrown during calls to the following member functions: `pop_back`, `pop_front`.

The member function [erase](../standard-library/container-class-erase.md) throws an exception only if a copy operation (assignment or copy construction) throws an exception.

Moreover, no exception is thrown while copying an iterator returned by a member function.

The member function [swap](../standard-library/container-class-swap.md) makes additional promises for *all* container classes defined by C++ Standard Library:

- The member function throws an exception only if the container stores an allocator object al, and `al` throws an exception when copied.

- References, pointers, and iterators that designate elements of the controlled sequences being swapped remain valid.

An object of a container class defined by C++ Standard Library allocates and frees storage for the sequence it controls through a stored object of type `Alloc`, which is typically a template parameter. Such an allocator object must have the same external interface as an object of class `allocator<Ty>`. In particular, `Alloc` must be the same type as `Alloc::rebind<value_type>::other`

For *all* container classes defined by C++ Standard Library, the member function `Alloc get_allocator const;` returns a copy of the stored allocator object. Note that the stored allocator object is *not* copied when the container object is assigned. All constructors initialize the value stored in `allocator`, to `Alloc` if the constructor contains no allocator parameter.

According to the C++ Standard, a container class defined by the C++ Standard Library can assume that:

- All objects of class `Alloc` compare equal.

- Type `Alloc::const_pointer` is the same as `const Ty *`.

- Type `Alloc::const_reference` is the same as `const Ty&`.

- Type `Alloc::pointer` is the same as `Ty *`.

- Type `Alloc::reference` is the same as `Ty&`.

In this implementation, however, containers do not make such simplifying assumptions. Thus, they work properly with allocator objects that are more ambitious:

- All objects of class `Alloc` does not need to compare equal. (You can maintain multiple pools of storage.)

- Type `Alloc::const_pointer` does not need to be the same as `const Ty *`. (A const pointer can be a class.)

- Type `Alloc::pointer` does not need to be the same as `Ty *`. (A pointer can be a class.)

## Requirements

**Header**: \<sample container>

## See also

[\<sample container>](../standard-library/sample-container.md)
