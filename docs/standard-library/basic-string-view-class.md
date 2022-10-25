---
title: "basic_string_view Class"
description: "API reference for `basic_string_view`, which refers to a constant contiguous sequence of char-like objects."
ms.date: "9/8/2020"
f1_keywords: ["xstring/std::basic_string_view", "xstring/std::basic_string_view::allocator_type", "xstring/std::basic_string_view::const_iterator", "xstring/std::basic_string_view::const_pointer", "xstring/std::basic_string_view::const_reference", "xstring/std::basic_string_view::const_reverse_iterator", "xstring/std::basic_string_view::difference_type", "xstring/std::basic_string_view::ends_with", "xstring/std::basic_string_view::starts_with", "xstring/std::basic_string_view::iterator", "xstring/std::basic_string_view::npos", "xstring/std::basic_string_view::pointer", "xstring/std::basic_string_view::reference", "xstring/std::basic_string_view::reverse_iterator", "xstring/std::basic_string_view::size_type", "xstring/std::basic_string_view::traits_type", "xstring/std::basic_string_view::value_type", "xstring/std::basic_string_view::append", "xstring/std::basic_string_view::assign", "xstring/std::basic_string_view::at", "xstring/std::basic_string_view::back", "xstring/std::basic_string_view::begin", "xstring/std::basic_string_view::c_str", "xstring/std::basic_string_view::capacity", "xstring/std::basic_string_view::cbegin", "xstring/std::basic_string_view::cend", "xstring/std::basic_string_view::clear", "xstring/std::basic_string_view::compare", "xstring/std::basic_string_view::copy", "xstring/std::basic_string_view::_Copy_s", "xstring/std::basic_string_view::crbegin", "xstring/std::basic_string_view::crend", "xstring/std::basic_string_view::data", "xstring/std::basic_string_view::empty", "xstring/std::basic_string_view::end", "xstring/std::basic_string_view::erase", "xstring/std::basic_string_view::find", "xstring/std::basic_string_view::find_first_not_of", "xstring/std::basic_string_view::find_first_of", "xstring/std::basic_string_view::find_last_not_of", "xstring/std::basic_string_view::find_last_of", "xstring/std::basic_string_view::front", "xstring/std::basic_string_view::get_allocator", "xstring/std::basic_string_view::insert", "xstring/std::basic_string_view::length", "xstring/std::basic_string_view::max_size", "xstring/std::basic_string_view::pop_back", "xstring/std::basic_string_view::push_back", "xstring/std::basic_string_view::rbegin", "xstring/std::basic_string_view::rend", "xstring/std::basic_string_view::remove_prefix","xstring/std::basic_string_view::remove_suffix", "xstring/std::basic_string_view::replace", "xstring/std::basic_string_view::reserve", "xstring/std::basic_string_view::resize", "xstring/std::basic_string_view::rfind", "xstring/std::basic_string_view::shrink_to_fit", "xstring/std::basic_string_view::size", "xstring/std::basic_string_view::substr", "xstring/std::basic_string_view::swap"]
helpviewer_keywords: ["std::basic_string_view", "std::basic_string_view, allocator_type", "std::basic_string_view, const_iterator", "std::basic_string_view, const_pointer", "std::basic_string_view, const_reference", "std::basic_string_view, const_reverse_iterator", "std::basic_string_view, difference_type", "std::basic_string_view, iterator", "std::basic_string_view, npos", "std::basic_string_view, pointer", "std::basic_string_view, reference", "std::basic_string_view, reverse_iterator", "std::basic_string_view, size_type", "std::basic_string_view, traits_type", "std::basic_string_view, value_type", "std::basic_string_view, append", "std::basic_string_view, assign", "std::basic_string_view, at", "std::basic_string_view, back", "std::basic_string_view, begin", "std::basic_string_view, c_str", "std::basic_string_view, capacity", "std::basic_string_view, cbegin", "std::basic_string_view, cend", "std::basic_string_view, clear", "std::basic_string_view, compare", "std::basic_string_view, copy", "std::basic_string_view, crbegin", "std::basic_string_view, crend", "std::basic_string_view, data", "std::basic_string_view, empty", "std::basic_string_view, end",  "std::basic_string_view, ends_with", "std::basic_string_view, erase", "std::basic_string_view, find", "std::basic_string_view, find_first_not_of", "std::basic_string_view, find_first_of", "std::basic_string_view, find_last_not_of", "std::basic_string_view, find_last_of", "std::basic_string_view, front", "std::basic_string_view, get_allocator", "std::basic_string_view, insert", "std::basic_string_view, length", "std::basic_string_view, max_size", "std::basic_string_view, pop_back", "std::basic_string_view, push_back", "std::basic_string_view, rbegin", "std::basic_string_view, rend", "std::basic_string_view, remove_prefix","std::basic_string_view, remove_suffix","std::basic_string_view, replace", "std::basic_string_view, reserve", "std::basic_string_view, resize", "std::basic_string_view, rfind", "std::basic_string_view, shrink_to_fit", "std::basic_string_view, size",  "std::basic_string_view, starts_with", "std::basic_string_view, substr", "std::basic_string_view, swap"]
---
# `basic_string_view` class

