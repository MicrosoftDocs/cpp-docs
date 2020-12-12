---
description: "Learn more about: basic_ofstream Class"
title: "basic_ofstream Class"
ms.date: "11/04/2016"
f1_keywords: ["fstream/std::basic_ofstream", "fstream/std::basic_ofstream::close", "fstream/std::basic_ofstream::is_open", "fstream/std::basic_ofstream::open", "fstream/std::basic_ofstream::rdbuf", "fstream/std::basic_ofstream::swap"]
helpviewer_keywords: ["std::basic_ofstream [C++]", "std::basic_ofstream [C++], close", "std::basic_ofstream [C++], is_open", "std::basic_ofstream [C++], open", "std::basic_ofstream [C++], rdbuf", "std::basic_ofstream [C++], swap"]
ms.assetid: 3bcc9c51-6dfc-4844-8fcc-22ef57c9dff1
---
# basic_ofstream Class

Describes an object that controls insertion of elements and encoded objects into a stream buffer of class [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`>, with elements of type `Elem`, whose character traits are determined by the class `Tr`.

## Syntax

```cpp
template <class Elem, class Tr = char_traits<Elem>>
class basic_ofstream : public basic_ostream<Elem, Tr>
```

### Parameters

*Elem*\
The basic element of the file buffer.

*Tr*\
The traits of the basic element of the file buffer (usually `char_traits`< `Elem`>).

## Remarks

When the **`wchar_t`** specialization of `basic_ofstream` writes to the file, if the file is opened in text mode it will write a MBCS sequence. The internal representation will use a buffer of **`wchar_t`** characters.

The object stores an object of class `basic_filebuf`< `Elem`, `Tr`>.

## Example

The following example shows how to create a `basic_ofstream` object and write text to it.

```cpp
// basic_ofstream_class.cpp
// compile with: /EHsc
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
    ofstream ofs("ofstream.txt");
    if (!ofs.bad())
    {
        ofs << "Writing to a basic_ofstream object..." << endl;
        ofs.close();
    }
}
```

### Constructors

|Constructor|Description|
|-|-|
|[basic_ofstream](#basic_ofstream)|Creates an object of type `basic_ofstream`.|

### Member functions

|Member function|Description|
|-|-|
|[close](#close)|Closes a file.|
|[is_open](#is_open)|Determines if a file is open.|
|[open](#open)|Opens a file.|
|[rdbuf](#rdbuf)|Returns the address of the stored stream buffer.|
|[swap](#swap)|Exchange the contents of this `basic_ofstream` for the contents of the provided `basic_ofstream`.|

### Operators

|Operator|Description|
|-|-|
|[operator=](#op_eq)|Assigns the content of this stream object. This is a move assignment involving an `rvalue reference` that does not leave a copy behind.|

## Requirements

**Header:** \<fstream>

**Namespace:** std

## <a name="basic_ofstream"></a> basic_ofstream::basic_ofstream

Creates an object of type `basic_ofstream`.

```cpp
basic_ofstream();

explicit basic_ofstream(
    const char* _Filename,
    ios_base::openmode _Mode = ios_base::out,
    int _Prot = (int)ios_base::_Openprot);

explicit basic_ofstream(
    const wchar_t* _Filename,
    ios_base::openmode _Mode = ios_base::out,
    int _Prot = (int)ios_base::_Openprot);

basic_ofstream(
    basic_ofstream&& right);
```

### Parameters

*_Filename*\
The name of the file to open.

*_Mode*\
One of the enumerations in [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*_Prot*\
The default file opening protection, equivalent to the `shflag` parameter in [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).

*right*\
The rvalue reference to the `basic_ofstream` object being used to initialize this `basic_ofstream` object.

### Remarks

The first constructor initializes the base class by calling [basic_ostream](../standard-library/basic-ostream-class.md)(`sb`), where `sb` is the stored object of class [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`>. It also initializes `sb` by calling `basic_filebuf`< `Elem`, `Tr`>.

