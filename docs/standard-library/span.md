---
title: "&lt;span&gt;"
ms.date: "04/15/2020"
f1_keywords: ["<span>"]
helpviewer_keywords: ["span header"]
---

# &lt;span&gt;

Include the standard header \<span> to get a single-dimensional view over a contiguous sequence of objects.

Span is a view over a contiguous sequence of objects. It provides fast and bounds-safe access. Unlike vector or array, it doesn't "own" the elements it provides access to.

Here's a quick example:

JTW: quick example might be to show string->span, or something simple to show what it does.

## Requirements

**Header:** \<span>

**Namespace:** std

## Members

### Classes

|||
|-|-|
|[span](span-class.md)| Provides a single-dimensional view over a contiguous sequence of objects. |

### Functions

|||
|-|-|
| [as_bytes](../standard-library/span-functions.md#as_bytes)| Get the underlying read-only bytes of the span. |
| [as_writeable_bytes](../standard-library/span-functions.md#as_writeable_bytes) | Get the underlying bytes of the span. |

### Operators

|||
|-|-|
|[operator=](../standard-library/span-operators.md#op_eq_eq)| span assignment, equal|
|[operator==](../standard-library/span-operators.md#op_eq_eq)| span comparison, equal|
|[operator\[\]](../standard-library/span-operators.md#op_at)| element access |

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)