---
title: "&lt;charconv&gt; functions"
ms.date: "07/14/2020"
f1_keywords: ["charconv/std::charconv::to_chars", "charconv/std::charconv::from_chars"]
helpviewer_keywords: ["std::charconv [C++], to_chars", "std::charconv [C++], from_chars"]
---
# &lt;charconv&gt; functions

The \<charconv> header includes the following non-member functions:

| **Non-member functions** | **Description** |
|-|-|
|[to_chars](#to_chars) | Convert an integer or floating point type to a sequence of `char`. |
|[from_chars](#from_chars) | Convert a sequence of `char` to  an integer or floating point type. |

## `to_chars`

Convert an integer or floating point type value to a sequence of `char`.

Converts `value` into a character string by filling the range \[first, last), where \[first, last) must be a valid range. 
If  the conversion is successful, as indicated by `to_char_result.ec`, the member ptr is the one-past-the-end pointer of the characters written. Otherwise, `to_char_result.ec` has the value `errc::value_too_large`, `to_char_result.ptr` has the value `last`, and the contents of the range
\[first, last) are unspecified.

``` cpp
// integer to chars

inline to_chars_result to_chars(char* const first, char* const last, const char value, const int base = 10)
inline to_chars_result to_chars(char* const first, char* const last, const signed char value, const int base = 10)
inline to_chars_result to_chars(char* const first, char* const last, const unsigned char value, const int base = 10)
inline to_chars_result to_chars(char* const first, char* const last, const short value, const int base = 10)
inline to_chars_result to_chars(char* const first, char* const last, const unsigned short value, const int base = 10)
inline to_chars_result to_chars(char* const first, char* const last, const int value, const int base = 10)
inline to_chars_result to_chars(char* const first, char* const last, const unsigned int value,const int base = 10)
inline to_chars_result to_chars(char* const first, char* const last, const long value, const int base = 10)
inline to_chars_result to_chars(char* const first, char* const last, const unsigned long value,const int base = 10)
inline to_chars_result to_chars(char* const first, char* const last, const long long value, const int base = 10)
inline to_chars_result to_chars(char* const first, char* const last, const unsigned long long value,const int base = 10)

// floating point to chars

inline to_chars_result to_chars(char* const first, char* const last, const float value)
inline to_chars_result to_chars(char* const first, char* const last, const double value)
inline to_chars_result to_chars(char* const first, char* const last, const long double value)
inline to_chars_result to_chars(char* const first, char* const last, const float value, const chars_format fmt)
inline to_chars_result to_chars(char* const first, char* const last, const double value, const chars_format fmt)
inline to_chars_result to_chars(char* const first, char* const last, const long double value,const chars_format fmt)
inline to_chars_result to_chars(char* const first, char* const last, const float value, const chars_format fmt,const int precision)
inline to_chars_result to_chars(char* const first, char* const last, const double value, const chars_format fmt,const int precision)
inline to_chars_result to_chars(char* const first, char* const last, const long double value,const chars_format fmt, const int precision)
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
For floating point conversions, a bitmask specifying the conversion format to use such as scientific, fixed, or hexadecimal. See [chars_format](chars-format-enum.md) for details.

*precision*\
For floating point conversions, the number of digits of precision for the converted value.

### Return value

A [to_chars_result](to-chars-result-structure.md) containing the result of the conversion.

### Remarks

About floating point to chars conversions:

`value` is converted to a string using `printf()` in the "C" locale style. The conversion specifier is `f` or `e`, chosen by whichever one provides the shortest representation. If there is a tie, `f` is used.

Functions that take a floating-point `value` but not a `precision` parameter ensure that the string representation consists of the smallest  number of characters such that there is at least one digit before the radix point (if present). Parsing the representation using the corresponding `from_chars` function will recover the value exactly.

If there are several such representations, the representation with the smallest difference from the floating-point argument value is chosen.

The functions taking a [chars_format](chars-format-enum.md) parameter determine the conversion specifier for printf as follows:
The conversion specifier is f if fmt is chars_format::fixed, e if fmt is chars_format::scientific, a
(without leading "0x" in the result) if fmt is chars_format::hex, and g if fmt is chars_format::general.

### Return value

A [to_chars_result](to-chars-result-structure.md) that holds the result of the conversion.

### Example

```cpp
#include <charconv>
#include <stdio.h>

template <typename T> void TestToChars(const T t)
{
    static_assert(std::is_floating_point_v<T>);
    constexpr bool IsFloat = std::is_same_v<T, float>;

    char buf[100]; // 100 is large enough for double and long double values
    constexpr size_t size = IsFloat ? 15 : 24;
    const std::to_chars_result res = std::to_chars(buf, buf + size, t);  // points to buffer area it can use. Must be char, not wchar, etc.
    
    if (res.ec == std::errc{}) // no error
    {
        printf("success: %.*s\n", static_cast<int>(res.ptr - buf), buf);
    }
    else // probably std::errc::value_too_large
    {
        printf("Error: %d\n", (int)res.ec);
    }
}

int main()
{
    TestToChars(123.34);
    return 0;
}
```

## `from_chars`

Convert a sequence of `char` to an integer or floating point type.

```cpp
// char to an integer type

inline from_chars_result from_chars(const char* const first, const char* const last, char& value, const int base = 10)
inline from_chars_result from_chars(const char* const first, const char* const last, signed char& value,const int base = 10)
inline from_chars_result from_chars(const char* const first, const char* const last, unsigned char& value,const int base = 10)
inline from_chars_result from_chars(const char* const first, const char* const last, short& value,const int base = 10)
inline from_chars_result from_chars(const char* const first, const char* const last, unsigned short& value,const int base = 10)
inline from_chars_result from_chars(const char* const first, const char* const last, int& value, const int base = 10)
inline from_chars_result from_chars(const char* const first, const char* const last, unsigned int& value,const int base = 10)
inline from_chars_result from_chars(const char* const first, const char* const last, long& value, const int base = 10)
inline from_chars_result from_chars(const char* const first, const char* const last, unsigned long& value,const int base = 10)
inline from_chars_result from_chars(const char* const first, const char* const last, long long& value,const int base = 10)
inline from_chars_result from_chars(const char* const first, const char* const last, unsigned long long& value, const int base = 10)

// char to a floating point type

inline from_chars_result from_chars(const char* const first, const char* const last, float& value,const chars_format fmt = chars_format::general)
inline from_chars_result from_chars(const char* const first, const char* const last, double& value,const chars_format fmt = chars_format::general)
inline from_chars_result from_chars(const char* const first, const char* const last, long double& value,const chars_format fmt = chars_format::general)
```

### Parameters

*first*\
Points to the beginning of the buffer of characters to convert.

*last*\
Points up to, but not including, the end of the buffer of characters to convert.

*value*\
If the conversion is successful, contains the result of the conversion.

*base*\
For integer conversions, the base to use during the conversion. Must be between 2 and 36, inclusive.

*fmt*\
For floating point conversions, the format of the sequence of chars being converted. See [chars_format](chars-format-enum.md) for details.

### Remarks

The `from_chars()` functions analyze the string [first, last) for a number pattern, where [first, last) is
required to be a valid range.

If no characters match a number pattern, `value` is unmodified, `from_chars_result.ptr`
points to `first`, and `from_chars_result.ec` is `errc::invalid_argument`.

If only some characters match a number pattern, `from_chars_result.ptr` points to the first character not
matching the pattern, or has the value of the `last` parameter if all characters match.

If the parsed value isn't in the range representable by the type of `value`, `value` is unmodified and `from_chars_result.ec` is `errc::result_out_of_range`.

Otherwise, `value` is set to the parsed value, after rounding, and `from_chars_result.ec` is value-initialized, that is `std::errc{}`.

### Example

```cpp
#include <charconv>
#include <stdio.h>
#include <string_view>

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
        printf("Error: %d\n", (int)res.ec);
    }

    return dbl;
}

int main()
{
    double dbl = TestFromChars("123.34");
    return 0;
}
```

## See also

[\<charconv>](charconv.md)