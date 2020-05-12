---
title: "&lt;span&gt;"
ms.date: "05/15/2020"
f1_keywords: ["<span>"]
helpviewer_keywords: ["span header"]
---

# &lt;span&gt;

Defines the `span` container class template.

A `span` is a view over a contiguous sequence of objects. It provides fast and bounds-safe access. Unlike vector or array, it doesn't "own" the elements it provides access to. 

See [span class](span-class.md) for detailed information. Here's an example of how a span can be used:

```cpp
#include <span>
#include <iostream>

// Takes a span
void Show(std::span<int> someValues)
{
    // easily iterate over the members of the span
    // in a bounds-safe way
    for (auto i : someValues)
    {
        cout << i;
    }
}

void main()
{
    int numbers[]{ 0,1,2,3,4 };
    Show(numbers); // note conversion from array to span
}
```

## Requirements

**Header:** \<span>

**Namespace:** std

## Members

### Classes

|||
|-|-|
|[span](span-class.md)| Provides a view over a contiguous sequence of objects. |

### Operators

|||
|-|-|
|[operator=](span-class.md#op_eq)| Span assignment |
|[operator\[\]](span-class.md#op_at)| Element access |

### Functions

|||
|-|-|
| [as_bytes](span-functions.md#as_bytes)| Get the underlying read-only bytes of the span. |
| [as_writeable_bytes](span-functions.md#as_writable_bytes) | Get the underlying bytes of the span. |

### Constants

|||
|-|-|
| **dynamic_extent** | Indicates that the span size is determined at runtime rather than compile time. When the number of elements in the span is known at compile time, it's specified as the `Extent` template parameter. When the number isn't known until runtime, `dynamic_extent` is specified instead. |

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)