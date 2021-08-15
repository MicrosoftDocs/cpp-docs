---
description: "Learn more about: aligned_storage Class"
title: "aligned_storage Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::aligned_storage"]
helpviewer_keywords: ["aligned_storage class", "aligned_storage"]
ms.assetid: f255e345-1f05-4d07-81e4-017f420839fb
---
# aligned_storage Class

Makes suitably aligned type.

## Syntax

```cpp
template <std::size_t Len, std::size_t Align>
struct aligned_storage;

template <std::size_t Len, std::size_t Align = alignment_of<max_align_t>::value>
using aligned_storage_t = typename aligned_storage<Len, Align>::type;
```

### Parameters

*Len*\
The object size.

*Align*\
The object alignment.

## Remarks

The template member typedef `type` is a synonym for a POD type with alignment *Align* and size *Len*. *Align* must be equal to `alignment_of<T>::value` for some type `T`, or to the default alignment.

## Example

```cpp
#include <type_traits>
#include <iostream>

typedef std::aligned_storage<sizeof (int),
    std::alignment_of<double>::value>::type New_type;
int main()
    {
    std::cout << "alignment_of<int> == "
        << std::alignment_of<int>::value << std::endl;
    std::cout << "aligned to double == "
        << std::alignment_of<New_type>::value << std::endl;

    return (0);
    }
```

```Output
alignment_of<int> == 4
aligned to double == 8
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](type-traits.md)\
[alignment_of Class](alignment-of-class.md)
