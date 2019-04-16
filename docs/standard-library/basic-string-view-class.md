---
title: "basic_string_view Class"
ms.date: "04/14/2019"
f1_keywords: ["xstring/std::basic_string_view", "xstring/std::basic_string_view::allocator_type", "xstring/std::basic_string_view::const_iterator", "xstring/std::basic_string_view::const_pointer", "xstring/std::basic_string_view::const_reference", "xstring/std::basic_string_view::const_reverse_iterator", "xstring/std::basic_string_view::difference_type", "xstring/std::basic_string_view::iterator", "xstring/std::basic_string_view::npos", "xstring/std::basic_string_view::pointer", "xstring/std::basic_string_view::reference", "xstring/std::basic_string_view::reverse_iterator", "xstring/std::basic_string_view::size_type", "xstring/std::basic_string_view::traits_type", "xstring/std::basic_string_view::value_type", "xstring/std::basic_string_view::append", "xstring/std::basic_string_view::assign", "xstring/std::basic_string_view::at", "xstring/std::basic_string_view::back", "xstring/std::basic_string_view::begin", "xstring/std::basic_string_view::c_str", "xstring/std::basic_string_view::capacity", "xstring/std::basic_string_view::cbegin", "xstring/std::basic_string_view::cend", "xstring/std::basic_string_view::clear", "xstring/std::basic_string_view::compare", "xstring/std::basic_string_view::copy", "xstring/std::basic_string_view::crbegin", "xstring/std::basic_string_view::crend", "xstring/std::basic_string_view::data", "xstring/std::basic_string_view::empty", "xstring/std::basic_string_view::end", "xstring/std::basic_string_view::erase", "xstring/std::basic_string_view::find", "xstring/std::basic_string_view::find_first_not_of", "xstring/std::basic_string_view::find_first_of", "xstring/std::basic_string_view::find_last_not_of", "xstring/std::basic_string_view::find_last_of", "xstring/std::basic_string_view::front", "xstring/std::basic_string_view::get_allocator", "xstring/std::basic_string_view::insert", "xstring/std::basic_string_view::length", "xstring/std::basic_string_view::max_size", "xstring/std::basic_string_view::pop_back", "xstring/std::basic_string_view::push_back", "xstring/std::basic_string_view::rbegin", "xstring/std::basic_string_view::rend", "xstring/std::basic_string_view::replace", "xstring/std::basic_string_view::reserve", "xstring/std::basic_string_view::resize", "xstring/std::basic_string_view::rfind", "xstring/std::basic_string_view::shrink_to_fit", "xstring/std::basic_string_view::size", "xstring/std::basic_string_view::substr", "xstring/std::basic_string_view::swap"]
helpviewer_keywords: ["std::basic_string_view", "std::basic_string_view, allocator_type", "std::basic_string_view, const_iterator", "std::basic_string_view, const_pointer", "std::basic_string_view, const_reference", "std::basic_string_view, const_reverse_iterator", "std::basic_string_view, difference_type", "std::basic_string_view, iterator", "std::basic_string_view, npos", "std::basic_string_view, pointer", "std::basic_string_view, reference", "std::basic_string_view, reverse_iterator", "std::basic_string_view, size_type", "std::basic_string_view, traits_type", "std::basic_string_view, value_type", "std::basic_string_view, append", "std::basic_string_view, assign", "std::basic_string_view, at", "std::basic_string_view, back", "std::basic_string_view, begin", "std::basic_string_view, c_str", "std::basic_string_view, capacity", "std::basic_string_view, cbegin", "std::basic_string_view, cend", "std::basic_string_view, clear", "std::basic_string_view, compare", "std::basic_string_view, copy", "std::basic_string_view, crbegin", "std::basic_string_view, crend", "std::basic_string_view, data", "std::basic_string_view, empty", "std::basic_string_view, end", "std::basic_string_view, erase", "std::basic_string_view, find", "std::basic_string_view, find_first_not_of", "std::basic_string_view, find_first_of", "std::basic_string_view, find_last_not_of", "std::basic_string_view, find_last_of", "std::basic_string_view, front", "std::basic_string_view, get_allocator", "std::basic_string_view, insert", "std::basic_string_view, length", "std::basic_string_view, max_size", "std::basic_string_view, pop_back", "std::basic_string_view, push_back", "std::basic_string_view, rbegin", "std::basic_string_view, rend", "std::basic_string_view, replace", "std::basic_string_view, reserve", "std::basic_string_view, resize", "std::basic_string_view, rfind", "std::basic_string_view, shrink_to_fit", "std::basic_string_view, size", "std::basic_string_view, substr", "std::basic_string_view, swap"]
ms.assetid: a9c3e0a2-39bf-4c8a-b093-9abe30839591
---
# basic_string_view Class

