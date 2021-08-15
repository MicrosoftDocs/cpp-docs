---
description: "Learn more about: &lt;sstream&gt; functions"
title: "&lt;sstream&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["sstream/std::swap"]
ms.assetid: bc9607e8-7c6b-44ef-949b-19e917b450ad
---
# &lt;sstream&gt; functions

[swap](#sstream_swap)

## <a name="sstream_swap"></a> swap

Exchanges the values between two `sstream` objects.

```cpp
template <class Elem, class Tr, class Alloc>
void swap(
    basic_stringbuf<Elem, Tr, Alloc>& left,
    basic_stringbuf<Elem, Tr, Alloc>& right);

template <class Elem, class Tr, class Alloc>
void swap(
    basic_istringstream<Elem, Tr, Alloc>& left,
    basic_istringstream<Elem, Tr, Alloc>& right);

template <class Elem, class Tr, class Alloc>
void swap(
    basic_ostringstream<Elem, Tr, Alloc>& left,
    basic_ostringstream<Elem, Tr, Alloc>& right);

template <class Elem, class Tr, class Alloc>
void swap(
    basic_stringstream<Elem, Tr, Alloc>& left,
    basic_stringstream<Elem, Tr, Alloc>& right);
```

### Parameters

*left*\
Reference to an `sstream` object.

*right*\
Reference to an `sstream` object.

### Remarks

The template function executes `left.swap(right)`.

## See also

[\<sstream>](../standard-library/sstream.md)
