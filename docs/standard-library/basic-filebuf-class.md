---
title: "basic_filebuf Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["fstream/std::basic_filebuf", "fstream/std::basic_filebuf::char_type", "fstream/std::basic_filebuf::int_type", "fstream/std::basic_filebuf::off_type", "fstream/std::basic_filebuf::pos_type", "fstream/std::basic_filebuf::traits_type", "fstream/std::basic_filebuf::close", "fstream/std::basic_filebuf::is_open", "fstream/std::basic_filebuf::open", "fstream/std::basic_filebuf::overflow", "fstream/std::basic_filebuf::pbackfail", "fstream/std::basic_filebuf::seekoff", "fstream/std::basic_filebuf::seekpos", "fstream/std::basic_filebuf::setbuf", "fstream/std::basic_filebuf::Swap", "fstream/std::basic_filebuf::sync", "fstream/std::basic_filebuf::uflow", "fstream/std::basic_filebuf::underflow"]
dev_langs: ["C++"]
helpviewer_keywords: ["std::basic_filebuf [C++]", "std::basic_filebuf [C++], char_type", "std::basic_filebuf [C++], int_type", "std::basic_filebuf [C++], off_type", "std::basic_filebuf [C++], pos_type", "std::basic_filebuf [C++], traits_type", "std::basic_filebuf [C++], close", "std::basic_filebuf [C++], is_open", "std::basic_filebuf [C++], open", "std::basic_filebuf [C++], overflow", "std::basic_filebuf [C++], pbackfail", "std::basic_filebuf [C++], seekoff", "std::basic_filebuf [C++], seekpos", "std::basic_filebuf [C++], setbuf", "std::basic_filebuf [C++], Swap", "std::basic_filebuf [C++], sync", "std::basic_filebuf [C++], uflow", "std::basic_filebuf [C++], underflow"]
ms.assetid: 3196ba5c-bf38-41bd-9a95-70323ddfca1a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# basic_filebuf Class

Describes a stream buffer that controls the transmission of elements of type *Elem*, whose character traits are determined by the class *Tr*, to and from a sequence of elements stored in an external file.

## Syntax

```cpp
template <class Elem, class Tr = char_traits<Elem>>
class basic_filebuf : public basic_streambuf<Elem, Tr>
```

### Parameters

*Elem*<br/>
The basic element of the file buffer.

*Tr*<br/>
The traits of the basic element of the file buffer (usually `char_traits`< `Elem`>).

## Remarks

The template class describes a stream buffer that controls the transmission of elements of type *Elem*, whose character traits are determined by the class *Tr*, to and from a sequence of elements stored in an external file.

