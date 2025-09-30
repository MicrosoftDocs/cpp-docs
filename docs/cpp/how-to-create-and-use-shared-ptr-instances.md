---
description: "Learn more about: How to: Create and Use shared_ptr instances"
title: "How to: Create and use shared_ptr instances"
ms.custom: "how-to"
ms.date: "12/4/2024"
---
# How to: Create and Use shared_ptr instances

The `shared_ptr` type is a smart pointer in the C++ standard library that is designed for scenarios in which more than one owner needs to manage the lifetime of an object. After you initialize a `shared_ptr` you can copy it, pass it by value in function arguments, and assign it to other `shared_ptr` instances. All the instances point to the same object, and share access to one "control block" that increments and decrements the reference count whenever a new `shared_ptr` is added, goes out of scope, or is reset. When the reference count reaches zero, the control block deletes the memory resource and itself.

The following illustration shows several `shared_ptr` instances that point to one memory location.

:::image type="complex" source="media/shared_ptr.png" alt-text="Diagram showing two shared_ptr instances pointing to one memory location.":::
The first diagram shows a shared pointer, P1, that points to a MyClass instance as well as a control block with ref count = 1. The second diagram shows the addition of another shared pointer, P2, which also points to the MyClass instance and to the shared control block, which now has a ref count of 2.
:::image-end:::

## Example setup

The examples that follow all assume that you've included the required headers and declared the required types, as shown here:

```cpp
// shared_ptr-examples.cpp
// The following examples assume these declarations:
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

struct MediaAsset
{
    virtual ~MediaAsset() = default; // make it polymorphic
};

struct Song : public MediaAsset
{
    std::wstring artist;
    std::wstring title;
    Song(const std::wstring& artist_, const std::wstring& title_) :
        artist{ artist_ }, title{ title_ } {}
};

struct Photo : public MediaAsset
{
    std::wstring date;
    std::wstring location;
    std::wstring subject;
    Photo(
        const std::wstring& date_,
        const std::wstring& location_,
        const std::wstring& subject_) :
        date{ date_ }, location{ location_ }, subject{ subject_ } {}
};

using namespace std;

int main()
{
    // The examples go here, in order:
    // Example 1
    // Example 2
    // Example 3
    // Example 4
    // Example 6
}
```

## Example 1

Whenever possible, use the [`make_shared`](../standard-library/memory-functions.md#make_shared) function to create a `shared_ptr` when the memory resource is created for the first time. `make_shared` is exception-safe. It uses the same call to allocate the memory for the control block and the resource, which reduces the construction overhead. If you don't use `make_shared`, then you have to use an explicit **`new`** expression to create the object before you pass it to the `shared_ptr` constructor. The following example shows various ways to declare and initialize a `shared_ptr` together with a new object.

[!code-cpp[stl_smart_pointers#1](codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_1.cpp)]

## Example 2

The following example shows how to declare and initialize `shared_ptr` instances that take on shared ownership of an object that was allocated by another `shared_ptr`. Assume that `sp2` is an initialized `shared_ptr`.

[!code-cpp[stl_smart_pointers#2](codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_2.cpp)]

## Example 3

`shared_ptr` is also helpful in C++ Standard Library containers when you're using algorithms that copy elements. You can wrap elements in a `shared_ptr`, and then copy it into other containers with the understanding that the underlying memory is valid as long as you need it, and no longer. The following example shows how to use the `remove_copy_if` algorithm on `shared_ptr` instances in a vector.

[!code-cpp[stl_smart_pointers#3](codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_3.cpp)]

## Example 4

You can use `dynamic_pointer_cast`, `static_pointer_cast`, and `const_pointer_cast` to cast a `shared_ptr`. These functions resemble the **`dynamic_cast`**, **`static_cast`**, and **`const_cast`** operators. The following example shows how to test the derived type of each element in a vector of `shared_ptr` of base classes, and then copies the elements and display information about them.

[!code-cpp[stl_smart_pointers#4](codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_4.cpp)]

## Example 5

You can pass a `shared_ptr` to another function in the following ways:

- Pass the `shared_ptr` by value. This invokes the copy constructor, increments the reference count, and makes the callee an owner. There's a small amount of overhead in this operation, which may be significant depending on how many `shared_ptr` objects you're passing. Use this option when the implied or explicit code contract between the caller and callee requires that the callee be an owner.

- Pass the `shared_ptr` by reference or const reference. In this case, the reference count isn't incremented, and the callee can access the pointer as long as the caller doesn't go out of scope. Or, the callee can decide to create a `shared_ptr` based on the reference, and become a shared owner. Use this option when the caller has no knowledge of the callee, or when you must pass a `shared_ptr` and want to avoid the copy operation for performance reasons.

- Pass the underlying pointer or a reference to the underlying object. This enables the callee to use the object, but it doesn't share ownership of the object with the caller's `shared_ptr`. Beware the case of the callee creating a `shared_ptr` from the passed raw pointer because the callee's `shared_ptr` has an independent reference count from the caller's `shared_ptr`. When the `shared_ptr` in the callee goes out of scope, it will delete the object, leaving the pointer in the caller's 'shared_ptr' pointing at released memory. When the caller's `shared_ptr` then goes out of scope, a double-free results. Only use this option when the contract between the caller and callee clearly specifies that the caller retains ownership of the `shared_ptr` lifetime.

- When you're deciding how to pass a `shared_ptr`, determine whether the callee has to share ownership of the underlying resource. An "owner" is an object or function that can keep the underlying resource alive for as long as it needs it. If the caller has to guarantee that the callee can extend the life of the pointer beyond its (the function's) lifetime, use the first option. If you don't care whether the callee extends the lifetime, then pass by reference and let the callee copy it or not.

- If you have to give a helper function access to the underlying pointer, and you know that the helper function uses the pointer and return before the calling function returns, then that function doesn't have to share ownership of the underlying pointer. It just has to access the pointer within the lifetime of the caller's `shared_ptr`. In this case, it's safe to pass the `shared_ptr` by reference, or pass the raw pointer or a reference to the underlying object. Passing this way provides a small performance benefit, and may also help you express your programming intent.

- Sometimes, for example in a `std::vector<shared_ptr<T>>`, you may have to pass each `shared_ptr` to a lambda expression body or named function object. If the lambda or function doesn't store the pointer, then pass the `shared_ptr` by reference to avoid invoking the copy constructor for each element.

[!code-cpp[stl_smart_pointers#5](codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_5.cpp)]

## Example 6

The following example shows how `shared_ptr` overloads various comparison operators to enable pointer comparisons on the memory that is owned by the `shared_ptr` instances.

[!code-cpp[stl_smart_pointers#6](codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_6.cpp)]

## See also

[Smart Pointers (Modern C++)](smart-pointers-modern-cpp.md)
