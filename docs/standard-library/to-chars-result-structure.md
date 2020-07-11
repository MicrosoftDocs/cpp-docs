---
title: "to_chars_result Structure"
ms.date: "07/14/2020"
f1_keywords: ["charconv/std::to_chars_result"]
helpviewer_keywords: ["to_chars_result class", "to_chars_result structure"]
---
# to_chars_result Structure

## Syntax

```cpp
struct to_chars_result {
    char* ptr;
    error_code ec;
};
```

## Members

`ptr`, If `ec` is the value of a value-initialized `errc`, the conversion was successful
and `ptr` points one-past-the-end pointer of the characters written. Otherwise, `ptr` has the value of the to_chars() parameter `last`, and the contents of the range \[first, last) are unspecified.

`ec`, the conversion error code. For specific error codes, see [`errc`](system-error-enums.md#errc).

## Requirements

**Header:** \<charconv>

**Namespace:** std

## See also

[to_chars](charconv-functions.md#to_chars)
