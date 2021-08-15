---
description: "Learn more about: basic_istream Class"
title: "basic_istream Class"
ms.date: "11/04/2016"
f1_keywords: ["istream/std::basic_istream", "istream/std::basic_istream::gcount", "istream/std::basic_istream::get", "istream/std::basic_istream::getline", "istream/std::basic_istream::", "istream/std::basic_istream::peek", "istream/std::basic_istream::putback", "istream/std::basic_istream::read", "istream/std::basic_istream::readsome", "istream/std::basic_istream::seekg", "istream/std::basic_istream::sentry", "istream/std::basic_istream::swap", "istream/std::basic_istream::sync", "istream/std::basic_istream::tellg", "istream/std::basic_istream::unget"]
helpviewer_keywords: ["std::basic_istream [C++]", "std::basic_istream [C++], gcount", "std::basic_istream [C++], get", "std::basic_istream [C++], getline", "std::basic_istream [C++], OVERWRITE", "std::basic_istream [C++], peek", "std::basic_istream [C++], putback", "std::basic_istream [C++], read", "std::basic_istream [C++], readsome", "std::basic_istream [C++], seekg", "std::basic_istream [C++], sentry", "std::basic_istream [C++], swap", "std::basic_istream [C++], sync", "std::basic_istream [C++], tellg", "std::basic_istream [C++], unget"]
ms.assetid: c7c27111-de6d-42b4-95a3-a7e65259bf17
---
# basic_istream Class

