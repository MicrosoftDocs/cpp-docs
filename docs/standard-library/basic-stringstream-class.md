---
description: "Learn more about: basic_stringstream Class"
title: "basic_stringstream Class"
ms.date: "11/04/2016"
f1_keywords: ["sstream/std::basic_stringstream", "sstream/std::basic_stringstream::allocator_type", "sstream/std::basic_stringstream::rdbuf", "sstream/std::basic_stringstream::str"]
helpviewer_keywords: ["std::basic_stringstream [C++]", "std::basic_stringstream [C++], allocator_type", "std::basic_stringstream [C++], rdbuf", "std::basic_stringstream [C++], str"]
ms.assetid: 49629814-ca37-45c5-931b-4ff894e6ebd2
---
# basic_stringstream Class

Describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.

## Syntax

```cpp
template <class Elem, class Tr = char_traits<Elem>, class Alloc = allocator<Elem>>
class basic_stringstream : public basic_iostream<Elem, Tr>
```

### Parameters

*Alloc*\
The allocator class.

*Elem*\
The type of the basic element of the string.

*Tr*\
The character traits specialized on the basic element of the string.

## Remarks

The class template describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>, with elements of type `Elem`, whose character traits are determined by the class `Tr`, and whose elements are allocated by an allocator of class `Alloc`. The object stores an object of class basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

### Constructors

|Constructor|Description|
|-|-|
|[basic_stringstream](#basic_stringstream)|Constructs an object of type `basic_stringstream`.|

### Typedefs

|Type name|Description|
|-|-|
|[allocator_type](#allocator_type)|The type is a synonym for the template parameter `Alloc`.|

### Member functions

|Member function|Description|
|-|-|
|[rdbuf](#rdbuf)|Returns the address of the stored stream buffer of type `pointer` to [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< `Elem`, `Tr`, `Alloc`>.|
|[str](#str)|Sets or gets the text in a string buffer without changing the write position.|

## Requirements

**Header:** \<sstream>

**Namespace:** std

## <a name="allocator_type"></a> basic_stringstream::allocator_type

The type is a synonym for the template parameter `Alloc`.

```cpp
typedef Alloc allocator_type;
```

## <a name="basic_stringstream"></a> basic_stringstream::basic_stringstream

Constructs an object of type `basic_stringstream`.

```cpp
explicit basic_stringstream(ios_base::openmode _Mode = ios_base::in | ios_base::out);

explicit basic_stringstream(const basic_string<Elem, Tr, Alloc>& str, ios_base::openmode _Mode = ios_base::in | ios_base::out);
```

### Parameters

*_Mode*\
One of the enumerations in [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*str*\
An object of type `basic_string`.

### Remarks

The first constructor initializes the base class by calling [basic_iostream](../standard-library/basic-iostream-class.md)( **sb**), where `sb` is the stored object of class [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>. It also initializes `sb` by calling basic_stringbuf< **Elem**, **Tr**, `Alloc`>( `_Mode`).

The second constructor initializes the base class by calling basic_iostream( **sb**). It also initializes `sb` by calling basic_stringbuf< **Elem**, **Tr**, `Alloc`>(_ *Str*, `_Mode`).

## <a name="rdbuf"></a> basic_stringstream::rdbuf

Returns the address of the stored stream buffer of type **pointer** to [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.

```cpp
basic_stringbuf<Elem, Tr, Alloc> *rdbuf() const;
```

### Return Value

The address of the stored stream buffer of type `pointer` to basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

### Example

See [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) for an example that uses `rdbuf`.

## <a name="str"></a> basic_stringstream::str

Sets or gets the text in a string buffer without changing the write position.

```cpp
basic_string<Elem, Tr, Alloc> str() const;

void str(
    const basic_string<Elem, Tr, Alloc>& _Newstr);
```

### Parameters

*_Newstr*\
The new string.

### Return Value

Returns an object of class [basic_string](../standard-library/basic-string-class.md)< **Elem**, **Tr**, `Alloc`>, whose controlled sequence is a copy of the sequence controlled by **\*this**.

### Remarks

The first member function returns [rdbuf](#rdbuf) -> [str](../standard-library/basic-stringbuf-class.md#str). The second member function calls `rdbuf` -> **str**( `_Newstr`).

### Example

See [basic_stringbuf::str](../standard-library/basic-stringbuf-class.md#str) for an example that uses `str`.

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
