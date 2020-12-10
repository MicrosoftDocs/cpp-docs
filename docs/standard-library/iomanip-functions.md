---
description: "Learn more about: &lt;iomanip&gt; functions"
title: "&lt;iomanip&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["iomanip/std::get_money", "iomanip/std::get_time", "iomanip/std::put_money", "iomanip/std::put_time", "iomanip/std::quoted", "iomanip/std::resetiosflags", "iomanip/std::setbase", "iomanip/std::setfill", "iomanip/std::setiosflags", "iomanip/std::setprecision", "iomanip/std::setw"]
ms.assetid: 3ddde610-70cc-4cfa-8a89-3e83d1d356a8
helpviewer_keywords: ["std::get_money [C++]", "std::get_time [C++]", "std::put_money [C++]", "std::put_time [C++]", "std::quoted [C++]", "std::resetiosflags [C++]", "std::setbase [C++]", "std::setfill [C++]", "std::setiosflags [C++]", "std::setprecision [C++]", "std::setw [C++]"]
---
# &lt;iomanip&gt; functions

[get_money](#iomanip_get_money)\
[get_time](#iomanip_get_time)\
[put_money](#iomanip_put_money)\
[put_time](#iomanip_put_time)\
[quoted](#quoted)\
[resetiosflags](#resetiosflags)\
[setbase](#setbase)\
[setfill](#setfill)\
[setiosflags](#setiosflags)\
[setprecision](#setprecision)\
[setw](#setw)

## <a name="iomanip_get_money"></a> get_money

Extracts a monetary value from a stream using the desired format, and returns the value in a parameter.

```cpp
template <class Money>
T7 get_money(Money& amount, bool use_intl);
```

### Parameters

*amount*\
The extracted monetary value.

*use_intl*\
If **`true`**, use international format. The default value is **`false`**.

### Remarks

The manipulator returns an object that, when extracted from the stream `str`, behaves as a `formatted input function` that calls the member function `get` for the locale facet `money_get` associated with `str`, using *use_intl* to indicate international format. If successful, the call stores in *amount* the extracted monetary value. The manipulator then returns `str`.

`Money` must be of type **`long double`** or an instantiation of `basic_string` with the same element and traits parameters as `str`.

## <a name="iomanip_get_time"></a> get_time

Extracts a time value from a stream using a desired format. Returns the value in a parameter as a time structure.

```cpp
template <class Elem>
T10 put_time(struct tm *time_ptr, const Elem *time_format);
```

### Parameters

*time_ptr*\
The time in the form of a time structure.

*time_format*\
The desired format to use to obtain the time value.

### Remarks

The manipulator returns an object that, when extracted from the stream `str`, behaves as a `formatted input function` that calls the member function `get` for the locale facet `time_get` associated with `str`, using `tptr` to indicate the time structure and `fmt` to indicate the beginning of a null-terminated format string. If successful, the call stores in the time structure the values associated with any extracted time fields. The manipulator then returns `str`.

## <a name="iomanip_put_money"></a> put_money

Inserts a monetary amount using the desired format into a stream.

```cpp
template <class Money>
T8 put_money(const Money& amount, bool use_intl);
```

### Parameters

*amount*\
The monetary amount to insert into the stream.

*use_intl*\
Set to **`true`** if manipulator should use international format, **`false`** if it should not.

### Return Value

Returns `str`.

### Remarks

The manipulator returns an object that, when inserted into the stream `str`, behaves as a formatted output function that calls the member function `put` for the locale facet `money_put` associated with `str`. If successful, the call inserts `amount` suitably formatted, using *use_intl* to indicate international format and `str.fill()`, as the fill element. The manipulator then returns `str`.

`Money` must be of type **`long double`** or an instantiation of `basic_string` with the same element and traits parameters as `str`.

## <a name="iomanip_put_time"></a> put_time

Writes a time value from a time structure to a stream by using a specified format.

```cpp
template <class Elem>
T10 put_time(struct tm* time_ptr, const Elem* time_format);
```

### Parameters

*time_ptr*\
The time value to write to the stream, provided in a time structure.

*time_format*\
The desired format to write the time value.

### Remarks

The manipulator returns an object that, when inserted into the stream `str`, behaves as a `formatted output function`. The output function calls the member function `put` for the locale facet `time_put` associated with `str`. The output function uses *time_ptr* to indicate the time structure and *time_format* to indicate the beginning of a null-terminated format string. If successful, the call inserts literal text from the format string and converted values from the time structure. The manipulator then returns `str`.

## <a name="quoted"></a> quoted

**(New in C++14)** An iostream manipulator that enables convenient round-tripping of strings into and out of streams using the >> and << operators.

```cpp
quoted(std::string str) // or wstring
quoted(const char* str) //or wchar_t*
quoted(std::string str, char delimiter, char escape) // or wide versions
quoted(const char* str, char delimiter, char escape) // or wide versions
```

### Parameters

*str*\
A std::string, char\*, string literal or raw string literal, or a wide version of any of these (e.g. std::wstring, wchar_t\*).

*delimiter*\
A user-specified character, or wide character, to use as the delimiter for the beginning and end of the string.

*escape*\
A user-specified character, or wide character, to use as the escape character for escape sequences within the string.

### Remarks

See [Using Insertion Operators and Controlling Format](../standard-library/using-insertion-operators-and-controlling-format.md).

### Example

This example shows how to use `quoted` with the default delimiter and escape character using narrow strings. Wide strings are equally supported.

```cpp
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

void show_quoted_v_nonquoted()
{
    // Results are identical regardless of input string type:
    // string inserted { R"(This is a "sentence".)" }; // raw string literal
    // string inserted { "This is a \"sentence\"." };  // regular string literal
    const char* inserted = "This is a \"sentence\".";  // const char*
    stringstream ss, ss_quoted;
    string extracted, extracted_quoted;

    ss << inserted;
    ss_quoted << quoted(inserted);

    cout << "ss.str() is storing       : " << ss.str() << endl;
    cout << "ss_quoted.str() is storing: " << ss_quoted.str() << endl << endl;

    // Round-trip the strings
    ss >> extracted;
    ss_quoted >> quoted(extracted_quoted);

    cout << "After round trip: " << endl;
    cout << "Non-quoted      : " << extracted << endl;
    cout << "Quoted          : " << extracted_quoted << endl;
}

int main(int argc, char* argv[])
{
    show_quoted_v_nonquoted();

    // Keep console window open in debug mode.
    cout << endl << "Press Enter to exit" << endl;
    string input{};
    getline(cin, input);
}

/* Output:
ss.str() is storing       : This is a "sentence".
ss_quoted.str() is storing: "This is a \"sentence\"."

After round trip:
Non-quoted      : This
Quoted          : This is a "sentence".

Press Enter to exit
*/
```

### Example

The following example shows how to provide custom a delimiter and/or escape character:

```cpp
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

void show_custom_delimiter()
{
    string inserted{ R"("This" "is" "a" "heavily-quoted" "sentence".)" };
    // string inserted{ "\"This\" \"is\" \"a\" \"heavily-quoted\" \"sentence\"" };
    // const char* inserted{ "\"This\" \"is\" \"a\" \"heavily-quoted\" \"sentence\"" };
    stringstream ss, ss_quoted;
    string extracted;

    ss_quoted << quoted(inserted, '*');
    ss << inserted;
    cout << "ss_quoted.str() is storing: " << ss_quoted.str() << endl;
    cout << "ss.str() is storing       : " << ss.str() << endl << endl;

    // Use the same quoted arguments as on insertion.
    ss_quoted >> quoted(extracted, '*');

    cout << "After round trip: " << endl;
    cout << "Quoted          : " << extracted << endl;

    extracted = {};
    ss >> extracted;
    cout << "Non-quoted      : " << extracted << endl << endl;
}

void show_custom_escape()
{
    string inserted{ R"(\\root\trunk\branch\nest\egg\yolk)" };
    // string inserted{ "\\\\root\\trunk\\branch\\nest\\egg\\yolk" };
    stringstream ss, ss_quoted, ss_quoted_custom;
    string extracted;

    // Use '"' as delimiter and '~' as escape character.
    ss_quoted_custom << quoted(inserted, '"', '~');
    ss_quoted << quoted(inserted);
    ss << inserted;
    cout << "ss_quoted_custom.str(): " << ss_quoted_custom.str() << endl;
    cout << "ss_quoted.str()       : " << ss_quoted.str() << endl;
    cout << "ss.str()              : " << ss.str() << endl << endl;

    // No spaces in this string, so non-quoted behaves same as quoted
    // after round-tripping.
}

int main(int argc, char* argv[])
{
    cout << "Custom delimiter:" << endl;
    show_custom_delimiter();
    cout << "Custom escape character:" << endl;
    show_custom_escape();

    // Keep console window open in debug mode.
    cout << endl << "Press Enter to exit" << endl;
    string input{};
    getline(cin, input);
}
/* Output:
Custom delimiter:
ss_quoted.str() is storing: *"This" "is" "a" "heavily-quoted" "sentence".*
ss.str() is storing       : "This" "is" "a" "heavily-quoted" "sentence".

After round trip:
Quoted          : "This" "is" "a" "heavily-quoted" "sentence".
Non-quoted      : "This"

Custom escape character:
ss_quoted_custom.str(): "\\root\trunk\branch\nest\egg\yolk"
ss_quoted.str()       : "\\\\root\\trunk\\branch\\nest\\egg\\yolk"
ss.str()              : \\root\trunk\branch\nest\egg\yolk

Press Enter to exit
*/
```

## <a name="resetiosflags"></a> resetiosflags

Clears the specified flags.

```cpp
T1 resetiosflags(ios_base::fmtflags mask);
```

### Parameters

*mask*\
The flags to clear.

### Return Value

The manipulator returns an object that, when extracted from or inserted into the stream `str`, calls `str.`[setf](../standard-library/ios-base-class.md#setf)`(ios_base::`[fmtflags](../standard-library/ios-base-class.md#fmtflags)`, mask)`, and then returns `str`.

### Example

See [setw](../standard-library/iomanip-functions.md#setw) for an example of using `resetiosflags`.

## <a name="setbase"></a> setbase

Set base for integers.

```cpp
T3 setbase(int base);
```

### Parameters

*base*\
The number base.

### Return Value

The manipulator returns an object that, when extracted from or inserted into the stream `str`, calls `str.setf(mask,` [ios_base::basefield](../standard-library/ios-base-class.md#fmtflags)`)`, and then returns `str`. Here, `mask` is determined as follows:

- If *base* is 8, then `mask` is `ios_base::`[oct](../standard-library/ios-functions.md#oct).

- If *base* is 10, then mask is `ios_base::`[dec](../standard-library/ios-functions.md#dec).

- If *base* is 16, then `mask` is `ios_base::`[hex](../standard-library/ios-functions.md#hex).

- If *base* is any other value, then mask is `ios_base::`[fmtflags](../standard-library/ios-base-class.md#fmtflags)`(0)`.

### Example

See [setw](../standard-library/iomanip-functions.md#setw) for an example of using `setbase`.

## <a name="setfill"></a> setfill

Sets the character that will be used to fill spaces in a right-justified display.

```cpp
template <class Elem>
T4 setfill(Elem Ch);
```

### Parameters

*Ch*\
The character that will be used to fill spaces in a right-justified display.

### Return Value

The template manipulator returns an object that, when extracted from or inserted into the stream `str`, calls `str.`[fill](../standard-library/basic-ios-class.md#fill)`(Ch)`, and then returns `str`. The type `Elem` must be the same as the element type for the stream `str`.

### Example

See [setw](../standard-library/iomanip-functions.md#setw) for an example of using `setfill`.

## <a name="setiosflags"></a> setiosflags

Sets the specified flags.

```cpp
T2 setiosflags(ios_base::fmtflags mask);
```

### Parameters

*mask*\
The flags to set.

### Return Value

The manipulator returns an object that, when extracted from or inserted into the stream `str`, calls `str.`[setf](../standard-library/ios-base-class.md#setf)`(mask)`, and then returns `str`.

### Example

See [setw](../standard-library/iomanip-functions.md#setw) for an example of using `setiosflags`.

## <a name="setprecision"></a> setprecision

Sets the precision for floating-point values.

```cpp
T5 setprecision(streamsize Prec);
```

### Parameters

*Prec*\
The precision for floating-point values.

### Return Value

The manipulator returns an object that, when extracted from or inserted into the stream `str`, calls `str.`[precision](../standard-library/ios-base-class.md#precision)`(Prec)`, and then returns `str`.

### Example

See [setw](../standard-library/iomanip-functions.md#setw) for an example of using `setprecision`.

## <a name="setw"></a> setw

Specifies the width of the display field for the next element in the stream.

```cpp
T6 setw(streamsize Wide);
```

### Parameters

*Wide*\
The width of the display field.

### Return Value

The manipulator returns an object that, when extracted from or inserted into the stream `str`, calls `str.`[width](../standard-library/ios-base-class.md#width)`(Wide)`, then returns `str`.

### Remarks

setw sets the width only for the next element in the stream and must be inserted before each element whose width you want to specify.

### Example

```cpp
// iomanip_setw.cpp
// compile with: /EHsc
// Defines the entry point for the console application.
//
// Sample use of the following manipulators:
//   resetiosflags
//   setiosflags
//   setbase
//   setfill
//   setprecision
//   setw

#include <iostream>
#include <iomanip>

using namespace std;

const double   d1 = 1.23456789;
const double   d2 = 12.3456789;
const double   d3 = 123.456789;
const double   d4 = 1234.56789;
const double   d5 = 12345.6789;
const long      l1 = 16;
const long      l2 = 256;
const long      l3 = 1024;
const long      l4 = 4096;
const long      l5 = 65536;
int         base = 10;

void DisplayDefault( )
{
   cout << endl << "default display" << endl;
   cout << "d1 = " << d1 << endl;
   cout << "d2 = " << d2 << endl;
   cout << "d3 = " << d3 << endl;
   cout << "d4 = " << d4 << endl;
   cout << "d5 = " << d5 << endl;
}

void DisplayWidth( int n )
{
   cout << endl << "fixed width display set to " << n << ".\n";
   cout << "d1 = " << setw(n) << d1 << endl;
   cout << "d2 = " << setw(n) << d2 << endl;
   cout << "d3 = " << setw(n) << d3 << endl;
   cout << "d4 = " << setw(n) << d4 << endl;
   cout << "d5 = " << setw(n) << d5 << endl;
}

void DisplayLongs( )
{
   cout << setbase(10);
   cout << endl << "setbase(" << base << ")" << endl;
   cout << setbase(base);
   cout << "l1 = " << l1 << endl;
   cout << "l2 = " << l2 << endl;
   cout << "l3 = " << l3 << endl;
   cout << "l4 = " << l4 << endl;
   cout << "l5 = " << l5 << endl;
}

int main( int argc, char* argv[] )
{
   DisplayDefault( );

   cout << endl << "setprecision(" << 3 << ")" << setprecision(3);
   DisplayDefault( );

   cout << endl << "setprecision(" << 12 << ")" << setprecision(12);
   DisplayDefault( );

   cout << setiosflags(ios_base::scientific);
   cout << endl << "setiosflags(" << ios_base::scientific << ")";
   DisplayDefault( );

   cout << resetiosflags(ios_base::scientific);
   cout << endl << "resetiosflags(" << ios_base::scientific << ")";
   DisplayDefault( );

   cout << endl << "setfill('" << 'S' << "')" << setfill('S');
   DisplayWidth(15);
   DisplayDefault( );

   cout << endl << "setfill('" << ' ' << "')" << setfill(' ');
   DisplayWidth(15);
   DisplayDefault( );

   cout << endl << "setprecision(" << 8 << ")" << setprecision(8);
   DisplayWidth(10);
   DisplayDefault( );

   base = 16;
   DisplayLongs( );

   base = 8;
   DisplayLongs( );

   base = 10;
   DisplayLongs( );

   return   0;
}
```

```Output

default display
d1 = 1.23457
d2 = 12.3457
d3 = 123.457
d4 = 1234.57
d5 = 12345.7

setprecision(3)
default display
d1 = 1.23
d2 = 12.3
d3 = 123
d4 = 1.23e+003
d5 = 1.23e+004

setprecision(12)
default display
d1 = 1.23456789
d2 = 12.3456789
d3 = 123.456789
d4 = 1234.56789
d5 = 12345.6789

setiosflags(4096)
default display
d1 = 1.234567890000e+000
d2 = 1.234567890000e+001
d3 = 1.234567890000e+002
d4 = 1.234567890000e+003
d5 = 1.234567890000e+004

resetiosflags(4096)
default display
d1 = 1.23456789
d2 = 12.3456789
d3 = 123.456789
d4 = 1234.56789
d5 = 12345.6789

setfill('S')
fixed width display set to 15.
d1 = SSSSS1.23456789
d2 = SSSSS12.3456789
d3 = SSSSS123.456789
d4 = SSSSS1234.56789
d5 = SSSSS12345.6789

default display
d1 = 1.23456789
d2 = 12.3456789
d3 = 123.456789
d4 = 1234.56789
d5 = 12345.6789

setfill(' ')
fixed width display set to 15.
d1 =      1.23456789
d2 =      12.3456789
d3 =      123.456789
d4 =      1234.56789
d5 =      12345.6789

default display
d1 = 1.23456789
d2 = 12.3456789
d3 = 123.456789
d4 = 1234.56789
d5 = 12345.6789

setprecision(8)
fixed width display set to 10.
d1 =  1.2345679
d2 =  12.345679
d3 =  123.45679
d4 =  1234.5679
d5 =  12345.679

default display
d1 = 1.2345679
d2 = 12.345679
d3 = 123.45679
d4 = 1234.5679
d5 = 12345.679

setbase(16)
l1 = 10
l2 = 100
l3 = 400
l4 = 1000
l5 = 10000

setbase(8)
l1 = 20
l2 = 400
l3 = 2000
l4 = 10000
l5 = 200000

setbase(10)
l1 = 16
l2 = 256
l3 = 1024
l4 = 4096
l5 = 65536
```

## See also

[\<iomanip>](../standard-library/iomanip.md)
