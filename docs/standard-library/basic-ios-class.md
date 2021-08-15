---
description: "Learn more about: basic_ios Class"
title: "basic_ios Class"
ms.date: "11/04/2016"
f1_keywords: ["ios/std::basic_ios", "ios/std::basic_ios::char_type", "ios/std::basic_ios::int_type", "ios/std::basic_ios::off_type", "ios/std::basic_ios::pos_type", "ios/std::basic_ios::traits_type", "ios/std::basic_ios::bad", "ios/std::basic_ios::clear", "ios/std::basic_ios::copyfmt", "ios/std::basic_ios::eof", "ios/std::basic_ios::exceptions", "ios/std::basic_ios::fail", "ios/std::basic_ios::fill", "ios/std::basic_ios::good", "ios/std::basic_ios::imbue", "ios/std::basic_ios::init", "ios/std::basic_ios::move", "ios/std::basic_ios::narrow", "ios/std::basic_ios::rdbuf", "ios/std::basic_ios::rdstate", "ios/std::basic_ios::set_rdbuf", "ios/std::basic_ios::setstate", "ios/std::basic_ios::swap", "ios/std::basic_ios::tie", "ios/std::basic_ios::widen", "ios/std::basic_ios::explicit operator bool"]
helpviewer_keywords: ["std::basic_ios [C++]", "std::basic_ios [C++], char_type", "std::basic_ios [C++], int_type", "std::basic_ios [C++], off_type", "std::basic_ios [C++], pos_type", "std::basic_ios [C++], traits_type", "std::basic_ios [C++], bad", "std::basic_ios [C++], clear", "std::basic_ios [C++], copyfmt", "std::basic_ios [C++], eof", "std::basic_ios [C++], exceptions", "std::basic_ios [C++], fail", "std::basic_ios [C++], fill", "std::basic_ios [C++], good", "std::basic_ios [C++], imbue", "std::basic_ios [C++], init", "std::basic_ios [C++], move", "std::basic_ios [C++], narrow", "std::basic_ios [C++], rdbuf", "std::basic_ios [C++], rdstate", "std::basic_ios [C++], set_rdbuf", "std::basic_ios [C++], setstate", "std::basic_ios [C++], swap", "std::basic_ios [C++], tie", "std::basic_ios [C++], widen"]
ms.assetid: 4fdcd8e1-62d2-4611-8a70-1e4f58434007
---
# basic_ios Class

The class template describes the storage and member functions common to both input streams (of class template [basic_istream](../standard-library/basic-istream-class.md)) and output streams (of class template [basic_ostream](../standard-library/basic-ostream-class.md)) that depend on the template parameters. (The class [ios_base](../standard-library/ios-base-class.md) describes what is common and not dependent on template parameters.) An object of class **basic_ios\<class Elem, class Traits>** helps control a stream with elements of type `Elem`, whose character traits are determined by the class `Traits`.

## Syntax

```cpp

template <class Elem, class Traits>
class basic_ios : public ios_base
```

### Parameters

*Elem*\
A character type.

*Traits*\
A type providing information about the character type, defaults to `char_traits < Elem >`.

## Remarks

An object of class **basic_ios\<class Elem, class Traits>** stores:

- A tie pointer to an object of type [basic_istream](../standard-library/basic-istream-class.md)**\<Elem, Traits>**.

- A stream buffer pointer to an object of type [basic_streambuf](../standard-library/basic-streambuf-class.md)**\<Elem, Traits >**.

- [Formatting information](../standard-library/ios-base-class.md).

- [Stream state information](../standard-library/ios-base-class.md) in a base object of type [ios_base](../standard-library/ios-base-class.md).

- A fill character in an object of type `char_type`.

### Constructors

