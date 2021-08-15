---
description: "Learn more about: from_chars_result struct"
title: "from_chars_result struct"
ms.date: "7/23/2020"
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
|`ptr`| If `ec` is equal to `errc{}`, the conversion was successful and `ptr` points to the first character that isn't part of the recognized number. |
|`ec` | The conversion error code. For specific error codes, see [`errc`](system-error-enums.md#errc).|

### Remarks

An example: parsing `"1729cats"` as a decimal integer will succeed, and `ptr` will point to `'c'` which is the first non-digit and is also one-past-the-end of `"1729"`.

If no characters match a number pattern, `from_chars_result.ptr` points to `first`, and `from_chars_result.ec` is `errc::invalid_argument`.

If only some characters match a number pattern, `from_chars_result.ptr` points to the first character not matching the pattern, or has the value of the `last` parameter if all characters match.

If the parsed value won't fit the range for the type of conversion being done, `from_chars_result.ec` is `errc::result_out_of_range`.

## Requirements

**Header:** \<charconv>

**Namespace:** std

**Compiler option:** /std:c++17, or later, is required

## See also

[from_chars](charconv-functions.md#from_chars)