Describes an object that controls extraction of elements and encoded objects from a stream buffer with elements of type `Char_T`, also known as [char_type](../standard-library/basic-ios-class.md#char_type), whose character traits are determined by the class *Tr*, also known as [traits_type](../standard-library/basic-ios-class.md#traits_type).

## Syntax

```cpp
template <class Char_T, class Tr = char_traits<Char_T>>
class basic_istream : virtual public basic_ios<Char_T, Tr>
```

## Remarks

Most of the member functions that overload [operator>>](#op_gt_gt) are formatted input functions. They follow the pattern:

```cpp
iostate state = goodbit;
const sentry ok(*this);

if (ok)
{
    try
    {
        /*extract elements and convert
            accumulate flags in state.
            store a successful conversion*/
    }
    catch (...)
    {
        try
        {
            setstate(badbit);

        }
        catch (...)
        {
        }
        if ((exceptions()& badbit) != 0)
            throw;
    }
}
setstate(state);

return (*this);
```

Many other member functions are unformatted input functions. They follow the pattern:

```cpp
iostate state = goodbit;
count = 0;    // the value returned by gcount
const sentry ok(*this, true);

if (ok)
{
    try
    {
        /* extract elements and deliver
            count extracted elements in count
            accumulate flags in state */
    }
    catch (...)
    {
        try
        {
            setstate(badbit);

        }
        catch (...)
        {
        }
        if ((exceptions()& badbit) != 0)
            throw;
    }
}
setstate(state);
```

Both groups of functions call [`setstate`](../standard-library/basic-ios-class.md#setstate)`(eofbit)` if they encounter end of file while extracting elements.

An object of class `basic_istream<Char_T, Tr>` stores:

- A virtual public base object of class [`basic_ios`](../standard-library/basic-ios-class.md)`<Char_T, Tr>`.

- An extraction count for the last unformatted input operation (called `count` in the previous code).

## Example

See the example for [basic_ifstream Class](../standard-library/basic-ifstream-class.md) to learn more about input streams.

### Constructors

|Constructor|Description|
|-|-|
|[basic_istream](#basic_istream)|Constructs an object of type `basic_istream`.|

### Member functions

|Member function|Description|
|-|-|
|[gcount](#gcount)|Returns the number of characters read during the last unformatted input.|
|[get](#get)|Reads one or more characters from the input stream.|
|[getline](#getline)|Reads a line from the input stream.|
|[ignore](#ignore)|Causes a number of elements to be skipped from the current read position.|
|[peek](#peek)|Returns the next character to be read.|
|[putback](#putback)|Puts a specified character into the stream.|
|[read](#read)|Reads a specified number of characters from the stream and stores them in an array.|
|[readsome](#readsome)|Read from buffer only.|
|[seekg](#seekg)|Moves the read position in a stream.|
|[sentry](#sentry)|The nested class describes an object whose declaration structures the formatted input functions and the unformatted input functions.|
|[swap](#swap)|Exchanges this `basic_istream` object for the provided `basic_istream` object parameter.|
|[sync](#sync)|Synchronizes the stream's associated input device with the stream's buffer.|
|[tellg](#tellg)|Reports the current read position in the stream.|
|[unget](#unget)|Puts the most recently read character back into the stream.|

### Operators

|Operator|Description|
|-|-|
|[operator>>](#op_gt_gt)|Calls a function on the input stream or reads formatted data from the input stream.|
|[operator=](#op_eq)|Assigns the `basic_istream` on the right side of the operator to this object. It's a move assignment involving an `rvalue` reference that doesn't leave a copy behind.|

## Requirements

**Header:** \<istream>

**Namespace:** std

## <a name="basic_istream"></a> basic_istream::basic_istream

Constructs an object of type `basic_istream`.

```cpp
explicit basic_istream(
    basic_streambuf<Char_T, Tr>* strbuf,
    bool _Isstd = false);

basic_istream(basic_istream&& right);
```

### Parameters

*strbuf*\
An object of type [basic_streambuf](../standard-library/basic-streambuf-class.md).

*_Isstd*\
**`true`** if it's a standard stream; otherwise, **`false`**.

*right*\
A `basic_istream` object to copy.

### Remarks

The first constructor initializes the base class by calling [`init`](../standard-library/basic-ios-class.md#init)`(strbuf)`. It also stores zero in the extraction count. For more information about this extraction count, see the Remarks section of the [basic_istream Class](../standard-library/basic-istream-class.md) overview.

The second constructor initializes the base class by calling `move(right)`. It also stores `right.gcount()` in the extraction count and stores zero in the extraction count for *right**.

### Example

See the example for [basic_ifstream::basic_ifstream](../standard-library/basic-ifstream-class.md#basic_ifstream) to learn more about input streams.

## <a name="gcount"></a> basic_istream::gcount

Returns the number of characters read during the last unformatted input.

```cpp
streamsize gcount() const;
```

### Return Value

The extraction count.

### Remarks

Use [basic_istream::get](#get) to read unformatted characters.

### Example

```cpp
// basic_istream_gcount.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   cout << "Type the letter 'a': ";

   ws( cin );
   char c[10];

   cin.get( &c[0],9 );
   cout << c << endl;

   cout << cin.gcount( ) << endl;
}
```

```Input
a
```

```Output
Type the letter 'a': a
1
```

## <a name="get"></a> basic_istream::get

Reads one or more characters from the input stream.

```cpp
int_type get();

basic_istream<Char_T, Tr>& get(Char_T& Ch);
basic_istream<Char_T, Tr>& get(Char_T* str, streamsize count);
basic_istream<Char_T, Tr>& get(Char_T* str, streamsize count, Char_T delimiter);

basic_istream<Char_T, Tr>& get(basic_streambuf<Char_T, Tr>& strbuf);
basic_istream<Char_T, Tr>& get(basic_streambuf<Char_T, Tr>& strbuf, Char_T delimiter);
```

### Parameters

*count*\
The number of characters to read from *strbuf*.

*delimiter*\
The character that should terminate the read if it's encountered before *count*.

*str*\
A string in which to write.

*Ch*\
A character to get.

*strbuf*\
A buffer in which to write.

### Return Value

The parameterless form of get returns the element read as an integer or end of file. The remaining forms return the stream (* **`this`**).

### Remarks

The first unformatted input function extracts an element, if possible, as if by returning `rdbuf->sbumpc`. Otherwise, it returns `traits_type::`[`eof`](../standard-library/char-traits-struct.md#eof). If the function extracts no element, it calls [`setstate`](../standard-library/basic-ios-class.md#setstate)`(failbit)`.

The second function extracts the [int_type](../standard-library/basic-ios-class.md#int_type) element `meta` the same way. If `meta` compares equal to `traits_type::eof`, the function calls `setstate(failbit)`. Otherwise, it stores `traits_type::`[`to_char_type`](../standard-library/char-traits-struct.md#to_char_type)`(meta)` in *Ch*. The function returns __*this__.

The third function returns `get(str, count, widen('\n'))`.

The fourth function extracts up to `count - 1` elements and stores them in the array beginning at *str*. It always stores `char_type` after any extracted elements it stores. In order of testing, extraction stops:

- At end of file.

- After the function extracts an element that compares equal to *delimiter*. In this case, the element is put back to the controlled sequence.

- After the function extracts `count - 1` elements.

If the function extracts no elements, it calls `setstate(failbit)`. In any case, it returns __*this__.

The fifth function returns `get(strbuf, widen('\n'))`.

The sixth function extracts elements and inserts them in *strbuf*. Extraction stops on end-of-file or on an element that compares equal to *delimiter*, which is not extracted. It also stops, without extracting the element in question, if an insertion fails or throws an exception (which is caught but not rethrown). If the function extracts no elements, it calls `setstate(failbit)`. In any case, the function returns __*this__.

### Example

```cpp
// basic_istream_get.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   char c[10];

   c[0] = cin.get( );
   cin.get( c[1] );
   cin.get( &c[2],3 );
   cin.get( &c[4], 4, '7' );

   cout << c << endl;
}
```

```Output
1111
```

## <a name="getline"></a> basic_istream::getline

Gets a line from the input stream.

```cpp
basic_istream<Char_T, Tr>& getline(
    char_type* str,
    streamsize count);

basic_istream<Char_T, Tr>& getline(
    char_type* str,
    streamsize count,
    char_type delimiter);
```

### Parameters

*count*\
The number of characters to read from *strbuf*.

*delimiter*\
The character that should terminate the read if it's encountered before *count*.

*str*\
A string in which to write.

### Return Value

The stream (__*this__).

### Remarks

The first of these unformatted input functions returns `getline(str, count, widen('\n'))`.

The second function extracts up to `count - 1` elements and stores them in the array beginning at *str*. It always stores the string termination character after any extracted elements it stores. In order of testing, extraction stops:

- At end of file.

- After the function extracts an element that compares equal to *delimiter*. In this case, the element isn't put back, and it's not appended to the controlled sequence.

- After the function extracts `count - 1` elements.

If the function extracts no elements or `count - 1` elements, it calls [`setstate`](../standard-library/basic-ios-class.md#setstate)`(failbit)`. In any case, it returns __*this__.

### Example

```cpp
// basic_istream_getline.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   char c[10];

   cin.getline( &c[0], 5, '2' );
   cout << c << endl;
}
```

```Output
121
```

## <a name="ignore"></a> basic_istream::ignore

Causes a number of elements to be skipped from the current read position.

```cpp
basic_istream<Char_T, Tr>& ignore(
    streamsize count = 1,
    int_type delimiter = traits_type::eof());
```

### Parameters

*count*\
The number of elements to skip from the current read position.

*delimiter*\
The element that, if encountered before count, causes `ignore` to return and allowing all elements after *delimiter* to be read.

### Return Value

The stream (__*this__).

### Remarks

The unformatted input function extracts up to *count* elements and discards them. If *count* equals `numeric_limits<int>::max`, however, it's taken as arbitrarily large. Extraction stops early on end of file or on an element `Ch` such that `traits_type::`[`to_int_type`](../standard-library/char-traits-struct.md#to_int_type)`(Ch)` compares equal to *delimiter* (which is also extracted). The function returns __*this__.

### Example

```cpp
// basic_istream_ignore.cpp
// compile with: /EHsc
#include <iostream>
int main( )
{
   using namespace std;
   char chararray[10];
   cout << "Type 'abcdef': ";
   cin.ignore( 5, 'c' );
   cin >> chararray;
   cout << chararray;
}
```

```Output
Type 'abcdef': abcdef
def
```

## <a name="op_gt_gt"></a> basic\_istream::operator>>

Calls a function on the input stream or reads formatted data from the input stream.

```cpp
basic_istream& operator>>(basic_istream& (* Pfn)(basic_istream&));
basic_istream& operator>>(ios_base& (* Pfn)(ios_base&));
basic_istream& operator>>(basic_ios<Char_T, Tr>& (* Pfn)(basic_ios<Char_T, Tr>&));
basic_istream& operator>>(basic_streambuf<Char_T, Tr>* strbuf);
basic_istream& operator>>(bool& val);
basic_istream& operator>>(short& val);
basic_istream& operator>>(unsigned short& val);
basic_istream& operator>>(int& val);
basic_istream& operator>>(unsigned int& val);
basic_istream& operator>>(long& val);
basic_istream& operator>>(unsigned long& val);
basic_istream& operator>>(long long& val);
basic_istream& operator>>(unsigned long long& val);
basic_istream& operator>>(void *& val);
basic_istream& operator>>(float& val);
basic_istream& operator>>(double& val);
basic_istream& operator>>(long double& val);
```

### Parameters

*Pfn*\
A function pointer.

*strbuf*\
An object of type `stream_buf`.

*val*\
The value to read from the stream.

### Return Value

The stream (__*this__).

### Remarks

The \<istream> header also defines several global extraction operators. For more information, see [operator>> (\<istream>)](../standard-library/istream-operators.md#op_gt_gt).

The first member function ensures that an expression of the form `istr >> ws` calls [`ws`](../standard-library/istream-functions.md#ws)`(istr)`, and then returns __*this__. The second and third functions ensure that other manipulators, such as [`hex`](../standard-library/ios-functions.md#hex), behave similarly. The remaining functions are the formatted input functions.

The function:

```cpp
basic_istream& operator>>(
    basic_streambuf<Char_T, Tr>* strbuf);
```

extracts elements, if *strbuf* isn't a null pointer, and inserts them in *strbuf*. Extraction stops on end of file. It also stops without extracting the element in question, if an insertion fails or throws an exception (which is caught but not rethrown). If the function extracts no elements, it calls [`setstate`](../standard-library/basic-ios-class.md#setstate)`(failbit)`. In any case, the function returns __*this__.

The function:

```cpp
basic_istream& operator>>(bool& val);
```

extracts a field and converts it to a Boolean value by calling [`use_facet`](../standard-library/basic-filebuf-class.md#open)`< num_get<Char_T, InIt>(`[`getloc`](../standard-library/ios-base-class.md#getloc)`).`[`get`](../standard-library/ios-base-class.md#getloc)`( InIt(`[`rdbuf`](../standard-library/basic-ios-class.md#rdbuf)`), Init(0), *this, getloc, val)`. Here, `InIt` is defined as [`istreambuf_iterator`](../standard-library/istreambuf-iterator-class.md)`<Char_T, Tr>`. The function returns __*this__.

Each of the functions:

```cpp
basic_istream& operator>>(short& val);
basic_istream& operator>>(unsigned short& val);
basic_istream& operator>>(int& val);
basic_istream& operator>>(unsigned int& val);
basic_istream& operator>>(long& val);
basic_istream& operator>>(unsigned long& val);
basic_istream& operator>>(long long& val);
basic_istream& operator>>(unsigned long long& val);
basic_istream& operator>>(void *& val);
```

extract a field and convert it to a numeric value by calling `use_facet<num_get<Char_T, InIt>(getloc).`[`get`](#get)`(InIt(rdbuf), Init(0), *this, getloc, val)`. Here, `InIt` is defined as `istreambuf_iterator<Char_T, Tr>`, and *val* has type **`long`**, **`unsigned long`**, or **`void`** <strong>\*</strong> as needed.

If the converted value can't be represented as the type of *val*, the function calls [`setstate`](../standard-library/basic-ios-class.md#setstate)`(failbit)`. In any case, the function returns __*this__.

Each of the functions:

```cpp
basic_istream& operator>>(float& val);
basic_istream& operator>>(double& val);
basic_istream& operator>>(long double& val);
```

extract a field and convert it to a numeric value by calling `use_facet<num_get<Char_T, InIt>(getloc).get(InIt(rdbuf), Init(0), *this, getloc, val)`. Here, `InIt` is defined as `istreambuf_iterator<Char_T, Tr>`, and *val* has type **`double`** or **`long double`** as needed.

If the converted value can't be represented as the type of *val*, the function calls `setstate(failbit)`. In any case, it returns __*this__.

### Example

```cpp
// istream_basic_istream_op_is.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;

ios_base& hex2( ios_base& ib )
{
   ib.unsetf( ios_base::dec );
   ib.setf( ios_base::hex );
   return ib;
}

basic_istream<char, char_traits<char> >& somefunc(basic_istream<char, char_traits<char> > &i)
{
   if ( i == cin )
   {
      cerr << "i is cin" << endl;
   }
   return i;
}

int main( )
{
   int i = 0;
   cin >> somefunc;
   cin >> i;
   cout << i << endl;
   cin >> hex2;
   cin >> i;
   cout << i << endl;
}
```

## <a name="op_eq"></a> basic_istream::operator=

Assigns the `basic_istream` on the right side of the operator to this object. It's a move assignment involving an `rvalue` reference that doesn't leave a copy behind.

```cpp
basic_istream& operator=(basic_istream&& right);
```

### Parameters

*right*\
An `rvalue` reference to a `basic_ifstream` object.

### Return Value

Returns __*this__.

### Remarks

The member operator calls `swap(right)`.

## <a name="peek"></a> basic_istream::peek

Returns the next character to be read.

```cpp
int_type peek();
```

### Return Value

The next character that will be read.

### Remarks

The unformatted input function extracts an element, if possible, as if by returning `rdbuf->`[`sgetc`](../standard-library/basic-streambuf-class.md#sgetc). Otherwise, it returns `traits_type::`[`eof`](../standard-library/char-traits-struct.md#eof).

### Example

```cpp
// basic_istream_peek.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   char c[10], c2;
   cout << "Type 'abcde': ";

   c2 = cin.peek( );
   cin.getline( &c[0], 9 );

   cout << c2 << " " << c << endl;
}
```

```Input
abcde
```

```Output
Type 'abcde': abcde
a abcde
```

## <a name="putback"></a> basic_istream::putback

Puts a specified character into the stream.

```cpp
basic_istream<Char_T, Tr>& putback(
    char_type Ch);
```

### Parameters

*Ch*\
A character to put back into the stream.

### Return Value

The stream (__*this__).

### Remarks

The [unformatted input function](../standard-library/basic-istream-class.md) puts back *Ch*, if possible, as if by calling [`rdbuf`](../standard-library/basic-ios-class.md#rdbuf)`->`[`sputbackc`](../standard-library/basic-streambuf-class.md#sputbackc). If `rdbuf` is a null pointer, or if the call to `sputbackc` returns `traits_type::`[`eof`](../standard-library/char-traits-struct.md#eof), the function calls [`setstate`](../standard-library/basic-ios-class.md#setstate)`(badbit)`. In any case, it returns __*this__.

### Example

```cpp
// basic_istream_putback.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   char c[10], c2, c3;

   c2 = cin.get( );
   c3 = cin.get( );
   cin.putback( c2 );
   cin.getline( &c[0], 9 );
   cout << c << endl;
}
```

```Output
qwq
```

## <a name="read"></a> basic_istream::read

Reads a specified number of characters from the stream and stores them in an array.

This method is potentially unsafe, as it relies on the caller to check that the passed values are correct.

```cpp
basic_istream<Char_T, Tr>& read(
    char_type* str,
    streamsize count);
```

### Parameters

*str*\
The array in which to read the characters.

*count*\
The number of characters to read.

### Return Value

The stream ( **`*this`**).

### Remarks

The unformatted input function extracts up to *count* elements and stores them in the array beginning at *str*. Extraction stops early on end of file, in which case the function calls [`setstate`](../standard-library/basic-ios-class.md#setstate)`(failbit)`. In any case, it returns __*this__.

### Example

```cpp
// basic_istream_read.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main()
{
    char c[10];
    int count = 5;

    cout << "Type 'abcde': ";

    // Note: cin::read is potentially unsafe, consider
    // using cin::_Read_s instead.
    cin.read(&c[0], count);
    c[count] = 0;

    cout << c << endl;
}
```

```Input
abcde
```

```Output
Type 'abcde': abcde
abcde
```

## <a name="readsome"></a> basic_istream::readsome

Reads the specified number of character values.

This method is potentially unsafe, as it relies on the caller to check that the passed values are correct.

```cpp
streamsize readsome(
    char_type* str,
    streamsize count);
```

### Parameters

*str*\
The array in which `readsome` stores the characters it reads.

*count*\
The number of characters to read.

### Return Value

The number of characters actually read, [`gcount`](#gcount).

### Remarks

This unformatted input function extracts up to *count* elements from the input stream and stores them in the array *str*.

This function does not wait for input. It reads whatever data is available.

### Example

```cpp
// basic_istream_readsome.cpp
// compile with: /EHsc /W3
#include <iostream>
using namespace std;

int main( )
{
   char c[10];
   int count = 5;

   cout << "Type 'abcdefgh': ";

   // cin.read blocks until user types input.
   // Note: cin::read is potentially unsafe, consider
   // using cin::_Read_s instead.
   cin.read(&c[0], 2);

   // Note: cin::readsome is potentially unsafe, consider
   // using cin::_Readsome_s instead.
   int n = cin.readsome(&c[0], count);  // C4996
   c[n] = 0;
   cout << n << " characters read" << endl;
   cout << c << endl;
}
```

## <a name="seekg"></a> basic_istream::seekg

Moves the read position in a stream.

```cpp
basic_istream<Char_T, Tr>& seekg(pos_type pos);

basic_istream<Char_T, Tr>& seekg(off_type off, ios_base::seekdir way);
```

### Parameters

*pos*\
The absolute position in which to move the read pointer.

*off*\
An offset to move the read pointer relative to *way*.

*way*\
One of the [ios_base::seekdir](../standard-library/ios-base-class.md#seekdir) enumerations.

### Return Value

The stream (__*this__).

### Remarks

The first member function performs an absolute seek, the second member function performs a relative seek.

> [!NOTE]
> Do not use the second member function with text files, because Standard C++ does not support relative seeks in text files.

If [`fail`](../standard-library/basic-ios-class.md#fail) is false, the first member function calls `newpos =` [`rdbuf`](../standard-library/basic-ios-class.md#rdbuf)`->`[`pubseekpos`](../standard-library/basic-streambuf-class.md#pubseekpos)`(pos)`, for some `pos_type` temporary object `newpos`. If `fail` is false, the second function calls `newpos = rdbuf->`[`pubseekoff`](../standard-library/basic-streambuf-class.md#pubseekoff)`( off, way)`. In either case, if `(off_type)newpos == (off_type)(-1)` (the positioning operation fails), the function calls `istr.`[`setstate`](../standard-library/basic-ios-class.md#setstate)`(failbit)`. Both functions return __*this__.

If [`fail`](../standard-library/basic-ios-class.md#fail) is true, the member functions do nothing.

### Example

```cpp
// basic_istream_seekg.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main ( )
{
   using namespace std;
   ifstream file;
   char c, c1;

   file.open( "basic_istream_seekg.txt" );
   file.seekg(2);   // seek to position 2
   file >> c;
   cout << c << endl;
}
```

## <a name="sentry"></a> basic_istream::sentry

The nested class describes an object whose declaration structures the formatted and unformatted input functions.

```cpp
class sentry {
   public:
   explicit sentry(
      basic_istream<Char_T, Tr>& _Istr,
      bool _Noskip = false);
   operator bool() const;
   };
```

### Remarks

If `_Istr.`[`good`](../standard-library/basic-ios-class.md#good) is true, the constructor:

- Calls `_Istr.`[`tie`](../standard-library/basic-ios-class.md#tie)`->`[`flush`](../standard-library/basic-ostream-class.md#flush) if `_Istr.tie` is not a null pointer.

- Effectively calls [`ws`](../standard-library/istream-functions.md#ws)`(_Istr)` if `_Istr.`[`flags`](../standard-library/ios-base-class.md#flags) `&` [`skipws`](../standard-library/ios-functions.md#skipws) is nonzero.

If after any such preparation, `_Istr.good` is false, the constructor calls `_Istr.`[`setstate`](../standard-library/basic-ios-class.md#setstate)`(failbit)`. In any case, the constructor stores the value returned by `_Istr.good` in `status`. A later call to `operator bool` delivers this stored value.

## <a name="swap"></a> basic_istream::swap

Exchanges the contents of two `basic_istream` objects.

```cpp
void swap(basic_istream& right);
```

### Parameters

*right*\
An lvalue reference to a `basic_istream` object.

### Remarks

The member function calls [`basic_ios::swap`](../standard-library/basic-ios-class.md#swap)`(right)`. It also exchanges the extraction count with the extraction count for *right*.

## <a name="sync"></a> basic_istream::sync

Synchronizes the stream's associated input device with the stream's buffer.

```cpp
int sync();
```

### Return Value

If [`rdbuf`](../standard-library/basic-ios-class.md#rdbuf) is a null pointer, the function returns -1. Otherwise, it calls `rdbuf->`[`pubsync`](../standard-library/basic-streambuf-class.md#pubsync). If that call returns -1, the function calls [`setstate`](../standard-library/basic-ios-class.md#setstate)`(badbit)` and returns -1. Otherwise, the function returns zero.

## <a name="tellg"></a> basic_istream::tellg

Reports the current read position in the stream.

```cpp
pos_type tellg();
```

### Return Value

The current position in the stream.

### Remarks

If [`fail`](../standard-library/basic-ios-class.md#fail) is false, the member function returns [`rdbuf`](../standard-library/basic-ios-class.md#rdbuf)`->`[`pubseekoff`](../standard-library/basic-streambuf-class.md#pubseekoff)`(0, cur, in)`. Otherwise, it returns `pos_type(-1)`.

### Example

```cpp
// basic_istream_tellg.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main()
{
    using namespace std;
    ifstream file;
    char c;
    streamoff i;

    file.open("basic_istream_tellg.txt");
    i = file.tellg();
    file >> c;
    cout << c << " " << i << endl;

    i = file.tellg();
    file >> c;
    cout << c << " " << i << endl;
}
```

## <a name="unget"></a> basic_istream::unget

Puts the most recently read character back into the stream.

```cpp
basic_istream<Char_T, Tr>& unget();
```

### Return Value

The stream (__*this__).

### Remarks

The [unformatted input function](../standard-library/basic-istream-class.md) puts back the previous element in the stream, if possible, as if by calling `rdbuf->`[`sungetc`](../standard-library/basic-streambuf-class.md#sungetc). If [`rdbuf`](../standard-library/basic-ios-class.md#rdbuf) is a null pointer, or if the call to `sungetc` returns `traits_type::`[`eof`](../standard-library/basic-ios-class.md#eof), the function calls [`setstate`](../standard-library/basic-ios-class.md#setstate)`(badbit)`. In any case, it returns __*this__.

For information on how `unget` might fail, see [`basic_streambuf::sungetc`](../standard-library/basic-streambuf-class.md#sungetc).

### Example

```cpp
// basic_istream_unget.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   char c[10], c2;

   cout << "Type 'abc': ";
   c2 = cin.get( );
   cin.unget( );
   cin.getline( &c[0], 9 );
   cout << c << endl;
}
```

```Input
abc
```

```Output
Type 'abc': abc
abc
```

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
