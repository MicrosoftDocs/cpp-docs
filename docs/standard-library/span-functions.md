---
description: "Learn more about: &lt;span&gt; functions"
title: "&lt;span&gt; functions"
ms.date: "05/28/2020"
f1_keywords: ["span/std::span::as_bytes", "span/std::as_writable_bytes"]
helpviewer_keywords: ["std::span [C++], as_writable_bytes", "std::as_bytes [C++]"]
---
# &lt;span&gt; functions

The \<span> header includes the following non-member functions that operate on **span** objects.

| **Non-member functions** | **Description** |
|-|-|
|[as_bytes](#as_bytes) | Get a read-only view of the object representation of the elements in the span. |
|[as_writable_bytes](#as_writable_bytes) | Get a read/write view of the object representation of the elements in the span. |

## <a name="as_bytes"></a>`as_bytes`

Get a read-only view of the object representation of the elements in the span.

```cpp
template <class T, size_t Extent>
auto as_bytes(span<T, Extent> s) noexcept;
```

### Parameters

*T*\
The type of the elements in the span.

*Extent*\
The number of elements in the span (if known at compile time), otherwise `dynamic_extent` indicating that the number of elements isn't known until runtime.

*s*\
The span to get the raw representation of.

### Return Value

A `span<const byte, S>` to the first item stored in the span where `S` is `{reinterpret_cast<const std::byte*>(s.data()), s.size_bytes()}`

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    auto bytes = std::as_bytes(mySpan);
}
```

## <a name="as_writable_bytes"></a>`as_writable_bytes`

If `T` isn't **`const`**, gets a read/write view of the raw byte representation of the elements in the span.

```cpp
template <class T, size_t Extent>
auto as_writable_bytes(span<T, Extent> s) noexcept;
```

### Parameters

*T*\
The type of the elements in the span.

*Extent*\
The number of elements in the span (if known at compile time), otherwise `dynamic_extent` indicating that the number of elements isn't known until runtime.

*s*\
The span to get the raw representation of.

### Return Value

A `span<byte, S>` to the first item stored in the span where `S` is `{reinterpret_cast<std::byte*>(s.data()), s.size_bytes()}`

### Example

```cpp
#include <span>
#include <iostream>

using namespace std;

void main()
{
    int a[] = { 0,1,2 };
    span <int> mySpan(a);
    auto bytes = as_writable_bytes(mySpan);
}
```

## See also

[\<span>](span.md)
