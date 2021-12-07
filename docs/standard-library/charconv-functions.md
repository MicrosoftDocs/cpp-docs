---
title: "<charconv> functions"
description: "Describes the <charconv> library functions that convert integer or floating-point values to or from chars"
ms.date: "08/20/2020"
f1_keywords: ["charconv/std::to_chars", "charconv/std::from_chars"]
helpviewer_keywords: ["std::charconv [C++], to_chars", "std::charconv [C++], from_chars"]
---
# `<charconv>` functions

The \<charconv> header includes the following non-member functions:

| **Non-member functions** | **Description** |
|-|-|
|[to_chars](#to_chars) | Convert an integer or floating-point value to a sequence of **`char`**. |
|[from_chars](#from_chars) | Convert a sequence of **`char`** to  an integer or floating-point value. |

These conversion functions are tuned for performance, and also support shortest-round-trip behavior. Shortest-round-trip behavior means when a number is converted to chars, only enough precision is written out to enable recovering the original number when converting those chars back to a floating-point.

- When converting chars to a number, the numeric value doesn't need to be null-terminated. Likewise, when converting a number to chars, the result isn't null-terminated.
- The conversion functions don't allocate memory. You own the buffer in all cases.
- The conversion functions don't throw. A result is returned from which you can determine if the conversion succeeded.
- The conversion functions aren't runtime rounding-mode sensitive.
- The conversion functions aren't locale aware. They always print and parse decimal points as `'.'`, and never as ',' for locales that use commas.

## `to_chars`

Convert an integer or floating-point value to a sequence of **`char`**.

Converts `value` into a character string by filling the range \[`first`, `last`), where \[`first`, `last`) must be a valid range.
Returns a [to_chars_result structure](to-chars-result-structure.md). If  the conversion is successful, as indicated by `to_char_result.ec`, the member `ptr` is the one-past-the-end pointer of the characters written. Otherwise, `to_char_result.ec` has the value `errc::value_too_large`, `to_char_result.ptr` has the value `last`, and the contents of the range
\[`first`, `last`) are unspecified.

The only way that `to_chars` can fail is if you provide an insufficiently large buffer to hold the result.

```cpp
// integer to chars

to_chars_result to_chars(char* first, char* last, char value, int base = 10);
to_chars_result to_chars(char* first, char* last, signed char value, int base = 10);
to_chars_result to_chars(char* first, char* last, unsigned char value, int base = 10);
to_chars_result to_chars(char* first, char* last, short value, int base = 10);
to_chars_result to_chars(char* first, char* last, unsigned short value, int base = 10);
to_chars_result to_chars(char* first, char* last, int value, int base = 10);
to_chars_result to_chars(char* first, char* last, unsigned int value, int base = 10);
to_chars_result to_chars(char* first, char* last, long value, int base = 10);
to_chars_result to_chars(char* first, char* last, unsigned long value, int base = 10);
to_chars_result to_chars(char* first, char* last, long long value, int base = 10);
to_chars_result to_chars(char* first, char* last, unsigned long long value, int base = 10);
to_chars_result to_chars(char* first, char* last, bool value, int base = 10) = delete;

// floating-point to chars

to_chars_result to_chars(char* first, char* last, float value);
to_chars_result to_chars(char* first, char* last, double value);
to_chars_result to_chars(char* first, char* last, long double value);
to_chars_result to_chars(char* first, char* last, float value, chars_format fmt);
to_chars_result to_chars(char* first, char* last, double value, chars_format fmt);
to_chars_result to_chars(char* first, char* last, long double value, chars_format fmt);
to_chars_result to_chars(char* first, char* last, float value, chars_format fmt, int precision);
to_chars_result to_chars(char* first, char* last, double value, chars_format fmt, int precision);
to_chars_result to_chars(char* first, char* last, long double value, chars_format fmt, int precision);
```

### Parameters

*first*\
Points to the beginning of the buffer to fill.

*last*\
Points one char past the end of the buffer to fill.

*value*\
The value to convert. If `value` is negative, the representation starts with `-`.

*base*\
For integer conversions, the base to use when converting `value` to chars. Must be between 2 and 36, inclusive. There will be no leading zeros. Digits in the range 10..35 (inclusive) are represented as lowercase characters a..z

*fmt*\
For floating-point conversions, a bitmask specifying the conversion format to use such as scientific, fixed, or hexadecimal. See [chars_format](chars-format-class.md) for details.

*precision*\
For floating-point conversions, the number of digits of precision for the converted value.

### Return value

A [to_chars_result](to-chars-result-structure.md) containing the result of the conversion.

### Remarks

Functions taking a [chars_format](chars-format-class.md) parameter determine the conversion specifier as if they were using `printf()` as follows:
The conversion specifier is `'f'` if `fmt` is `chars_format::fixed`, `'e'` if `fmt` is `chars_format::scientific`, `'a'` (without the leading `0x` in the result) if `fmt` is `chars_format::hex`, and `'g'` if `fmt` is `chars_format::general`. Specifying the shortest fixed notation may still result in lengthy output because it may be the shortest possible representation when the value is very large or very small.

The following table describes the conversion behavior given different combinations of `fmt` and `precision` parameters. The term "shortest-round-trip behavior" refers to writing the fewest number of digits necessary such that parsing that representation using the corresponding `from_chars` function will recover the value exactly.

| `fmt` and `precision` combination | Output |
|--|--|
|  Neither | Whichever of fixed or scientific notation is shorter, preferring fixed as a tiebreaker.</br>This behavior can't be simulated by any overload that takes the `fmt` parameter. |
| `fmt` | The shortest-round-trip behavior for the specified format, such as the shortest scientific format. |
| `fmt` and `precision` | Uses the given precision, following `printf()` style, without  shortest-round-trip behavior. |

### Example

```cpp
#include <charconv>
#include <stdio.h>
#include <system_error>

template <typename T> void TestToChars(const T t)
{
    static_assert(std::is_floating_point_v<T>);
    constexpr bool IsFloat = std::is_same_v<T, float>;

    char buf[100]; // 100 is large enough for double and long double values because the longest possible outputs are "-1.23456735e-36" and "-1.2345678901234567e-100".
    constexpr size_t size = IsFloat ? 15 : 24;
    const std::to_chars_result res = std::to_chars(buf, buf + size, t);  // points to buffer area it can use. Must be char, not wchar_t, etc.

    if (res.ec == std::errc{}) // no error
    {
        // %.*s provides the exact number of characters to output because the output range, [buf, res.ptr), isn't null-terminated
        printf("success: %.*s\n", static_cast<int>(res.ptr - buf), buf);
    }
    else // probably std::errc::value_too_large
    {
        printf("Error: %d\n", static_cast<int>(res.ec));
    }
}

int main()
{
    TestToChars(123.34);
    return 0;
}
```

## `from_chars`

Convert a sequence of **`char`** to an integer or floating-point value.

```cpp
// char to an integer value

from_chars_result from_chars(const char* first, const char* last, char& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, signed char& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, unsigned char& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, short& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, unsigned short& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, int& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, unsigned int& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, long& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, unsigned long& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, long long& value, int base = 10);
from_chars_result from_chars(const char* first, const char* last, unsigned long long& value, int base = 10);

// char to a floating-point value

from_chars_result from_chars(const char* first, const char* last, float& value, chars_format fmt = chars_format::general);
from_chars_result from_chars(const char* first, const char* last, double& value, chars_format fmt = chars_format::general);
from_chars_result from_chars(const char* first, const char* last, long double& value, chars_format fmt = chars_format::general);
```

### Parameters

*first*\
Points to the beginning of the buffer of characters to convert.

*last*\
Points one past the end element of the buffer of characters to convert.

*value*\
If the conversion is successful, contains the result of the conversion.

*base*\
For integer conversions, the base to use during the conversion. Must be between 2 and 36, inclusive.

*fmt*\
For floating-point conversions, the format of the sequence of chars being converted. See [chars_format](chars-format-class.md) for details.

### Remarks

The `from_chars()` functions analyze the string \[`first`, `last`) for a number pattern, where \[`first`, `last`) is required to be a valid range.

When parsing chars, whitespace isn't ignored. Unlike `strtod()`, for example, the buffer must start with a valid numeric representation.

Returns a [from_chars_result structure](from-chars-result-structure.md).

If no characters match a number pattern, `value` is unmodified, `from_chars_result.ptr` points to `first`, and `from_chars_result.ec` is `errc::invalid_argument`.

If only some characters match a number pattern, `from_chars_result.ptr` points to the first character not matching the pattern, or has the value of the `last` parameter if all characters match.

If the parsed value isn't in the range representable by the type of `value`, `value` is unmodified and `from_chars_result.ec` is `errc::result_out_of_range`.

Otherwise, `value` is set to the parsed value, after rounding, and `from_chars_result.ec` is equal to `errc{}`.

### Example

```cpp
#include <charconv>
#include <stdio.h>
#include <string_view>
#include <system_error>

double TestFromChars(const std::string_view sv)
{
    const char* const first = sv.data();
    const char* const last = first + sv.size();
    double dbl;

    const std::from_chars_result res = std::from_chars(first, last, dbl);

    if (res.ec == std::errc{}) // no error
    {
        printf("success: %g\n", dbl);
    }
    else
    {
        printf("Error: %d\n", static_cast<int>(res.ec));
    }

    return dbl;
}

int main()
{
    double dbl = TestFromChars("123.34");
    return 0;
}
```

## Requirements

**Header:** \<charconv>

**Namespace:** std

[`/std:c++17`](../build/reference/std-specify-language-standard-version.md) or later is required.

## See also

[\<charconv>](charconv.md)  
[The shortest decimal string that round-trips](https://www.exploringbinary.com/the-shortest-decimal-string-that-round-trips-examples/)
[printf() format specifiers](..\c-runtime-library\format-specification-syntax-printf-and-wprintf-functions.md)
