---
title: "<string_view> operators"
description: "API reference for the `string_view` operators, which are used to compare two `string_view` objects, or a `string_view` and some other string object" 
ms.date: "01/15/2021"
f1_keywords: ["xstring/basic_string_view::operator!=", "xstring/basic_string_view::operator>", "xstring/basic_string_view::operator>=", "xstring/basic_string_view::operator<", "xstring/basic_string_view::operator<<", "xstring/basic_string_view::operator<=", "xstring/basic_string_view::operator+", "xstring/basic_string_view::operator==", 'xstring/std::literals::string_view_literals::operator "sv', 'std::literals::string_view_literals::operator sv', 'std::literals::string_view_literals', 'string_view_literals']
helpviewer_keywords: ["std::basic_string_view::operator!=", "std::basic_string_view::operator>", "std::basic_string_view::operator>=", "std::basic_string_view::operator<", "std::basic_string_view::operator<<", "std::basic_string_view::operator<=, std::basic_string_view::operator=="]
---
# `<string_view>` operators

Use these operators to compare two `string_view` objects, or a `string_view` and some other string object (for example [`std::string`](basic-string-class.md), or `char*`) for which an implicit conversion is provided.

[`operator!=`](#op_neq)\
[`operator>`](#op_gt)\
[`operator>=`](#op_gt_eq)\
[`operator<`](#op_lt)\
[`operator<<`](#op_lt_lt)\
[`operator<=`](#op_lt_eq)\
[`operator==`](#op_eq_eq)\
[`operator""sv`](#op_sv)

## <a name="op_neq"></a> `operator!=`

Tests if the object on the left side of the operator is not equal to the object on the right side.

```cpp
template <class CharType, class Traits>
bool operator!=(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator!=(
    const basic_string_view<CharType, Traits>& left,
    convertible_string_type right);

template <class CharType, class Traits>
bool operator!=(
    convertible_string_type left,
    const basic_string_view<CharType, Traits>& right);
```

### Parameters

*left*\
Any convertible string type or an object of type `basic_string_view` to be compared.

*right*\
Any convertible string type or an object of type `basic_string_view` to be compared.

### Return Value

**`true`** if the object on the left side of the operator isn't lexicographically equal to the object on the right side; otherwise **`false`**.

### Remarks

An implicit conversion must exist from *convertible_string_type* to the `string_view` on the other side.

The comparison is based on a pairwise lexicographical comparison of the character sequences. If they have the same number of elements and the elements are all equal, the two objects are equal. Otherwise, they're unequal.

## <a name="op_eq_eq"></a> `operator==`

Tests if the object on the left side of the operator is equal to the object on the right side.

```cpp
template <class CharType, class Traits>
bool operator==(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator==(
    const basic_string_view<CharType, Traits>& left,
    convertible_string_type right);

template <class CharType, class Traits>
bool operator==(
    convertible_string_type left,
    const basic_string_view<CharType, Traits>& right);
```

### Parameters

*left*\
Any convertible string type or an object of type `basic_string_view` to be compared.

*right*\
Any convertible string type or an object of type `basic_string_view` to be compared.

### Return Value

**`true`** if the object on the left side of the operator is lexicographically equal to the object on the right side; otherwise **`false`**.

### Remarks

An implicit conversion must exist from *convertible_string_type* to the `string_view` on the other side.

The comparison is based on a pairwise lexicographical comparison of the character sequences. If they have the same number of elements and the elements are all equal, the two objects are equal.

## <a name="op_lt"></a> `operator<`

Tests if the object on the left side of the operator is less than the object on the right side.

```cpp
template <class CharType, class Traits>
bool operator<(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator<(
    const basic_string_view<CharType, Traits>& left,
    convertible_string_type right);

template <class CharType, class Traits>
bool operator<(
    convertible_string_type left,
    const basic_string_view<CharType, Traits>& right);
```

### Parameters

*left*\
Any convertible string type or an object of type `basic_string_view` to be compared.

*right*\
Any convertible string type or an object of type `basic_string_view` to be compared.

### Return Value

**`true`** if the object on the left side of the operator is lexicographically less than the object on the right side; otherwise **`false`**.

### Remarks

An implicit conversion must exist from *convertible_string_type* to the string_view on the other side.

The comparison is based on a pairwise lexicographical comparison of the character sequences. When the first unequal pair of characters is encountered, the result of that comparison is returned. If no unequal characters are found, but one sequence is shorter, the shorter sequence is less than the longer one. In other words, "cat" is less than "cats".

### Example

```cpp
#include <string>
#include <string_view>

using namespace std;

int main()
{
    string_view sv1 { "ABA" };
    string_view sv2{ "ABAC" };
    string_view sv3{ "ABAD" };
    string_view sv4{ "ABACE" };

    bool result = sv2 > sv1; // true
    result = sv3 > sv2; // true
    result = sv3 != sv1; // true
    result = sv4 < sv3; // true because `C` < `D`
}
```

## <a name="op_lt_eq"></a> `operator<=`

Tests if the object on the left side of the operator is less than or equal to the object on the right side.

```cpp
template <class CharType, class Traits>
bool operator<=(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator<=(
    const basic_string_view<CharType, Traits>& left,
    convertible_string_type right);

template <class CharType, class Traits>
bool operator<=(
    convertible_string_type left,
    const basic_string_view<CharType, Traits>& right);
```

### Parameters

*left*\
Any convertible string type or an object of type `basic_string_view` to be compared.

*right*\
Any convertible string type or an object of type `basic_string_view` to be compared.

### Return Value

**`true`** if the object on the left side of the operator is lexicographically less than or equal to the object on the right side; otherwise **`false`**.

### Remarks

See [`operator<`](#op_lt).

## <a name="op_lt_lt"></a> `operator<<`

Writes a `string_view` into an output stream.

```cpp
template <class CharType, class Traits>
inline basic_ostream<CharType, Traits>& operator<<(
    basic_ostream<CharType, Traits>& Ostr, const basic_string_view<CharType, Traits> Str);
```

### Parameters

*`Ostr`*\
an output stream being written to.

*`Str`*\
The string_view to be entered into an output stream.

### Return Value

an output stream being written to.

### Remarks

Use this operator to insert the contents of a `string_view` into an output stream, for example using [`std::cout`](iostream.md#cout).

## <a name="op_gt"></a> `operator>`

Tests if the object on the left side of the operator is greater than the object on the right side.

```cpp
template <class CharType, class Traits>
bool operator>(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator>(
    const basic_string_view<CharType, Traits>& left,
    convertible_string_type right);

template <class CharType, class Traits>
bool operator>(
    convertible_string_type left,
    const basic_string_view<CharType, Traits>& right);
```

### Parameters

*left*\
Any convertible string type or an object of type `basic_string_view` to be compared.

*right*\
Any convertible string type or an object of type `basic_string_view` to be compared.

### Return Value

**`true`** if the object on the left side of the operator is lexicographically greater than the `string_view` object on the right side; otherwise **`false`**.

### Remarks

See [`operator<`](#op_lt).

## <a name="op_gt_eq"></a> `operator>=`

Tests if the object on the left side of the operator is greater than or equal to the object on the right side.

```cpp
template <class CharType, class Traits>
bool operator>=(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator>=(
    const basic_string_view<CharType, Traits>& left,
    convertible_string_type right);

template <class CharType, class Traits>
bool operator>=(
    convertible_string_type left,
    const basic_string_view<CharType, Traits>& right);
```

### Parameters

*`left`*\
Any convertible string type or an object of type `basic_string_view` to be compared.

*`right`*\
Any convertible string type or an object of type `basic_string_view` to be compared.

### Return Value

**`true`** if the object on the left side of the operator is lexicographically greater than or equal to the object on the right side; otherwise **`false`**.

### Remarks

See [`operator<`](#op_lt).

## <a name="op_sv"></a> `operator"" sv` (`string_view` literal)

Constructs a `string_view` from a string literal. Requires namespace `std::literals::string_view_literals`.

### Example

```cpp
using namespace std;
using namespace literals::string_view_literals;

    string_view sv{ "Hello"sv };
    wstring_view wsv{ L"Hello"sv };
    u16string_view sv16{ u"Hello"sv };
    u32string_view sv32{ U"Hello"sv };
```

## Requirements

[`/std:c++17`](../build/reference/std-specify-language-standard-version.md) or later.

## See also

[`<string_view>`](../standard-library/string-view.md)
