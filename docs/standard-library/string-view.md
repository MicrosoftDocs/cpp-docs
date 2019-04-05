---
title: "&lt;string_view&gt;"
ms.date: "03/18/2019"
f1_keywords: ["string_view/std::<string_view>", "<string_view>"]
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

The `string_view` family of template specializations provide an efficient way to pass a read-only, exception-safe, non-owning handle to any sequence of **char**-like objects with the first element of the sequence at position zero. A function parameter of type `string_view` can accept arguments such as `string`, `wstring`, `char*`, `wchar_t*` or any other string-like class for which an implicit conversion to `string_view` is defined. 

### Typedefs

|Type name|Description|
|-|-|
|[string_view](../standard-library/string-view-typedefs.md#string_view)|A type that describes a specialization of the template class `basic_string_view` with elements of type **char** as a `string_view`.|
|[wstring_view](../standard-library/string-view-typedefs.md#wstring_view)|A type that describes a specialization of the template class `basic_string_view` with elements of type **wchar_t** as a `wstring_view`.|
|[u16string_view](../standard-library/string-view-typedefs.md#u16string_view)|A type that describes a specialization of the template class `basic_string_view` based on elements of type `char16_t`.|
|[u32string_view](../standard-library/string-view-typedefs.md#u32string_view)|A type that describes a specialization of the template class `basic_string_view` based on elements of type `char32_t`.|

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

### Classes

|Class|Description|
|-|-|
|[basic_string_view Class](../standard-library/basic-string-view-class.md)|A template class that describes objects that can store a sequence of arbitrary character-like objects.|

## Requirements

- **Header:** \<string_view>

- **Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
