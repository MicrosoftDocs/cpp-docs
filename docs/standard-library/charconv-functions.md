---
title: "&lt;charconv&gt; functions"
ms.date: "07/15/2020"
f1_keywords: ["charconv/std::charconv::to_chars", "charconv/std::charconv::from_chars"]
helpviewer_keywords: ["std::charconv [C++], to_chars", "std::charconv [C++], from_chars"]
---
# &lt;charconv&gt; functions

The \<charconv> header includes the following non-member functions.

| **Non-member functions** | **Description** |
|-|-|
|[to_char](#to_char) | Convert an integer, float, or double to a sequence of `char`. |
|[from_char](#from_char) | Convert a sequence of `char` to  an integer, float, or double. |

## <a name="to_char"></a>`to_char`

Convert a `char`, `short`, `int`, `long`, `float`, `double`, `long double`, or `long long` to a sequence of `char`.

## Integer to chars

``` cpp
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
```

### Parameters

*first*\
...

*last*\
...

*value*\
...

*base*\
...

### Return Value

A `to_chars_result` that holds the result of the conversion, and an error code, if any.

## Floating point to char

```cpp
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
...

*last*\
...

*value*\
...

*fmt*\
...

*precision*\
...

### Return Value

A `to_chars_result` that holds the result of the conversion, and an error code, if any.

### Example

```cpp
#include <charconv>
#include <iostream>

using namespace std;

void main()
{
    
}
```

## <a name="from_char"></a>`from_char`

Convert a sequence of `char` to a `short`, `integer`, `float`, `double`, or `long double`.

## Char to integer

```cpp
inline from_chars_result from_chars(const char* const _First, const char* const _Last, char& _Value, const int _Base = 10)
inline from_chars_result from_chars(const char* const _First, const char* const _Last, signed char& _Value,const int _Base = 10)
inline from_chars_result from_chars(const char* const _First, const char* const _Last, unsigned char& _Value,const int _Base = 10)
inline from_chars_result from_chars(const char* const _First, const char* const _Last, short& _Value,const int _Base = 10)
inline from_chars_result from_chars(const char* const _First, const char* const _Last, unsigned short& _Value,const int _Base = 10)
inline from_chars_result from_chars(const char* const _First, const char* const _Last, int& _Value, const int _Base = 10)
inline from_chars_result from_chars(const char* const _First, const char* const _Last, unsigned int& _Value,const int _Base = 10)
inline from_chars_result from_chars(const char* const _First, const char* const _Last, long& _Value, const int _Base = 10)
inline from_chars_result from_chars(const char* const _First, const char* const _Last, unsigned long& _Value,const int _Base = 10)
inline from_chars_result from_chars(const char* const _First, const char* const _Last, long long& _Value,const int _Base = 10)
inline from_chars_result from_chars(const char* const _First, const char* const _Last, unsigned long long& _Value,const int _Base = 10)
```

## Char to float

```cpp
inline from_chars_result from_chars(const char* const _First, const char* const _Last, float& _Value,const chars_format _Fmt = chars_format::general)
inline from_chars_result from_chars(const char* const _First, const char* const _Last, double& _Value,const chars_format _Fmt = chars_format::general)
inline from_chars_result from_chars(const char* const _First, const char* const _Last, long double& _Value,const chars_format _Fmt = chars_format::general)
```

## See also

[\<charconv>](charconv.md)
