---
description: "Learn more about: to_chars_result struct"
title: "to_chars_result struct"
ms.date: "07/22/2020"
f1_keywords: ["charconv/std::to_chars_result"]
helpviewer_keywords: ["to_chars_result class", "to_chars_result structure"]
---
# to_chars_result struct

## Syntax

```cpp
struct to_chars_result {
    char* ptr;
    errc ec;
};
```

## Members

|Member|Description|
|--|--|
|`ptr`| If `ec` is equal to `errc{}`, the conversion was successful and `ptr` is the one-past-the-end pointer of the written characters. Otherwise, `ptr` has the value of the `to_chars()` parameter `last`, and the contents of the range \[first, last) are unspecified.|
|`ec` | The conversion error code. For specific error codes, see [`errc`](system-error-enums.md#errc).|

## Requirements

**Header:** \<charconv>

**Namespace:** std

**Compiler option:** /std:c++17, or later, is required

## See also

[to_chars](charconv-functions.md#to_chars)
