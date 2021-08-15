---
description: "Learn more about: basic_ifstream Class"
title: "basic_ifstream Class"
ms.date: "11/04/2016"
f1_keywords: ["fstream/std::basic_ifstream", "fstream/std::basic_ifstream::close", "fstream/std::basic_ifstream::is_open", "fstream/std::basic_ifstream::open", "fstream/std::basic_ifstream::rdbuf", "fstream/std::basic_ifstream::swap"]
helpviewer_keywords: ["std::basic_ifstream [C++]", "std::basic_ifstream [C++], close", "std::basic_ifstream [C++], is_open", "std::basic_ifstream [C++], open", "std::basic_ifstream [C++], rdbuf", "std::basic_ifstream [C++], swap"]
ms.assetid: 366cd9a7-efc4-4b7f-ba10-c8271e47ffcf
---
# basic_ifstream Class

Describes an object that controls extraction of elements and encoded objects from a stream buffer of class [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`>, with elements of type `Elem`, whose character traits are determined by the class `Tr`.

## Syntax

```cpp
template <class Elem, class Tr = char_traits<Elem>>
class basic_ifstream : public basic_istream<Elem, Tr>
```

### Parameters

*Elem*\
The basic element of the file buffer.

*Tr*\
The traits of the basic element of the file buffer (usually `char_traits`< `Elem`>).

## Remarks

The object stores an object of class `basic_filebuf`< `Elem`, `Tr`>.

## Example

The following example shows how to read in text from a file.

```cpp
// basic_ifstream_class.cpp
// compile with: /EHsc

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    ifstream ifs("basic_ifstream_class.txt");
    if (!ifs.bad())
    {
        // Dump the contents of the file to cout.
        cout << ifs.rdbuf();
        ifs.close();
    }
}
```

## Input: basic_ifstream_class.txt

```cpp
This is the contents of basic_ifstream_class.txt.
```

## Output

```cpp
This is the contents of basic_ifstream_class.txt.
```

### Constructors

|Constructor|Description|
|-|-|
|[basic_ifstream](#basic_ifstream)|Initializes a new instance of a `basic_ifstream` object.|

### Member functions

|Member function|Description|
|-|-|
|[close](#close)|Closes a file.|
|[is_open](#is_open)|Determines if a file is open.|
|[open](#open)|Opens a file.|
|[rdbuf](#rdbuf)|Returns the address of the stored stream buffer.|
|[swap](#swap)|Exchanges the content of this `basic_ifstream` for the content of the provided `basic_ifstream`.|

### Operators

|Operator|Description|
|-|-|
|[operator=](#op_eq)|Assigns the content of this stream object. This is a move assignment involving an `rvalue` that does not leave a copy behind.|

## Requirements

**Header:** \<fstream>

**Namespace:** std

## <a name="basic_ifstream"></a> basic_ifstream::basic_ifstream

Constructs an object of type `basic_ifstream`.

```cpp
basic_ifstream();

explicit basic_ifstream(
    const char* _Filename,
    ios_base::openmode _Mode = ios_base::in,
    int _Prot = (int)ios_base::_Openprot);

explicit basic_ifstream(
    const wchar_t* _Filename,
    ios_base::openmode _Mode = ios_base::in,
    int _Prot = (int)ios_base::_Openprot);

basic_ifstream(basic_ifstream&& right);
```

### Parameters

*_Filename*\
The name of the file to open.

*_Mode*\
One of the enumerations in [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*_Prot*\
The default file opening protection, equivalent to the `shflag` parameter in [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).

### Remarks

The first constructor initializes the base class by calling [basic_istream](../standard-library/basic-istream-class.md)( `sb`), where `sb` is the stored object of class [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`>. It also initializes `sb` by calling `basic_filebuf`< `Elem`, `Tr`>.

