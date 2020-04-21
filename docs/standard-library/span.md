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

### Operators

|||
|-|-|
|[operator==](../standard-library/span-operators.md#op_eq_eq)|array comparison, equal|
|[operator->(../standard-library/span-operators.md#op_neq)|array comparison, not equal|
|[operator[]](../standard-library/span-operators.md#op_gt)|array comparison, greater than|

### Functions

|||
|-|-|
|[get](../standard-library/array-functions.md#get)|Get specified array element.|
|[swap](../standard-library/array-functions.md#swap)|Exchanges the contents of one array with the contents of another array.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)