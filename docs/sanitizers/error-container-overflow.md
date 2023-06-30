---
title: "Error: container-overflow"
description: "Source examples and live debug screenshots for container overflow errors."
ms.date: 06/30/2023
f1_keywords: ["container-overflow", "mismatch detected for 'annotate_vector'", "_DISABLE_VECTOR_ANNOTATION"]
helpviewer_keywords: ["container-overflow error", "AddressSanitizer error container-overflow", "mismatch detected for 'annotate_vector'", "_DISABLE_VECTOR_ANNOTATION"]
---

# Error: `container-overflow`

> Address Sanitizer Error: Container overflow

In Visual Studio 2022 version 17.2 and later, the Microsoft Visual C++ standard library (STL) is partially enlightened to work with the AddressSanitizer. The following container types have annotations to detect memory access issues:

| Standard container type | Disable annotations macro | Supported in version |
|--|--|--|
| `std::vector` | `_DISABLE_VECTOR_ANNOTATION` | Visual Studio 2022 17.2 |
| `std::string` | `_DISABLE_STRING_ANNOTATION` | Visual Studio 2022 17.6 |

There are checks to ensure that there are no one-definition-rule (ODR) violations. An ODR violation occurs when one translation unit annotates a standard type, such as `vector`, with ASan annotations, but another translation unit doesn't. In this example, the linker might simultaneously see one declaration of `vector<int>::push_back` that has address sanitizer annotations, and another declaration of `vector<int>::push_back` that doesn't. To avoid this problem, each static library and object used to link the binary must also enable ASan annotations. Effectively, you must build those static libraries and objects with AddressSanitizer enabled. Mixing code with different annotation settings causes an error:

```Output
my_static.lib(my_code.obj) : error LNK2038: mismatch detected for 'annotate_vector': value '0' doesn't match value '1' in main.obj
```

To resolve this error, either disable annotations in all projects that use the corresponding macro, or build each project using **`/fsanitize=address`** and annotations enabled. (Annotations are enabled by default.)

## Example: Access reserved memory in a `std::vector`

```cpp
// Compile with: cl /EHsc /fsanitize=address /Zi
#include <vector>

int main() {   
    // Create a vector of size 10, but with a capacity of 20.    
    std::vector<int> v(10);
    v.reserve(20);

    // In versions prior to 17.2, MSVC ASan does NOT raise an exception here.
    // While this is an out-of-bounds write to 'v', MSVC ASan
    // ensures the write is within the heap allocation size (20).
    // With 17.2 and later, MSVC ASan will raise a 'container-overflow' exception:
    // ==18364==ERROR: AddressSanitizer: container-overflow on address 0x1263cb8a0048 at pc 0x7ff6466411ab bp 0x005cf81ef7b0 sp 0x005cf81ef7b8
    v[10] = 1;

    // Regardless of version, MSVC ASan DOES raise an exception here, as this write
    // is out of bounds from the heap allocation.
    v[20] = 1;
}
```

To build and test this example, run the following commands in a Visual Studio 2022 version 17.2, or later [Developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts) window:

```cmd
cl /EHsc example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Error result of reserved memory access in a `std::vector`

:::image type="content" source="media/container-overflow-example-1.png" alt-text="Screenshot of debugger displaying container-overflow error in example 1." lightbox="media/container-overflow-example-1.png":::

## Custom allocators and container overflow

Address Sanitizer container overflow checks support non-`std::allocator` allocators. However, because AddressSanitizer doesn't know whether a custom allocator conforms to AddressSanitizer requirements such as aligning allocations on 8-byte boundaries, or not putting data between the end of the allocation and the next 8-byte boundary, it may not always be able to check that accesses on the latter end of an allocation are correct.

AddressSanitizer marks blocks of memory in 8-byte chunks. It can't place inaccessible bytes before accessible bytes in a single chunk. It's valid to have 8 accessible bytes in a chunk, or 4 accessible bytes followed by 4 inaccessible bytes. Four inaccessible bytes can't be followed by 4 accessible bytes.

If the end of an allocation from a custom allocator doesn't strictly align with the end of an 8-byte chunk, AddressSanitizer must assume that the allocator makes the bytes between the end of the allocation and the end of the chunk available to the allocator or the user to write to. Therefore, it can't mark the bytes in the final 8-byte chunk as inaccessible. In the following example of a `vector` that allocates memory using a custom allocator, '?' refers to uninitialized data and '-' refers to memory that is inaccessible.

```cpp
std::vector<uint8_t, MyCustomAlloc<uint8_t>> v;
v.reserve(20);
v.assign({0, 1, 2, 3});
// the buffer of `v` is as follows:
//    | v.data()
//    |       | v.data() + v.size()
//    |       |                                     | v.data() + v.capacity()
//  [ 0 1 2 3 ? ? ? ? ][ ? ? ? ? ? ? ? ? ][ ? ? ? ? - - - - ]
//        chunk 1            chunk 2            chunk 3
```

In the previous example, chunk 3 has 4 bytes of memory that are assumed to be inaccessible because they fall between the end of the allocation of the 20 bytes that were reserved (`v.reserve(20)`) and the end of the third logical grouping of 8 bytes (remember that AddressSanitizer marks blocks of memory in 8-byte chunks).

Ideally, we'd mark the shadow memory, which Address Sanitizer sets aside for every 8-byte block of memory to track which bytes in that 8-byte block are valid and which are invalid (and why), such that `v.data() + [0, v.size())` are accessible, and `v.data() + [v.size(), v.capacity())` are inaccessible. Note the use of interval notation here: '[' means inclusive of, and ')' means exclusive of. If the user is using a custom allocator, we don't know whether the memory after `v.data() + v.capacity()` is accessible or not. We must assume that it is. We'd prefer to mark those bytes as inaccessible in the shadow memory, but we must mark them as accessible so that it remains possible to access those bytes after the allocation.

`std::allocator` uses the `_Minimum_asan_allocation_alignment` static member variable to tell `vector` and `string` that they can trust the allocator not to put data right after the allocation. This ensures that the allocator won't use the memory between the end of the allocation and end of the chunk. Thus that part of the chunk can be marked inaccessible by the Address Sanitizer to catch overruns.

If you want the implementation to trust that your custom allocator is handling the memory between the end of the allocation and the end of the chunk so that it can mark that memory as inaccessible and catch overruns, set `_Minimum_asan_allocation_alignment` to your actual minimum alignment. For AddressSanitizer to work correctly, the alignment must be at least 8.

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
