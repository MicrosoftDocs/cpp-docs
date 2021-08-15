---
description: "Learn more about: aligned_union Class"
title: "aligned_union Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::aligned_union"]
helpviewer_keywords: ["aligned_union"]
ms.assetid: 9931a44d-3a67-4f29-a0f6-d47a7cf560ac
---
# aligned_union Class

Provides a POD type large enough and suitably aligned to store a union type, and the size required.

## Syntax

```cpp
template <std::size_t Len, class... Types>
struct aligned_union;

template <std::size_t Len, class... Types>
using aligned_union_t = typename aligned_union<Len, Types...>::type;
```

### Parameters

*Len*\
The alignment value for the largest type in the union.

*Types*\
The distinct types in the underlying union.

## Remarks

Use the class template to get the alignment and size needed to store a union in uninitialized storage. The member typedef `type` names a POD type suitable for storage of any type listed in *Types*; the minimum size is *Len*. The static member `alignment_value` of type `std::size_t` contains the strictest alignment required of all the types listed in *Types*.

## Example

The following example shows how to use `aligned_union` to allocate an aligned stack buffer to place a union.

```cpp
// std__type_traits__aligned_union.cpp
#include <iostream>
#include <type_traits>

union U_type
{
    int i;
    float f;
    double d;
    U_type(float e) : f(e) {}
};

typedef std::aligned_union<16, int, float, double>::type aligned_U_type;

int main()
{
    // allocate memory for a U_type aligned on a 16-byte boundary
    aligned_U_type au;
    // do placement new in the aligned memory on the stack
    U_type* u = new (&au) U_type(1.0f);
    if (nullptr != u)
    {
        std::cout << "value of u->i is " << u->i << std::endl;
        // must clean up placement objects manually!
        u->~U_type();
    }
}
```

```Output
value of u->i is 1065353216
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](type-traits.md)\
[alignment_of Class](alignment-of-class.md)
