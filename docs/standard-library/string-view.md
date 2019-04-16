---
title: "&lt;string_view&gt;"
ms.date: "03/18/2019"
helpviewer_keywords: ["string_view header"]
ms.assetid: a2fb9d00-d7ae-4170-bfea-2dc337aa37cf
---
# &lt;string_view&gt;

Defines the class template `basic_string_view` and related types.

For more information about `basic_string_view`, see [basic_string_view Class](../standard-library/basic-string-view-class.md)

## Syntax

```cpp
#include <string_view>
```

## Remarks

The string_view family of template specializations provide an efficient way to pass a read-only, exception-safe, non-owning handle to any sequence of **char**-like objects with the first element of the sequence at position zero. A function parameter of type `string_view` (basic_string_view\<char>)can accept arguments such as `std::string`, char*, or any other string-like class of narrow characters for which an implicit conversion to `string_view` is defined. A parameter of `wstring_view` can accept wchar_t* or any wide-character string object for which an implicit conversion is defined.

### Typedefs

|Type name|Description|
|-|-|
|[string_view](../standard-library/string-view-typedefs.md#string_view)|A specialization of the template class `basic_string_view` with elements of type **char** as a `string_view`.|
|[wstring_view](../standard-library/string-view-typedefs.md#wstring_view)|A specialization of the template class `basic_string_view` with elements of type **wchar_t** as a `wstring_view`.|
|[u16string_view](../standard-library/string-view-typedefs.md#u16string_view)|A specialization of the template class `basic_string_view` based on elements of type `char16_t`.|
|[u32string_view](../standard-library/string-view-typedefs.md#u32string_view)|A specialization of the template class `basic_string_view` based on elements of type `char32_t`.|

### Operators

|Operator|Description|
|-|-|
|[operator!=](../standard-library/string-view-operators.md#op_neq)|Tests if the `string_view` object on the left side of the operator is not equal to the `string_view` object on the right side.|
|[operator==](../standard-library/string-view-operators.md#op_eq_eq)|Tests if the `string_view` object on the left side of the operator is equal to the `string_view` object on the right side.|
|[operator<](../standard-library/string-view-operators.md#op_lt)|Tests if the `string_view` object on the left side of the operator is less than to the `string_view` object on the right side.|
|[operator<=](../standard-library/string-view-operators.md#op_lt_eq)|Tests if the `string_view` object on the left side of the operator is less than or equal to the `string_view` object on the right side.|
|[operator<\<](../standard-library/string-view-operators.md#op_lt_lt)|A template function that inserts a `string_view` into the output stream.|
|[operator>](../standard-library/string-view-operators.md#op_gt)|Tests if the `string_view` object on the left side of the operator is greater than to the `string_view` object on the right side.|
|[operator>=](../standard-library/string-view-operators.md#op_gt_eq)|Tests if the `string_view` object on the left side of the operator is greater than or equal to the `string_view` object on the right side.|

### Literals

|Operator|Description|
|-|-|
|[sv](../standard-library/string-view-operators.md#op_sv)|Constructs a string_view, wstring_view, u16string_view or u32string_view depending on the type of the character array to which it is appended.|

### Classes

|Class|Description|
|-|-|
|[basic_string_view Class](../standard-library/basic-string-view-class.md)|A template class that describes objects that can store a sequence of arbitrary character-like objects.|

## Requirements

- **Header:** \<string_view>

- **Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