The class template `basic_string_view<charT>` was added in C++17 to serve as a safe and efficient way for a function to accept various unrelated string types without the function having to be templatized on those types. The class holds a non-owning pointer to a contiguous sequence of character data, and a length that specifies the number of characters in the sequence. No assumption is made with respect to whether the sequence is null-terminated.

The standard library defines several specializations based on the type of the elements:

-  `string_view`
-  `wstring_view`
-  `u8_string_view`
-  `u16string_view`
-  `u32string_view`

Use these typedefs in your code to ensure that the implicit conversions from the underlying string types work correctly. In this document, the term *string_view* refers generally to any of these typedefs.

A string_view describes the minimum common interface necessary to read string data. It provides const access to the underlying data; it makes no copies (except for the `copy` function). The data may or may not contain null values ('\0') at any position. A string_view has no control over the object's lifetime; therefore it is the caller's responsibility to ensure that the underlying string data valid.

A function that accepts a parameter of type string_view can be made to work with any string-like type, without making the function into a template, or constraining the function to a particular subset of string types. The only requirement is that an implicit conversion exists from the string type to string_view. All the standard string types are implicitly convertible to a string_view that contains the same element type.

The following example shows a non-template function `f` that takes a parameter of type `wstring_view`. It can be called with arguments of type `std::wstring`, `wchar_t*`, and `winrt::hstring`.

```cpp
// string_view that uses elements of wchar_t
void f(wstring_view);

// pass a std::wstring:
std::wstring& s; f(s);

// pass a C-style null-terminated string (string_view is not null-terminated):
wchar_t* ns = "Hello";
f(ns);

// pass a C-style character array of len characters (excluding null terminator):
wchar_t* cs, size_t len; f({cs,len});

// pass a WinRT string
winrt::hstring hs; f(hs);
```

## Syntax

```cpp
template <class CharType, class Traits = char_traits<CharType>>
class basic_string_view;
```

### Parameters