The class template `basic_string_view<charT>` was added in C++17 to serve as a safe and efficient way for a function to accept various unrelated string types without the function having to be templatized on those types. The class holds a non-owning pointer to a contiguous sequence of character data, and a length that specifies the number of characters in the sequence. No assumption is made about whether the sequence is null-terminated.

The standard library defines several specializations based on the type of the elements:

- `string_view`
- `wstring_view`
- `u16string_view`
- `u32string_view`

A `basic_string_view` describes the minimum common interface necessary to read string data. It provides const access to the underlying data; it makes no copies (except for the `copy` function). The data may or may not contain null values (`\0`) at any position. A `basic_string_view` has no control over the object's lifetime. It's the caller's responsibility to ensure that the underlying string data is valid.

A function that accepts a parameter of type `string_view` can be made to work with any string-like type, without making the function into a template, or constraining the function to a particular subset of string types. The only requirement is that an implicit conversion exists from the string type to `string_view`. All the standard string types are implicitly convertible to a `string_view` that contains the same element type. In other words, a `std::string` is convertible to a `string_view` but not to a `wstring_view`.

The following example shows a non-template function `f` that takes a parameter of type `wstring_view`. It can be called with arguments of type `std::wstring`, `wchar_t*`, and `winrt::hstring`.

```cpp
// compile with: /std:c++17
// string_view that uses elements of wchar_t
void f(wstring_view);

// pass a std::wstring:
const std::wstring& s { L"Hello" };
f(s);

// pass a C-style null-terminated string (string_view is not null-terminated):
const wchar_t* ns = L"Hello";
f(ns);

// pass a C-style character array of len characters (excluding null terminator):
const wchar_t* cs { L"Hello" };
size_t len { 5 };
f({cs,len});

// pass a WinRT string
winrt::hstring hs { L"Hello" };
f(hs);
```

## Syntax

```cpp
template <class CharType, class Traits = char_traits<CharType>>
class basic_string_view;
```

### Parameters

*`CharType`*\
The type of the characters that are stored in the `basic_string_view`. The C++ Standard Library provides the following typedefs for specializations of this template.

