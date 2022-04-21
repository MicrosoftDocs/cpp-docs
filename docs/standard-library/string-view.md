---
title: "<string_view>"
description: "Overview of `basic_string_view`, which refers to a constant contiguous sequence of char-like objects."
ms.date: "9/4/2020"
helpviewer_keywords: ["string_view header"]
---
# `<string_view>`

Defines the class template `basic_string_view` and related types and operators. (Requires compiler option [`std:c++17`](../build/reference/std-specify-language-standard-version.md) or later.)

## Syntax

```cpp
#include <string_view>
```

## Remarks

The `string_view` family of template specializations provides an efficient way to pass a read-only, exception-safe, non-owning handle to the character data of any string-like objects with the first element of the sequence at position zero. A function parameter of type `string_view` (which is a typedef for `basic_string_view<char>`) can accept arguments such as `std::string`, `char*`, or any other string-like class of narrow characters for which an implicit conversion to `string_view` is defined. Similarly, a parameter of `wstring_view`, `u16string_view` or `u32string_view` can accept any string type for which an implicit conversion is defined. For more information, see [`basic_string_view` Class](../standard-library/basic-string-view-class.md).

### Typedefs

|Type name|Description|
|-|-|
|[`string_view`](../standard-library/string-view-typedefs.md#string_view)|A specialization of the class template `basic_string_view` with elements of type **`char`**.|
|[`wstring_view`](../standard-library/string-view-typedefs.md#wstring_view)|A specialization of the class template `basic_string_view` with elements of type **`wchar_t`**.|
|[`u16string_view`](../standard-library/string-view-typedefs.md#u16string_view)|A specialization of the class template `basic_string_view` with elements of type **`char16_t`**.|
|[`u32string_view`](../standard-library/string-view-typedefs.md#u32string_view)|A specialization of the class template `basic_string_view` with elements of type **`char32_t`**.|

### Operators

The `<string_view>` operators can compare `string_view` objects to objects of any convertible string types.

|Operator|Description|
|-|-|
|[`operator!=`](../standard-library/string-view-operators.md#op_neq)|Tests if the object on the left side of the operator isn't equal to the object on the right side.|
|[`operator==`](../standard-library/string-view-operators.md#op_eq_eq)|Tests if the object on the left side of the operator is equal to the object on the right side.|
|[`operator<`](../standard-library/string-view-operators.md#op_lt)|Tests if the object on the left side of the operator is less than to the object on the right side.|
|[`operator<=`](../standard-library/string-view-operators.md#op_lt_eq)|Tests if the object on the left side of the operator is less than or equal to the object on the right side.|
|[`operator<\<`](../standard-library/string-view-operators.md#op_lt_lt)|A template function that inserts a `string_view` into an output stream.|
|[`operator>`](../standard-library/string-view-operators.md#op_gt)|Tests if the object on the left side of the operator is greater than to the object on the right side.|
|[`operator>=`](../standard-library/string-view-operators.md#op_gt_eq)|Tests if the object on the left side of the operator is greater than or equal to the object on the right side.|

### Literals

|Operator|Description|
|-|-|
|[`sv`](../standard-library/string-view-operators.md#op_sv)|Constructs a `string_view`, `wstring_view`, `u16string_view`, or `u32string_view` depending on the type of the string literal to which it's appended.|

### Classes

|Class|Description|
|-|-|
|[`basic_string_view` Class](../standard-library/basic-string-view-class.md)|A class template that provides a read-only view into a sequence of arbitrary character-like objects.|
|[`hash`](string-view-hash.md)|Function object that produces a hash value for a `string_view`.|

## Requirements

- **Header:** `<string_view>`

- **Namespace:** `std`

- **Compiler Option:** [`std:c++17`](../build/reference/std-specify-language-standard-version.md) or later.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
