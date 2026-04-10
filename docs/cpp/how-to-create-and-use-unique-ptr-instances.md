---
description: "Learn more about: How to: Create and use unique_ptr instances"
title: "How to: Create and use unique_ptr instances"
ms.custom: "how-to"
ms.date: 04/10/2026
---
# How to: Create and use unique_ptr instances

A [unique_ptr](../standard-library/unique-ptr-class.md) does not share its pointer. It cannot be copied to another `unique_ptr`, passed by value to a function, or used in any C++ Standard Library algorithm that requires copies to be made. A `unique_ptr` can only be moved. This means that the ownership of the memory resource is transferred to another `unique_ptr` and the original `unique_ptr` no longer owns it. We recommend that you restrict an object to one owner, because multiple ownership adds complexity. When you need a smart pointer for a plain C++ object, use `unique_ptr`, and when you construct a `unique_ptr`, use the [`make_unique`](../standard-library/memory-functions.md#make_unique) helper function.

The following diagram illustrates the transfer of ownership between two `unique_ptr` instances.

![Diagram that shows moving the ownership of a unique pointer.](media/unique_ptr.png)

`unique_ptr` is defined in the `<memory>` header in the C++ Standard Library. It is exactly as efficient as a raw pointer and can be used in C++ Standard Library containers. The addition of `unique_ptr` instances to C++ Standard Library containers is efficient because the move constructor of the `unique_ptr` eliminates the need for a copy operation.

To use `unique_ptr` and `make_unique`, include the `<memory>` header. The following examples each compile and run as standalone programs.

## Example 1

The following example shows how to create `unique_ptr` instances and pass them between functions. Returning a `unique_ptr` by value transfers ownership to the caller. Passing a `unique_ptr` by value to a function transfers ownership to the callee.

[!code-cpp[stl_smart_pointers#210](codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_1.cpp)]

```output
Created: Namonaki Uta
song points to: Namonaki Uta
After move, song is null
song2 points to: Namonaki Uta
Created: Beat It
Singing: Beat It by Michael Jackson
Destroyed: Beat It
After SingSong, song3 is null
Destroyed: Namonaki Uta
```

These examples demonstrate this basic characteristic of `unique_ptr`: it can be moved, but not copied. "Moving" transfers ownership to a new `unique_ptr` and resets the old `unique_ptr`.

## Example 2

The following example shows how to create `unique_ptr` instances and use them in a vector.

[!code-cpp[stl_smart_pointers#211](codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_2.cpp)]

```output
Artist: B'z   Title: Juice
Artist: Namie Amuro   Title: Funky Town
Artist: Kome Kome Club   Title: Kimi ga Iru Dake de
Artist: Ayumi Hamasaki   Title: Poker Face
Destroyed: Juice
Destroyed: Funky Town
Destroyed: Kimi ga Iru Dake de
Destroyed: Poker Face
```

In the range for loop, notice that the `unique_ptr` is passed by reference. If you try to pass by value here, the compiler reports an error because the `unique_ptr` copy constructor is deleted.

## Example 3

The following example shows how to initialize a `unique_ptr` that is a class member.

[!code-cpp[stl_smart_pointers#212](codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_3.cpp)]

```output
Engine created
Engine running
Engine destroyed
```

## Example 4

You can use [make_unique](../standard-library/memory-functions.md#make_unique) to create a `unique_ptr` to an array. `make_unique<int[]>(5)` creates a 5-element array that is value-initialized to zero. You can't pass individual element values to `make_unique`, so assign them after creation.

[!code-cpp[stl_smart_pointers#213](codesnippet/CPP/how-to-create-and-use-unique-ptr-instances_4.cpp)]

```output
0
1
2
3
4
```

For more examples, see [make_unique](../standard-library/memory-functions.md#make_unique).

## See also

[Smart Pointers (Modern C++)](smart-pointers-modern-cpp.md)<br/>
[make_unique](../standard-library/memory-functions.md#make_unique)
