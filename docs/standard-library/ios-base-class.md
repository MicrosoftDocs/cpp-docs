---
title: "ios_base Class"
description: "API reference for the Microsoft Visual C++ standard library `ios_base` class"
ms.date: 06/15/2022
f1_keywords: ["xiosbase/std::ios_base", "ios/std::ios_base::event_callback", "xiosbase/std::ios_base::fmtflags", "xiosbase/std::ios_base::iostate", "xiosbase/std::ios_base::openmode", "xiosbase/std::ios_base::seekdir", "xiosbase/std::ios_base::event", "xiosbase/std::ios_base::adjustfield", "xiosbase/std::ios_base::app", "xiosbase/std::ios_base::ate", "xiosbase/std::ios_base::badbit", "xiosbase/std::ios_base::basefield", "xiosbase/std::ios_base::beg", "xiosbase/std::ios_base::binary", "xiosbase/std::ios_base::boolalpha", "xiosbase/std::ios_base::cur", "xiosbase/std::ios_base::dec", "xiosbase/std::ios_base::end", "xiosbase/std::ios_base::eofbit", "xiosbase/std::ios_base::failbit", "xiosbase/std::ios_base::fixed", "xiosbase/std::ios_base::floatfield", "xiosbase/std::ios_base::goodbit", "xiosbase/std::ios_base::hex", "xiosbase/std::ios_base::in", "xiosbase/std::ios_base::internal", "xiosbase/std::ios_base::left", "xiosbase/std::ios_base::oct", "xiosbase/std::ios_base::out", "xiosbase/std::ios_base::right", "xiosbase/std::ios_base::scientific", "xiosbase/std::ios_base::showbase", "xiosbase/std::ios_base::showpoint", "xiosbase/std::ios_base::showpos", "xiosbase/std::ios_base::skipws", "xiosbase/std::ios_base::trunc", "xiosbase/std::ios_base::unitbuf", "xiosbase/std::ios_base::uppercase", "xiosbase/std::ios_base::failure", "xiosbase/std::ios_base::flags", "xiosbase/std::ios_base::getloc", "xiosbase/std::ios_base::imbue", "xiosbase/std::ios_base::Init", "xiosbase/std::ios_base::iword", "xiosbase/std::ios_base::precision", "xiosbase/std::ios_base::pword", "ios/std::ios_base::register_callback", "xiosbase/std::ios_base::setf", "xiosbase/std::ios_base::sync_with_stdio", "xiosbase/std::ios_base::unsetf", "xiosbase/std::ios_base::width", "xiosbase/std::ios_base::xalloc"]
helpviewer_keywords: ["std::ios_base [C++]", "std::ios_base [C++], event_callback", "std::ios_base [C++], fmtflags", "std::ios_base [C++], iostate", "std::ios_base [C++], openmode", "std::ios_base [C++], seekdir", "std::ios_base [C++], event", "std::ios_base [C++], adjustfield", "std::ios_base [C++], app", "std::ios_base [C++], ate", "std::ios_base [C++], badbit", "std::ios_base [C++], basefield", "std::ios_base [C++], beg", "std::ios_base [C++], binary", "std::ios_base [C++], boolalpha", "std::ios_base [C++], cur", "std::ios_base [C++], dec", "std::ios_base [C++], end", "std::ios_base [C++], eofbit", "std::ios_base [C++], failbit", "std::ios_base [C++], fixed", "std::ios_base [C++], floatfield", "std::ios_base [C++], goodbit", "std::ios_base [C++], hex", "std::ios_base [C++], in", "std::ios_base [C++], internal", "std::ios_base [C++], left", "std::ios_base [C++], oct", "std::ios_base [C++], out", "std::ios_base [C++], right", "std::ios_base [C++], scientific", "std::ios_base [C++], showbase", "std::ios_base [C++], showpoint", "std::ios_base [C++], showpos", "std::ios_base [C++], skipws", "std::ios_base [C++], trunc", "std::ios_base [C++], unitbuf", "std::ios_base [C++], uppercase", "std::ios_base [C++], failure", "std::ios_base [C++], flags", "std::ios_base [C++], getloc", "std::ios_base [C++], imbue", "std::ios_base [C++], Init", "std::ios_base [C++], iword", "std::ios_base [C++], precision", "std::ios_base [C++], pword", "std::ios_base [C++], register_callback", "std::ios_base [C++], setf", "std::ios_base [C++], sync_with_stdio", "std::ios_base [C++], unsetf", "std::ios_base [C++], width", "std::ios_base [C++], xalloc"]
ms.custom: devdivchpfy22
---

