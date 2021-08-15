---
description: "Learn more about: istrstream Class"
title: "istrstream Class"
ms.date: "11/04/2016"
f1_keywords: ["strstream/std::istrstream::rdbuf", "strstream/std::istrstream::str"]
helpviewer_keywords: ["istrstream class"]
ms.assetid: c2d41c75-bd2c-4437-bd77-5939ce1b97af
---
# istrstream Class

Describes an object that controls extraction of elements and encoded objects from a stream buffer of class [strstreambuf](../standard-library/strstreambuf-class.md).

## Syntax

```cpp
class istrstream : public istream
```

## Remarks

The object stores an object of class `strstreambuf`.

> [!NOTE]
> This class is deprecated. Consider using [istringstream](../standard-library/sstream-typedefs.md#istringstream) or [wistringstream](../standard-library/sstream-typedefs.md#wistringstream) instead.

### Constructors

|Constructor|Description|
|-|-|
|[istrstream](#istrstream)|Constructs an object of type `istrstream`.|

### Member functions

|Member function|Description|
|-|-|
|[rdbuf](#rdbuf)|Returns a pointer to the stream's associated `strstreambuf` object.|
|[str](#str)|Calls [freeze](../standard-library/strstreambuf-class.md#freeze), and then returns a pointer to the beginning of the controlled sequence.|

## Requirements

**Header:** \<strstream>

**Namespace:** std

## <a name="istrstream"></a> istrstream::istrstream

Constructs an object of type `istrstream`.

```cpp
explicit istrstream(
    const char* ptr);

explicit istrstream(
    char* ptr);

istrstream(
    const char* ptr,
    streamsize count);

istrstream(
    char* ptr,
    int count);
```

### Parameters

*count*\
The length of the buffer (*ptr*).

*ptr*\
The contents with which the buffer is initialized.

### Remarks

All the constructors initialize the base class by calling [istream](../standard-library/istream-typedefs.md#istream)(**sb**), where `sb` is the stored object of class [strstreambuf](../standard-library/strstreambuf-class.md). The first two constructors also initialize `sb` by calling `strstreambuf( ( const char *) ptr, 0 )`. The remaining two constructors instead call `strstreambuf( ( const char *) ptr, count )`.

## <a name="rdbuf"></a> istrstream::rdbuf

Returns a pointer to the stream's associated strstreambuf object.

```cpp
strstreambuf *rdbuf() const
```

### Return Value

A pointer to the stream's associated strstreambuf object.

### Remarks

The member function returns the address of the stored stream buffer, of type pointer to [strstreambuf](../standard-library/strstreambuf-class.md).

### Example

See [strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) for a sample that uses `rdbuf`.

## <a name="str"></a> istrstream::str

Calls [freeze](../standard-library/strstreambuf-class.md#freeze), and then returns a pointer to the beginning of the controlled sequence.

```cpp
char *str();
```

### Return Value

A pointer to the beginning of the controlled sequence.

### Remarks

The member function returns [rdbuf](#rdbuf) -> [str](../standard-library/strstreambuf-class.md#str).

### Example

See [strstream::str](../standard-library/strstreambuf-class.md#str) for a sample that uses `str`.

## See also

[istream](../standard-library/istream-typedefs.md#istream)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
