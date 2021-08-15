---
description: "Learn more about: basic_istringstream Class"
title: "basic_istringstream Class"
ms.date: "11/04/2016"
f1_keywords: ["sstream/std::basic_istringstream", "sstream/std::basic_istringstream::allocator_type", "sstream/std::basic_istringstream::rdbuf", "sstream/std::basic_istringstream::str", "sstream/std::basic_istringstream::swap"]
helpviewer_keywords: ["std::basic_istringstream [C++]", "std::basic_istringstream [C++], allocator_type", "std::basic_istringstream [C++], rdbuf", "std::basic_istringstream [C++], str", "std::basic_istringstream [C++], swap"]
ms.assetid: 1d5bb4b5-793d-4833-98e5-14676c451915
---
# basic_istringstream Class

Describes an object that controls extraction of elements and encoded objects from a stream buffer of class [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.

## Syntax

```cpp
template <class Elem, class Tr = char_traits<Elem>, class Alloc = allocator<Elem>>
class basic_istringstream : public basic_istream<Elem, Tr>
```

### Parameters

*Alloc*\
The allocator class.

*Elem*\
The type of the basic element of the string.

*Tr*\
The character traits specialized on the basic element of the string.

## Remarks

The class template describes an object that controls extraction of elements and encoded objects from a stream buffer of class [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>, with elements of type *Elem*, whose character traits are determined by the class *Tr*, and whose elements are allocated by an allocator of class *Alloc*. The object stores an object of class basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

### Constructors

|Constructor|Description|
|-|-|
|[basic_istringstream](#basic_istringstream)|Constructs an object of type `basic_istringstream`.|

### Typedefs

|Type name|Description|
|-|-|
|[allocator_type](#allocator_type)|The type is a synonym for the template parameter `Alloc`.|

### Member functions

|Member function|Description|
|-|-|
|[rdbuf](#rdbuf)|Returns the address of the stored stream buffer of type `pointer` to [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< `Elem`, `Tr`, `Alloc`>.|
|[str](#str)|Sets or gets the text in a string buffer without changing the write position.|
|[swap](#swap)|Exchanges the values in this `basic_istringstream` object for those of the provided object.|

### Operators

|Operator|Description|
|-|-|
|[operator=](#op_eq)|Assigns the values to this `basic_istringstream` object from the object parameter.|

## Requirements

**Header:** \<sstream>

**Namespace:** std

## <a name="allocator_type"></a> basic_istringstream::allocator_type

The type is a synonym for the template parameter `Alloc`.

```cpp
typedef Alloc allocator_type;
```

## <a name="basic_istringstream"></a> basic_istringstream::basic_istringstream

Constructs an object of type `basic_istringstream`.

```cpp
explicit basic_istringstream(
    ios_base::openmode _Mode = ios_base::in);

explicit basic_istringstream(
    const basic_string<Elem, Tr, Alloc>& str,
    ios_base::openmode _Mode = ios_base::in);

basic_istringstream(
    basic_istringstream&& right);
```

### Parameters

*_Mode*\
One of the enumerations in [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*str*\
An object of type `basic_string`.

*right*\
An rvalue reference of a `basic_istringstream` object.

### Remarks

The first constructor initializes the base class by calling [basic_istream](../standard-library/basic-istream-class.md)(`sb`), where `sb` is the stored object of class [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< `Elem`, `Tr`, `Alloc`>. It also initializes `sb` by calling `basic_stringbuf`< `Elem`, `Tr`, `Alloc`>( `_Mode` &#124; `ios_base::in`).

The second constructor initializes the base class by calling `basic_istream(sb)`. It also initializes `sb` by calling `basic_stringbuf`< `Elem`, `Tr`, `Alloc`>( `str`, `_Mode` &#124; `ios_base::in`).

The third constructor initializes the object with the contents of *right*, treated as an rvalue reference.

## <a name="op_eq"></a> basic_istringstream::operator=

Assigns the values to this `basic_istringstream` object from the object parameter.

```cpp
basic_istringstream& operator=(basic_istringstream&& right);
```

### Parameters

*right*\
An rvalue reference to a `basic_istringstream` object.

### Remarks

The member operator replaces the contents of the object with the contents of *right*, treated as an rvalue reference move assignment.

## <a name="rdbuf"></a> basic_istringstream::rdbuf

Returns the address of the stored stream buffer of type `pointer` to [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.

```cpp
basic_stringbuf<Elem, Tr, Alloc> *rdbuf() const;
```

### Return Value

The address of the stored stream buffer of type `pointer` to basic_stringbuf< **Elem**, **Tr**, `Alloc`>.

### Example

See [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) for an example that uses `rdbuf`.

## <a name="str"></a> basic_istringstream::str

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

## <a name="swap"></a> basic_istringstream::swap

Exchanges the values of two `basic_istringstream` objects.

```cpp
void swap(basic_istringstream& right);
```

### Parameters

*right*\
An lvalue reference to a `basic_istringstream` object.

### Remarks

The member function exchanges the values of this object and the values of *right*.

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
