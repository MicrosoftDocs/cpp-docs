---
description: "Learn more about: &lt;string&gt; functions"
title: "&lt;string&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["string/std::getline", "string/std::stod", "string/std::stof", "string/std::stoi", "string/std::stol", "string/std::stold", "string/std::stoll", "string/std::stoul", "string/std::stoull", "string/std::swap", "string/std::to_string", "string/std::to_wstring"]
ms.assetid: 1a4ffd11-dce5-4cc6-a043-b95de034c7c4
helpviewer_keywords: ["std::getline [C++]", "std::stod [C++]", "std::stof [C++]", "std::stoi [C++]", "std::stol [C++]", "std::stold [C++]", "std::stoll [C++]", "std::stoul [C++]", "std::stoull [C++]", "std::swap [C++]", "std::to_string [C++]", "std::to_wstring [C++]"]
---
# &lt;string&gt; functions

[getline](#getline)\
[stod](#stod)\
[stof](#stof)\
[stoi](#stoi)\
[stol](#stol)\
[stold](#stold)\
[stoll](#stoll)\
[stoul](#stoul)\
[stoull](#stoull)\
[swap](#swap)\
[to_string](#to_string)\
[to_wstring](#to_wstring)

## <a name="getline"></a> getline

Extract strings from the input stream line-by-line.

```cpp
// (1) delimiter as parameter
template <class CharType, class Traits, class Allocator>
basic_istream<CharType, Traits>& getline(
    basic_istream<CharType, Traits>& in_stream,
    basic_string<CharType, Traits, Allocator>& str,
    CharType delimiter);

template <class CharType, class Traits, class Allocator>
basic_istream<CharType, Traits>& getline(
    basic_istream<CharType, Traits>&& in_stream,
    basic_string<CharType, Traits, Allocator>& str,
    const CharType delimiter);

// (2) default delimiter used
template <class CharType, class Traits, class Allocator>
basic_istream<CharType, Traits>& getline(
    basic_istream<CharType, Traits>& in_stream,
    basic_string<CharType, Traits, Allocator>& str);

template <class Allocator, class Traits, class Allocator>
basic_istream<Allocator, Traits>& getline(
    basic_istream<Allocator, Traits>&& in_stream,
    basic_string<Allocator, Traits, Allocator>& str);
```

### Parameters

*in_stream*\
The input stream from which a string is to be extracted.

*str*\
The string into which are read the characters from the input stream.

*delimiter*\
The line delimiter.

### Return Value

The input stream *in_stream*.

### Remarks

The pair of function signatures marked `(1)` extract characters from *in_stream* until *delimiter* is found, storing them in *str*.

The pair of function signatures marked `(2)` use newline as the default line delimiter and behave as `getline(in_stream, str, in_stream. widen('\n'))`.

The second function of each pair is an analog to the first one to support [rvalue references](../cpp/lvalues-and-rvalues-visual-cpp.md).

Extraction stops when one of the following occurs:

- At end of file, in which case the internal state flag of *in_stream* is set to `ios_base::eofbit`.

- After the function extracts an element that compares equal to *delimiter*. The element doesn't get put back or appended to the controlled sequence.

- After the function extracts `str.`[max_size](../standard-library/basic-string-class.md#max_size) elements. The internal state flag of *in_stream* is set to `ios_base::failbit`.

- Some other error other than the ones previously listed; the internal state flag of *in_stream* is set to `ios_base::badbit`.

For information about internal state flags, see [ios_base::iostate](../standard-library/ios-base-class.md#iostate).

If the function extracts no elements, the internal state flag of *in_stream* is set to `ios_base::failbit`. In any case, `getline` returns *in_stream*.

If an exception is thrown, *in_stream* and *str* are left in a valid state.

### Example

The following code demonstrates `getline()` in two modes: first with the default delimiter (newline) and second with a whitespace as delimiter. The end-of-file character (CTRL-Z on the keyboard) is used to control termination of the while loops. This value sets the internal state flag of `cin` to `eofbit`, which must be cleared with [basic_ios::clear()](../standard-library/basic-ios-class.md#clear) before the second while loop will work properly.

```cpp
// compile with: /EHsc /W4
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string str;
    vector<string> v1;
    cout << "Enter a sentence, press ENTER between sentences. (Ctrl-Z to stop): " << endl;
    // Loop until end-of-file (Ctrl-Z) is input, store each sentence in a vector.
    // Default delimiter is the newline character.
    while (getline(cin, str)) {
        v1.push_back(str);
    }

    cout << "The following input was stored with newline delimiter:" << endl;
    for (const auto& p : v1) {
        cout << p << endl;
    }

    cin.clear();

    vector<string> v2;
    // Now try it with a whitespace delimiter
    while (getline(cin, str, ' ')) {
        v2.push_back(str);
    }

    cout << "The following input was stored with whitespace as delimiter:" << endl;
    for (const auto& p : v2) {
        cout << p << endl;
    }
}
```

## <a name="stod"></a> stod

Converts a character sequence to a **`double`**.

```cpp
double stod(
    const string& str,
    size_t* idx = 0);

double stod(
    const wstring& str,
    size_t* idx = 0
;
```

### Parameters

*str*\
The character sequence to be converted.

*idx*\
The index value of the first unconverted character.

### Return Value

The **`double`** value.

### Remarks

The function converts the sequence of elements in *str* to a value of type **`double`** as if by calling `strtod( str.c_str(), _Eptr)`, where `_Eptr` is an object internal to the function. If `str.c_str() == *_Eptr`, it throws an object of type `invalid_argument`. If such a call would set `errno`, it throws an object of type `out_of_range`. Otherwise, if *idx* isn't a null pointer, the function stores `*_Eptr -  str.c_str()` in `*idx` and returns the value.

## <a name="stof"></a> stof

Converts a character sequence to a float.

```cpp
float stof(
    const string& str,
    size_t* idx = 0);

float stof(
    const wstring& str,
    size_t* idx = 0);
```

### Parameters

*str*\
The character sequence to be converted.

*idx*\
The index value of the first unconverted character.

### Return Value

The **`float`** value.

### Remarks

The function converts the sequence of elements in *str* to a value of type **`float`** as if by calling `strtof( str.c_str(), _Eptr)`, where `_Eptr` is an object internal to the function. If `str.c_str() == *_Eptr`, it throws an object of type `invalid_argument`. If such a call would set `errno`, it throws an object of type `out_of_range`. Otherwise, if *idx* isn't a null pointer, the function stores `*_Eptr -  str.c_str()` in `*idx` and returns the value.

## <a name="stoi"></a> stoi

Converts a character sequence to an integer.

```cpp
int stoi(
    const string& str,
    size_t* idx = 0,
    int base = 10);

int stoi(
    const wstring& str,
    size_t* idx = 0,
    int base = 10);
```

### Return Value

The integer value.

### Parameters

*str*\
The character sequence to be converted.

*idx*\
The index value of the first unconverted character.

*base*\
The number base to use.

### Remarks

The function `stoi` converts the sequence of characters in *str* to a value of type **`int`** and returns the value. For example, when passed a character sequence "10", the value returned by `stoi` is the integer 10.

`stoi` behaves similarly to the function `strtol` for single-byte characters when it's called in the manner `strtol( str.c_str(), _Eptr, idx)`, where `_Eptr` is an object internal to the function; or `wcstol` for wide characters, when it's called in similar manner, `wcstol(Str.c_str(), _Eptr, idx)`. For more information, see [strtol, wcstol, _strtol_l, _wcstol_l](../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md).

If `str.c_str() == *_Eptr`, `stoi` throws an object of type `invalid_argument`. If such a call would set `errno`, or if the returned value can't be represented as an object of type **`int`**, it throws an object of type `out_of_range`. Otherwise, if *idx* isn't a null pointer, the function stores `*_Eptr - str.c_str()` in `*idx`.

## <a name="stol"></a> stol

Converts a character sequence to a **`long`**.

```cpp
long stol(
    const string& str,
    size_t* idx = 0,
    int base = 10);

long stol(
    const wstring& str,
    size_t* idx = 0,
    int base = 10);
```

### Parameters

*str*\
The character sequence to be converted.

*idx*\
The index value of the first unconverted character.

*base*\
The number base to use.

### Return Value

The long-integer value.

### Remarks

The function converts the sequence of elements in *str* to a value of type **`long`** as if by calling `strtol( str.c_str(), _Eptr, idx)`, where `_Eptr` is an object internal to the function. If `str.c_str() == *_Eptr`, it throws an object of type `invalid_argument`. If such a call would set `errno`, it throws an object of type `out_of_range`. Otherwise, if *idx* isn't a null pointer, the function stores `*_Eptr -  str.c_str()` in `*idx` and returns the value.

## <a name="stold"></a> stold

Converts a character sequence to a **`long double`**.

```cpp
double stold(
    const string& str,
    size_t* idx = 0);

double stold(
    const wstring& str,
    size_t* idx = 0);
```

### Parameters

*str*\
The character sequence to be converted.

*idx*\
The index value of the first unconverted character.

### Return Value

The **`long double`** value.

### Remarks

The function converts the sequence of elements in *str* to a value of type **`long double`** as if by calling `strtold( str.c_str(), _Eptr)`, where `_Eptr` is an object internal to the function. If `str.c_str() == *_Eptr`, it throws an object of type `invalid_argument`. If such a call would set `errno`, it throws an object of type `out_of_range`. Otherwise, if *idx* isn't a null pointer, the function stores `*_Eptr -  str.c_str()` in `*idx` and returns the value.

## <a name="stoll"></a> stoll

Converts a character sequence to a **`long long`**.

```cpp
long long stoll(
    const string& str,
    size_t* idx = 0,
    int base = 10);

long long stoll(
    const wstring& str,
    size_t* idx = 0,
    int base = 10);
```

### Parameters

*str*\
The character sequence to be converted.

*idx*\
The index value of the first unconverted character.

*base*\
The number base to use.

### Return Value

The **`long long`** value.

### Remarks

The function converts the sequence of elements in *str* to a value of type **`long long`** as if by calling `strtoll( str.c_str(), _Eptr, idx)`, where `_Eptr` is an object internal to the function. If `str.c_str() == *_Eptr`, it throws an object of type `invalid_argument`. If such a call would set `errno`, it throws an object of type `out_of_range`. Otherwise, if *idx* isn't a null pointer, the function stores `*_Eptr -  str.c_str()` in `*idx` and returns the value.

## <a name="stoul"></a> stoul

Converts a character sequence to an unsigned long.

```cpp
unsigned long stoul(
    const string& str,
    size_t* idx = 0,
    int base = 10);

unsigned long stoul(
    const wstring& str,
    size_t* idx = 0,
    int base = 10);
```

### Parameters

*str*\
The character sequence to be converted.

*idx*\
The index value of the first unconverted character.

*base*\
The number base to use.

### Return Value

The unsigned long-integer value.

### Remarks

The function converts the sequence of elements in *str* to a value of type **`unsigned long`** as if by calling `strtoul( str.c_str(), _Eptr, idx)`, where `_Eptr` is an object internal to the function. If `str.c_str() == *_Eptr`, it throws an object of type `invalid_argument`. If such a call would set `errno`, it throws an object of type `out_of_range`. Otherwise, if *idx* isn't a null pointer, the function stores `*_Eptr -  str.c_str()` in `*idx` and returns the value.

## <a name="stoull"></a> stoull

Converts a character sequence to an **`unsigned long long`**.

```cpp
unsigned long long stoull(
    const string& str,
    size_t* idx = 0,
    int base = 10);

unsigned long long stoull(
    const wstring& str,
    size_t* idx = 0,
    int base = 10);
```

### Parameters

*str*\
The character sequence to be converted.

*idx*\
The index value of the first unconverted character.

*base*\
The number base to use.

### Return Value

The **`unsigned long long`** value.

### Remarks

The function converts the sequence of elements in *str* to a value of type **`unsigned long long`** as if by calling `strtoull( str.c_str(), _Eptr, idx)`, where `_Eptr` is an object internal to the function. If `str.c_str() == *_Eptr`, it throws an object of type `invalid_argument`. If such a call would set `errno`, it throws an object of type `out_of_range`. Otherwise, if *idx* isn't a null pointer, the function stores `*_Eptr -  str.c_str()` in `*idx` and returns the value.

## <a name="swap"></a> swap

Exchanges the arrays of characters of two strings.

```cpp
template <class Traits, class Allocator>
void swap(basic_string<CharType, Traits, Allocator>& left, basic_string<CharType, Traits, Allocator>& right);
```

### Parameters

*left*\
One string whose elements are to be swapped with the elements of another string.

*right*\
The other string whose elements are to be swapped with the first string.

### Remarks

The template function executes the specialized member function *left*.[swap](../standard-library/basic-string-class.md#swap)(*right*) for strings, which guarantees constant complexity.

### Example

```cpp
// string_swap.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   // Declaring an object of type basic_string<char>
   string s1 ( "Tweedledee" );
   string s2 ( "Tweedledum" );
   cout << "Before swapping string s1 and s2:" << endl;
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;

   swap ( s1 , s2 );
   cout << "\nAfter swapping string s1 and s2:" << endl;
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;
}
```

```Output
Before swapping string s1 and s2:
The basic_string s1 = Tweedledee.
The basic_string s2 = Tweedledum.

After swapping string s1 and s2:
The basic_string s1 = Tweedledum.
The basic_string s2 = Tweedledee.
```

## <a name="to_string"></a> to_string

Converts a value to a `string`.

```cpp
string to_string(int value);
string to_string(unsigned int value);
string to_string(long value);
string to_string(unsigned long value);
string to_string(long long value);
string to_string(unsigned long long value);
string to_string(float value);
string to_string(double value);
string to_string(long double value);
```

### Parameters

*value*\
The value to be converted.

### Return Value

The `string` that represents the value.

### Remarks

The function converts *value* to a sequence of elements stored in an array object `Buf` internal to the function as if by calling `sprintf(Buf, Fmt, value)`, where `Fmt` is

- `"%d"` if *value* is of type **`int`**

- `"%u"` if *value* is of type **`unsigned int`**

- `"%ld"` if *value* is of type **`long`**

- `"%lu"` if *value* is of type **`unsigned long`**

- `"%lld"` if *value* is of type **`long long`**

- `"%llu"` if *value* is of type **`unsigned long long`**

- `"%f"` if *value* is of type **`float`** or **`double`**

- `"%Lf"` if *value* is of type **`long double`**

The function returns `string(Buf)`.

## <a name="to_wstring"></a> to_wstring

Converts a value to a wide string.

```cpp
wstring to_wstring(int value);
wstring to_wstring(unsigned int value);
wstring to_wstring(long value);
wstring to_wstring(unsigned long value);
wstring to_wstring(long long value);
wstring to_wstring(unsigned long long value);
wstring to_wstring(float value);
wstring to_wstring(double value);
wstring to_wstring(long double value);
```

### Parameters

*value*\
The value to be converted.

### Return Value

The wide string that represents the value.

### Remarks

The function converts *value* to a sequence of elements stored in an array object `Buf` internal to the function as if by calling `swprintf(Buf, Len, Fmt, value)`, where `Fmt` is

- `L"%d"` if *value* is of type **`int`**

- `L"%u"` if *value* is of type **`unsigned int`**

- `L"%ld"` if *value* is of type **`long`**

- `L"%lu"` if *value* is of type **`unsigned long`**

- `L"%lld"` if *value* is of type **`long long`**

- `L"%llu"` if *value* is of type **`unsigned long long`**

- `L"%f"` if *value* is of type **`float`** or **`double`**

- `L"%Lf"` if *value* is of type **`long double`**

The function returns `wstring(Buf)`.

## See also

[\<string>](../standard-library/string.md)
