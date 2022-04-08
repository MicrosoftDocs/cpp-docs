---
description: "Learn more about: Compiler Error C2956"
title: "Compiler Error C2956"
ms.date: 04/05/2022
f1_keywords: ["C2956"]
helpviewer_keywords: ["C2956"]
---
# Compiler Error C2956

> usual deallocation function '*function*' would be chosen as placement deallocation function

The deallocation function found for the placement new expression matches one of the usual deallocation functions. Either an implicit compiler-generated deallocation or an explicit `delete` (or `delete[]`) would use the wrong deallocation function.

## Remarks

Error C2956 indicates you used a *placement new expression* (a `new` expression that takes parameters) in a way that can cause a memory leak or runtime crash. It usually means the resulting value can't be deleted in a typical way. That is, either an explicit `delete` (or `delete[]`) expression in your code, or the implicit deallocation when a constructor throws an exception, could invoke the wrong `operator delete` or supply it with the wrong parameters.

The C++ standard specifies *usual deallocation functions* as overloads of `operator delete` or `operator delete[]` that take extra parameters of type `std::size_t` (C++14 or later), `std::align_val_t` (C++17 or later), and `std::destroying_delete_t` (C++20 or later). When you use a placement new expression, the compiler looks for a matching `operator delete` function that takes the same parameters (after the first one). If one is found and its signature matches a usual deallocation function, the compiler reports error C2956.

The way to resolve the issue depends in part on your intent. For example, in C++ 11, you could define an `operator new` overload that takes an extra `size_t` parameter in your class to pass a value to the allocator. In C++ 14, the same code now causes an error:

```cpp
#include <new>
struct T {
    void* operator new(std::size_t, std::size_t); // Placement allocation function
    void operator delete(void*, std::size_t); // now considered a usual deallocation function
};

T* p = new (0) T;   // error: usual deallocation function would be chosen as placement deallocation function
```

If your intent is to specify over-aligned memory for an object, you can instead specify the alignment directly on the type by using `alignas`. For more information about `alignas`, see [Alignment](../../cpp/alignment-cpp-declarations.md).

If your intent is to specify over-aligned memory for a heap-allocated native type or an array, wrap it in a `struct` or `class` that has the `alignas` specifier. Then normal `new` and `delete` expressions can allocate and deallocate instances that have your intended alignment.

## Example

In this example, the *`new-expression`* uses placement syntax with an argument of type `std::align_val_t`. However, since type `T` doesn't specify an alignment requirement, a *`delete-expression`* on a `T*` won't invoke a matching over-aligned deallocation function. Instead, the compiler would invoke the usual deallocation function `void operator delete(void* ptr) noexcept`, which doesn't handle an over-aligned allocation. Rather than cause a crash or a memory leak, the compiler reports an error for this use of placement `new`:

```cpp
#include <new>
struct T {};

int main()
{
    T* p = new (std::align_val_t{64}) T; // C2956
    delete p; // ordinary, not over-aligned delete
}
```

To resolve this issue, apply an `alignas` specifier to `T`:

```cpp
#include <new>
struct alignas(64) T {};

int main()
{
    T* p = new T; // invokes ::operator new(std::size_t, std::align_val_t)
    delete p; // now invokes ::operator delete(void*, std::align_val_t)
}
```