|Constructor|Description|
|-|-|
|[basic_ios](#basic_ios)|Constructs the `basic_ios` class.|

### Typedefs

|Type name|Description|
|-|-|
|[char_type](#char_type)|A synonym for the template parameter `Elem`.|
|[int_type](#int_type)|A synonym for `Traits::int_type`.|
|[off_type](#off_type)|A synonym for `Traits::off_type`.|
|[pos_type](#pos_type)|A synonym for `Traits::pos_type`.|
|[traits_type](#traits_type)|A synonym for the template parameter `Traits`.|

### Member functions

|Member function|Description|
|-|-|
|[bad](#bad)|Indicates a loss of integrity of the stream buffer.|
|[clear](#clear)|Clears all error flags.|
|[copyfmt](#copyfmt)|Copies flags from one stream to another.|
|[eof](#eof)|Indicates if the end of a stream has been reached.|
|[exceptions](#exceptions)|Indicates which exceptions will be thrown by the stream.|
|[fail](#fail)|Indicates failure to extract a valid field from a stream.|
|[fill](#fill)|Specifies or returns the character that will be used when the text is not as wide as the stream.|
|[good](#good)|Indicates the stream is in good condition.|
|[imbue](#imbue)|Changes the locale.|
|[init](#init)|Called by `basic_ios` constructors.|
|[move](#move)|Moves all values, except the pointer to the stream buffer, from the parameter to the current object.|
|[narrow](#narrow)|Finds the equivalent char to a given `char_type`.|
|[rdbuf](#rdbuf)|Routes stream to specified buffer.|
|[rdstate](#rdstate)|Reads the state of bits for flags.|
|[set_rdbuf](#set_rdbuf)|Assigns a stream buffer to be the read buffer for this stream object.|
|[setstate](#setstate)|Sets additional flags.|
|[swap](#swap)|Exchanges the values in this `basic_ios` object for those of another `basic_ios` object. The pointers to the stream buffers are not swapped.|
|[tie](#tie)|Ensures that one stream is processed before another stream.|
|[widen](#widen)|Finds the equivalent `char_type` to a given char.|

### Operators

|Operator|Description|
|-|-|
|[explicit operator bool](#op_bool)|Allows use of a `basic_ios` object as a **`bool`**. Automatic type conversion is disabled to prevent common, unintended side effects.|
|[operator void *](#op_void_star)|Indicates if the stream is still good.|
|[operator!](#op_not)|Indicates if the stream is not bad.|

## Requirements

**Header:** \<ios>

**Namespace:** std

## <a name="bad"></a> basic_ios::bad

Indicates a loss of integrity of the stream buffer

```cpp
bool bad() const;
```

### Return Value

**`true`** if `rdstate & badbit` is nonzero; otherwise **`false`**.

For more information on `badbit`, see [ios_base::iostate](../standard-library/ios-base-class.md#iostate).

### Example

```cpp
// basic_ios_bad.cpp
// compile with: /EHsc
#include <iostream>

int main( void )
{
    using namespace std;
    bool b = cout.bad( );
    cout << boolalpha;
    cout << b << endl;

    b = cout.good( );
    cout << b << endl;
}
```

## <a name="basic_ios"></a> basic_ios::basic_ios

Constructs the basic_ios class.

```cpp
explicit basic_ios(basic_streambuf<Elem,  Traits>* sb);
basic_ios();
```

### Parameters

*sb*\
Standard buffer to store input or output elements.

### Remarks

The first constructor initializes its member objects by calling [init](#init)(_ *Sb*). The second (protected) constructor leaves its member objects uninitialized. A later call to `init` must initialize the object before it can be safely destroyed.

## <a name="char_type"></a> basic_ios::char_type

A synonym for the template parameter `Elem`.

```cpp
typedef Elem char_type;
```

## <a name="clear"></a> basic_ios::clear

Clears all error flags.

```cpp
void clear(iostate state = goodbit, bool reraise = false);
void clear(io_state state);
```

### Parameters

*state*\
(Optional) The flags you want to set after clearing all flags. Defaults to `goodbit`.

*reraise*\
(Optional) Specifies whether the exception should be re-raised. Defaults to **`false`** (will not re-raise the exception).

### Remarks

The flags are `goodbit`, `failbit`, `eofbit`, and `badbit`. Test for these flags with [good](#good), [bad](#bad), [eof](#eof), and [fail](#fail)

The member function replaces the stored stream state information with:

`state` &#124; `(`[rdbuf](#rdbuf) != 0 **goodbit** : **badbit**)

If `state`**&**[exceptions](#exceptions) is nonzero, it then throws an object of class [failure](../standard-library/ios-base-class.md#failure).

### Example

See [rdstate](#rdstate) and [getline](../standard-library/string-functions.md#getline) for examples using `clear`.

## <a name="copyfmt"></a> basic_ios::copyfmt

Copies flags from one stream to another.

```cpp
basic_ios<Elem, Traits>& copyfmt(
const basic_ios<Elem, Traits>& right);
```

### Parameters

*right*\
The stream whose flags you want to copy.

### Return Value

The **`this`** object for the stream to which you are copying the flags.

### Remarks

The member function reports the callback event **erase\_event**. It then copies from *right* into **\*this** the fill character, the tie pointer, and the formatting information. Before altering the exception mask, it reports the callback event `copyfmt_event`. If, after the copy is complete, **state &**[exceptions](#exceptions) is nonzero, the function effectively calls [clear](#clear) with the argument [rdstate](#rdstate). It returns **\*this**.

### Example

```cpp
// basic_ios_copyfmt.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main( )
{
    using namespace std;
    ofstream x( "test.txt" );
    int i = 10;

    x << showpos;
    cout << i << endl;
    cout.copyfmt( x );
    cout << i << endl;
}
```

## <a name="eof"></a> basic_ios::eof

Indicates if the end of a stream has been reached.

```cpp
bool eof() const;
```

### Return Value

**`true`** if the end of the stream has been reached, **`false`** otherwise.

### Remarks

The member function returns **`true`** if [rdstate](#rdstate) `& eofbit` is nonzero. For more information on `eofbit`, see [ios_base::iostate](../standard-library/ios-base-class.md#iostate).

### Example

```cpp
// basic_ios_eof.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

using namespace std;

int main( int argc, char* argv[] )
{
    fstream   fs;
    int n = 1;
    fs.open( "basic_ios_eof.txt" );   // an empty file
    cout << boolalpha
    cout << fs.eof() << endl;
    fs >> n;   // Read the char in the file
    cout << fs.eof() << endl;
}
```

## <a name="exceptions"></a> basic_ios::exceptions

Indicates which exceptions will be thrown by the stream.

```cpp
iostate exceptions() const;
void exceptions(iostate Newexcept);
void exceptions(io_state Newexcept);
```

### Parameters

*Newexcept*\
The flags that you want to throw an exception.

### Return Value

The flags that are currently specified to thrown an exception for the stream.

### Remarks

The first member function returns the stored exception mask. The second member function stores *_Except* in the exception mask and returns its previous stored value. Note that storing a new exception mask can throw an exception just like the call [clear](#clear)( [rdstate](#rdstate) ).

### Example

```cpp
// basic_ios_exceptions.cpp
// compile with: /EHsc /GR
#include <iostream>

int main( )
{
    using namespace std;

    cout << cout.exceptions( ) << endl;
    cout.exceptions( ios::eofbit );
    cout << cout.exceptions( ) << endl;
    try
    {
        cout.clear( ios::eofbit );   // Force eofbit on
    }
    catch ( exception &e )
    {
        cout.clear( );
        cout << "Caught the exception." << endl;
        cout << "Exception class: " << typeid(e).name()  << endl;
        cout << "Exception description: " << e.what() << endl;
    }
}
```

```Output
0
1
Caught the exception.
Exception class: class std::ios_base::failure
Exception description: ios_base::eofbit set
```

## <a name="fail"></a> basic_ios::fail

Indicates failure to extract a valid field from a stream.

```cpp
bool fail() const;
```

### Return Value

**`true`** if [rdstate](#rdstate) `& (badbit|failbit)` is nonzero, otherwise **`false`**.

For more information on `failbit`, see [ios_base::iostate](../standard-library/ios-base-class.md#iostate).

### Example

```cpp
// basic_ios_fail.cpp
// compile with: /EHsc
#include <iostream>

int main( void )
{
    using namespace std;
    bool b = cout.fail( );
    cout << boolalpha;
    cout << b << endl;
}
```

## <a name="fill"></a> basic_ios::fill

Specifies or returns the character that will be used when the text is not as wide as the stream.

```cpp
char_type fill() const;
char_type fill(char_type Char);
```

### Parameters

*Char*\
The character you want as the fill character.

### Return Value

The current fill character.

### Remarks

The first member function returns the stored fill character. The second member function stores *Char* in the fill character and returns its previous stored value.

### Example

```cpp
// basic_ios_fill.cpp
// compile with: /EHsc
#include <iostream>
#include <iomanip>

int main( )
{
    using namespace std;

    cout << setw( 5 ) << 'a' << endl;
    cout.fill( 'x' );
    cout << setw( 5 ) << 'a' << endl;
    cout << cout.fill( ) << endl;
}
```

```Output
a
xxxxa
x
```

## <a name="good"></a> basic_ios::good

Indicates the stream is in good condition.

```cpp
bool good() const;
```

### Return Value

**`true`** if [rdstate](#rdstate) `== goodbit` (no state flags are set), otherwise, **`false`**.

For more information on `goodbit`, see [ios_base::iostate](../standard-library/ios-base-class.md#iostate).

### Example

See [basic_ios::bad](#bad) for an example of using `good`.

## <a name="imbue"></a> basic_ios::imbue

Changes the locale.

```cpp
locale imbue(const locale& Loc);
```

### Parameters

*Loc*\
A locale string.

### Return Value

The previous locale.

### Remarks

If [rdbuf](#rdbuf) is not a null pointer, the member function calls

`rdbuf`-> [pubimbue](../standard-library/basic-streambuf-class.md#pubimbue)(_ *Loc*)

In any case, it returns [ios_base::imbue](../standard-library/ios-base-class.md#imbue)(_ *Loc*).

### Example

```cpp
// basic_ios_imbue.cpp
// compile with: /EHsc
#include <iostream>
#include <locale>

int main( )
{
    using namespace std;

    cout.imbue( locale( "french_france" ) );
    double x = 1234567.123456;
    cout << x << endl;
}
```

## <a name="init"></a> basic_ios::init

Called by basic_ios constructors.

```cpp
void init(basic_streambuf<Elem,Traits>* _Sb, bool _Isstd = false);
```

### Parameters

*_Sb*\
Standard buffer to store input or output elements.

*_Isstd*\
Specifies whether this is a standard stream.

### Remarks

The member function stores values in all member objects, so that:

- [rdbuf](#rdbuf) returns *_Sb.*

- [tie](#tie) returns a null pointer.

- [rdstate](#rdstate) returns [goodbit](../standard-library/ios-base-class.md#iostate) if *_Sb* is nonzero; otherwise, it returns [badbit](../standard-library/ios-base-class.md#iostate).

- [exceptions](#exceptions) returns `goodbit`.

- [flags](../standard-library/ios-base-class.md#flags) returns [skipws](../standard-library/ios-base-class.md#fmtflags) &#124; [dec](../standard-library/ios-base-class.md#fmtflags).

- [width](../standard-library/ios-base-class.md#width) returns 0.

- [precision](../standard-library/ios-base-class.md#precision) returns 6.

- [fill](#fill) returns the space character.

- [getloc](../standard-library/ios-base-class.md#getloc) returns `locale::classic`.

- [iword](../standard-library/ios-base-class.md#iword) returns zero, and [pword](../standard-library/ios-base-class.md#pword) returns a null pointer for all argument values.

## <a name="int_type"></a> basic_ios::int_type

A synonym for `traits_type::int_type`.

```cpp
typedef typename traits_type::int_type int_type;
```

## <a name="move"></a> basic_ios::move

Moves all values, except the pointer to the stream buffer, from the parameter to the current object.

```cpp
void move(basic_ios&& right);
```

### Parameters

*right*\
The `ios_base` object to move values from.

### Remarks

The protected member function moves all the values stored in *right* to **`*this`** except the stored `stream buffer pointer`, which is unchanged in *right* and set to a null pointer in **`*this`**. The stored `tie pointer` is set to a null pointer in *right*.

## <a name="narrow"></a> basic_ios::narrow

Finds the equivalent char to a given `char_type`.

```cpp
char narrow(char_type Char, char Default = '\0') const;
```

### Parameters

*Char*\
The **`char`** to convert.

*Default*\
The **`char`** that you want returned if no equivalent is found.

### Return Value

The equivalent **`char`** to a given `char_type`.

### Remarks

The member function returns [use_facet](../standard-library/basic-filebuf-class.md#open)\<ctype\<E> >( [getloc](../standard-library/ios-base-class.md#getloc)( ) ).`narrow`( `Char`, `Default`).

### Example

```cpp
// basic_ios_narrow.cpp
// compile with: /EHsc
#include <ios>
#include <iostream>
#include <wchar.h>

int main( )
{
    using namespace std;
    wchar_t *x = L"test";
    char y[10];
    cout << x[0] << endl;
    wcout << x << endl;
    y[0] = wcout.narrow( x[0] );
    cout << y[0] << endl;
}
```

## <a name="off_type"></a> basic_ios::off_type

A synonym for `traits_type::off_type`.

```cpp
typedef typename traits_type::off_type off_type;
```

## <a name="op_void_star"></a> basic_ios::operator void *

Indicates if the stream is still good.

```cpp
operator void *() const;
```

### Return Value

The operator returns a null pointer only if [fail](#fail).

### Example

```cpp
// basic_ios_opgood.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
    using namespace std;
    cout << (bool)(&cout != 0) << endl;   // Stream is still good
}
```

```Output
1
```

## <a name="op_not"></a> basic_ios::operator!

Indicates if the stream is not bad.

```cpp
bool operator!() const;
```

### Return Value

Returns [fail](#fail).

### Example

```cpp
// basic_ios_opbad.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
    using namespace std;
    cout << !cout << endl;   // Stream is not bad
}
```

```Output
0
```

## <a name="op_bool"></a> basic_ios::operator bool

Allows use of a `basic_ios` object as a **`bool`**. Automatic type conversion is disabled to prevent common, unintended side effects.

```cpp
explicit operator bool() const;
```

### Remarks

The operator returns a value convertible to **`false`** only if `fail()`. The return type is convertible only to **`bool`**, not to `void *` or other known scalar type.

## <a name="pos_type"></a> basic_ios::pos_type

A synonym for `traits_type::pos_type`.

```cpp
typedef typename traits_type::pos_type pos_type;
```

## <a name="rdbuf"></a> basic_ios::rdbuf

Routes stream to specified buffer.

```cpp
basic_streambuf<Elem, Traits> *rdbuf() const;
basic_streambuf<Elem, Traits> *rdbuf(
basic_streambuf<Elem, Traits>* _Sb);
```

### Parameters

*_Sb*\
A stream.

### Remarks

The first member function returns the stored stream buffer pointer.

The second member function stores *_Sb* in the stored stream buffer pointer and returns the previously stored value.

### Example

```cpp
// basic_ios_rdbuf.cpp
// compile with: /EHsc
#include <ios>
#include <iostream>
#include <fstream>

int main( )
{
    using namespace std;
    ofstream file( "rdbuf.txt" );
    streambuf *x = cout.rdbuf( file.rdbuf( ) );
    cout << "test" << endl;   // Goes to file
    cout.rdbuf(x);
    cout << "test2" << endl;
}
```

```Output
test2
```

## <a name="rdstate"></a> basic_ios::rdstate

Reads the state of bits for flags.

```cpp
iostate rdstate() const;
```

### Return Value

The stored stream state information.

### Example

```cpp
// basic_ios_rdstate.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>
using namespace std;

void TestFlags( ios& x )
{
    cout << ( x.rdstate( ) & ios::badbit ) << endl;
    cout << ( x.rdstate( ) & ios::failbit ) << endl;
    cout << ( x.rdstate( ) & ios::eofbit ) << endl;
    cout << endl;
}

int main( )
{
    fstream x( "c:\test.txt", ios::out );
    x.clear( );
    TestFlags( x );
    x.clear( ios::badbit | ios::failbit | ios::eofbit );
    TestFlags( x );
}
```

```Output
0
0
0

4
2
1
```

## <a name="setstate"></a> basic_ios::setstate

Sets additional flags.

```cpp
void setstate(iostate _State);
```

### Parameters

*_State*\
Additional flags to set.

### Remarks

The member function effectively calls [clear](#clear)(_ *State* &#124; [rdstate](#rdstate)).

### Example

```cpp
// basic_ios_setstate.cpp
// compile with: /EHsc
#include <ios>
#include <iostream>
using namespace std;

int main( )
{
    bool b = cout.bad( );
    cout << b << endl;   // Good
    cout.clear( ios::badbit );
    b = cout.bad( );
    // cout.clear( );
    cout << b << endl;   // Is bad, good
    b = cout.fail( );
    cout << b << endl;   // Not failed
    cout.setstate( ios::failbit );
    b = cout.fail( );
    cout.clear( );
    cout << b << endl;   // Is failed, good
    return 0;
}
```

```Output
0
1
```

## <a name="set_rdbuf"></a> basic_ios::set_rdbuf

Assigns a stream buffer to be the read buffer for this stream object.

```cpp
void set_rdbuf(
basic_streambuf<Elem, Tr>* strbuf)
```

### Parameters

*strbuf*\
The stream buffer to become the read buffer.

### Remarks

The protected member function stores *strbuf* in the `stream buffer pointer`.It does not call `clear`.

## <a name="tie"></a> basic_ios::tie

Ensures that one stream is processed before another stream.

```cpp
basic_ostream<Elem, Traits> *tie() const;
basic_ostream<Elem, Traits> *tie(
basic_ostream<Elem, Traits>* str);
```

### Parameters

*str*\
A stream.

### Return Value

The first member function returns the stored tie pointer. The second member function stores *str* in the tie pointer and returns its previous stored value.

### Remarks

`tie` causes two streams to be synchronized, such that, operations on one stream occur after operations on the other stream are complete.

### Example

In this example, by tying cin to cout, it is guaranteed that the "Enter a number:" string will go to the console before the number itself is extracted from cin. This eliminates the possibility that the "Enter a number:" string is still sitting in the buffer when the number is read, so that we are certain that the user actually has some prompt to respond to. By default, cin and cout are tied.

```cpp
#include <ios>
#include <iostream>

int main( )
{
    using namespace std;
    int i;
    cin.tie( &cout );
    cout << "Enter a number:";
    cin >> i;
}
```

## <a name="traits_type"></a> basic_ios::traits_type

A synonym for the template parameter `Traits`.

```cpp
typedef Traits traits_type;
```

## <a name="widen"></a> basic_ios::widen

Finds the equivalent `char_type` to a given **`char`**.

```cpp
char_type widen(char Char) const;
```

### Parameters

*Char*\
The character to convert.

### Return Value

Finds the equivalent `char_type` to a given **`char`**.

### Remarks

The member function returns [use_facet](../standard-library/basic-filebuf-class.md#open)< **ctype**\< **E**> >( [getloc](../standard-library/ios-base-class.md#getloc)). `widen`( `Char`).

### Example

```cpp
// basic_ios_widen.cpp
// compile with: /EHsc
#include <ios>
#include <iostream>
#include <wchar.h>

int main( )
{
    using namespace std;
    char *z = "Hello";
    wchar_t y[2] = {0,0};
    cout << z[0] << endl;
    y[0] = wcout.widen( z[0] );
    wcout << &y[0] << endl;
}
```

## <a name="swap"></a> basic_ios::swap

Exchanges the values in this `basic_ios` object for those of another `basic_ios` object. However, the pointers to the stream buffers are not swapped.

```cpp
void swap(basic_ios&& right);
```

### Parameters

*right*\
The `basic_ios` object that is used to exchange values.

### Remarks

The protected member function exchanges all the values stored in *right* with **`*this`** except the stored `stream buffer pointer`.

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
