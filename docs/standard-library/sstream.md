---
description: "Learn more about: &lt;sstream&gt;"
title: "&lt;sstream&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<sstream>"]
helpviewer_keywords: ["sstream header"]
ms.assetid: 56f55bc5-549d-4e7f-aaad-99e0ffa49c9e
---
# &lt;sstream&gt;

Defines several class templates that support iostreams operations on sequences stored in an allocated array object. Such sequences are easily converted to and from objects of class template [basic_string](../standard-library/basic-string-class.md).

## Syntax

```cpp
namespace std {
template <class CharType, class Traits = char_traits<CharType>, class Allocator = allocator<CharType>>
class basic_stringbuf;
typedef basic_stringbuf<char>
stringbuf;
typedef basic_stringbuf<wchar_t> wstringbuf;

template <class CharType, class Traits = char_traits<CharType>, class Allocator = allocator<CharType>>
class basic_istringstream;
typedef basic_istringstream<char>
istringstream;
typedef basic_istringstream<wchar_t> wistringstream;

template <class CharType, class Traits = char_traits<CharType>, class Allocator = allocator<CharType>>
class basic_ostringstream;
typedef basic_ostringstream<char>
ostringstream;
typedef basic_ostringstream<wchar_t> wostringstream;

template <class CharType, class Traits = char_traits<CharType>, class Allocator = allocator<CharType>>
class basic_stringstream;
typedef basic_stringstream<char>
stringstream;
typedef basic_stringstream<wchar_t> wstringstream;
// TEMPLATE FUNCTIONS
template <class CharType, class Traits, class Allocator>
void swap(
    basic_stringbuf<CharType, Traits, Allocator>& left,
    basic_stringbuf<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
void swap(
    basic_istringstream<CharType, Traits, Allocator>& left,
    basic_istringstream<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
void swap(
    basic_ostringstream<CharType, Traits, Allocator>& left,
    basic_ostringstream<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
void swap (
    basic_stringstream<CharType, Traits, Allocator>& left,
    basic_stringstream<CharType, Traits, Allocator>& right);

}  // namespace std
```

### Parameters

*left*\
Reference to an `sstream` object.

*right*\
Reference to an `sstream` object.

## Remarks

Objects of type `char *` can use the functionality in [\<strstream>](../standard-library/strstream.md) for streaming. However, \<strstream> is deprecated and the use of \<sstream> is encouraged.

### Typedefs

|Type name|Description|
|-|-|
|[istringstream](../standard-library/sstream-typedefs.md#istringstream)|Creates a type `basic_istringstream` specialized on a **`char`** template parameter.|
|[ostringstream](../standard-library/sstream-typedefs.md#ostringstream)|Creates a type `basic_ostringstream` specialized on a **`char`** template parameter.|
|[stringbuf](../standard-library/sstream-typedefs.md#stringbuf)|Creates a type `basic_stringbuf` specialized on a **`char`** template parameter.|
|[stringstream](../standard-library/sstream-typedefs.md#stringstream)|Creates a type `basic_stringstream` specialized on a **`char`** template parameter.|
|[wistringstream](../standard-library/sstream-typedefs.md#wistringstream)|Creates a type `basic_istringstream` specialized on a **`wchar_t`** template parameter.|
|[wostringstream](../standard-library/sstream-typedefs.md#wostringstream)|Creates a type `basic_ostringstream` specialized on a **`wchar_t`** template parameter.|
|[wstringbuf](../standard-library/sstream-typedefs.md#wstringbuf)|Creates a type `basic_stringbuf` specialized on a **`wchar_t`** template parameter.|
|[wstringstream](../standard-library/sstream-typedefs.md#wstringstream)|Creates a type `basic_stringstream` specialized on a **`wchar_t`** template parameter.|

### Manipulators

|Name|Description|
|-|-|
|[swap](../standard-library/sstream-functions.md#sstream_swap)|Exchanges the values between two `sstream` objects.|

### Classes

|Class|Description|
|-|-|
|[basic_stringbuf](../standard-library/basic-stringbuf-class.md)|Describes a stream buffer that controls the transmission of elements of type `Elem`, whose character traits are determined by the class `Tr`, to and from a sequence of elements stored in an array object.|
|[basic_istringstream](../standard-library/basic-istringstream-class.md)|Describes an object that controls extraction of elements and encoded objects from a stream buffer of class [basic_stringbuf](../standard-library/basic-stringbuf-class.md)<**Elem**, **Tr**, `Alloc`>, with elements of type `Elem`, whose character traits are determined by the class `Tr`, and whose elements are allocated by an allocator of class `Alloc`.|
|[basic_ostringstream](../standard-library/basic-ostringstream-class.md)|Describes an object that controls insertion of elements and encoded objects into a stream buffer of class [basic_stringbuf](../standard-library/basic-stringbuf-class.md)<**Elem**, **Tr**, `Alloc`>, with elements of type `Elem`, whose character traits are determined by the class `Tr`, and whose elements are allocated by an allocator of class `Alloc`.|
|[basic_stringstream](../standard-library/basic-stringstream-class.md)|Describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [basic_stringbuf](../standard-library/basic-stringbuf-class.md)<**Elem**, **Tr**, `Alloc`>, with elements of type `Elem`, whose character traits are determined by the class `Tr`, and whose elements are allocated by an allocator of class `Alloc`.|

## Requirements

- **Header:** \<sstream>

- **Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