- [`string_view`](../standard-library/string-view-typedefs.md#string_view) for elements of type **`char`**
- [`wstring_view`](../standard-library/string-view-typedefs.md#wstring_view), for **`wchar_t`**
- [`u16string_view`](../standard-library/string-view-typedefs.md#u16string_view) for **`char16_t`**
- [`u32string_view`](../standard-library/string-view-typedefs.md#u32string_view) for **`char32_t`**.

*`Traits`*\
Defaults to [`char_traits`](char-traits-struct.md)<*`CharType`*>.

### Constructors

|Constructor|Description|
|-|-|
|[`basic_string_view`](#basic_string_view)|Constructs a `basic_string_view` that is empty or else points to all or part of some other string object's data, or to a C-style character array.|

### Typedefs

|Type name|Description|
|-|-|
|**`const_iterator`**|Random-access iterator that can read **`const`** elements.|
|**`const_pointer`**|`using const_pointer = const value_type*;`|
|**`const_reference`**|`using const_reference = const value_type&;`|
|**`const_reverse_iterator`**|`using const_reverse_iterator = std::reverse_iterator<const_iterator>;`|
|**`difference_type`**|`using difference_type = ptrdiff_t;`|
|**`iterator`**|`using iterator = const_iterator;`|
|**`npos`**|`static constexpr size_type npos = size_type(-1);`|
|**`pointer`**|`using pointer = value_type*;`|
|**`reference`**|`using reference = value_type&;`|
|**`reverse_iterator`**|`using reverse_iterator = const_reverse_iterator;`|
|**`size_type`**|`using size_type = size_t;`|
|**`traits_type`**|`using traits_type = Traits;`|
|**`value_type`**|`using value_type = CharType;`|

### Member operators

|Operator|Description|
|-|-|
|[`operator=`](#op_eq)|Assigns a `basic_string_view` or convertible string object to another `basic_string_view`.|
|[`operator[]`](#op_at)|Returns the element at the specified index.|

### Member functions

|Member function|Description|
|-|-|
|[`at`](#at)|Returns a `const_reference` to the element at a specified location.|
|[`back`](#back)|Returns a `const_reference` to the last element.|
|[`begin`](#begin)|Returns a `const` iterator addressing the first element. (`basic_string_view`s are immutable.)|
|[`cbegin`](#cbegin)|Same as [`begin`](#begin).|
|[`cend`](#cend)|Returns a `const` iterator that points to one past the last element.|
|[`copy`](#copy)|Copies at most a specified number of characters from an indexed position in a source `basic_string_view` to a target character array. (Not recommended. Use `_Copy_s` instead.)|
|[`_Copy_s`](#_copy_s)|Secure CRT copy function.|
|[`compare`](#compare)|Compares a `basic_string_view` with a specified `basic_string_view` to determine if they're equal or if one is lexicographically less than the other.|
|[`crbegin`](#crbegin)|Same as [`rbegin`](#rbegin).|
|[`crend`](#crend)|Same as [`rend`](#rend).|
|[`data`](#data)|Returns a raw non-owning pointer to the character sequence.|
|[`empty`](#empty)|Tests whether the `basic_string_view` contains characters.|
|[`end`](#end)|Same as [`cend`](#cend).|
|[`ends_with`](#ends_with)<sup>C++20</sup>|Check whether a string view ends with a specified suffix.|
|[`find`](#find)|Searches in a forward direction for the first occurrence of a substring that matches a specified sequence of characters.|
|[`find_first_not_of`](#find_first_not_of)|Searches for the first character that isn't any element of a specified `basic_string_view` or convertible string object.|
|[`find_first_of`](#find_first_of)|Searches for the first character that matches any element of a specified `basic_string_view` or convertible string object.|
|[`find_last_not_of`](#find_last_not_of)|Searches for the last character that isn't any element of a specified `basic_string_view` or convertible string object.|
|[`find_last_of`](#find_last_of)|Searches for the last character that is an element of a specified `basic_string_view` or convertible string object.|
|[`front`](#front)|Returns a `const_reference` to the first element.|
|[`length`](#length)|Returns the current number of elements.|
|[`max_size`](#max_size)|Returns the maximum number of characters a `basic_string_view` could contain.|
|[`rbegin`](#rbegin)|Returns a `const` iterator that addresses the first element in a reversed `basic_string_view`.|
|[`remove_prefix`](#remove_prefix)|Moves the pointer forward by the specified number of elements.|
|[`remove_suffix`](#remove_suffix)|Reduces the size of the view by the specified number of elements starting from the back.|
|[`rend`](#rend)|Returns a `const` iterator that points to one past the last element in a reversed `basic_string_view`.|
|[`rfind`](#rfind)|Searches a `basic_string_view` in reverse for the first occurrence of a substring that matches a specified sequence of characters.|
|[`size`](#size)|Returns the current number of elements.|
|[`starts_with`](#starts_with)<sup>C++20</sup>|Check whether a string view starts with a given prefix.|
|[`substr`](#substr)|Returns a substring of a specified length starting at a specified index.|
|[`swap`](#swap)|Exchange the contents of two `basic_string_view` objects.|

## Remarks

If a function is asked to generate a sequence longer than [`max_size`](#max_size) elements, the function reports a length error by throwing an object of type [`length_error`](../standard-library/length-error-class.md).

## Requirements

[`std:c++17`](../build/reference/std-specify-language-standard-version.md) or later.

**Header:** `<string_view>`

**Namespace:** `std`

## <a name="at"></a> `basic_string_view::at`

Returns a `const_reference` to the character at the specified zero-based index.

```cpp
constexpr const_reference at(size_type offset) const;
```

### Parameters

*`offset`*\
The index of the element to be referenced.

### Return value

A `const_reference` to the character at the position specified by the parameter index.

### Remarks

The first element has an index of zero and the following elements are indexed consecutively by the positive integers, so that a `basic_string_view` of length *`n`* has an *`n`*th element indexed by the number `n - 1`. **`at`** throws an exception for invalid indices, unlike [`operator[]`](#op_at).

In general, we recommend that **`at`** for sequences such as `std::vector` and `basic_string_view` should never be used. An invalid index passed to a sequence is a logic error that should be discovered and fixed during development. If a program isn't certain that its indices are valid, it should test them, not call `at()` and rely on exceptions to defend against careless programming.

For more information, see [`basic_string_view::operator[]`](#op_at).

### Example

```cpp
// basic_string_view_at.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main()
{
    using namespace std;

    const string_view  str1("Hello world");
    string_view::const_reference refStr2 = str1.at(8); // 'r'
}
```

## <a name="back"></a> `basic_string_view::back`

Returns a `const_reference` to the last element.

```cpp
constexpr const_reference back() const;
```

### Return value

A `const_reference` to the last element in the `basic_string_view`.

### Remarks

Throws an exception if the `basic_string_view` is empty.

Keep in mind that after a `basic_string_view` is modified, for example by calling `remove_suffix`, then the element returned by this function is no longer the last element in the underlying data.

### Example

A `string_view` that is constructed with a C string literal doesn't include the terminating null. So in the following example, `back` returns `'p'` and not `'\0'`.

```cpp
char c[] = "Help"; // char[5]
string_view sv{ c };
cout << sv.size(); // size() == 4
cout << sv.back() << endl; // p
```

Embedded nulls are treated as any other character:

```cpp
string_view e = "embedded\0nulls"sv;
cout << boolalpha << (e.back() == 's'); // true
```

## <a name="basic_string_view"></a> `basic_string_view::basic_string_view`

Constructs a `basic_string_view`.

```cpp
constexpr basic_string_view() noexcept;
constexpr basic_string_view(const basic_string_view&) noexcept = default;
constexpr basic_string_view(const charT* str);
constexpr basic_string_view(const charT* str, size_type len);
```

### Parameters

*`str`*\
The pointer to the character values.

*`len`*\
The number of characters to include in the view.

### Remarks

The constructors with a `charT*` parameter assume that the input is null-terminated, but the terminating null isn't included in the `basic_string_view`.

You can also construct a `basic_string_view` with a literal. See [`operator"" sv`](string-view-operators.md#op_sv).

## <a name="begin"></a> `basic_string_view::begin`

Same as [`cbegin`](#cbegin).

```cpp
constexpr const_iterator begin() const noexcept;
```

### Return value

Returns a `const_iterator` addressing the first element.

## <a name="cbegin"></a> `basic_string_view::cbegin`

Returns a `const_iterator` that addresses the first element in the range.

```cpp
constexpr const_iterator cbegin() const noexcept;
```

### Return value

A **`const`** random-access iterator that points at the first element of the range, or the location just beyond the end of an empty range (for an empty range, `cbegin() == cend()`).

## <a name="cend"></a> `basic_string_view::cend`

Returns a `const_iterator` that addresses the location just beyond the last element in a range.

```cpp
constexpr const_iterator cend() const noexcept;
```

### Return value

A **`const`** random-access iterator that points just beyond the end of the range.

### Remarks

The value returned by `cend` shouldn't be dereferenced.

## <a name="compare"></a> `basic_string_view::compare`

Does a case-sensitive comparison with a specified `basic_string_view` (or a convertible string type) to determine if the two objects are equal or if one is lexicographically less than the other. The [`<string_view>` operators](string-view-operators.md) use this member function to do comparisons.

```cpp
constexpr int compare(basic_string_view strv) const noexcept;
constexpr int compare(size_type pos, size_type num, basic_string_view strv) const;
constexpr int compare(size_type pos, size_type num, basic_string_view strv, size_type offset, size_type num2) const;
constexpr int compare(const charT* ptr) const;
constexpr int compare(size_type pos, size_type num, const charT* ptr) const;
constexpr int compare(size_type pos, size_type num, const charT* ptr, size_type num2) const;
```

### Parameters

*`strv`*\
The `basic_string_view` that is to be compared to this `basic_string_view`.

*`pos`*\
The index of this `basic_string_view` at which the comparison begins.

*`num`*\
The maximum number of characters from this `basic_string_view` to be compared.

*`num2`*\
The maximum number of characters from *`strv`* to be compared.

*`offset`*\
The index of *`strv`* at which the comparison begins.

*`ptr`*\
The C string to be compared to this `basic_string_view`.

### Return value

- A negative value if this `basic_string_view` is less than *`strv`* or *`ptr`*
- Zero if the two character sequences are equal
- A positive value if this `basic_string_view` is greater than *`strv`* or *`ptr`*

### Remarks

The `compare` member functions do a case-sensitive comparison of either all or part of each character sequence.

### Example

```cpp
// basic_string_view_compare.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>
#include <string>

using namespace std;

string to_alpha(int result)
{
   if (result < 0) return " less than ";
   else if (result == 0) return " equal to ";
   else return " greater than ";
}

int main()
{
   // The first member function compares
   // two string_views
   string_view sv_A("CAB");
   string_view sv_B("CAB");
   cout << "sv_A is " << sv_A << endl;
   cout << "sv_B is " << sv_B << endl;
   int comp1 = sv_A.compare(sv_B);
   cout << "sv_A is" << to_alpha(comp1) << "sv_B.\n";

   // The second member function compares part of
   // an operand string_view to another string_view
   string_view sv_C("AACAB");
   string_view sv_D("CAB");
   cout << "sv_C is: " << sv_C << endl;
   cout << "sv_D is: " << sv_D << endl;
   int comp2a = sv_C.compare(2, 3, sv_D);
   cout << "The last three characters of sv_C are"
       << to_alpha(comp2a) << "sv_D.\n";

   int comp2b = sv_C.compare(0, 3, sv_D);
   cout << "The first three characters of sv_C are"
       << to_alpha(comp2b) << "sv_D.\n";

   // The third member function compares part of
   // an operand string_view to part of another string_view
   string_view sv_E("AACAB");
   string_view sv_F("DCABD");
   cout << "sv_E: " << sv_E << endl;
   cout << "sv_F is: " << sv_F << endl;
   int comp3a = sv_E.compare(2, 3, sv_F, 1, 3);
   cout << "The three characters from position 2 of sv_E are"
       << to_alpha(comp3a)
       << "the 3 characters of sv_F from position 1.\n";

   // The fourth member function compares
   // an operand string_view to a C string
   string_view sv_G("ABC");
   const char* cs_A = "DEF";
   cout << "sv_G is: " << sv_G << endl;
   cout << "cs_A is: " << cs_A << endl;
   int comp4a = sv_G.compare(cs_A);
   cout << "sv_G is" << to_alpha(comp4a) << "cs_A.\n";

   // The fifth member function compares part of
   // an operand string_view to a C string
   string_view sv_H("AACAB");
   const char* cs_B = "CAB";
   cout << "sv_H is: " << sv_H << endl;
   cout << "cs_B is: " << cs_B << endl;
   int comp5a = sv_H.compare(2, 3, cs_B);
   cout << "The last three characters of sv_H are"
      << to_alpha(comp5a) << "cs_B.\n";

   // The sixth member function compares part of
   // an operand string_view to part of an equal length of
   // a C string
   string_view sv_I("AACAB");
   const char* cs_C = "ACAB";
   cout << "sv_I is: " << sv_I << endl;
   cout << "cs_C: " << cs_C << endl;
   int comp6a = sv_I.compare(1, 3, cs_C, 3);
   cout << "The 3 characters from position 1 of sv_I are"
      << to_alpha(comp6a) << "the first 3 characters of cs_C.\n";
}
```

```Output
sv_A is CAB
sv_B is CAB
sv_A is equal to sv_B.
sv_C is: AACAB
sv_D is: CAB
The last three characters of sv_C are equal to sv_D.
The first three characters of sv_C are less than sv_D.
sv_E: AACAB
sv_F is: DCABD
The three characters from position 2 of sv_E are equal to the 3 characters of sv_F from position 1.
sv_G is: ABC
cs_A is: DEF
sv_G is less than cs_A.
sv_H is: AACAB
cs_B is: CAB
The last three characters of sv_H are equal to cs_B.
sv_I is: AACAB
cs_C: ACAB
The 3 characters from position 1 of sv_I are equal to the first 3 characters of cs_C.
```

## <a name="copy"></a> `basic_string_view::copy`

Copies at most a specified number of characters from an indexed position in a source `basic_string_view` to a target character array. We recommend that you use the secure function [`basic_string_view::_Copy_s`](#_copy_s) instead.

```cpp
size_type copy(charT* ptr, size_type count, size_type offset = 0) const;
```

### Parameters

*`ptr`*\
The target character array to which the elements are to be copied.

*`count`*\
The number of characters to be copied, at most, from the source `basic_string_view`.

*`offset`*\
The beginning position in the source `basic_string_view` from which copies are to be made.

### Return value

The number of characters copied.

### Remarks

A null character isn't appended to the end of the copy.

## <a name="_copy_s"></a> `basic_string_view::_Copy_s`

Secure CRT copy function to be used instead of [`copy`](#copy).

```cpp
size_type _Copy_s(
    value_type* dest,
    size_type dest_size,
    size_type count,
    size_type _Off = 0) const;
```

### Parameters

*`dest`*\
The target character array to which the elements are to be copied.

*`dest_size`*\
The size of *`dest`*.

*`count`*
The number of characters to be copied, at most, from the source string.

*`_Off`*\
The beginning position in the source string from which copies are to be made.

### Return value

The number of characters copied.

### Remarks

A null character isn't appended to the end of the copy.

For more information, see [c-runtime-library/security-features-in-the-crt](../c-runtime-library/security-features-in-the-crt.md).

## <a name="crbegin"></a> `basic_string_view::crbegin`

Returns a `const_reverse_iterator` that addresses the first element in a reversed `basic_string_view`.

```cpp
constexpr const_reverse_iterator crbegin() const noexcept;
```

### Return value

A `const_reverse_iterator` that addresses the first element in a reversed `basic_string_view`.

## <a name="crend"></a> `basic_string_view::crend`

Same as [`rend`](#rend).

```cpp
constexpr const_reverse_iterator crend() const noexcept;
```

### Return value

Returns a `const_reverse_iterator` that addresses one past the end of a reversed `basic_string_view`.

## <a name="data"></a> `basic_string_view::data`

Returns a raw non-owning pointer to the const character sequence of the object that was used to construct the `basic_string_view`.

```cpp
constexpr value_type *data() const noexcept;
```

### Return value

A pointer-to-const to the first element of the character sequence.

### Remarks

The pointer can't modify the characters.

A sequence of `basic_string_view` characters isn't necessarily null-terminated. The return type for `data` isn't a valid C string, because no null character gets appended. The null character `\0` has no special meaning in an object of type `basic_string_view` and may be a part of the `basic_string_view` object just like any other character.

## <a name="empty"></a> `basic_string_view::empty`

Tests whether the `basic_string_view` contains characters or not.

```cpp
constexpr bool empty() const noexcept;
```

### Return value

**`true`** if the `basic_string_view` object contains no characters; **`false`** if it has at least one character.

### Remarks

The member function is equivalent to [`size`](#size)() == 0.

## <a name="end"></a> `basic_string_view::end`

Returns a random-access `const_iterator` that points to one past the last element.

```cpp
constexpr const_iterator end() const noexcept;
```

### Return value

Returns a random-access `const_iterator` that points to one past the last element.

### Remarks

`end` is used to test whether a `const_iterator` has reached the end of its `basic_string_view`. The value returned by `end` shouldn't be dereferenced.

## <a name="ends_with"></a> `basic_string_view::ends_with`

Check whether the string view ends with the specified suffix.

```cpp
bool ends_with(const CharType c) const noexcept;
bool ends_with(const CharType* const x) const noexcept;
bool ends_with(const basic_string_view sv) const noexcept;
```

### Parameters

*`c`*\
The single character suffix to look for.

*`sv`*\
A string view containing the suffix to look for.\
You can pass a `std::basic_string`, which converts to a `basic_string_view`.

*`x`*\
Null-terminated character string containing the suffix to look for.

### Return value

`true` if the string view ends with the specified suffix; `false` otherwise.

### Remarks

`ends_with()` is new in C++20. To use it, specify the [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) or later compiler option.

See [`starts_with`](#starts_with) to check if a string view starts with the specified prefix.

### Example

```cpp
// Requires /std:c++20 or /std:c++latest
#include <string>
#include <iostream>

int main()
{
    std::cout << std::boolalpha; // so booleans show as 'true'/'false'  
    std::cout << std::string_view("abcdefg").ends_with('g') << '\n';
    std::cout << std::string_view("abcdefg").ends_with("eFg") << '\n';

    std::basic_string<char> str2 = "efg";
    std::cout << std::string_view("abcdefg").ends_with(str2);

    return 0;
}
```

```Output
true
false
true
```

## <a name="find"></a> `basic_string_view::find`

Searches a `basic_string_view` in a forward direction for the first occurrence of a character or substring that matches a specified sequence of character(s).

```cpp
constexpr size_type find(basic_string_view str, size_type offset = 0) const noexcept;
constexpr size_type find(charT chVal, size_type offset = 0) const noexcept;
constexpr size_type find(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find(const charT* ptr, size_type offset = 0) const;
```

### Parameters

*`str`*\
The `basic_string_view` for which the member function is to search.

*`chVal`*\
The character value for which the member function is to search.

*`offset`*\
Index at which the search is to begin.

*`ptr`*\
The C string for which the member function is to search.

*`count`*\
The number of characters in *`ptr`*, counting forward from the first character.

### Return value

The index of the first character of the substring searched for when successful; otherwise `npos`.

## <a name="find_first_not_of"></a> `basic_string_view::find_first_not_of`

Searches for the first character that isn't an element of a specified `basic_string_view` or convertible string object.

```cpp
constexpr size_type find_first_not_of(basic_string_view str, size_type offset = 0) const noexcept;
constexpr size_type find_first_not_of(charT chVal, size_type offset = 0) const noexcept;
constexpr size_type find_first_not_of(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find_first_not_of(const charT* ptr, size_type offset = 0) const;
```

### Parameters

*`str`*\
The `basic_string_view` for which the member function is to search.

*`chVal`*\
The character value for which the member function is to search.

*`offset`*\
Index at which the search is to begin.

*`ptr`*\
The C string for which the member function is to search.

*`count`*\
The number of characters, counting forward from the first character, in the C string for which the member function is to search.

### Return value

The index of the first character of the substring searched for when successful; otherwise `npos`.

## <a name="find_first_of"></a> `basic_string_view::find_first_of`

Searches for the first character that matches any element of a specified `basic_string_view`.

```cpp
constexpr size_type find_first_of(basic_string_view str, size_type offset = 0) const noexcept;
constexpr size_type find_first_of(charT chVal, size_type offset = 0) const noexcept;
constexpr size_type find_first_of(const charT* str, size_type offset, size_type count) const;
constexpr size_type find_first_of(const charT* str, size_type offset = 0) const;
```

### Parameters

*`chVal`*\
The character value for which the member function is to search.

*`offset`*\
Index at which the search is to begin.

*`ptr`*\
The C string for which the member function is to search.

*`count`*\
The number of characters, counting forward from the first character, in the C string for which the member function is to search.

*`str`*\
The `basic_string_view` for which the member function is to search.

### Return value

The index of the first character of the substring searched for when successful; otherwise `npos`.

## <a name="find_last_not_of"></a> `basic_string_view::find_last_not_of`

Searches for the last character that isn't any element of a specified `basic_string_view`.

```cpp
constexpr size_type find_last_not_of(basic_string_view str, size_type offset = npos) const noexcept;
constexpr size_type find_last_not_of(charT chVal, size_type offset = npos) const noexcept;
constexpr size_type find_last_not_of(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find_last_not_of(const charT* ptr, size_type offset = npos) const;
```

### Parameters

*`str`*\
The `basic_string_view` for which the member function is to search.

*`chVal`*\
The character value for which the member function is to search.

*`offset`*\
Index at which the search is to finish.

*`ptr`*\
The C string for which the member function is to search.

*`count`*\
The number of characters, counting forward from the first character, in *`ptr`*.

### Return value

The index of the first character of the substring searched for when successful; otherwise `string_view::npos`.

## <a name="find_last_of"></a> `basic_string_view::find_last_of`

Searches for the last character that matches any element of a specified `basic_string_view`.

```cpp
constexpr size_type find_last_of(basic_string_view str, size_type offset = npos) const noexcept;
constexpr size_type find_last_of(charT chVal, size_type offset = npos) const noexcept;
constexpr size_type find_last_of(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find_last_of(const charT* ptr, size_type offset = npos) const;
```

### Parameters

*`str`*\
The `basic_string_view` for which the member function is to search.

*`chVal`*\
The character value for which the member function is to search.

*`offset`*\
Index at which the search is to finish.

*`ptr`*\
The C string for which the member function is to search.

*`count`*\
The number of characters, counting forward from the first character, in the C string for which the member function is to search.

### Return value

The index of the last character of the substring searched for when successful; otherwise `npos`.

## <a name="front"></a> `basic_string_view::front`

Returns a `const_reference` to the first element.

```cpp
constexpr const_reference front() const;
```

### Return value

A `const_reference` to the first element.

### Remarks

Throws an exception if the `basic_string_view` is empty.

## <a name="length"></a> `basic_string_view::length`

Returns the current number of elements.

```cpp
constexpr size_type length() const noexcept;
```

### Remarks

The member function is the same as [`size`](#size).

## <a name="max_size"></a> `basic_string_view::max_size`

Returns the maximum number of characters a `basic_string_view` can contain.

```cpp
constexpr size_type max_size() const noexcept;
```

### Return value

The maximum number of characters a `basic_string_view` can contain.

### Remarks

An exception of type [`length_error`](../standard-library/length-error-class.md) is thrown when an operation produces a `basic_string_view` with a length greater than `max_size()`.

## <a name="op_eq"></a> `basic_string_view::operator=`

Assigns a `basic_string_view` or convertible string object to another `basic_string_view`.

```cpp
constexpr basic_string_view& operator=(const basic_string_view&) noexcept = default;
```

### Example

```cpp
   string_view s = "Hello";
   string_view s2 = s;
```

## <a name="op_at"></a> `basic_string_view::operator[]`

Provides a `const_reference` to the character with a specified index.

```cpp
constexpr const_reference operator[](size_type offset) const;
```

### Parameters

*`offset`*\
The index of the element to be referenced.

### Return value

A `const_reference` to the character at the position specified by the parameter index.

### Remarks

The first element has an index of zero, and the following elements are indexed consecutively by the positive integers, so that a `basic_string_view` of length *`n`* has an *`n`*th element indexed by the number `n-1`.

`operator[]` is faster than the member function [`at`](#at) for providing read access to the elements of a `basic_string_view`.

`operator[]` doesn't check whether the index passed as an argument is valid. An invalid index passed to `operator[]` results in undefined behavior.

The reference returned may be invalidated if the underlying string data is modified or deleted by the owning object.

When compiling with [`_ITERATOR_DEBUG_LEVEL`](../standard-library/iterator-debug-level.md) set to 1 or 2, a runtime error will occur if you attempt to access an element outside the bounds of the `basic_string_view`. For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

## <a name="rbegin"></a> `basic_string_view::rbegin`

Returns a `const` iterator to the first element in a reversed `basic_string_view`.

```cpp
constexpr const_reverse_iterator rbegin() const noexcept;
```

### Return value

Returns a random-access iterator to the first element in a reversed `basic_string_view`, addressing what would be the last element in the corresponding unreversed `basic_string_view`.

### Remarks

`rbegin` is used with a reversed `basic_string_view` just as [`begin`](#begin) is used with a `basic_string_view`. `rbegin` can be used to initialize an iteration backwards.

## <a name="remove_prefix"></a> `basic_string_view::remove_prefix`

Moves the pointer forward by the specified number of elements.

```cpp
constexpr void remove_prefix(size_type n);
```

### Remarks

Leaves the underlying data unchanged. Moves the `basic_string_view` pointer forward by `n` elements and sets the private `size` data member to `size - n`.

## <a name="remove_suffix"></a> `basic_string_view::remove_suffix`

Reduces the size of the view by the specified number of elements starting from the back.

```cpp
constexpr void remove_suffix(size_type n);
```

### Remarks

Leaves the underlying data and the pointer to it unchanged. Sets the private `size` data member to `size - n`.

## <a name="rend"></a> `basic_string_view::rend`

Returns a `const` iterator that points to one past the last element in a reversed `basic_string_view`.

```cpp
constexpr reverse_iterator rend() const noexcept;
```

### Return value

A `const` reverse random-access iterator that points to one past the last element in a reversed `basic_string_view`.

### Remarks

`rend` is used with a reversed `basic_string_view` just as [`end`](#end) is used with a `basic_string_view`. `rend` can be used to test whether a reverse iterator has reached the end of its `basic_string_view`. The value returned by `rend` shouldn't be dereferenced.

## <a name="rfind"></a> `basic_string_view::rfind`

Searches a `basic_string_view` in reverse for a substring that matches a specified sequence of characters.

```cpp
constexpr size_type rfind(basic_string_view str, size_type offset = npos) const noexcept;
constexpr size_type rfind(charT chVal, size_type offset = npos) const noexcept;
constexpr size_type rfind(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type rfind(const charT* ptr, size_type offset = npos) const;
```

### Parameters

*`chVal`*\
The character value for which the member function is to search.

*`offset`*\
Index at which the search is to begin.

*`ptr`*\
The C string for which the member function is to search.

*`count`*\
The number of characters, counting forward from the first character, in the C string for which the member function is to search.

*`str`*\
The `basic_string_view` for which the member function is to search.

### Return value

The index of the first character of the substring when successful; otherwise `npos`.

## <a name="size"></a> `basic_string_view::size`

Returns the number of elements in the `basic_string_view`.

```cpp
constexpr size_type size() const noexcept;
```

### Return value

The length of the `basic_string_view`.

### Remarks

A `basic_string_view` can modify its length, for example by `remove_prefix` and `remove_suffix`. Because this doesn't modify the underlying string data, the size of a `basic_string_view` isn't necessarily the size of the underlying data.

## <a name="starts_with"></a> `basic_string_view::starts_with`

Check whether the string view starts with the specified prefix.

```cpp
bool starts_with(const CharType c) const noexcept;
bool starts_with(const CharType* const x) const noexcept;
bool starts_with(const basic_string_view sv) const noexcept;
```

### Parameters

*`c`*\
The single character prefix to look for.

*`sv`*\
A string view containing the prefix to look for.\
You can pass a `std::basic_string`, which converts to a string view.

*`x`*\
Null-terminated character string containing the prefix to look for.

### Return value

`true` if the string starts with the specified prefix; `false` otherwise.

### Remarks

`starts_with()` is new in C++20. To use it, specify the [`std:c++20`](../build/reference/std-specify-language-standard-version.md) or later compiler option.

See [`ends_with`](#ends_with) to see if a string ends with a suffix.

### Example

```cpp
// Requires /std:c++20 or /std:c++latest
#include <string>
#include <iostream>

int main()
{
    std::cout << std::boolalpha; // so booleans show as 'true'/'false'  
    std::cout << std::string_view("abcdefg").starts_with('b') << '\n';
    std::cout << std::string_view("abcdefg").starts_with("aBc") << '\n';

    std::basic_string<char> str2 = "abc";
    std::cout << std::string_view("abcdefg").starts_with(str2);

    return 0;
}
```

```Output
false
false
true
```

## <a name="substr"></a> `basic_string_view::substr`

Returns a `basic_string_view` that represents (at most) the specified number of characters from a specified position.

```cpp
constexpr basic_string_view substr(size_type offset = 0, size_type count = npos) const;
```

### Parameters

*`offset`*\
An index locating the element at the position from which the copy is made, with a default value of 0.

*`count`*\
The number of characters to include in the substring, if they're present.

### Return value

A `basic_string_view` object that represents the specified subsequence of elements.

## <a name="swap"></a> `basic_string_view::swap`

Exchanges two `basic_string_view`s, in other words the pointers to the underlying string data, and the size values.

```cpp
constexpr void swap(basic_string_view& sv) noexcept;
```

### Parameters

*`sv`*\
The source `basic_string_view` whose pointer and size values are to be exchanged with that of the destination `basic_string_view`.

## See also

[`<string_view>`](../standard-library/string-view.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
