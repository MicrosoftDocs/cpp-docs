---
title: "<sstream> functions"
description: "Learn more about: <sstream> functions"
ms.date: 11/04/2016
f1_keywords: ["sstream/std::swap"]
---
# `<sstream>` functions

The `<sstream>` header provides the following functions:

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
