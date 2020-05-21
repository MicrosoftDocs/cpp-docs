---
title: "&lt;span&gt; functions"
ms.date: "05/13/2020"
f1_keywords: ["span/std::span::as_bytes", "span/std::as_writeable_bytes"]
helpviewer_keywords: ["std::span [C++], as_writeable_bytes", "std::as_bytes [C++]"]
---
# &lt;span&gt; functions

The \<span> header includes the following non-member functions that operate on **span** objects.

| **Non-member functions** | **Description** |
|-|-|
|[as_bytes](#as_bytes) | Get a read-only view of the object representation of the elements in the span. |
|[as_writeable_bytes](#as_writable_bytes) | Get a read/write view to the object representation of the elements in the span. |

## <a name="as_bytes"></a>`as_bytes`

Get a read-only view of the object representation of the elements in the span.

```cpp
template <class T, size_t Extent>
auto as_bytes(span<T, Extent> span) noexcept
```

### Parameters

*T*\
The type of the elements in the span.

*Extent*\
The number of elements in the span (if known at compile time), otherwise `Dynamic_Extent` indicating that the number of elements isn't known until runtime.

*span*\
The span to get the raw representation of.

### Return Value

A `const byte*` to the first item stored in the span. If the span is empty, returns `nullptr`.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    auto bytes = std::as_bytes(mySpan);
}
```

## <a name="as_writable_bytes"></a>`as_writable_bytes`

If `T` isn't `const`, gets a read/write view to the raw byte representation of the elements in the span.

```cpp
template <class T, size_t Extent>
auto as_writeable_bytes(span<T, Extent> span) noexcept
```

### Parameters

*T*\
The type of the elements in the span.

*Extent*\
The number of elements in the span (if known at compile time), otherwise `Dynamic_Extent` indicating that the number of elements isn't known until runtime.

*span*\
The span to get the raw representation of.

### Return Value

A `byte*` to the first item stored in the span. If the span is empty, returns `nullptr`.

### Example

```cpp
#include <span>
#include <iostream>

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    auto bytes = std::as_writable_bytes(mySpan);
}
```

## See also

[\<span>](span.md)
