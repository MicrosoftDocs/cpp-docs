---
description: "Learn more about: &lt;string&gt;"
title: "&lt;string&gt;"
ms.date: "11/04/2016"
f1_keywords: ["string/std::<string>", "<string>"]
helpviewer_keywords: ["string header"]
ms.assetid: a2fb9d00-d7ae-4170-bfea-2dc337aa37cf
---
# &lt;string&gt;

Defines the container class template `basic_string` and various supporting templates.

For more information about `basic_string`, see [basic_string Class](../standard-library/basic-string-class.md)

## Syntax

```cpp
#include <string>
```

## Remarks

The C++ language and the C++ Standard Library support two types of strings:

- Null-terminated character arrays often referred to as C strings.

- class template objects, of type `basic_string`, that handle all **`char`**-like template arguments.

### Typedefs

|Type name|Description|
|-|-|
|[string](../standard-library/string-typedefs.md#string)|A type that describes a specialization of the class template `basic_string` with elements of type **`char`** as a `string`.|
|[wstring](../standard-library/string-typedefs.md#wstring)|A type that describes a specialization of the class template `basic_string` with elements of type **`wchar_t`** as a `wstring`.|
|[u16string](../standard-library/string-typedefs.md#u16string)|A type that describes a specialization of the class template `basic_string` based on elements of type **`char16_t`**.|
|[u32string](../standard-library/string-typedefs.md#u32string)|A type that describes a specialization of the class template `basic_string` based on elements of type **`char32_t`**.|

### Operators

|Operator|Description|
|-|-|
|[operator+](../standard-library/string-operators.md#op_add)|Concatenates two string objects.|
|[operator!=](../standard-library/string-operators.md#op_neq)|Tests if the string object on the left side of the operator is not equal to the string object on the right side.|
|[operator==](../standard-library/string-operators.md#op_eq_eq)|Tests if the string object on the left side of the operator is equal to the string object on the right side.|
|[operator<](../standard-library/string-operators.md#op_lt)|Tests if the string object on the left side of the operator is less than to the string object on the right side.|
|[operator<=](../standard-library/string-operators.md#op_lt_eq)|Tests if the string object on the left side of the operator is less than or equal to the string object on the right side.|
|[operator<\<](../standard-library/string-operators.md#op_lt_lt)|A template function that inserts a string into the output stream.|
|[operator>](../standard-library/string-operators.md#op_gt)|Tests if the string object on the left side of the operator is greater than to the string object on the right side.|
|[operator>=](../standard-library/string-operators.md#op_gt_eq)|Tests if the string object on the left side of the operator is greater than or equal to the string object on the right side.|
|[operator>>](../standard-library/string-operators.md#op_gt_gt)|A template function that extracts a string from the input stream.|

### Specialized Template Functions

|Name|Description|
|-|-|
|`hash`|Produces a hash of a string.|
|[swap](../standard-library/string-functions.md#swap)|Exchanges the arrays of characters of two strings.|
|[stod](../standard-library/string-functions.md#stod)|Converts a character sequence to a **`double`**.|
|[stof](../standard-library/string-functions.md#stof)|Converts a character sequence to a **`float`**.|
|[stoi](../standard-library/string-functions.md#stoi)|Converts a character sequence to an integer.|
|[stold](../standard-library/string-functions.md#stold)|Converts a character sequence to a **`long double`**.|
|[stoll](../standard-library/string-functions.md#stoll)|Converts a character sequence to a **`long long`**.|
|[stoul](../standard-library/string-functions.md#stoul)|Converts a character sequence to an **`unsigned long`**.|
|[stoull](../standard-library/string-functions.md#stoull)|Converts a character sequence to an **`unsigned long long`**.|
|[to_string](../standard-library/string-functions.md#to_string)|Converts a value to a `string`.|
|[to_wstring](../standard-library/string-functions.md#to_wstring)|Converts a value to a wide `string`.|

### Functions

|Function|Description|
|-|-|
|[getline Template](../standard-library/string-functions.md#getline)|Extract strings from the input stream line by line.|

### Classes

|Class|Description|
|-|-|
|[basic_string Class](../standard-library/basic-string-class.md)|A class template that describes objects that can store a sequence of arbitrary character-like objects.|
|[char_traits Struct](../standard-library/char-traits-struct.md)|A class template that describes attributes associated with a character of type CharType|

### Specializations

|Name|Description|
|-|-|
|[char_traits\<char> Struct](../standard-library/char-traits-char-struct.md)|A struct that is a specialization of the template struct `char_traits`\<CharType> to an element of type **`char`**.|
|[char_traits<wchar_t> Struct](../standard-library/char-traits-wchar-t-struct.md)|A struct that is a specialization of the template struct `char_traits`\<CharType> to an element of type **`wchar_t`**.|
|[char_traits<char16_t> Struct](../standard-library/char-traits-char16-t-struct.md)|A struct that is a specialization of the template struct `char_traits`\<CharType> to an element of type **`char16_t`**.|
|[char_traits<char32_t> Struct](../standard-library/char-traits-char32-t-struct.md)|A struct that is a specialization of the template struct `char_traits`\<CharType> to an element of type **`char32_t`**.|

## Requirements

- **Header:** \<string>

- **Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