*CharType*<br/>
The data type of the characters that are stored in the string_view. The C++ Standard Library provides the following typedefs for specializations of this template. Use these typedefs rather than explicitly instantiating a `basic_string_view<charT>`.
- [string_view](../standard-library/string-view-typedefs.md#string_view) for elements of type **char**
-  [wstring_view](../standard-library/string-view-typedefs.md#wstring_view), for **wchar_t**
-  [u16string_view](../standard-library/string-view-typedefs.md#u16string_view) for **char16_t**
-  [u32string_view](../standard-library/string-view-typedefs.md#u32string_view) for **char32_t**.

*Traits*<br/>
Defaults to [char_traits](char-traits-struct.md)<*CharType*>.

### Constructors

|Constructor|Description|
|-|-|
|[basic_string_view](#basic_string_view)|Constructs a string_view that is empty or else points to all or part of some other string object's data, or to a C-style character array.|

### Typedefs

|Type name|Description|
|-|-|
|[const_iterator](#const_iterator)|Provides a random-access iterator that can read a **const** element in the string_view.|
|[const_pointer](#const_pointer)|Provides a pointer to a **const** element.|
|[const_reference](#const_reference)|Provides a reference to a **const** element for reading and performing **const** operations.|
|[const_reverse_iterator](#const_reverse_iterator)|Provides a random-access iterator that can read any **const** element in the string_view.|
|[difference_type](#difference_type)|Provides the difference between two iterators that refer to elements within the same string_view.|
|[iterator](#iterator)|Same as const_iterator.|
|[npos](#npos)|An unsigned integral value initialized to -1 that indicates either "not found" or "all remaining characters" when a search function fails.|
|[pointer](#pointer)|Same as const_pointer.|
|[reference](#reference)|Same as const_reference.|
|[reverse_iterator](#reverse_iterator)|Same as const_reverse_iterator.|
|[size_type](#size_type)|An unsigned integral type for the number of elements.|
|[traits_type](#traits_type)|A type for the character traits of the elements.|
|[value_type](#value_type)|Represents the type of characters.|

### Member functions

|Member function|Description|
|-|-|
|[at](#at)|Returns a reference to the element at a specified location.|
|[back](#back)|Returns a reference to the last element.|
|[begin](#begin)|Same as [cbegin](#cbegin).|
|[cbegin](#cbegin)|Returns a const iterator addressing the first element.|
|[cend](#cend)|Returns a const iterator that addresses the location succeeding the last element.|
|[copy](#copy)|Copies at most a specified number of characters from an indexed position in a source string_view to a target character array. Deprecated. Use basic_string_view::_Copy_s instead.|
|[compare](#compare)|Compares a string_view with a specified string_view to determine if they are equal or if one is lexicographically less than the other.|
|[crbegin](#crbegin)|Returns a const iterator that addresses the first element in a reversed string_view.|
|[crend](#crend)|Returns a const iterator that addresses the location succeeding the last element in a reversed string_view.|
|[_Copy_s](#copys)|Copies at most a specified number of characters from an indexed position in a source string_view to a target character array.|
|[data](#data)|Converts the contents of a string_view into an array of characters.|
|[empty](#empty)|Tests whether the string_view contains characters.|
|[end](#end)|Same as [cend](#cend).|
|[find](#find)|Searches in a forward direction for the first occurrence of a substring that matches a specified sequence of characters.|
|[find_first_not_of](#find_first_not_of)|Searches for the first character that is not any element of a specified string_view.|
|[find_first_of](#find_first_of)|Searches for the first character that matches any element of a specified string_view.|
|[find_last_not_of](#find_last_not_of)|Searches for the last character that is not any element of a specified string_view.|
|[find_last_of](#find_last_of)|Searches for the last character that is an element of a specified string_view.|
|[front](#front)|Returns a reference to the first element.|
|[length](#length)|Returns the current number of elements.|
|[max_size](#max_size)|Returns the maximum number of characters a string_view could contain.|
|[rbegin](#rbegin)|Same as [crbegin](#crbegin).|
|[rend](#rend)|Same as [crend](#crend).|
|[rfind](#rfind)|Searches a string_view in reverse for the first occurrence of a substring that matches a specified sequence of characters.|
|[size](#size)|Returns the current number of elements.||[swap](#swap)|Exchange the contents of two string_views.|

## Remarks

If a function is asked to generate a sequence longer than [max_size](#max_size) elements, the function reports a length error by throwing an object of type [length_error](../standard-library/length-error-class.md).

References, pointers, and iterators that designate elements of the controlled sequence can become invalid after any call to a function that alters the controlled sequence, or after the first call to a non-**const** member function.

## Requirements

**Header:** \<string_view>

**Namespace:** std

## <a name="at"></a>  basic_string_view::at

Returns a reference to the character at the specified 0-based index.

```cpp
constexpr const_reference at(size_type offset) const;
```

### Parameters

*offset*<br/>
The index of the position of the element to be referenced.

### Return Value

A reference to the character at the position specified by the parameter index.

### Remarks

The first element has an index of zero and the following elements are indexed consecutively by the positive integers, so that a string_view of length *n* has an *n*th element indexed by the number *n -* 1. See [basic_string_view::operator\[\]](#op_at) for more information.

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

## <a name="back"></a>  basic_string_view::back

Returns a reference to the last element.

```cpp
constexpr const_reference back() const;
```

### Return Value

A reference to the last non-null element.

## <a name="basic_string_view"></a>  basic_string_view::basic_string_view

Constructs a string_view.

```cpp
constexpr basic_string_view() noexcept;

constexpr basic_string_view(const basic_string_view&) noexcept = default;

constexpr basic_string_view(const charT* str);

constexpr basic_string_view(const charT* str, size_type len);
```

### Parameters

*str*<br/>
The pointer to the character values.

*len*<br/>
The number of characters to be initialized.

## Remarks

You can also construct a string_view with a literal. See [operator""sv](string-view-operators.md#op_sv).

## <a name="begin"></a>  basic_string_view::begin

Same as [cbegin](#cbegin).

```cpp
constexpr const_iterator begin() const noexcept;
```

### Return Value
Returns a const_iterator addressing the first element.

## <a name="cbegin"></a>  basic_string_view::cbegin

Returns a **const** iterator that addresses the first element in the range.

```cpp
constexpr const_iterator cbegin() const noexcept;
```

### Return Value

A **const** random-access iterator that points at the first element of the range, or the location just beyond the end of an empty range (for an empty range, `cbegin() == cend()`).

A random-access iterator that addresses the first element of the sequence or just beyond the end of an empty sequence.

### Example

```cpp
// basic_string_view_begin.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main() {
    using namespace std;
    string_view str1("No way out."), str2;
    string_view::iterator str1_Iter;

    str1_Iter = str1.begin();
    cout << "The first character str1 is: "
        << *str1_Iter << endl;
    cout << "The full original string_view str1 is: " << str1 << endl;

    // For an empty string_view, begin is equivalent to end
    if (str2.begin() == str2.end())
        cout << "The string_view str2 is empty." << endl;
    else
        cout << "The string_view str2 is not empty." << endl;
}
```

## <a name="cend"></a>  basic_string_view::cend

Returns a **const** iterator that addresses the location just beyond the last element in a range.

```cpp
constexpr const_iterator cend() const noexcept;
```

### Return Value

A **const** random-access iterator that points just beyond the end of the range.

### Remarks

`cend` is used to test whether an iterator has passed the end of its range.

You can use this member function in place of the `end()` member function to guarantee that the return value is `const_iterator`. Typically, it's used in conjunction with the [auto](../cpp/auto-cpp.md) type deduction keyword, as shown in the following example. In the example, consider `Container` to be a modifiable (non- **const**) container of any kind that supports `end()` and `cend()`.

```cpp
auto i1 = Container.end();
// i1 is Container<T>::iterator
auto i2 = Container.cend();

// i2 is Container<T>::const_iterator
```

The value returned by `cend` should not be dereferenced.

## <a name="compare"></a> basic_string_view::compare

Performs a case sensitive comparison with a specified string_view to determine if the two string_views are equal or if one is lexicographically less than the other.

```cpp
constexpr int compare(basic_string_view strv) const noexcept;

constexpr int compare(size_type pos, size_type num, basic_string_view strv) const;

constexpr int compare(size_type pos, size_type num, basic_string_view strv, size_type offset, size_type num2) const;

constexpr int compare(const charT* ptr) const;

constexpr int compare(size_type pos, size_type num, const charT* ptr) const;

constexpr int compare(size_type pos, size_type num, const charT* ptr, size_type num2) const;
```

### Parameters

*strv*<br/>
The string_view that is to be compared to this string_view.

*pos*<br/>
The index of this string_view at which the comparison begins.

*num*<br/>
The maximum number of characters from this string_view to be compared.

*num2*<br/>
The maximum number of characters from *strv* to be compared.

*offset*<br/>
The index of *strv* at which the comparison begins.

*ptr*<br/>
The C-string to be compared to this string_view.

### Return Value

A negative value if this string_view is less than *strv* or *ptr*; zero if the two character sequences are equal; or a positive value if this string_view is greater than *strv* or *ptr*.

### Remarks

The `compare` member functions perform a case-sensitive comparison of either all or part of each character sequence.

### Example

```cpp
// basic_string_view_compare.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>
#include <string>

int main()
{
    using namespace std;

    // The first member function compares
    // two string_views
    int comp1;
    string_view sv_A("CAB");
    string_view sv_B("CAB");
    cout << "sv_A: " << sv_A << endl;
    cout << "sv_B is: " << sv_B << endl;
    comp1 = sv_A.compare(sv_B);
    if (comp1 < 0)
        cout << "sv_A is less than sv_B.\n";
    else if (comp1 == 0)
        cout << "sv_A is equal to sv_B.\n";
    else
        cout << "sv_A is greater than sv_B." << endl;

    // The second member function compares part of
    // an operand string_view to another string_view
    int comp2a, comp2b;
    string_view sv_C("AACAB");
    string_view sv_D("CAB");
    cout << "sv_C is: " << sv_C << endl;
    cout << "sv_D is: " << sv_D << endl;
    comp2a = sv_C.compare(2, 3, sv_D);
    cout << "The last three characters of "
        << "sv_C are ";
    if (comp2a == 0) { cout << "equal to "; }
    else if (comp2a < 0) { cout << "less than "; }
    else { cout << "greater than "; }
    cout << "sv_D.\n";
    
    comp2b = sv_C.compare(0, 3, sv_D);
    cout << "The first three characters of "
            << "sv_C are ";
    if (comp2b == 0) { cout << "equal to "; }
    else if (comp2b < 0) { cout << "less than "; }
    else { cout << "greater than "; }
    cout << "sv_D.\n";

    // The third member function compares part of
    // an operand string_view to part of another string_view
    int comp3a;
    string_view sv_E("AACAB");
    string_view sv_F("DCABD");
    cout << "sv_E: " << sv_E << endl;
    cout << "sv_F is: " << sv_F << endl;
    comp3a = sv_E.compare(2, 3, sv_F, 1, 3);
    cout << "The three characters from position 2 of "
        << "sv_E are ";
    if (comp3a == 0) { cout << "equal to "; }
    else if (comp3a < 0) { cout << "less than "; }
    else { cout << "greater than "; }
    cout << "the 3 characters of sv_F from position 1.\n";

    // The fourth member function compares
    // an operand string_view to a C-string
    int comp4a;
    string_view sv_G("ABC");
    const char* cs_A = "DEF";
    cout << "sv_G is: " << sv_G << endl;
    cout << "cs_A is: " << cs_A << endl;
    comp4a = sv_G.compare(cs_A);
    cout << "sv_G is ";
    if (comp4a == 0) { cout << "equal to "; }
    else if (comp4a < 0) { cout << "less than "; }
    else { cout << "greater than "; }
    cout << "cs_A.\n";

    // The fifth member function compares part of
    // an operand string_view to a C-string
    int comp5a;
    string_view sv_H("AACAB");
    const char* cs_B = "CAB";
    cout << "sv_H is: " << sv_H << endl;
    cout << "cs_B is: " << cs_B << endl;
    comp5a = sv_H.compare(2, 3, cs_B);
    cout << "The last three characters of "
        << "sv_H are ";
    if (comp5a == 0) { cout << "equal to "; }
    else if (comp5a < 0) { cout << "less than "; }
    else { cout << "greater than "; }
    cout << "cs_B.\n";
    
    // The sixth member function compares part of
    // an operand string_view to part of an equal length of
    // a C-string
    int comp6a;
    string_view sv_I("AACAB");
    const char* cs_C = "ACAB";
    cout << "sv_I is: " << sv_I << endl;
    cout << "cs_C: " << cs_C << endl;
    comp6a = sv_I.compare(1, 3, cs_C, 3);
    cout << "The 3 characters from position 1 of "
        << "sv_I are ";
    if (comp6a == 0) { cout << "equal to "; }
    else if (comp6a < 0) { cout << "less than "; }
    else { cout << "greater than "; }
    cout << "the first 3 characters of cs_C.\n";

}
```

```Output
sv_A: CAB
sv_B is: CAB
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

## <a name="const_iterator"></a>  basic_string_view::const_iterator

Provides a random-access iterator that can read a **const** element.

```cpp
typedef implementation-defined const_iterator;
```

### Example

See the example for [cbegin](#cbegin) for an example of how to declare and use `const_iterator`.

## <a name="const_pointer"></a>  basic_string_view::const_pointer

Provides a pointer to a **const** element.

```cpp
typedef typename allocator_type::const_pointer const_pointer;
```

### Remarks

The type is a synonym for `allocator_type::const_pointer`.

For type string_view, it is equivalent to `char*`, for `wstring_view` it is `wchar_t*`, and so on.

Pointers that are declared const must be initialized when they are declared. Const pointers always point to the same memory location and may point to constant or non-constant data.

## <a name="const_reference"></a>  basic_string_view::const_reference

Provides a reference to a **const** element for reading and performing **const** operations.

```cpp
typedef typename allocator_type::const_reference const_reference;
```

### Remarks

The type is a synonym for `allocator_type::const_reference`. For string_view `type`, it is equivalent to const `char&`.

### Example

See the example for [at](#at) for an example of how to declare and use `const_reference`.

## <a name="const_reverse_iterator"></a>  basic_string_view::const_reverse_iterator

Provides a random-access iterator that can read any **const** element.

```cpp
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
```

### Remarks

A type `const_reverse_iterator` that is used to iterate in reverse.

### Example

See the example for [crbegin](#crbegin) for an example of how to declare and use `const_reverse_iterator`.

## <a name="copy"></a>  basic_string_view::copy

Copies at most a specified number of characters from an indexed position in a source string_view to a target character array.

This method is potentially unsafe, as it relies on the caller to check that the passed values are correct. Consider using [basic_string_view::_Copy_s](#copys) instead.

```cpp
size_type copy(charT* ptr, size_type count, size_type offset = 0) const;
```

### Parameters

*ptr*<br/>
The target character array to which the elements are to be copied.

*count*<br/>
The number of characters to be copied, at most, from the source string_view.

*offset*<br/>
The beginning position in the source string_view from which copies are to be made.

### Return Value

The number of characters actually copied.

### Remarks

A null character is not appended to the end of the copy.

## <a name="crbegin"></a>  basic_string_view::crbegin

Returns a const iterator that addresses the first element in a reversed string_view.

```cpp
constexpr const_reverse_iterator crbegin() const noexcept;
```

### Return Value

A reverse iterator that points to one past the end of the sequence.

## <a name="crend"></a>  basic_string_view::crend

Represents one past the end of a reversed string_view.

```cpp
constexpr const_reverse_iterator crend() const noexcept;
```

### Return Value

Returns a const iterator that addresses one past the end of a reversed string_view.

## <a name="data"></a>  basic_string_view::data

Converts the contents of a string_view into an array of characters.

```cpp
constexpr value_type *data() const noexcept;
```

### Return Value

A pointer to the first element of the array containing the contents of the string_view, or, for an empty array, a non-null pointer that cannot be dereferenced.

### Remarks

A sequence of string_view characters is not necessarily null-terminated. The return type for `data` is not a valid C string, because no null character gets appended. The null character '\0' has no special meaning in an object of type string_view and may be a part of the string_view object just like any other character.


## <a name="difference_type"></a>  basic_string_view::difference_type

A signed integral type that can represent the difference between two iterators that refer to elements within the same string_view.

```cpp
typedef typename difference_type = ptrdiff_t;
```

## <a name="empty"></a>  basic_string_view::empty

Tests whether the string_view contains characters or not.

```cpp
constexpr bool empty() const noexcept;
```

### Return Value

**true** if the string_view object contains no characters; **false** if it has at least one character.

### Remarks

The member function is equivalent to [size](#size) == 0.

## <a name="end"></a>  basic_string_view::end

Returns an iterator that points to one past the last element.

```cpp
constexpr const_iterator end() const noexcept;
```

### Return Value

Returns a random-access iterator that points to one past the last element.

### Remarks

`end` is used to test whether an iterator has reached the end of its string_view. The value returned by `end` should not be dereferenced.

## <a name="find"></a>  basic_string_view::find

Searches a string_view in a forward direction for the first occurrence of a character or substring that matches a specified sequence of character(s).

```cpp
constexpr size_type find(basic_string_view str, size_type offset = 0) const noexcept;
constexpr size_type find(charT chVal, size_type offset = 0) const noexcept;
constexpr size_type find(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find(const charT* ptr, size_type offset = 0) const;
```

### Parameters

*str*<br/>
The string_view for which the member function is to search.

*chVal*<br/>
The character value for which the member function is to search.

*offset*<br/>
Index of the position at which the search is to begin.

*ptr*<br/>
The C string for which the member function is to search.

*count*<br/>
The number of characters in *ptr*, counting forward from the first character.

### Return Value

The index of the first character of the substring searched for when successful; otherwise `npos`.


## <a name="find_first_not_of"></a>  basic_string_view::find_first_not_of

Searches for the first character that is not an element of a specified string_view.

```cpp
constexpr size_type find_first_not_of(basic_string_view str, size_type offset = 0) const noexcept;
constexpr size_type find_first_not_of(charT c, size_type offset = 0) const noexcept;
constexpr size_type find_first_not_of(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find_first_not_of(const charT* ptr, size_type offset = 0) const;
```

### Parameters

*str*<br/>
The string_view for which the member function is to search.

*chVal*<br/>
The character value for which the member function is to search.

*offset*<br/>
Index of the position at which the search is to begin.

*ptr*<br/>
The C-string for which the member function is to search.

*count*<br/>
The number of characters, counting forward from the first character, in the C-string for which the member function is to search.

### Return Value

The index of the first character of the substring searched for when successful; otherwise `npos`.


## <a name="find_first_of"></a>  basic_string_view::find_first_of

Searches for the first character that matches any element of a specified string_view.

```cpp
constexpr size_type find_first_of(basic_string_view str, size_type offset = 0) const noexcept;
constexpr size_type find_first_of(charT c, size_type offset = 0) const noexcept;
constexpr size_type find_first_of(const charT* str, size_type offset, size_type count) const;
constexpr size_type find_first_of(const charT* str, size_type offset = 0) const;
```

### Parameters

*chVal*<br/>
The character value for which the member function is to search.

*offset*<br/>
Index of the position at which the search is to begin.

*ptr*<br/>
The C-string for which the member function is to search.

*count*<br/>
The number of characters, counting forward from the first character, in the C-string for which the member function is to search.

*str*<br/>
The string_view for which the member function is to search.

### Return Value

The index of the first character of the substring searched for when successful; otherwise `npos`.


## <a name="find_last_not_of"></a>  basic_string_view::find_last_not_of

Searches for the last character that is not any element of a specified string_view.

```cpp
constexpr size_type find_last_not_of(basic_string_view str, size_type offset = npos) const noexcept;
constexpr size_type find_last_not_of(charT chVal, size_type offset = npos) const noexcept;
constexpr size_type find_last_not_of(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find_last_not_of(const charT* ptr, size_type offset = npos) const;
```

### Parameters

*str*<br/>
The string_view for which the member function is to search.

*chVal*<br/>
The character value for which the member function is to search.

*offset*<br/>
Index of the position at which the search is to finish.

*ptr*<br/>
The C-string for which the member function is to search.

*count*<br/>
The number of characters, counting forward from the first character, in *ptr*.

### Return Value

The index of the first character of the substring searched for when successful; otherwise `npos`.


## <a name="find_last_of"></a>  basic_string_view::find_last_of

Searches for the last character that matches any element of a specified string_view.

```cpp
constexpr size_type find_last_of(basic_string_view str, size_type offset = npos) const noexcept;
constexpr size_type find_last_of(charT chVal, size_type offset = npos) const noexcept;
constexpr size_type find_last_of(const charT* ptr, size_type offset, size_type n) const;
constexpr size_type find_last_of(const charT* ptr, size_type offset = npos) const;
```

### Parameters

*str*<br/>
The string_view for which the member function is to search.

*chVal*<br/>
The character value for which the member function is to search.

*offset*<br/>
Index of the position at which the search is to finish.

*ptr*<br/>
The C-string for which the member function is to search.

*count*<br/>
The number of characters, counting forward from the first character, in the C-string for which the member function is to search.

### Return Value

The index of the last character of the substring searched for when successful; otherwise `npos`.

## <a name="front"></a>  basic_string_view::front

Returns a reference to the first non-null element.

```cpp
constexpr const_reference front() const;
```

### Return Value

A reference to the first non-null element.

## <a name="iterator"></a> basic_string_view::iterator

Provides a random-access iterator that can read a **const** element.

```cpp
typedef implementation-defined iterator;
using iterator = const_iterator;
```

### Remarks

A type `iterator` is used to iterate in a forward direction.

### Example

See the example for [begin](#begin) for an example of how to declare and use `iterator`.

## <a name="length"></a> basic_string_view::length

Returns the current number of elements.

```cpp
constexpr size_type length() const noexcept;
```

### Remarks

The member function is the same as [size](#size).

## <a name="max_size"></a>  basic_string_view::max_size

Returns the maximum number of characters a string_view could contain.

```cpp
size_type max_size() const;

...
constexpr size_type max_size() const noexcept;
```

### Return Value

The maximum number of characters a string_view could contain.

### Remarks

A exception of type [length_error](../standard-library/length-error-class.md) is thrown when an operation produces a string_view with a length greater than the maximum size.

## <a name="npos"></a>  basic_string_view::npos

An unsigned integral value that indicates either "not found" or "all remaining characters" when a search function fails.

```cpp
static constexpr size_type npos = size_type(-1);
```

### Example

See the example for [find](#find) for an example of how to declare and use `npos`.

## <a name="op_at"></a>  basic_string_view::operator[]

Provides a reference to the character with a specified index.

```cpp
constexpr const_reference operator[](size_type offset) const;
```

### Parameters

*offset*<br/>
The index of the position of the element to be referenced.

### Return Value

A reference to the character at the position specified by the parameter index.

### Remarks

The first element has an index of zero, and the following elements are indexed consecutively by the positive integers, so that a string_view of length *n* has an *n*th element indexed by the number *n* - 1.

`operator[]` is faster than the member function [at](#at) for providing read and write access to the elements of a string_view.

`operator[]` does not check whether the index passed as an argument is valid, but the member function `at` does and so should be used when the validity is not certain. An invalid index (an index less that zero or greater than or equal to the size of the string_view) passed to the member function `at` throws an [out_of_range](../standard-library/out-of-range-class.md) exception. An invalid index passed to `operator[]` results in undefined behavior, but the index equal to the length of the string_view is a valid index for const string_views and the operator returns the null character when passed this index.

The reference returned may be invalidated by string_view reallocations or modifications for the non- **const** string_views.

When compiling with [\_ITERATOR\_DEBUG\_LEVEL](../standard-library/iterator-debug-level.md) set to 1 or 2, a runtime error will occur if you attempt to access an element outside the bounds of the string_view. For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// basic_string_view_op_ref.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main()
{
   using namespace std;
   string_view str1( "Hello world" ), str2( "Goodbye world" );
   const string_view cstr1( "Hello there" ), cstr2( "Goodbye now" );

   // Element access to the non-const string_views
   string_view::reference refStr1 = str1 [6];
   string_view::reference refStr2 = str2.atif( 3 );

   cout << "The character with an index of 6 in " << " << str1 << " is: "
        << refStr1 << "." << endl;
   cout << "The character with an index of 3 in " << str2 << " is: "
        << refStr2 << "." << endl;

   // Element access to the const string_views
   string_view::const_reference crefStr1 = cstr1[ cstr1.lengthif() ];
   string_view::const_reference crefStr2 = cstr2.atif( 8 );

   if ( crefStr1 == '\0' )
      cout << "The null character is returned as a valid reference."
           << endl;
   else
      cout << "The null character is not returned." << endl;
   cout << "The character with index of 8 in the const string_view cstr2 is: "
        << crefStr2 << "." << endl;
}
```

## <a name="rbegin"></a>  basic_string_view::rbegin

Returns an iterator to the first element in a reversed string_view.

```cpp
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();

...
constexpr const_reverse_iterator rbegin() const noexcept;
```

### Return Value

Returns a random-access iterator to the first element in a reversed string_view, addressing what would be the last element in the corresponding unreversed string_view.

### Remarks

`rbegin` is used with a reversed string_view just as [begin](#begin) is used with a string_view.

`rbegin` can be used to initialize an iteration backwards.

### Example

```cpp
// basic_string_view_rbegin.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main()
{
   using namespace std;
   string_view str1( "Able was I ere I saw Elba" ), str2;
   string_view::reverse_iterator str_rIter, str1_rIter, str2_rIter;
   string_view::const_reverse_iterator str1_rcIter;

   str1_rIter = str1.rbeginif ();
   cout << "The first character-letter of the reversed string_view str1 is: "
        << *str1_rIter << endl;
   cout << "The full reversed string_view str1 is:\n ";
   for ( str_rIter = str1.rbegin(); str_rIter != str1.rend(); str_rIter++ )
      cout << *str_rIter;
   cout << endl;

   // For an empty string_view, begin is equivalent to end
   if ( str2.rbegin() == str2.rendif () )
      cout << "The string_view str2 is empty." << endl;
   else
      cout << "The string_viewstr2  is not empty." << endl;
}
```

```Output
The first character-letter of the reversed string_view str1 is: a
The full reversed string_view str1 is:
ablE was I ere I saw elbA
The first character-letter of the modified str1 is now: A
The full modified reversed string_view str1 is now:
AblE was I ere I saw elbA
The string_view str2 is empty.
```

## <a name="pointer"></a>  basic_string::pointer

Provides a pointer to a character element in a string or character array.

```cpp
typedef typename allocator_type::pointer pointer;

...
using const_pointer = const value_type*;
```

### Remarks

The type is a synonym for `allocator_type::pointer`.

For type `string`, it is equivalent to char*.

## <a name="reference"></a>  basic_string::reference

Provides a reference to an element stored in a string.

```cpp
typedef typename allocator_type::reference reference;

using reference = value_type&;
```

### Remarks

A type `reference` can be used to modify the value of an element.

The type is a synonym for `allocator_type::reference`.

For type `string`, it is equivalent to `chr&`.

### Example

See the example for [at](#at) for an example of how to declare and use `reference`.

## <a name="rend"></a>  basic_string_view::rend

Returns an iterator that addresses the location succeeding the last element in a reversed string_view.

```cpp
const_reverse_iterator rend() const;

reverse_iterator rend();
...
constexpr const_reverse_iterator rend() const noexcept;
```

### Return Value

A reverse random-access iterator that addresses the location succeeding the last element in a reversed string_view.

### Remarks

`rend` is used with a reversed string_view just as [end](#end) is used with a string_view.

If the return value of `rend` is assigned to a `const_reverse_iterator`, the string_view object cannot be modified. If the return value of `rend` is assigned to a `reverse_iterator`, the string_view object can be modified.

`rend` can be used to test whether a reverse iterator has reached the end of its string_view.

The value returned by `rend` should not be dereferenced.


## <a name="reverse_iterator"></a>  basic_string_view::reverse_iterator

Provides a reference to an element.

```cpp
typedef std::reverse_iterator<iterator> reverse_iterator;

...
using reverse_iterator = const_reverse_iterator;
```

### Remarks

A type `reverse_iterator` can be used to modify the value of a character and is used to iterate in reverse.

### Example

See the example for [rbegin](#rbegin) for an example of how to declare and use `reverse_iterator`.

## <a name="rfind"></a>  basic_string_view::rfind

Searches a string_view in reverse for the first occurrence of a substring that matches a specified sequence of characters.

```cpp
constexpr size_type rfind(basic_string_view str, size_type offset = npos) const noexcept;
constexpr size_type rfind(charT chVal, size_type offset = npos) const noexcept;
constexpr size_type rfind(const charT* ptr, size_type offset, size_type n) const;
constexpr size_type rfind(const charT* ptr, size_type offset = npos) const;
```

### Parameters

*chVal*<br/>
The character value for which the member function is to search.

*offset*<br/>
Index of the position at which the search is to begin.

*ptr*<br/>
The C-string for which the member function is to search.

*count*<br/>
The number of characters, counting forward from the first character, in the C-string for which the member function is to search.

*str*<br/>
The string_view for which the member function is to search.

### Return Value

The index of the last occurrence, when searched backwards, of the first character of the substring when successful; otherwise `npos`.

## <a name="size"></a>  basic_string_view::size

Returns the number of elements in the underlying string at the time the string_view was constructed.

```cpp
constexpr size_type size() const noexcept;
```

### Return Value

The length of the string_view.

### Remarks

If the length of the underlying string data is changed, then the string_view is no longer valid and can raise `std::out_of_range`.


## <a name="size_type"></a>  basic_string_view::size_type

An unsigned integer type that can represent the number of elements.

```cpp
typedef typename allocator_type::size_type size_type;
```

### Remarks

It is equivalent to `allocator_type::size_type`.

For type string_view, it is equivalent to `size_t`.

## <a name="substr"></a>  basic_string_view::substr

Points to a substring of at most some number of characters from a specified position.

```cpp
constexpr basic_string_view substr(size_type offset = 0, size_type count = npos) const;
```

### Parameters

*offset*<br/>
An index locating the element at the position from which the copy is made, with a default value of 0.

*count*<br/>
The number of characters to include in the substring, if they are present.

### Return Value

A string_view object that represents the specified sub-sequence of elements.

## <a name="swap"></a>  basic_string_view::swap

Exchange the pointers to the underlying string data.

```cpp
constexpr void swap(basic_string_view& str) noexcept;
```

### Parameters

*str*<br/>
The source string_view whose pointer is to be exchanged with that of the destination string_view.

### Remarks

If the string_views being swapped have the same allocator object, the `swap` member function:

- Occurs in constant time.

- Throws no exceptions.

- Invalidates no references, pointers, or iterators that designate elements in the two string_views.

Otherwise, it performs a number of element assignments and constructor calls proportional to the number of elements in the two controlled sequences.

## <a name="traits_type"></a>  basic_string_view::traits_type

A type for the character traits of the elements.

```cpp
using traits_type = traits;
```

### Remarks

The type is a synonym for the second template parameter `Traits`. For type string_view, it is equivalent to **char_traits\<char>**.

### Example

See the example for [copy](../standard-library/char-traits-struct.md#copy) for an example of how to declare and use `traits_type`.

## <a name="value_type"></a>  basic_string_view::value_type

Represents the type of characters.

```cpp
typedef typename allocator_type::value_type value_type;
```

### Remarks

It is equivalent to `traits_type::char_type` and is equivalent to **char** for objects of type string_view.

## See also

[\<string_view>](../standard-library/string-view.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
