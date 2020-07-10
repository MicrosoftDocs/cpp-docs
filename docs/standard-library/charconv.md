---
title: "&lt;charconv&gt;"
ms.date: "07/15/2020"
f1_keywords: ["<charconv>"]
helpviewer_keywords: ["charconv header"]
---

# &lt;charconv&gt;

Quickly converts a character sequence to an integer or floating point value, and vice-versa.
Can be used to quickly round trip floating point values to JSON, text files, and so on.

<statement of advantages over strtod()/strtol(), and std::to_string(), e.g. std::to_string limits precision to 6 digits, MORE JTW>

Here's an example of how to use the <charconv> library:

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
    double dbl = TestFromChars("123.34");
    TestToChars(dbl);
}
```

## Requirements

**Header:** \<charconv>

**Namespace:** std

**Compiler Option:** /std:c++latest

## Members

### Types

|||
|-|:-|
| [chars_format](chars-format-class.md) | Specifies formatting type such as scientific, hex, and so on. |
| [from_chars_result](from-chars-result-structure.md) | Holds the result of a `from_chars` conversion. |
| [to_chars_result](to-chars-result-structure.md) | Holds the result of a `to_chars` conversion. |

### Functions

|||
|-|:-|
| [to_chars](charconv-functions.md#to_chars)| Convert a integer, float, or double. |
| [from_chars](charconv-functions.md#from_chars) | Convert chars to a integer, float, or double. |

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