The second and third constructors initializes the base class by calling `basic_istream`( `sb`). It also initializes `sb` by calling [basic_filebuf](../standard-library/basic-filebuf-class.md#basic_filebuf)< `Elem`, `Tr`>, then `sb`. [open](../standard-library/basic-filebuf-class.md#open)( `_Filename`, `_Mode` &#124; `ios_base::in`). If the latter function returns a null pointer, the constructor calls **setstate**( `failbit`).

The fourth constructor initializes the object with the contents of `right`, treated as an rvalue reference.

### Example

The following example shows how to read in text from a file. To create the file, see the example for [basic_ofstream::basic_ofstream](../standard-library/basic-ofstream-class.md#basic_ofstream).

```cpp
// basic_ifstream_ctor.cpp
// compile with: /EHsc

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    ifstream ifs("basic_ifstream_ctor.txt");
    if (!ifs.bad())
    {
        // Dump the contents of the file to cout.
        cout << ifs.rdbuf();
        ifs.close();
    }
}
```

## <a name="close"></a> basic_ifstream::close

Closes a file.

```cpp
void close();
```

### Remarks

The member function calls [rdbuf](#rdbuf) **->** [close](../standard-library/basic-filebuf-class.md#close).

### Example

See [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) for an example that uses `close`.

## <a name="is_open"></a> basic_ifstream::is_open

Determines if a file is open.

```cpp
bool is_open() const;
```

### Return Value

**`true`** if the file is open, **`false`** otherwise.

### Remarks

The member function returns [rdbuf](#rdbuf) **->** [is_open](../standard-library/basic-filebuf-class.md#is_open).

### Example

See [basic_filebuf::is_open](../standard-library/basic-filebuf-class.md#is_open) for an example that uses `is_open`.

## <a name="open"></a> basic_ifstream::open

Opens a file.

```cpp
void open(
    const char* _Filename,
    ios_base::openmode _Mode = ios_base::in,
    int _Prot = (int)ios_base::_Openprot);

void open(
    const char* _Filename,
    ios_base::openmode _Mode);

void open(
    const wchar_t* _Filename,
    ios_base::openmode _Mode = ios_base::in,
    int _Prot = (int)ios_base::_Openprot);

void open(
    const wchar_t* _Filename,
    ios_base::openmode _Mode);
```

### Parameters

*_Filename*\
The name of the file to open.

*_Mode*\
One of the enumerations in [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*_Prot*\
The default file opening protection, equivalent to the `shflag` parameter in [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).

### Remarks

The member function calls [rdbuf](#rdbuf) **->** [open](../standard-library/basic-filebuf-class.md#open)(_ *Filename*, `_Mode` &#124; **ios_base::in**). If open fails, the function calls [setstate](../standard-library/basic-ios-class.md#setstate)(`failbit`), which may throw an ios_base::failure exception.

### Example

See [basic_filebuf::open](../standard-library/basic-filebuf-class.md#open) for an example that uses `open`.

## <a name="op_eq"></a> basic_ifstream::operator=

Assigns the content of this stream object. This is a move assignment involving an rvalue that does not leave a copy behind.

```cpp
basic_ifstream& operator=(basic_ifstream&& right);
```

### Parameters

*right*\
An rvalue reference to a `basic_ifstream` object.

### Return Value

Returns **`*this`**.

### Remarks

The member operator replaces the contents of the object by using the contents of *right*, treated as an rvalue reference. For more information, see [Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md).

## <a name="rdbuf"></a> basic_ifstream::rdbuf

Returns the address of the stored stream buffer.

```cpp
basic_filebuf<Elem, Tr> *rdbuf() const
```

### Return Value

A pointer to a [basic_filebuf](../standard-library/basic-filebuf-class.md) object representing the stored stream buffer.

### Example

See [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) for an example that uses `rdbuf`.

## <a name="swap"></a> basic_ifstream::swap

Exchanges the contents of two `basic_ifstream` objects.

```cpp
void swap(basic_ifstream& right);
```

### Parameters

*right*\
A reference to another stream buffer.

### Remarks

The member function exchanges the contents of this object for the contents of *right*.

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
