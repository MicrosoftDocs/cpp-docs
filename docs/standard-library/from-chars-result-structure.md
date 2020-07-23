---
title: "from_chars_result struct"
ms.date: "7/22/2020"
f1_keywords: ["std::from_chars_result"]
helpviewer_keywords: ["from_chars_result class", "from_chars_result structure"]
---
# from_chars_result struct

## Syntax

```cpp
struct from_chars_result {
    const char* ptr;
    errc ec;
};
```

|Member|Description|
|--|--|
|`ptr`| If `ec` is equal to `errc{}`, the conversion was successful and `ptr` has the value of the `from_chars()` parameter `last`. Otherwise, `ptr` points at the first character not matching the pattern and the contents of the range \[first, last) are unspecified.|
|`ec` | The conversion error code. For specific error codes, see [`errc`](system-error-enums.md#errc).|

## Requirements

**Header:** \<charconv>

**Namespace:** std

**Compiler option:** /std:c++17, or later, is required

## See also

[from_chars](charconv-functions.md#from_chars)
