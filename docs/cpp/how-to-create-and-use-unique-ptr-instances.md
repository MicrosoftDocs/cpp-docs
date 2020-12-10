---
description: "Learn more about: How to: Create and use unique_ptr instances"
title: "How to: Create and use unique_ptr instances"
ms.custom: "how-to"
ms.date: "11/19/2018"
ms.topic: "conceptual"
ms.assetid: 9a373030-e587-452f-b9a5-c5f9d58b7673
---
# How to: Create and use unique_ptr instances

A [unique_ptr](../standard-library/unique-ptr-class.md) does not share its pointer. It cannot be copied to another `unique_ptr`, passed by value to a function, or used in any C++ Standard Library algorithm that requires copies to be made. A `unique_ptr` can only be moved. This means that the ownership of the memory resource is transferred to another `unique_ptr` and the original `unique_ptr` no longer owns it. We recommend that you restrict an object to one owner, because multiple ownership adds complexity to the program logic. Therefore, when you need a smart pointer for a plain C++ object, use `unique_ptr`, and when you construct a `unique_ptr`, use the [make_unique](../standard-library/memory-functions.md#make_unique) helper function.

The following diagram illustrates the transfer of ownership between two `unique_ptr` instances.

![Moving the ownership of a unique&#95;ptr](media/unique_ptr.png "Moving the ownership of a unique&#95;ptr")

`unique_ptr` is defined in the `<memory>` header in the C++ Standard Library. It is exactly as efficient as a raw pointer and can be used in C++ Standard Library containers. The addition of `unique_ptr` instances to C++ Standard Library containers is efficient because the move constructor of the `unique_ptr` eliminates the need for a copy operation.

## Example 1

The following example shows how to create `unique_ptr` instances and pass them between functions.

[!code-cpp[stl_smart_pointers#210](codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_1.cpp)]

These examples demonstrate this basic characteristic of `unique_ptr`: it can be moved, but not copied. "Moving" transfers ownership to a new `unique_ptr` and resets the old `unique_ptr`.

## Example 2

The following example shows how to create `unique_ptr` instances and use them in a vector.

[!code-cpp[stl_smart_pointers#211](codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_2.cpp)]

In the range for  loop, notice that the `unique_ptr` is passed by reference. If you try to pass by value here, the compiler will throw an error because the `unique_ptr` copy constructor is deleted.

## Example 3

The following example shows how to initialize a `unique_ptr` that is a class member.

[!code-cpp[stl_smart_pointers#212](codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_3.cpp)]

## Example 4

You can use [make_unique](../standard-library/memory-functions.md#make_unique) to create a `unique_ptr` to an array, but you cannot use `make_unique` to initialize the array elements.

[!code-cpp[stl_smart_pointers#213](codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_4.cpp)]

For more examples, see [make_unique](../standard-library/memory-functions.md#make_unique).

## See also

[Smart Pointers (Modern C++)](smart-pointers-modern-cpp.md)<br/>
[make_unique](../standard-library/memory-functions.md#make_unique)
