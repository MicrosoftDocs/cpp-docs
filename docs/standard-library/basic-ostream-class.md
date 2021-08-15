---
description: "Learn more about: basic_ostream Class"
title: "basic_ostream Class"
ms.date: "03/27/2019"
f1_keywords: ["ostream/std::basic_ostream", "ostream/std::basic_ostream::flush", "ostream/std::basic_ostream::put", "ostream/std::basic_ostream::seekp", "ostream/std::basic_ostream::sentry", "ostream/std::basic_ostream::swap", "ostream/std::basic_ostream::tellp", "ostream/std::basic_ostream::write"]
helpviewer_keywords: ["std::basic_ostream [C++]", "std::basic_ostream [C++], flush", "std::basic_ostream [C++], put", "std::basic_ostream [C++], seekp", "std::basic_ostream [C++], sentry", "std::basic_ostream [C++], swap", "std::basic_ostream [C++], tellp", "std::basic_ostream [C++], write"]
ms.assetid: 5baadc65-b662-4fab-8c9f-94457c58cda1
---
# basic_ostream Class

This class template describes an object that controls insertion of elements and encoded objects into a stream buffer with elements of type `Elem`, also known as [char_type](../standard-library/basic-ios-class.md#char_type), whose character traits are determined by the class `Tr`, also known as [traits_type](../standard-library/basic-ios-class.md#traits_type).

## Syntax

```cpp
template <class Elem, class Tr = char_traits<Elem>>
class basic_ostream : virtual public basic_ios<Elem, Tr>
```

### Parameters

*Elem*\
A `char_type`.

*Tr*\
The character `traits_type`.

## Remarks

Most of the member functions that overload [operator<<](#basic_ostream_operator_lt_lt) are formatted output functions. They follow the pattern:

```cpp
iostate state = goodbit;
const sentry ok(*this);

if (ok)
{try
{<convert and insert elements
    accumulate flags in state> }
    catch (...)
{try
{setstate(badbit);

}
    catch (...)
{}
    if ((exceptions()& badbit) != 0)
    throw; }}
width(0);
// Except for operator<<(Elem)
setstate(state);

return (*this);
```

Two other member functions are unformatted output functions. They follow the pattern:

```cpp
iostate state = goodbit;
const sentry ok(*this);

if (!ok)
    state |= badbit;
else
{try
{<obtain and insert elements
    accumulate flags in state> }
    catch (...)
{try
{setstate(badbit);

}
    catch (...)
{}
    if ((exceptions()& badbit) != 0)
    throw; }}
setstate(state);

return (*this);
```

Both groups of functions call [setstate](../standard-library/basic-ios-class.md#setstate)(**badbit**) if they encounter a failure while inserting elements.

An object of class basic_istream\< **Elem**, **Tr**> stores only a virtual public base object of class [basic_ios](../standard-library/basic-ios-class.md)**\<Elem**, **Tr>**.

## Example

See the example for [basic_ofstream Class](../standard-library/basic-ofstream-class.md) to learn more about output streams.

### Constructors

|Constructor|Description|
|-|-|
|[basic_ostream](#basic_ostream)|Constructs a `basic_ostream` object.|

### Member functions

|Member function|Description|
|-|-|
|[flush](#flush)|Flushes the buffer.|
|[put](#put)|Puts a character in a stream.|
|[seekp](#seekp)|Resets position in output stream.|
|[sentry](#sentry)|The nested class describes an object whose declaration structures the formatted output functions and the unformatted output functions.|
|[swap](#swap)|Exchanges the values of this `basic_ostream` object for those of the provided `basic_ostream` object.|
|[tellp](#tellp)|Reports position in output stream.|
|[write](#write)|Puts characters in a stream.|

### Operators

|Operator|Description|
|-|-|
|[operator=](#op_eq)|Assigns the value of the provided `basic_ostream` object parameter to this object.|
|[operator<<](#basic_ostream_operator_lt_lt)|Writes to the stream.|

## Requirements

**Header:** \<ostream>

**Namespace:** std

## <a name="basic_ostream"></a> basic_ostream::basic_ostream

Constructs a `basic_ostream` object.

```cpp
explicit basic_ostream(
    basic_streambuf<Elem, Tr>* strbuf,
    bool _Isstd = false);

basic_ostream(basic_ostream&& right);
```

### Parameters

*strbuf*\
An object of type [basic_streambuf](../standard-library/basic-streambuf-class.md).

*_Isstd*\
**`true`** if this is a standard stream; otherwise, **`false`**.

*right*\
An rvalue reference to an object of type `basic_ostream`.

### Remarks

The first constructor initializes the base class by calling [init](../standard-library/basic-ios-class.md#init)(`strbuf`). The second constructor initializes the base class by calling [basic_ios::move](../standard-library/basic-ios-class.md#move)`(right)`.

### Example

See the example for [basic_ofstream::basic_ofstream](../standard-library/basic-ofstream-class.md#basic_ofstream) to learn more about output streams.

## <a name="flush"></a> basic_ostream::flush

Flushes the buffer.

```cpp
basic_ostream<Elem, Tr>& flush();
```

### Return Value

A reference to the basic_ostream object.

### Remarks

If [rdbuf](../standard-library/basic-ios-class.md#rdbuf) is not a null pointer, the function calls **rdbuf->**[pubsync](../standard-library/basic-streambuf-class.md#pubsync). If that returns -1, the function calls [setstate](../standard-library/basic-ios-class.md#setstate)(**badbit**). It returns **\*this**.

### Example

```cpp
// basic_ostream_flush.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   cout << "test";
   cout.flush();
}
```

```Output
test
```

## <a name="basic_ostream_operator_lt_lt"></a> basic_ostream::operator&lt;&lt;

Writes to the stream.

```cpp
basic_ostream<Elem, Tr>& operator<<(
    basic_ostream<Elem, Tr>& (* Pfn)(basic_ostream<Elem, Tr>&));

basic_ostream<Elem, Tr>& operator<<(
    ios_base& (* Pfn)(ios_base&));

basic_ostream<Elem, Tr>& operator<<(
    basic_ios<Elem, Tr>& (* Pfn)(basic_ios<Elem, Tr>&));

basic_ostream<Elem, Tr>& operator<<(basic_streambuf<Elem, Tr>* strbuf);
basic_ostream<Elem, Tr>& operator<<(bool val);
basic_ostream<Elem, Tr>& operator<<(short val);
basic_ostream<Elem, Tr>& operator<<(unsigned short val);
basic_ostream<Elem, Tr>& operator<<(int __w64  val);
basic_ostream<Elem, Tr>& operator<<(unsigned int __w64  val);
basic_ostream<Elem, Tr>& operator<<(long val);
basic_ostream<Elem, Tr>& operator<<(unsigned long __w64  val);
basic_ostream<Elem, Tr>& operator<<(long long val);
basic_ostream<Elem, Tr>& operator<<(unsigned long long val);
basic_ostream<Elem, Tr>& operator<<(float val);
basic_ostream<Elem, Tr>& operator<<(double val);
basic_ostream<Elem, Tr>& operator<<(long double val);
basic_ostream<Elem, Tr>& operator<<(const void* val);
```

### Parameters

*Pfn*\
A function pointer.

*strbuf*\
A pointer to a `stream_buf` object.

*val*\
An element to write to the stream.

### Return Value

A reference to the basic_ostream object.

### Remarks

The \<ostream> header also defines several global insertion operators. For more information, see [operator<<](../standard-library/ostream-operators.md#op_lt_lt).

The first member function ensures that an expression of the form `ostr << endl` calls [endl](../standard-library/ostream-functions.md#endl)**(ostr)**, and then returns **\*this**. The second and third functions ensure that other manipulators, such as [hex](../standard-library/ios-functions.md#hex), behave similarly. The remaining functions are all formatted output functions.

The function

```cpp
basic_ostream<Elem, Tr>& operator<<(basic_streambuf<Elem, Tr>* strbuf);
```

extracts elements from *strbuf*, if *strbuf* is not a null pointer, and inserts them. Extraction stops on end of file, or if an extraction throws an exception (which is rethrown). It also stops, without extracting the element in question, if an insertion fails. If the function inserts no elements, or if an extraction throws an exception, the function calls [setstate](../standard-library/basic-ios-class.md#setstate)(**failbit**). In any case, the function returns **\*this**.

The function

```cpp
basic_ostream<Elem, Tr>& operator<<(bool val);
```

converts `_Val` to a Boolean field and inserts it by calling [use_facet](../standard-library/basic-filebuf-class.md#open)**<num_put\<Elem, OutIt>**`(`[getloc](../standard-library/ios-base-class.md#getloc)). [put](#put)(**OutIt**([rdbuf](../standard-library/basic-ios-class.md#rdbuf)), **\*this**, `getloc`, **val**). Here, `OutIt` is defined as [ostreambuf_iterator](../standard-library/ostreambuf-iterator-class.md)**\<Elem, Tr>**. The function returns **\*this**.

The functions

```cpp
basic_ostream<Elem, Tr>& operator<<(short val);
basic_ostream<Elem, Tr>& operator<<(unsigned short val);
basic_ostream<Elem, Tr>& operator<<(int val);
basic_ostream<Elem, Tr>& operator<<(unsigned int __w64  val);
basic_ostream<Elem, Tr>& operator<<(long val);
basic_ostream<Elem, Tr>& operator<<(unsigned long val);
basic_ostream<Elem, Tr>& operator<<(long long val);
basic_ostream<Elem, Tr>& operator<<(unsigned long long val);
basic_ostream<Elem, Tr>& operator<<(const void* val);
```

each convert *val* to a numeric field and insert it by calling **use_facet<num_put\<Elem, OutIt>**(`getloc`). **put**(**OutIt**(`rdbuf`), **\*this**, `getloc`, **val**). Here, **OutIt** is defined as **ostreambuf_iterator\<Elem, Tr>**. The function returns **\*this**.

The functions

```cpp
basic_ostream<Elem, Tr>& operator<<(float val);
basic_ostream<Elem, Tr>& operator<<(double val);
basic_ostream<Elem, Tr>& operator<<(long double val);
```

each convert *val* to a numeric field and insert it by calling **use_facet<num_put\<Elem, OutIt>**(`getloc`)**. put**(**OutIt**(`rdbuf`), **\*this**, `getloc`, **val**). Here, **OutIt** is defined as **ostreambuf_iterator\<Elem, Tr>**. The function returns **\*this**.

### Example

```cpp
// basic_ostream_op_write.cpp
// compile with: /EHsc
#include <iostream>
#include <string.h>

using namespace std;

ios_base& hex2( ios_base& ib )
{
   ib.unsetf( ios_base::dec );
   ib.setf( ios_base::hex );
   return ib;
}

basic_ostream<char, char_traits<char> >& somefunc(basic_ostream<char, char_traits<char> > &i)
{
    if (i == cout)
    {
        i << "i is cout" << endl;
    }
    return i;
}

class CTxtStreambuf : public basic_streambuf< char, char_traits< char > >
{
public:
    CTxtStreambuf(char *_pszText)
    {
        pszText = _pszText;
        setg(pszText, pszText, pszText + strlen(pszText));
    };
    char *pszText;
};

int main()
{
    cout << somefunc;
    cout << 21 << endl;

    hex2(cout);
    cout << 21 << endl;

    CTxtStreambuf f("text in streambuf");
    cout << &f << endl;
}
```

## <a name="op_eq"></a> basic_ostream::operator=

Assigns values for the provided `basic_ostream` object parameter to this object.

```cpp
basic_ostream& operator=(basic_ostream&& right);
```

### Parameters

*right*\
An `rvalue` reference to a `basic_ostream` object.

### Remarks

The member operator calls swap `(right)`.

## <a name="put"></a> basic_ostream::put

Puts a character in a stream.

```cpp
basic_ostream<Elem, Tr>& put(char_type _Ch);
```

### Parameters

*_Ch*\
A character.

### Return Value

A reference to the basic_ostream object.

### Remarks

The unformatted output function inserts the element *_Ch*. It returns **\*this**.

### Example

```cpp
// basic_ostream_put.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   cout.put( 'v' );
   cout << endl;
   wcout.put( L'l' );
}
```

```Output
v
l
```

## <a name="seekp"></a> basic_ostream::seekp

Reset position in output stream.

```cpp
basic_ostream<Elem, Tr>& seekp(pos_type _Pos);

basic_ostream<Elem, Tr>& seekp(off_type _Off, ios_base::seekdir _Way);
```

### Parameters

*_Pos*\
The position in the stream.

*_Off*\
The offset relative to *_Way*.

*_Way*\
One of the [ios_base::seekdir](../standard-library/ios-base-class.md#seekdir) enumerations.

### Return Value

A reference to the basic_ostream object.

### Remarks

If [fail](../standard-library/basic-ios-class.md#fail) is **`false`**, the first member function calls **newpos =** [rdbuf](../standard-library/basic-ios-class.md#rdbuf)**->** [pubseekpos](../standard-library/basic-streambuf-class.md#pubseekpos)(*_Pos*), for some `pos_type` temporary object `newpos`. If `fail` is false, the second function calls **newpos = rdbuf->** [pubseekoff](../standard-library/basic-streambuf-class.md#pubseekoff)(*_Off, _Way*). In either case, if (`off_type`)**newpos ==** (`off_type`)(-1) (the positioning operation fails), then the function calls **istr.**[setstate](../standard-library/basic-ios-class.md#setstate)(**failbit**). Both functions return **\*this**.

### Example

```cpp
// basic_ostream_seekp.cpp
// compile with: /EHsc
#include <fstream>
#include <iostream>

int main()
{
    using namespace std;
    ofstream x("basic_ostream_seekp.txt");
    streamoff i = x.tellp();
    cout << i << endl;
    x << "testing";
    i = x.tellp();
    cout << i << endl;
    x.seekp(2);   // Put char in third char position in file
    x << " ";

    x.seekp(2, ios::end);   // Put char two after end of file
    x << "z";
}
```

```Output
0
7
```

## <a name="sentry"></a> basic_ostream::sentry

The nested class describes an object whose declaration structures the formatted output functions and the unformatted output functions.

class sentry {
   public:
   explicit sentry(basic_ostream\<Elem, Tr>& _Ostr);
   operator bool() const;
   ~sentry();
   };

### Remarks

The nested class describes an object whose declaration structures the formatted output functions and the unformatted output functions. If **ostr.**[good](../standard-library/basic-ios-class.md#good) is **`true`** and **ostr.**[tie](../standard-library/basic-ios-class.md#tie) is not a null pointer, the constructor calls **ostr.tie->**[flush](#flush). The constructor then stores the value returned by `ostr.good` in `status`. A later call to `operator bool` delivers this stored value.

If `uncaught_exception` returns **`false`** and [flags](../standard-library/ios-base-class.md#flags) **&** [unitbuf](../standard-library/ios-functions.md#unitbuf) is nonzero, the destructor calls [flush](#flush).

## <a name="swap"></a> basic_ostream::swap

Exchanges the values of this `basic_ostream` object for the values of the provided `basic_ostream`.

```cpp
void swap(basic_ostream& right);
```

### Parameters

*right*\
A reference to a `basic_ostream` object.

### Remarks

The member function calls [basic_ios::swap](../standard-library/basic-ios-class.md#swap)`(right)` to exchange the contents of this object for the contents of *right*.

## <a name="tellp"></a> basic_ostream::tellp

Report position in output stream.

```cpp
pos_type tellp();
```

### Return Value

Position in output stream.

### Remarks

If [fail](../standard-library/basic-ios-class.md#fail) is **`false`**, the member function returns [rdbuf](../standard-library/basic-ios-class.md#rdbuf)**->** [pubseekoff](../standard-library/basic-streambuf-class.md#pubseekoff)(0, `cur`, **in**). Otherwise, it returns `pos_type`(-1).

### Example

See [seekp](#seekp) for an example using `tellp`.

## <a name="write"></a> basic_ostream::write

Put characters in a stream.

```cpp
basic_ostream<Elem, Tr>& write(const char_type* str, streamsize count);
```

### Parameters

*count*\
Count of characters to put into the stream.

*str*\
Characters to put into the stream.

### Return Value

A reference to the basic_ostream object.

### Remarks

The [unformatted output function](../standard-library/basic-ostream-class.md) inserts the sequence of *count* elements beginning at *str*.

### Example

See [streamsize](../standard-library/ios-typedefs.md#streamsize) for an example using `write`.

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
