---
description: "Learn more about: char_traits&lt;char16_t&gt; Struct"
title: "char_traits&lt;char16_t&gt; Struct"
ms.date: "11/04/2016"
f1_keywords: ["char_traits<char16_t>", "iosfwd/std::char_traits<char16_t>"]
helpviewer_keywords: ["char_traits<char16_t> class"]
ms.assetid: 5daf3b62-dd6e-451f-b189-0350a04ff966
---
# char_traits&lt;char16_t&gt; Struct

A struct that is a specialization of the template struct **char_traits\<CharType>** to an element of type **`char16_t`**.

## Syntax

```cpp
template <>
struct char_traits<char16_t>;
```

## Remarks

Specialization allows the struct to take advantage of library functions that manipulate objects of the type **`char16_t`**.

## Requirements

**Header:** \<string>

**Namespace:** std

## See also

[\<string>](../standard-library/string.md)\
[char_traits Struct](../standard-library/char-traits-struct.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
