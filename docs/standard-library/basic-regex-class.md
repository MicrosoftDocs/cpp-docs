---
description: "Learn more about: basic_regex Class"
title: "basic_regex Class"
ms.date: "03/27/2019"
f1_keywords: ["regex/std::basic_regex"]
helpviewer_keywords: ["basic_regex class"]
ms.assetid: 8a18c6b4-f22a-4cfd-bc16-b4267867ebc3
---
# basic_regex Class

Wraps a regular expression.

## Syntax

```cpp
template <class Elem, class RXtraits>
class basic_regex
```

## Parameters

*Elem*\
The type of elements to match.

*RXtraits*\
Traits class for elements.

## Remarks

The class template describes an object that holds a regular expression. Objects of this class template can be passed to the template functions [regex_match](../standard-library/regex-functions.md#regex_match), [regex_search](../standard-library/regex-functions.md#regex_search), and [regex_replace](../standard-library/regex-functions.md#regex_replace), along with suitable text string arguments, to search for text that matches the regular expression. There are two specializations of this class template, with the type definitions [regex](../standard-library/regex-typedefs.md#regex) for elements of type **`char`**, and [wregex](../standard-library/regex-typedefs.md#wregex) for elements of type **`wchar_t`**.

The template argument *RXtraits* describes various important properties of the syntax of the regular expressions that the class template supports. A class that specifies these regular expression traits must have the same external interface as an object of type [regex_traits Class](../standard-library/regex-traits-class.md).

Some functions take an operand sequence that defines a regular expression. You can specify such an operand sequence several ways:

`ptr` -- a null-terminated sequence (such as a C string, for *Elem* of type **`char`**) beginning at `ptr` (which must not be a null pointer), where the terminating element is the value `value_type()` and is not part of the operand sequence

`ptr`, `count` -- a sequence of `count` elements beginning at `ptr` (which must not be a null pointer)

`str` -- the sequence specified by the `basic_string` object `str`

`first`, `last` -- a sequence of elements delimited by the iterators `first` and `last`, in the range `[first, last)`

`right` -- the `basic_regex` object `right`

These member functions also take an argument `flags` that specifies various options for the interpretation of the regular expression in addition to those described by the *RXtraits* type.

### Members

|Member|Default Value|
|-|-|
|public static const flag_type icase|regex_constants::icase|
|public static const flag_type nosubs|regex_constants::nosubs|
|public static const flag_type optimize|regex_constants::optimize|
|public static const flag_type collate|regex_constants::collate|
|public static const flag_type ECMAScript|regex_constants::ECMAScript|
|public static const flag_type basic|regex_constants::basic|
|public static const flag_type extended|regex_constants::extended|
|public static const flag_type awk|regex_constants::awk|
|public static const flag_type grep|regex_constants::grep|
|public static const flag_type egrep|regex_constants::egrep|
|private RXtraits traits||

### Constructors

|Constructor|Description|
|-|-|
|[basic_regex](#basic_regex)|Construct the regular expression object.|

### Typedefs

|Type name|Description|
|-|-|
|[flag_type](#flag_type)|The type of syntax option flags.|
|[locale_type](#locale_type)|The type of the stored locale object.|
|[value_type](#value_type)|The element type.|

### Member functions

|Member function|Description|
|-|-|
|[assign](#assign)|Assigns a value to the regular expression object.|
|[flags](#flags)|Returns syntax option flags.|
|[getloc](#getloc)|Returns the stored locale object.|
|[imbue](#imbue)|Alters the stored locale object.|
|[mark_count](#mark_count)|Returns number of subexpressions matched.|
|[swap](#swap)|Swaps two regular expression objects.|

### Operators

|Operator|Description|
|-|-|
|[operator=](#op_eq)|Assigns a value to the regular expression object.|

## Requirements

**Header:** \<regex>

**Namespace:** std

## Example

```cpp
// std__regex__basic_regex.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

using namespace std;

int main()
{
    regex::value_type elem = 'x';
    regex::flag_type flag = regex::grep;

    elem = elem;  // to quiet "unused" warnings
    flag = flag;

    // constructors
    regex rx0;
    cout << "match(\"abc\", \"\") == " << boolalpha
        << regex_match("abc", rx0) << endl;

    regex rx1("abcd", regex::ECMAScript);
    cout << "match(\"abc\", \"abcd\") == " << boolalpha
        << regex_match("abc", rx1) << endl;

    regex rx2("abcd", 3);
    cout << "match(\"abc\", \"abc\") == " << boolalpha
        << regex_match("abc", rx2) << endl;

    regex rx3(rx2);
    cout << "match(\"abc\", \"abc\") == " << boolalpha
        << regex_match("abc", rx3) << endl;

    string str("abcd");
    regex rx4(str);
    cout << "match(string(\"abcd\"), \"abc\") == " << boolalpha
        << regex_match("abc", rx4) << endl;

    regex rx5(str.begin(), str.end() - 1);
    cout << "match(string(\"abc\"), \"abc\") == " << boolalpha
        << regex_match("abc", rx5) << endl;
    cout << endl;

    // assignments
    rx0 = "abc";
    rx0 = rx1;
    rx0 = str;

    rx0.assign("abcd", regex::ECMAScript);
    rx0.assign("abcd", 3);
    rx0.assign(rx1);
    rx0.assign(str);
    rx0.assign(str.begin(), str.end() - 1);

    rx0.swap(rx1);

    // mark_count
    cout << "\"abc\" mark_count == "
        << regex("abc").mark_count() << endl;
    cout << "\"(abc)\" mark_count == "
        << regex("(abc)").mark_count() << endl;

    // locales
    regex::locale_type loc = rx0.imbue(locale());
    cout << "getloc == imbued == " << boolalpha
        << (loc == rx0.getloc()) << endl;

    // initializer_list
    regex rx6({ 'a', 'b', 'c' }, regex::ECMAScript);
    cout << "match(\"abc\") == " << boolalpha
        << regex_match("abc", rx6);
    cout << endl;
}
```

```Output
match("abc", "") == false
match("abc", "abcd") == false
match("abc", "abc") == true
match("abc", "abc") == true
match(string("abcd"), "abc") == false
match(string("abc"), "abc") == true

"abc" mark_count == 0
"(abc)" mark_count == 1
getloc == imbued == true
match("abc") == true
```

## <a name="assign"></a> basic_regex::assign

Assigns a value to the regular expression object.

```cpp
basic_regex& assign(
    const basic_regex& right);

basic_regex& assign(
    const Elem* ptr,
    flag_type flags = ECMAScript);

basic_regex& assign(
    const Elem* ptr,
    size_type len,
    flag_type flags = ECMAScript);

basic_regex& assign(
    initializer_list<_Elem> IList,
    flag_type flags = regex_constants::ECMAScript);

template <class STtraits, class STalloc>
basic_regex& assign(
    const basic_string<Elem, STtraits, STalloc>& str,
    flag_type flags = ECMAScript);

template <class InIt>
basic_regex& assign(
    InIt first, InIt last,
    flag_type flags = ECMAScript);
```

### Parameters

*STtraits*\
Traits class for a string source.

*STalloc*\
Allocator class for a string source.

*InIt*\
Input iterator type for a range source.

*right*\
Regex source to copy.

*ptr*\
Pointer to beginning of sequence to copy.

*flags*\
Syntax option flags to add while copying.

*len/TD>*\
Length of sequence to copy.

*str*\
String to copy.

*first*\
Beginning of sequence to copy.

*last*\
End of sequence to copy.

*IList*\
The initializer_list to copy.

### Remarks

The member functions each replace the regular expression held by **`*this`** with the regular expression described by the operand sequence, then return **`*this`**.

## <a name="basic_regex"></a> basic_regex::basic_regex

Construct the regular expression object.

```cpp
basic_regex();

explicit basic_regex(
    const Elem* ptr,
    flag_type flags);

explicit basic_regex(
    const Elem* ptr,
    size_type len,
    flag_type flags);

basic_regex(
    const basic_regex& right);

basic_regex(
    initializer_list<Type> IList,
    flag_type flags);

template <class STtraits, class STalloc>
explicit basic_regex(
    const basic_string<Elem, STtraits, STalloc>& str,
    flag_type flags);

template <class InIt>
explicit basic_regex(
    InIt first,
    InIt last,
    flag_type flags);
```

### Parameters

*STtraits*\
Traits class for a string source.

*STalloc*\
Allocator class for a string source.

*InIt*\
Input iterator type for a range source.

*right*\
Regex source to copy.

*ptr*\
Pointer to beginning of sequence to copy.

*flags*\
Syntax option flags to add while copying.

*len/TD>*\
Length of sequence to copy.

*str*\
String to copy.

*first*\
Beginning of sequence to copy.

*last*\
End of sequence to copy.

*IList*\
The initializer_list to copy.

### Remarks

All constructors store a default-constructed object of type `RXtraits`.

The first constructor constructs an empty `basic_regex` object. The other constructors construct a `basic_regex` object that holds the regular expression described by the operand sequence.

An empty `basic_regex` object does not match any character sequence when passed to [regex_match](../standard-library/regex-functions.md#regex_match), [regex_search](../standard-library/regex-functions.md#regex_search), or [regex_replace](../standard-library/regex-functions.md#regex_replace).

## <a name="flag_type"></a> basic_regex::flag_type

The type of syntax option flags.

```cpp
typedef regex_constants::syntax_option_type flag_type;
```

### Remarks

The type is a synonym for [regex_constants::syntax_option_type](../standard-library/regex-constants-class.md#syntax_option_type).

## <a name="flags"></a> basic_regex::flags

Returns syntax option flags.

```cpp
flag_type flags() const;
```

### Remarks

The member function returns the value of the `flag_type` argument passed to the most recent call to one of the [basic_regex::assign](#assign) member functions or, if no such call has been made, the value passed to the constructor.

## <a name="getloc"></a> basic_regex::getloc

Returns the stored locale object.

```cpp
locale_type getloc() const;
```

### Remarks

The member function returns `traits.`[regex_traits::getloc](../standard-library/regex-traits-class.md#getloc)`()`.

## <a name="imbue"></a> basic_regex::imbue

Alters the stored locale object.

```cpp
locale_type imbue(locale_type loc);
```

### Parameters

*loc*\
The locale object to store.

### Remarks

The member function empties **`*this`** and returns `traits.`[regex_traits::imbue](../standard-library/regex-traits-class.md#imbue)`(loc)`.

## <a name="locale_type"></a> basic_regex::locale_type

The type of the stored locale object.

```cpp
typedef typename RXtraits::locale_type locale_type;
```

### Remarks

The type is a synonym for [regex_traits::locale_type](../standard-library/regex-traits-class.md#locale_type).

## <a name="mark_count"></a> basic_regex::mark_count

Returns number of subexpressions matched.

```cpp
unsigned mark_count() const;
```

### Remarks

The member function returns the number of capture groups in the regular expression.

## <a name="op_eq"></a> basic_regex::operator=

Assigns a value to the regular expression object.

```cpp
basic_regex& operator=(const basic_regex& right);

basic_regex& operator=(const Elem *str);

template <class STtraits, class STalloc>
basic_regex& operator=(const basic_string<Elem, STtraits, STalloc>& str);
```

### Parameters

*STtraits*\
Traits class for a string source.

*STalloc*\
Allocator class for a string source.

*right*\
Regex source to copy.

*str*\
String to copy.

### Remarks

The operators each replace the regular expression held by **`*this`** with the regular expression described by the operand sequence, then return **`*this`**.

## <a name="swap"></a> basic_regex::swap

Swaps two regular expression objects.

```cpp
void swap(basic_regex& right) throw();
```

### Parameters

*right*\
The regular expression object to swap with.

### Remarks

The member function swaps the regular expressions between **`*this`** and *right*. It does so in constant time and throws no exceptions.

## <a name="value_type"></a> basic_regex::value_type

The element type.

```cpp
typedef Elem value_type;
```

### Remarks

The type is a synonym for the template parameter *Elem*.

## See also

[\<regex>](../standard-library/regex.md)\
[regex_match](../standard-library/regex-functions.md#regex_match)\
[regex_search](../standard-library/regex-functions.md#regex_search)\
[regex_replace](../standard-library/regex-functions.md#regex_replace)\
[regex](../standard-library/regex-typedefs.md#regex)\
[wregex](../standard-library/regex-typedefs.md#wregex)\
[regex_traits Class](../standard-library/regex-traits-class.md)