The second and third constructors initializes the base class by calling `basic_ostream`( **sb**). It also initializes `sb` by calling `basic_filebuf`< `Elem`, `Tr`> and then `sb`. [open](../standard-library/basic-filebuf-class.md#open)( `_Filename`, `_Mode` &#124; `ios_base::out`). If the latter function returns a null pointer, the constructor calls [setstate](../standard-library/basic-ios-class.md#setstate)(`failbit`).

The fourth constructor is a copy function. It initializes the object with the contents of *right*, treated as an rvalue reference.

### Example

The following example shows how to create a `basic_ofstream` object and write text to it.

```cpp
// basic_ofstream_ctor.cpp
// compile with: /EHsc
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
    ofstream ofs("C:\\ofstream.txt");
    if (!ofs.bad())
    {
        ofs << "Writing to a basic_ofstream object..." << endl;
        ofs.close();
    }
}
```

## <a name="close"></a> basic_ofstream::close

Closes a file.

```cpp
void close();
```

### Remarks

The member function calls [rdbuf](../standard-library/basic-ifstream-class.md#rdbuf)**->**[close](../standard-library/basic-filebuf-class.md#close).

### Example

See [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) for an example that uses `close`.

## <a name="is_open"></a> basic_ofstream::is_open

Indicates whether a file is open.

```cpp
bool is_open() const;
```

### Return Value

**`true`** if the file is open, **`false`** otherwise.

### Remarks

The member function returns [rdbuf](#rdbuf) **->** [is_open](../standard-library/basic-filebuf-class.md#is_open).

### Example

```cpp
// basic_ofstream_is_open.cpp
// compile with: /EHsc
#include <fstream>
#include <iostream>

int main( )
{
   using namespace std;
   ifstream file;
   // Open and close with a basic_filebuf
   file.rdbuf( )->open( "basic_ofstream_is_open.txt", ios::in );
   file.close( );
   if (file.is_open())
      cout << "it's open" << endl;
   else
      cout << "it's closed" << endl;
}
```

## <a name="open"></a> basic_ofstream::open

Opens a file.

```cpp
void open(
    const char* _Filename,
    ios_base::openmode _Mode = ios_base::out,
    int _Prot = (int)ios_base::_Openprot);

void open(
    const char* _Filename,
    ios_base::openmode _Mode);

void open(
    const wchar_t* _Filename,
    ios_base::openmode _Mode = ios_base::out,
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

The member function calls [rdbuf](#rdbuf) **->** [open](../standard-library/basic-filebuf-class.md#open)(_ *Filename*, `_Mode` &#124; `ios_base::out`). If that function returns a null pointer, the function calls [setstate](../standard-library/basic-ios-class.md#setstate)(`failbit`).

### Example

See [basic_filebuf::open](../standard-library/basic-filebuf-class.md#open) for an example that uses `open`.

## <a name="op_eq"></a> basic_ofstream::operator=

Assigns the content of this stream object. This is a move assignment involving an `rvalue reference` that does not leave a copy behind.

```cpp
basic_ofstream& operator=(basic_ofstream&& right);
```

### Parameters

*right*\
An rvalue reference to a `basic_ofstream` object.

### Return Value

Returns **`*this`**.

### Remarks

The member operator replaces the contents of the object by using the contents of *right*, treated as an rvalue reference.

## <a name="rdbuf"></a> basic_ofstream::rdbuf

Returns the address of the stored stream buffer.

```cpp
basic_filebuf<Elem, Tr> *rdbuf() const
```

### Return Value

Returns the address of the stored stream buffer.

### Example

See [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) for an example that uses `rdbuf`.

## <a name="swap"></a> basic_ofstream::swap

Exchanges the contents of two `basic_ofstream` objects.

```cpp
void swap(basic_ofstream& right);
```

### Parameters

*right*\
An `lvalue` reference to another `basic_ofstream` object.

### Remarks

The member function exchanges the contents of this object for the contents of *right*.

## See also

[basic_ostream Class](../standard-library/basic-ostream-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