> [!NOTE]
> Objects of type `basic_filebuf` are created with an internal buffer of type `char *` regardless of the `char_type` specified by the type parameter *Elem*. This means that a Unicode string (containing **wchar_t** characters) will be converted to an ANSI string (containing **char** characters) before it is written to the internal buffer. To store Unicode strings in the buffer, create a new buffer of type **wchar_t** and set it using the [basic_streambuf::pubsetbuf](../standard-library/basic-streambuf-class.md#pubsetbuf)`()` method. To see an example that demonstrates this behavior, see below.

An object of class `basic_filebuf`< `Elem`, `Tr`> stores a file pointer, which designates the `FILE` object that controls the stream associated with an open file. It also stores pointers to two file conversion facets for use by the protected member functions [overflow](#overflow) and [underflow](#underflow). For more information, see [basic_filebuf::open](#open).

## Example

The following example demonstrates how to force an object of type `basic_filebuf<wchar_t>` to store Unicode characters in its internal buffer by calling the `pubsetbuf()` method.

```cpp
// unicode_basic_filebuf.cpp
// compile with: /EHsc

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <memory.h>
#include <string.h>

#define IBUFSIZE 16

using namespace std;

void hexdump(const string& filename);

int main()
{
    wchar_t* wszHello = L"Hello World";
    wchar_t wBuffer[128];

    basic_filebuf<wchar_t> wOutFile;

    // Open a file, wcHello.txt, then write to it, then dump the
    // file's contents in hex
    wOutFile.open("wcHello.txt",
        ios_base::out | ios_base::trunc | ios_base::binary);
    if(!wOutFile.is_open())
    {
        cout << "Error Opening wcHello.txt\n";
        return -1;
    }
    wOutFile.sputn(wszHello, (streamsize)wcslen(wszHello));
    wOutFile.close();
    cout << "Hex Dump of wcHello.txt - note that output is ANSI chars:\n";
    hexdump(string("wcHello.txt"));

    // Open a file, wwHello.txt, then set the internal buffer of
    // the basic_filebuf object to be of type wchar_t, then write
    // to the file and dump the file's contents in hex
    wOutFile.open("wwHello.txt",
        ios_base::out | ios_base::trunc | ios_base::binary);
    if(!wOutFile.is_open())
    {
        cout << "Error Opening wwHello.txt\n";
        return -1;
    }
    wOutFile.pubsetbuf(wBuffer, (streamsize)128);
    wOutFile.sputn(wszHello, (streamsize)wcslen(wszHello));
    wOutFile.close();
    cout << "\nHex Dump of wwHello.txt - note that output is wchar_t chars:\n";
    hexdump(string("wwHello.txt"));

    return 0;
}

// dump contents of filename to stdout in hex
void hexdump(const string& filename)
{
    fstream ifile(filename.c_str(),
        ios_base::in | ios_base::binary);
    char *ibuff = new char[IBUFSIZE];
    char *obuff = new char[(IBUFSIZE*2)+1];
    int i;

    if(!ifile.is_open())
    {
        cout << "Cannot Open " << filename.c_str()
             << " for reading\n";
        return;
    }
    if(!ibuff || !obuff)
    {
        cout << "Cannot Allocate buffers\n";
        ifile.close();
        return;
    }

    while(!ifile.eof())
    {
        memset(obuff,0,(IBUFSIZE*2)+1);
        memset(ibuff,0,IBUFSIZE);
        ifile.read(ibuff,IBUFSIZE);

        // corner case where file is exactly a multiple of
        // 16 bytes in length
        if(ibuff[0] == 0 && ifile.eof())
            break;

        for(i = 0; i < IBUFSIZE; i++)
        {
            if(ibuff[i] >= ' ')
                obuff[i] = ibuff[i];
            else
                obuff[i] = '.';

            cout << setfill('0') << setw(2) << hex
                 << (int)ibuff[i] << ' ';
        }
        cout << "  " << obuff << endl;
    }
    ifile.close();
}
```

```Output
Hex Dump of wcHello.txt - note that output is ANSI chars:
48 65 6c 6c 6f 20 57 6f 72 6c 64 00 00 00 00 00   Hello World.....

Hex Dump of wwHello.txt - note that output is wchar_t chars:
48 00 65 00 6c 00 6c 00 6f 00 20 00 57 00 6f 00   H.e.l.l.o. .W.o.
72 00 6c 00 64 00 00 00 00 00 00 00 00 00 00 00   r.l.d...........
```

### Constructors

|Constructor|Description|
|-|-|
|[basic_filebuf](#basic_filebuf)|Constructs an object of type `basic_filebuf`.|

### Typedefs

|Type name|Description|
|-|-|
|[char_type](#char_type)|Associates a type name with the `Elem` template parameter.|
|[int_type](#int_type)|Makes this type within `basic_filebuf`'s scope equivalent to the type of the same name in the `Tr` scope.|
|[off_type](#off_type)|Makes this type within `basic_filebuf`'s scope equivalent to the type of the same name in the `Tr` scope.|
|[pos_type](#pos_type)|Makes this type within `basic_filebuf`'s scope equivalent to the type of the same name in the `Tr` scope.|
|[traits_type](#traits_type)|Associates a type name with the `Tr` template parameter.|

### Member functions

|Member function|Description|
|-|-|
|[close](#close)|Closes a file.|
|[is_open](#is_open)|Indicates whether a file is open.|
|[open](#open)|Opens a file.|
|[overflow](#overflow)|A protected virtual function that can be called when a new character is inserted into a full buffer.|
|[pbackfail](#pbackfail)|The protected virtual member function tries to put back an element into the input stream, then make it the current element (pointed to by the next pointer).|
|[seekoff](#seekoff)|The protected virtual member function tries to alter the current positions for the controlled streams.|
|[seekpos](#seekpos)|The protected virtual member function tries to alter the current positions for the controlled streams.|
|[setbuf](#setbuf)|The protected virtual member function performs an operation particular to each derived stream buffer.|
|[Swap](#swap)|Exchanges the content of this `basic_filebuf` for the content of the provided `basic_filebuf` parameter.|
|[sync](#sync)|Protected, virtual function tries to synchronize the controlled streams with any associated external streams.|
|[uflow](../standard-library/basic-streambuf-class.md#uflow)|Protected, virtual function to extract the current element from the input stream.|
|[underflow](#underflow)|Protected, virtual function to extract the current element from the input stream.|

## Requirements

**Header:** \<fstream>

**Namespace:** std

## <a name="basic_filebuf"></a>  basic_filebuf::basic_filebuf

Constructs an object of type `basic_filebuf`.

```cpp
basic_filebuf();

basic_filebuf(basic_filebuf&& right);
```

### Remarks

The first constructor stores a null pointer in all the pointers controlling the input buffer and the output buffer. It also stores a null pointer in the file pointer.

The second constructor initializes the object with the contents of `right`, treated as an rvalue reference.

## <a name="char_type"></a>  basic_filebuf::char_type

Associates a type name with the `Elem` template parameter.

```cpp
typedef Elem char_type;
```

## <a name="close"></a>  basic_filebuf::close

Closes a file.

```cpp
basic_filebuf<Elem, Tr> *close();
```

### Return Value

The member function returns a null pointer if the file pointer is a null pointer.

### Remarks

`close` calls `fclose`( **fp**). If that function returns a nonzero value, the function returns a null pointer. Otherwise, it returns **this** to indicate that the file was successfully closed.

For a wide stream, if any insertions have occurred since the stream was opened, or since the last call to `streampos`, the function calls [overflow](#overflow). It also inserts any sequence needed to restore the initial conversion state, by using the file conversion facet `fac` to call `fac.unshift` as needed. Each element `byte` of type **char** thus produced is written to the associated stream designated by the file pointer `fp` as if by successive calls of the form `fputc`( **byte**, **fp**). If the call to `fac.unshift` or any write fails, the function does not succeed.

### Example

The following sample assumes two files in the current directory: basic_filebuf_close.txt (contents is "testing") and iotest.txt (contents is "ssss").

```cpp
// basic_filebuf_close.cpp
// compile with: /EHsc
#include <fstream>
#include <iostream>

int main() {
   using namespace std;
   ifstream file;
   basic_ifstream <wchar_t> wfile;
   char c;
   // Open and close with a basic_filebuf
   file.rdbuf()->open( "basic_filebuf_close.txt", ios::in );
   file >> c;
   cout << c << endl;
   file.rdbuf( )->close( );

   // Open/close directly
   file.open( "iotest.txt" );
   file >> c;
   cout << c << endl;
   file.close( );

   // open a file with a wide character name
   wfile.open( L"iotest.txt" );

   // Open and close a nonexistent with a basic_filebuf
   file.rdbuf()->open( "ziotest.txt", ios::in );
   cout << file.fail() << endl;
   file.rdbuf( )->close( );

   // Open/close directly
   file.open( "ziotest.txt" );
   cout << file.fail() << endl;
   file.close( );
}
```

```Output
t
s
0
1
```

## <a name="int_type"></a>  basic_filebuf::int_type

Makes this type within basic_filebuf's scope equivalent to the type of the same name in the `Tr` scope.

```cpp
typedef typename traits_type::int_type int_type;
```

## <a name="is_open"></a>  basic_filebuf::is_open

Indicates whether a file is open.

```cpp
bool is_open() const;
```

### Return Value

**true** if the file pointer is not a null pointer.

### Example

```cpp
// basic_filebuf_is_open.cpp
// compile with: /EHsc
#include <fstream>
#include <iostream>

int main( )
{
   using namespace std;
   ifstream file;
   cout << boolalpha << file.rdbuf( )->is_open( ) << endl;

   file.open( "basic_filebuf_is_open.cpp" );
   cout << file.rdbuf( )->is_open( ) << endl;
}
```

```Output
false
true
```

## <a name="off_type"></a>  basic_filebuf::off_type

Makes this type within basic_filebuf's scope equivalent to the type of the same name in the `Tr` scope.

```cpp
typedef typename traits_type::off_type off_type;
```

## <a name="open"></a>  basic_filebuf::open

Opens a file.

```cpp
basic_filebuf<Elem, Tr> *open(
    const char* _Filename,
    ios_base::openmode _Mode,
    int _Prot = (int)ios_base::_Openprot);

basic_filebuf<Elem, Tr> *open(
    const char* _Filename,
    ios_base::openmode _Mode);

basic_filebuf<Elem, Tr> *open(
    const wchar_t* _Filename,
    ios_base::openmode _Mode,
    int _Prot = (int)ios_base::_Openprot);

basic_filebuf<Elem, Tr> *open(
    const wchar_t* _Filename,
    ios_base::openmode _Mode);
```

### Parameters

*_Filename*<br/>
The name of the file to open.

*_Mode*<br/>
One of the enumerations in [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

*_Prot*<br/>
The default file opening protection, equivalent to the *shflag* parameter in [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).

### Return Value

If the file pointer is a null pointer, the function returns a null pointer. Otherwise, it returns **this**.

### Remarks

The member function opens the file with filename *filename*, by calling [fopen](../c-runtime-library/reference/fopen-wfopen.md)( *filename*, **strmode**). `strmode` is determined from **mode &**~( [ate](../standard-library/ios-base-class.md#openmode) & &#124; [binary](../standard-library/ios-base-class.md#openmode)):

- `ios_base::in` becomes **"r"** (open existing file for reading).

- [ios_base::out](../standard-library/ios-base-class.md#fmtflags) or **ios_base::out &#124; ios_base::trunc** becomes **"w"** (truncate existing file or create for writing).

- **ios_base::out &#124; app** becomes **"a"** (open existing file for appending all writes).

- **ios_base::in &#124; ios_base::out** becomes **"r+"** (open existing file for reading and writing).

- **ios_base::in &#124; ios_base::out &#124; ios_base::trunc** becomes **"w+"** (truncate existing file or create for reading and writing).

- **ios_base::in &#124; ios_base::out &#124; ios_base::app** becomes **"a+"** (open existing file for reading and for appending all writes).

If **mode & ios_base::binary** is nonzero, the function appends `b` to `strmode` to open a binary stream instead of a text stream. It then stores the value returned by `fopen` in the file pointer `fp`. If **mode & ios_base::ate** is nonzero and the file pointer is not a null pointer, the function calls `fseek`( **fp**, 0, `SEEK_END`) to position the stream at end of file. If that positioning operation fails, the function calls [close](#close)( `fp`) and stores a null pointer in the file pointer.

If the file pointer is not a null pointer, the function determines the file conversion facet: `use_facet`< `codecvt`< **Elem**, `char`, **traits_type::**[state_type](../standard-library/char-traits-struct.md#state_type)> >( [getloc](../standard-library/basic-streambuf-class.md#getloc)), for use by [underflow](#underflow) and [overflow](#overflow).

If the file pointer is a null pointer, the function returns a null pointer. Otherwise, it returns **this**.

### Example

See [basic_filebuf::close](#close) for an example that uses `open`.

## <a name="op_eq"></a>  basic_filebuf::operator=

Assign the content of this stream buffer object. This is a move assignment involving an rvalue that does not leave a copy behind.

```cpp
basic_filebuf& operator=(basic_filebuf&& right);
```

### Parameters

*right*<br/>
An rvalue reference to a [basic_filebuf](../standard-library/basic-filebuf-class.md) object.

### Return Value

Returns *this.

### Remarks

The member operator replaces the contents of the object by using the contents of *right*, treated as an rvalue reference. For more information, see [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="overflow"></a>  basic_filebuf::overflow

Called when a new character is inserted into a full buffer.

```cpp
virtual int_type overflow(int_type _Meta = traits_type::eof);
```

### Parameters

*_Meta*<br/>
The character to insert into the buffer or `traits_type::eof`.

### Return Value

If the function cannot succeed, it returns `traits_type::eof`. Otherwise, it returns **traits_type::**[not_eof](../standard-library/char-traits-struct.md#not_eof)(_ *Meta*).

### Remarks

If *_Meta* **!= traits_type::**[eof](../standard-library/char-traits-struct.md#eof), the protected virtual member function endeavors to insert the element **ch = traits_type::**[to_char_type](../standard-library/char-traits-struct.md#to_char_type)(*_Meta*) into the output buffer. It can do so in various ways:

- If a write position is available, it can store the element into the write position and increment the next pointer for the output buffer.

- It can make a write position available by allocating new or additional storage for the output buffer.

- It can convert any pending output in the output buffer, followed by `ch`, by using the file conversion facet `fac` to call `fac.out` as needed. Each element `ch` of type *char* thus produced is written to the associated stream designated by the file pointer `fp` as if by successive calls of the form `fputc`( **ch**, **fp**). If any conversion or write fails, the function does not succeed.

## <a name="pbackfail"></a>  basic_filebuf::pbackfail

Tries to put back an element into the input stream, then make it the current element (pointed to by the next pointer).

```cpp
virtual int_type pbackfail(int_type _Meta = traits_type::eof);
```

### Parameters

*_Meta*<br/>
The character to insert into the buffer, or `traits_type::eof`.

### Return Value

If the function cannot succeed, it returns `traits_type::eof`. Otherwise, it returns **traits_type::**[not_eof](../standard-library/char-traits-struct.md#not_eof)(_ *Meta*).

### Remarks

The protected virtual member function puts back an element into the input buffer and then makes it the current element (pointed to by the next pointer). If _ *Meta* **== traits_type::**[eof](../standard-library/char-traits-struct.md#eof), the element to push back is effectively the one already in the stream before the current element. Otherwise, that element is replaced by **ch = traits_type::**[to_char_type](../standard-library/char-traits-struct.md#to_char_type)(\_ *Meta*). The function can put back an element in various ways:

- If a putback position is available, and the element stored there compares equal to `ch`, it can decrement the next pointer for the input buffer.

- If the function can make a `putback` position available, it can do so, set the next pointer to point at that position, and store `ch` in that position.

- If the function can push back an element onto the input stream, it can do so, such as by calling `ungetc` for an element of type **char**.

## <a name="pos_type"></a>  basic_filebuf::pos_type

Makes this type within basic_filebuf's scope equivalent to the type of the same name in the `Tr` scope.

```cpp
typedef typename traits_type::pos_type pos_type;
```

## <a name="seekoff"></a>  basic_filebuf::seekoff

Tries to alter the current positions for the controlled streams.

```cpp
virtual pos_type seekoff(off_type _Off,
    ios_base::seekdir _Way,
    ios_base::openmode _Which = ios_base::in | ios_base::out);
```

### Parameters

*_Off*<br/>
The position to seek for relative to *_Way*.

*_Way*<br/>
The starting point for offset operations. See [seekdir](../standard-library/ios-base-class.md#seekdir) for possible values.

*_Which*<br/>
Specifies the mode for the pointer position. The default is to allow you to modify the read and write positions.

### Return Value

Returns the new position or an invalid stream position.

### Remarks

The protected virtual member function endeavors to alter the current positions for the controlled streams. For an object of class [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`>, a stream position can be represented by an object of type `fpos_t`, which stores an offset and any state information needed to parse a wide stream. Offset zero designates the first element of the stream. (An object of type [pos_type](../standard-library/basic-streambuf-class.md#pos_type) stores at least an `fpos_t` object.)

For a file opened for both reading and writing, both the input and output streams are positioned in tandem. To switch between inserting and extracting, you must call either [pubseekoff](../standard-library/basic-streambuf-class.md#pubseekoff) or [pubseekpos](../standard-library/basic-streambuf-class.md#pubseekpos). Calls to `pubseekoff` (and hence to `seekoff`) have various limitations for [text streams](../c-runtime-library/text-and-binary-streams.md), [binary streams](../c-runtime-library/text-and-binary-streams.md), and [wide streams](../c-runtime-library/byte-and-wide-streams.md).

If the file pointer `fp` is a null pointer, the function fails. Otherwise, it endeavors to alter the stream position by calling `fseek`( **fp**, `_Off`, `_Way`). If that function succeeds and the resulting position `fposn` can be determined by calling `fgetpos`( **fp**, **&fposn**), the function succeeds. If the function succeeds, it returns a value of type `pos_type` containing `fposn`. Otherwise, it returns an invalid stream position.

## <a name="seekpos"></a>  basic_filebuf::seekpos

Tries to alter the current positions for the controlled streams.

```cpp
virtual pos_type seekpos(pos_type _Sp, ios_base::openmode _Which = ios_base::in | ios_base::out);
```

### Parameters

*_Sp*<br/>
The position to seek for.

*_Which*<br/>
Specifies the mode for the pointer position. The default is to allow you to modify the read and write positions.

### Return Value

If the file pointer `fp` is a null pointer, the function fails. Otherwise, it endeavors to alter the stream position by calling `fsetpos`( **fp**, **&fposn**), where `fposn` is the `fpos_t` object stored in `pos`. If that function succeeds, the function returns `pos`. Otherwise, it returns an invalid stream position. To determine if the stream position is invalid, compare the return value with `pos_type(off_type(-1))`.

### Remarks

The protected virtual member function endeavors to alter the current positions for the controlled streams. For an object of class [basic_filebuf](../standard-library/basic-filebuf-class.md)\< **Elem**, **Tr**>, a stream position can be represented by an object of type `fpos_t`, which stores an offset and any state information needed to parse a wide stream. Offset zero designates the first element of the stream. (An object of type `pos_type` stores at least an `fpos_t` object.)

For a file opened for both reading and writing, both the input and output streams are positioned in tandem. To switch between inserting and extracting, you must call either [pubseekoff](../standard-library/basic-streambuf-class.md#pubseekoff) or [pubseekpos](../standard-library/basic-streambuf-class.md#pubseekpos). Calls to `pubseekoff` (and hence to `seekoff`) have various limitations for text streams, binary streams, and wide streams.

For a wide stream, if any insertions have occurred since the stream was opened, or since the last call to `streampos`, the function calls [overflow](#overflow). It also inserts any sequence needed to restore the initial conversion state, by using the file conversion facet `fac` to call **fac**`.unshift` as needed. Each element `byte` of type **char** thus produced is written to the associated stream designated by the file pointer `fp` as if by successive calls of the form `fputc`( **byte**, **fp**). If the call to `fac.unshift` or any write fails, the function does not succeed.

## <a name="setbuf"></a>  basic_filebuf::setbuf

Performs an operation particular to each derived stream buffer.

```cpp
virtual basic_streambuf<Elem, Tr> *setbuf(
    char_type* _Buffer,
    streamsize count);
```

### Parameters

*_Buffer*<br/>
Pointer to a buffer.

*count*<br/>
Size of the buffer.

### Return Value

The protected member function returns zero if the file pointer `fp` is a null pointer.

### Remarks

`setbuf` calls `setvbuf`( **fp**, ( `char` \*) `_Buffer`, `_IOFBF`, `count` \* `sizeof` ( **Elem**) ) to offer the array of `count` elements beginning at _ *Buffer* as a buffer for the stream. If that function returns a nonzero value, the function returns a null pointer. Otherwise, it returns **this** to signal success.

## <a name="swap"></a>  basic_filebuf::swap

Exchanges the contents of this `basic_filebuf` for the contents of the provided `basic_filebuf`.

```cpp
void swap(basic_filebuf& right);
```

### Parameters

*right*<br/>
An `lvalue` reference to another `basic_filebuf`.

## <a name="sync"></a>  basic_filebuf::sync

Tries to synchronize the controlled streams with any associated external streams.

```cpp
virtual int sync();
```

### Return Value

Returns zero if the file pointer `fp` is a null pointer. Otherwise, it returns zero only if calls to both [overflow](#overflow) and `fflush`( **fp**) succeed in flushing any pending output to the stream.

## <a name="traits_type"></a>  basic_filebuf::traits_type

Associates a type name with the `Tr` template parameter.

```cpp
typedef Tr traits_type;
```

## <a name="underflow"></a>  basic_filebuf::underflow

Extracts the current element from the input stream.

```cpp
virtual int_type underflow();
```

### Return Value

If the function cannot succeed, it returns **traits_type::**[eof](../standard-library/char-traits-struct.md#eof). Otherwise, it returns `ch`, converted as described in the Remarks section.

### Remarks

The protected virtual member function endeavors to extract the current element `ch` from the input stream, and return the element as **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#to_int_type)(`ch`). It can do so in various ways:

- If a read position is available, it takes `ch` as the element stored in the read position and advances the next pointer for the input buffer.

- It can read one or more elements of type **char**, as if by successive calls of the form `fgetc`(**fp**), and convert them to an element **ch** of type `Elem` by using the file conversion facet fac to call `fac.in` as needed. If any read or conversion fails, the function does not succeed.

## See also

[\<fstream>](../standard-library/fstream.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[iostream Programming](../standard-library/iostream-programming.md)<br/>
[iostreams Conventions](../standard-library/iostreams-conventions.md)<br/>
