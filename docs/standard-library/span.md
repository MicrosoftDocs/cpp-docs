---
title: "<span>"
description: "API reference for the Standard Template Library (STL) span namespace, which provides a lightweight view over a contiguous sequence of objects."
ms.date: "05/28/2020"
f1_keywords: ["<span>"]
helpviewer_keywords: ["span header"]
dev_langs: ["C++"]
---

# `<span>`

A `span` is a view over a contiguous sequence of objects. It provides fast and bounds-safe access. Unlike `vector` or `array`, it doesn't "own" the elements.

See [`span` class](span-class.md) for detailed information. Here's an example of how to use a `span`:

```cpp
#include <span>
#include <iostream>

void Show(std::span<int> someValues)
{
    // show values in reverse
    for (auto rIt = someValues.rbegin(); rIt != someValues.rend(); ++rIt)
    {
        std::cout << *rIt;
    }

    // show a subspan
    for (auto& i : someValues.subspan(1, 2))
    {
        std::cout << i;
    }
}

int main()
{
    int numbers[]{ 0,1,2,3,4 };
    Show(numbers); // note conversion from array to span
}
```

## Requirements

**Header:** `<span>`

**Namespace:** `std`

**Compiler option:** [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later is required.

## Members

### Classes

|Name|Description|
|-|:-|
|[`span`](span-class.md)| Provides a view over a contiguous sequence of objects. |

### Operators

|Name|Description|
|-|:-|
|[`operator=`](span-class.md#op_eq)| Span assignment |
|[`operator[]`](span-class.md#op_at)| Element access |

### Functions

|Name|Description|
|-|:-|
| [`as_bytes`](span-functions.md#as_bytes)| Get the underlying read-only bytes of the span. |
| [`as_writable_bytes`](span-functions.md#as_writable_bytes) | Get the underlying bytes of the span. |

### Constants

|Name|Description|
|-|:-|
| **`dynamic_extent`** | Indicates that the span size is determined at runtime rather than compile time. When the number of elements in the span is known at compile time, it's specified as the `Extent` template parameter. When the number isn't known until runtime, specify `dynamic_extent` instead. |

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