# `ios_base` Class

The class describes the storage and member functions common to both input and output streams that don't depend on the template parameters. (The class template [`basic_ios`](../standard-library/basic-ios-class.md) describes what is common and is dependent on template parameters.)

An object of class `ios_base` stores formatting information, which consists of:

- Format flags in an object of type [`fmtflags`](#fmtflags).

- An exception mask in an object of type [`iostate`](#iostate).

- A field width in an object of type `int`.

- A display precision in an object of type `int`.

- A `locale` object in an object of type `locale`.

- Two extensible arrays, with elements of type `long` and `void` pointer.

An object of class `ios_base` also stores stream state information, in an object of type [`iostate`](#iostate), and a callback stack.

## Members

### Constructors

|Name|Description|
|-|-|
|[`ios_base`](#ios_base)|Constructs `ios_base` objects.|

### Typedefs

|Name|Description|
|-|-|
|[`event_callback`](#event_callback)|Describes a function passed to [`register_call`](#register_callback).|
|[`fmtflags`](#fmtflags)|Constants to specify the appearance of output.|
|[`iostate`](#iostate)|Defines constants describing the state of a stream.|
|[`openmode`](#openmode)|Describes how to interact with a stream.|
|[`seekdir`](#seekdir)|Specifies starting point for offset operations.|

### Enums

|Name|Description|
|-|-|
|[`event`](#event)|Specifies event types.|

### Constants

|Name|Description|
|-|-|
|[`adjustfield`](#fmtflags)|A bitmask defined as `internal` \| `left` \| `right`.|
|[`app`](#openmode)|Specifies seeking to the end of a stream before each insertion.|
|[`ate`](#openmode)|Specifies seeking to the end of a stream when its controlling object is first created.|
|[`badbit`](#iostate)|Records a loss of integrity of the stream buffer.|
|[`basefield`](#fmtflags)|A bitmask defined as `dec` \| `hex` \| `oct`.|
|[`beg`](#seekdir)|Specifies seeking relative to the beginning of a sequence.|
|[`binary`](#openmode)|Specifies that a file should be read as a binary stream, rather than as a text stream.|
|[`boolalpha`](#fmtflags)|Specifies insertion or extraction of objects of type `bool` as names (such as `true` and `false`) rather than as numeric values.|
|[`cur`](#seekdir)|Specifies seeking relative to the current position within a sequence.|
|[`dec`](#fmtflags)|Specifies insertion or extraction of integer values in decimal format.|
|[`end`](#seekdir)|Specifies seeking relative to the end of a sequence.|
|[`eofbit`](#iostate)|Records end-of-file while extracting from a stream.|
|[`failbit`](#iostate)|Records a failure to extract a valid field from a stream.|
|[`fixed`](#fmtflags)|Specifies insertion of floating-point values in fixed-point format (with no exponent field).|
|[`floatfield`](#fmtflags)|A bitmask defined as `fixed` \| `scientific`|
|[`goodbit`](#iostate)|All state bits clear.|
|[`hex`](#fmtflags)|Specifies insertion or extraction of integer values in hexadecimal format.|
|[`in`](#openmode)|Specifies extraction from a stream.|
|[`internal`](#fmtflags)|Pads to a field width by inserting fill characters at a point internal to a generated numeric field.|
|[`left`](#fmtflags)|Specifies left justification.|
|[`oct`](#fmtflags)|Specifies insertion or extraction of integer values in octal format.|
|[`out`](#openmode)|Specifies insertion to a stream.|
|[`right`](#fmtflags)|Specifies right justification.|
|[`scientific`](#fmtflags)|Specifies insertion of floating-point values in scientific format (with an exponent field).|
|[`showbase`](#fmtflags)|Specifies insertion of a prefix that reveals the base of a generated integer field.|
|[`showpoint`](#fmtflags)|Specifies unconditional insertion of a decimal point in a generated floating-point field.|
|[`showpos`](#fmtflags)|Specifies insertion of a plus sign in a nonnegative generated numeric field.|
|[`skipws`](#fmtflags)|Specifies skipping leading white space before certain extractions.|
|[`trunc`](#openmode)|Specifies deleting contents of an existing file when its controlling object is created.|
|[`unitbuf`](#fmtflags)|Causes output to be flushed after each insertion.|
|[`uppercase`](#fmtflags)|Specifies insertion of uppercase equivalents of lowercase letters in certain insertions.|

### Functions

|Name|Description|
|-|-|
|[`failure`](#failure)|The member class serves as the base class for all exceptions thrown by the member function [clear](../standard-library/basic-ios-class.md#clear) in class template [`basic_ios`](../standard-library/basic-ios-class.md).|
|[`flags`](#flags)|Sets or returns the current flag settings.|
|[`getloc`](#getloc)|Returns the stored `locale` object.|
|[`imbue`](#imbue)|Changes the locale.|
|[`Init`](#init)|Creates the standard `iostream` objects when constructed.|
|[`iword`](#iword)|Assigns a value to be stored as an `iword`.|
|[`precision`](#precision)|Specifies the number of digits to display in a floating-point number.|
|[`pword`](#pword)|Assigns a value to be stored as a `pword`.|
|[`register_callback`](#register_callback)|Specifies a callback function.|
|[`setf`](#setf)|Sets the specified flags.|
|[`sync_with_stdio`](#sync_with_stdio)|Ensures that `iostream` and C run-time library operations occur in the order that they appear in source code.|
|[`unsetf`](#unsetf)|Causes the specified flags to be off.|
|[`width`](#width)|Sets the length of the output stream.|
|[`xalloc`](#xalloc)|Specifies that a variable shall be part of the stream.|

### Operators

|Name|Description|
|-|-|
|[`operator=`](#op_eq)|The assignment operator for `ios_base` objects.|

## Requirements

**Header:** `<ios>`

**Namespace:** `std`

## <a name="event"></a> `event`

Specifies event types.

```cpp
enum event {
    erase_event,
    imbue_event,
    copyfmt_event};
```

### Remarks

The type is an enumerated type that describes an object that can store the callback event used as an argument to a function registered with [`register_callback`](#register_callback). The distinct event values are:

- `copyfmt_event`, to identify a callback that occurs near the end of a call to [`copyfmt`](../standard-library/basic-ios-class.md#copyfmt), just before the [exception mask](../standard-library/ios-base-class.md) is copied.

- `erase_event`, to identify a callback that occurs at the beginning of a call to [`copyfmt`](../standard-library/basic-ios-class.md#copyfmt), or at the beginning of a call to the destructor for `*this`.

- `imbue_event`, to identify a callback that occurs at the end of a call to [`imbue`](#imbue), just before the function returns.

### Example

See [`register_callback`](#register_callback) for an example.

## <a name="event_callback"></a> `event_callback`

Describes a function passed to [`register_call`](#register_callback).

```cpp
typedef void (__cdecl *event_callback)(
    event _E,
    ios_base& _Base,
    int _I);
```

### Parameters

*`_E`*\
The [`event`](#event).

*`_Base`*\
The stream in which the event was called.

*`_I`*\
A user-defined number.

### Remarks

The type describes a pointer to a function that can be registered with [`register_callback`](#register_callback). This type of function must not throw an exception.

### Example

See [`register_call`](#register_callback) for an example that uses `event_callback`.

## <a name="failure"></a> `failure`

The class `failure` defines the base class for the types of all objects thrown as exceptions, by functions in the `iostreams` library, to report errors detected during stream buffer operations.

```cpp
namespace std {
    class failure : public system_error {
    public:
        explicit failure(
            const string& _Message,
            const error_code& _Code = io_errc::stream);

        explicit failure(
            const char* str,
            const error_code& _Code = io_errc::stream);
    };
}
```

### Remarks

The value returned by `what()` is a copy of `_Message`, possibly augmented with a test based on `_Code`. If `_Code` isn't specified, the default value is `make_error_code(io_errc::stream)`.

### Example

```cpp
// ios_base_failure.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main ( )
{
    using namespace std;
    fstream file;
    file.exceptions(ios::failbit);
    try
    {
        file.open( "rm.txt", ios_base::in );
        // Opens nonexistent file for reading
    }
    catch( ios_base::failure f )
    {
        cout << "Caught an exception: " << f.what() << endl;
    }
}
```

```Output
Caught an exception: ios_base::failbit set
```

## <a name="flags"></a> `flags`

Sets or returns the current flag settings.

```cpp
fmtflags flags() const;
fmtflags flags(fmtflags fmtfl);
```

### Parameters

*`fmtfl`*\
The new `fmtflags` setting.

### Return Value

The previous or current `fmtflags` setting.

### Remarks

See [`ios_base::fmtflags`](#fmtflags) for a list of the flags.

The first member function returns the stored format flags. The second member function stores *`fmtfl`* in the format flags and returns its previous stored value.

### Example

```cpp
// ios_base_flags.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main ( )
{
    using namespace std;
    cout << cout.flags( ) << endl;
    cout.flags( ios::dec | ios::boolalpha );
    cout << cout.flags( );
}
```

```Output
513
16896
```

## <a name="fmtflags"></a> `fmtflags`

Constants to specify the appearance of output.

```cpp
class ios_base {
public:
   typedef implementation-defined-bitmask-type fmtflags;
   static const fmtflags boolalpha;
   static const fmtflags dec;
   static const fmtflags fixed;
   static const fmtflags hex;
   static const fmtflags internal;
   static const fmtflags left;
   static const fmtflags oct;
   static const fmtflags right;
   static const fmtflags scientific;
   static const fmtflags showbase;
   static const fmtflags showpoint;
   static const fmtflags showpos;
   static const fmtflags skipws;
   static const fmtflags unitbuf;
   static const fmtflags uppercase;
   static const fmtflags adjustfield;
   static const fmtflags basefield;
   static const fmtflags floatfield;
   // ...
};
```

### Remarks

Supports the manipulators in [`ios`](../standard-library/ios.md).

The type is a bitmask type that describes an object that can store format flags. The distinct flag values (elements) are:

- `dec`, to insert or extract integer values in decimal format.

- `hex`, to insert or extract integer values in hexadecimal format.

- `oct`, to insert or extract integer values in octal format.

- `showbase`, to insert a prefix that reveals the base of a generated integer field.

- `internal`, to pad to a field width as needed by inserting fill characters at a point internal to a generated numeric field. (For information on setting the field width, see [`setw`](../standard-library/iomanip-functions.md#setw)).

- `left`, to pad to a field width as needed by inserting fill characters at the end of a generated field (left justification).

- `right`, to pad to a field width as needed by inserting fill characters at the beginning of a generated field (right justification).

- `boolalpha`, to insert or extract objects of type `bool` as names (such as `true` and `false`) rather than as numeric values.

- `fixed`, to insert floating-point values in fixed-point format (with no exponent field).

- `scientific`, to insert floating-point values in scientific format (with an exponent field).

- `showpoint`, to insert a decimal point unconditionally in a generated floating-point field.

- `showpos`, to insert a plus sign in a nonnegative generated numeric field.

- `skipws`, to skip leading white space before certain extractions.

- `unitbuf`, to flush output after each insertion.

- `uppercase`, to insert uppercase equivalents of lowercase letters in certain insertions.

In addition, several useful values are:

- `adjustfield`, a bitmask defined as `internal` \| `left` \| `right`

- `basefield`, defined as `dec` \| `hex` \| `oct`

- `floatfield`, defined as `fixed` \| `scientific`

For examples of functions that modify these format flags, see [`<iomanip>`](../standard-library/iomanip.md).

## <a name="getloc"></a> `getloc`

Returns the stored `locale` object.

```cpp
locale getloc() const;
```

### Return Value

The stored `locale` object.

### Example

```cpp
// ios_base_getlock.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
    using namespace std;
    cout << cout.getloc( ).name( ).c_str( ) << endl;
}
```

```Output
C
```

## <a name="imbue"></a> `imbue`

Changes the locale.

```cpp
locale imbue(const locale& _Loc);
```

### Parameters

*`_Loc`*\
The new locale setting.

### Return Value

The previous locale.

### Remarks

The member function stores *`_Loc`* in the `locale` object and then reports the callback event and `imbue_event`. It returns the previous stored value.

### Example

See [`basic_ios::imbue`](../standard-library/basic-ios-class.md#imbue) for a sample.

## <a name="init"></a> `Init`

Creates the standard `iostream` objects when constructed.

```cpp
class Init { };
```

### Remarks

The nested class describes an object whose construction ensures that the standard `iostream` objects are properly constructed, even before the execution of a constructor for an arbitrary static object.

## <a name="ios_base"></a> `ios_base`

Constructs `ios_base` objects.

```cpp
ios_base();
```

### Remarks

The (protected) constructor does nothing. A later call to `basic_ios::`[init](../standard-library/basic-ios-class.md#init) must initialize the object before it can be safely destroyed. Thus, the only safe use for class `ios_base` is as a base class for class template [`basic_ios`](../standard-library/basic-ios-class.md).

## <a name="iostate"></a> `iostate`

The type of constants that describe the state of a stream.

```cpp
class ios_base {
public:
   typedef implementation-defined-bitmask-type iostate;
   static const iostate badbit;
   static const iostate eofbit;
   static const iostate failbit;
   static const iostate goodbit;
   // ...
};
```

### Remarks

The type is a bitmask type that describes an object that can store stream state information. The distinct flag values (elements) are:

- `badbit`, to record a loss of integrity of the stream buffer.
- `eofbit`, to record end-of-file while extracting from a stream.
- `failbit`, to record a failure to extract a valid field from a stream.

In addition, a useful value is `goodbit`, where none of the previously mentioned bits are set (`goodbit` is guaranteed to be zero).

## <a name="iword"></a> `iword`

Assigns a value to be stored as an `iword`.

```cpp
long& iword(int idx);
```

### Parameters

*`idx`*\
The index of the value to store as an `iword`.

### Remarks

The member function returns a reference to element *idx* of the extensible array with elements of type `long`. All elements are effectively present and initially store the value zero. The returned reference is invalid after the next call to `iword` for the object, after the object is altered by a call to `basic_ios::`[`copyfmt`](../standard-library/basic-ios-class.md#copyfmt), or after the object is destroyed.

If *`idx`* is negative or if unique storage is unavailable for the element, the function calls [`setstate`](../standard-library/basic-ios-class.md#setstate)`(badbit)` and returns a reference that might not be unique.

To obtain a unique index, for use across all objects of type `ios_base`, call [`xalloc`](#xalloc).

### Example

See [`xalloc`](#xalloc) for a sample of how to use `iword`.

## <a name="openmode"></a> `openmode`

Describes how to interact with a stream.

```cpp
class ios_base {
public:
   typedef implementation-defined-bitmask-type openmode;
   static const openmode  in;
   static const openmode  out;
   static const openmode  ate;
   static const openmode  app;
   static const openmode  trunc;
   static const openmode  binary;
   // ...
};
```

### Remarks

The opening mode for several `iostream` objects. The flag values are:

| Constant | Effect  |
|---------|---------|
| `app` | Seek to the end of the stream before each write |
| `ate`  | Seek to the end of the stream immediately after open |
| `binary`| Open in binary mode. (See [`fopen`](../c-runtime-library/reference/fopen-wfopen.md) for a description of binary mode.)|
| `in` |   Open for reading |
| `out` | Open for writing |
| `trunc` | Delete the contents of the file after open |

### Example

```cpp
// ios_base_openmode.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main ( )
{
    using namespace std;
    fstream file;
    file.open( "rm.txt", ios_base::out | ios_base::trunc );

    file << "testing";
}
```

## <a name="op_eq"></a> `operator=`

The assignment operator for `ios_base` objects.

```cpp
ios_base& operator=(const ios_base& right);
```

### Parameters

*`right`*\
An object of type `ios_base`.

### Return Value

The object being assigned to.

### Remarks

The operator copies the stored formatting information, making a new copy of any extensible arrays. It then returns `*this`. The callback stack isn't copied.

This operator is only used by classes derived from `ios_base`.

## <a name="precision"></a> `precision`

Specifies the number of digits to display in a floating-point number.

```cpp
streamsize precision() const;
streamsize precision(streamsize _Prec);
```

### Parameters

*`_Prec`*\
The number of significant digits to display, or the number of digits after the decimal point in fixed notation.

### Return Value

The first member function returns the stored [display precision](../standard-library/ios-base-class.md). The second member function stores *`_Prec`* in the display precision and returns its previous stored value.

### Remarks

Floating-point numbers are displayed in fixed notation with [`fixed`](../standard-library/ios-functions.md#fixed).

### Example

```cpp
// ios_base_precision.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
    using namespace std;
    float i = 31.31234F;

    cout.precision( 3 );
    cout << i << endl;          // display three significant digits
    cout << fixed << i << endl; // display three digits after decimal
                                // point
}
```

```Output
31.3
31.312
```

## <a name="pword"></a> `pword`

Assigns a value to be stored as a `pword`.

```cpp
void *& pword(int index);
```

### Parameters

*`index`*\
The index of the value to store as a `pword`.

### Remarks

The member function returns a reference to element *index* of the extensible array with elements of type `void` pointer. All elements are effectively present and initially store the null pointer. The returned reference is invalid after the next call to `pword` for the object, after the object is altered by a call to `basic_ios::`[`copyfmt`](../standard-library/basic-ios-class.md#copyfmt), or after the object is destroyed.

If *index* is negative, or if unique storage is unavailable for the element, the function calls [`setstate`](../standard-library/basic-ios-class.md#setstate)`(badbit)` and returns a reference that might not be unique.

To obtain a unique index, for use across all objects of type `ios_base`, call [`xalloc`](#xalloc).

### Example

See [`xalloc`](#xalloc) for an example of using `pword`.

## <a name="register_callback"></a> `register_callback`

Specifies a callback function.

```cpp
void register_callback(
    event_callback pfn, int idx);
```

### Parameters

*`pfn`*\
Pointer to the callback function.

*`idx`*\
A user-defined number.

### Remarks

The member function pushes the pair `{pfn, idx}` onto the stored callback stack [callback stack](../standard-library/ios-base-class.md). When a callback event **ev** is reported, the functions are called, in reverse order of registry, by the expression `(*pfn)(ev, *this, idx)`.

### Example

```cpp
// ios_base_register_callback.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

using namespace std;

void callback1( ios_base::event e, ios_base& stream, int arg )
{
    cout << "in callback1" << endl;
    switch ( e )
    {
    case ios_base::erase_event:
        cout << "an erase event" << endl;
        break;
    case ios_base::imbue_event:
        cout << "an imbue event" << endl;
        break;
    case ios_base::copyfmt_event:
        cout << "an copyfmt event" << endl;
        break;
    };
}

void callback2( ios_base::event e, ios_base& stream, int arg )
{
    cout << "in callback2" << endl;
    switch ( e )
    {
    case ios_base::erase_event:
        cout << "an erase event" << endl;
        break;
    case ios_base::imbue_event:
        cout << "an imbue event" << endl;
        break;
    case ios_base::copyfmt_event:
        cout << "an copyfmt event" << endl;
        break;
    };
}

int main( )
{
    // Make sure the imbue will not throw an exception
    // assert( setlocale( LC_ALL, "german" )!=NULL );

    cout.register_callback( callback1, 0 );
    cin.register_callback( callback2, 0 );

    try
    {
        // If no exception because the locale's not found,
        // generate an imbue_event on callback1
        cout.imbue(locale("german"));
    }
    catch(...)
    {
        cout << "exception" << endl;
    }

    // This will
    // (1) erase_event on callback1
    // (2) copyfmt_event on callback2
    cout.copyfmt(cin);

    // We get two erase events from callback2 at the end because
    // both cin and cout have callback2 registered when cin and cout
    // are destroyed at the end of program.
}
```

```Output
in callback1
an imbue event
in callback1
an erase event
in callback2
an copyfmt event
in callback2
an erase event
in callback2
an erase event
```

## <a name="seekdir"></a> `seekdir`

Specifies starting point for offset operations.

```cpp
namespace std {
    class ios_base {
    public:
        typedef implementation-defined-enumerated-type seekdir;
        static const seekdir beg;
        static const seekdir cur;
        static const seekdir end;
        // ...
    };
}
```

### Remarks

The type is an enumerated type that describes an object that can store the seek mode used as an argument to the member functions of several `iostream` classes. The distinct flag values are:

- `beg`,
    to seek (alter the current read or write position) relative to the beginning of a sequence (array, stream, or file).

- `cur`,
    to seek relative to the current position within a sequence.

- `end`,
    to seek relative to the end of a sequence.

### Example

```cpp
// ios_base_seekdir.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main ( )
{
    using namespace std;
    fstream file;
    file.open( "rm.txt", ios_base::out | ios_base::trunc );

    file << "testing";
    file.seekp( 0, ios_base::beg );
    file << "a";
    file.seekp( 0, ios_base::end );
    file << "a";
}
```

## <a name="setf"></a> `setf`

Sets the specified flags.

```cpp
fmtflags setf(
    fmtflags _Mask
);
fmtflags setf(
    fmtflags _Mask,
    fmtflags _Unset
);
```

### Parameters

*`_Mask`*\
The flags to turn on.

*`_Unset`*\
The flags to turn off.

### Return Value

The previous format flags

### Remarks

The first member function effectively calls [`flags(_Mask | _Flags)`](#flags) (set selected bits) and then returns the previous format flags. The second member function effectively calls `flags(_Mask & fmtfl, flags & ~_Mask)` (replace selected bits under a mask) and then returns the previous format flags.

### Example

```cpp
// ios_base_setf.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
    using namespace std;
    int i = 10;
    cout << i << endl;

    cout.unsetf( ios_base::dec );
    cout.setf( ios_base::hex );
    cout << i << endl;

    cout.setf( ios_base::dec );
    cout << i << endl;
    cout.setf( ios_base::hex, ios_base::dec );
    cout << i << endl;
}
```

## <a name="sync_with_stdio"></a> `sync_with_stdio`

Ensures that `iostream` and C run-time library operations occur in the order that they appear in source code.

```cpp
static bool sync_with_stdio(
   bool _Sync = true
);
```

### Parameters

*`_Sync`*\
Whether all streams are in sync with `stdio`.

### Return Value

Previous setting for this function.

### Remarks

The static member function stores a `stdio` sync flag, which is initially `true`. When `true`, this flag ensures that operations on the same file are properly synchronized between the [`iostreams`](../standard-library/iostreams-conventions.md) functions and functions defined in the C++ Standard Library. Otherwise, synchronization may or may not be guaranteed, but performance may be improved. The function stores *`_Sync`* in the `stdio` sync flag and returns its previous stored value. You can call it reliably only before performing any operations on the standard streams.

## <a name="unsetf"></a> `unsetf`

Turns off the specified flags.

```cpp
void unsetf(
   fmtflags _Mask
);
```

### Parameters

*`_Mask`*\
The flags that you want to turn off.

### Remarks

The member function effectively calls [`flags(~_Mask & flags)`](#flags) (clear selected bits).

### Example

See [`ios_base::setf`](#setf) for a sample of using `unsetf`.

## <a name="width"></a> `width`

Sets the length of the output stream.

```cpp
streamsize width( ) const;
streamsize width(
   streamsize _Wide
);
```

### Parameters

*`_Wide`*\
The desired size of the output stream.

### Return Value

The current width setting.

### Remarks

The first member function returns the stored field width. The second member function stores *`_Wide`* in the field width and returns its previous stored value.

### Example

```cpp
// ios_base_width.cpp
// compile with: /EHsc
#include <iostream>

int main( ) {
    using namespace std;

    cout.width( 20 );
    cout << cout.width( ) << endl;
    cout << cout.width( ) << endl;
}
```

```Output
20
0
```

## <a name="xalloc"></a> `xalloc`

Specifies that a variable is part of the stream.

```cpp
static int xalloc( );
```

### Return Value

The static member function returns a stored static value, which it increments on each call.

### Remarks

You can use the return value as a unique index argument when calling the member functions [`iword`](#iword) or [`pword`](#pword).

### Example

```cpp
// ios_base_xalloc.cpp
// compile with: /EHsc
// Lets you store user-defined information.
// iword, jword, xalloc
#include <iostream>

int main( )
{
    using namespace std;

    static const int i = ios_base::xalloc();
    static const int j = ios_base::xalloc();
    cout.iword( i ) = 11;
    cin.iword( i ) = 13;
    cin.pword( j ) = "testing";
    cout << cout.iword( i ) << endl;
    cout << cin.iword( i ) << endl;
    cout << ( char * )cin.pword( j ) << endl;
}
```

```Output
11
13
testing
```

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
