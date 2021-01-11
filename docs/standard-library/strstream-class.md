---
description: "Learn more about: strstream Class"
title: "strstream Class"
ms.date: "11/04/2016"
f1_keywords: ["strstream/std::strstream::freeze", "strstream/std::strstream::pcount", "strstream/std::strstream::rdbuf", "strstream/std::strstream::str"]
helpviewer_keywords: ["std::strstream [C++], freeze", "std::strstream [C++], pcount", "std::strstream [C++], rdbuf", "std::strstream [C++], str"]
ms.assetid: 63f3be31-9e36-42b1-9715-a474a5997e2a
---
# strstream Class

Describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [strstreambuf](../standard-library/strstreambuf-class.md).

## Syntax

```cpp
class strstream : public iostream
```

## Remarks

The object stores an object of class `strstreambuf`.

> [!NOTE]
> This class is deprecated. Consider using [stringstream](../standard-library/sstream-typedefs.md#stringstream) or [wstringstream](../standard-library/sstream-typedefs.md#wstringstream) instead.

### Constructors

|Constructor|Description|
|-|-|
|[strstream](#strstream)|Constructs an object of type `strstream`.|

### Member functions

|Member function|Description|
|-|-|
|[freeze](#freeze)|Causes a stream buffer to be unavailable through stream buffer operations.|
|[pcount](#pcount)|Returns a count of the number of elements written to the controlled sequence.|
|[rdbuf](#rdbuf)|Returns a pointer to the stream's associated `strstreambuf` object.|
|[str](#str)|Calls [freeze](../standard-library/strstreambuf-class.md#freeze), and then returns a pointer to the beginning of the controlled sequence.|

## Requirements

**Header:** \<strstream>

**Namespace:** std

## <a name="freeze"></a> strstream::freeze

Causes a stream buffer to be unavailable through stream buffer operations.

```cpp
void freeze(bool _Freezeit = true);
```

### Parameters

*_Freezeit*\
A **`bool`** indicating whether you want the stream to be frozen.

### Remarks

The member function calls [rdbuf](#rdbuf) -> [freeze](../standard-library/strstreambuf-class.md#freeze)(_ *Freezeit*).

### Example

See [strstreambuf::freeze](../standard-library/strstreambuf-class.md#freeze) for an example that uses `freeze`.

## <a name="pcount"></a> strstream::pcount

Returns a count of the number of elements written to the controlled sequence.

```cpp
streamsize pcount() const;
```

### Return Value

The number of elements written to the controlled sequence.

### Remarks

The member function returns [rdbuf](#rdbuf) -> [pcount](../standard-library/strstreambuf-class.md#pcount).

### Example

See [strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) for a sample of using pcount.

## <a name="rdbuf"></a> strstream::rdbuf

Returns a pointer to the stream's associated strstreambuf object.

```cpp
strstreambuf *rdbuf() const
```

### Return Value

A pointer to the stream's associated strstreambuf object.

### Remarks

The member function returns the address of the stored stream buffer of type `pointer` to [strstreambuf](../standard-library/strstreambuf-class.md).

### Example

See [strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) for a sample that uses `rdbuf`.

## <a name="str"></a> strstream::str

Calls [freeze](../standard-library/strstreambuf-class.md#freeze), and then returns a pointer to the beginning of the controlled sequence.

```cpp
char *str();
```

### Return Value

A pointer to the beginning of the controlled sequence.

### Remarks

The member function returns [rdbuf](#rdbuf) -> [str](../standard-library/strstreambuf-class.md#str).

### Example

See [strstreambuf::str](../standard-library/strstreambuf-class.md#str) for a sample that uses `str`.

## <a name="strstream"></a> strstream::strstream

Constructs an object of type `strstream`.

```cpp
strstream();

strstream(char* ptr,
    streamsize count,
    ios_base::openmode _Mode = ios_base::in | ios_base::out);
```

### Parameters

*count*\
The size of the buffer.

*_Mode*\
The input and output mode of the buffer. See [ios_base::openmode](../standard-library/ios-base-class.md#openmode) for more information.

*ptr*\
The buffer.

### Remarks

Both constructors initialize the base class by calling [streambuf](../standard-library/streambuf-typedefs.md#streambuf)( **sb**), where `sb` is the stored object of class [strstreambuf](../standard-library/strstreambuf-class.md). The first constructor also initializes `sb` by calling [strstreambuf](../standard-library/strstreambuf-class.md#strstreambuf). The second constructor initializes the base class one of two ways:

- If `_Mode` & **ios_base::app**== 0, then *ptr* must designate the first element of an array of `count` elements, and the constructor calls `strstreambuf`( `ptr`, `count`, `ptr`).

- Otherwise, *ptr* must designate the first element of an array of count elements that contains a C string whose first element is designated by *ptr*, and the constructor calls `strstreambuf`( `ptr`, `count`, `ptr` + `strlen`( `ptr`) ).

## See also

[iostream](../standard-library/istream-typedefs.md#iostream)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
