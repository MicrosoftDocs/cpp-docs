---
description: "Learn more about: &lt;ios&gt; functions"
title: "&lt;ios&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["xiosbase/std::defaultfloat", "xiosbase/std::boolalpha", "xiosbase/std::dec", "ios/std::fixed", "ios/std::hex", "ios/std::internal", "ios/std::left", "ios/std::noboolalpha", "ios/std::noshowbase", "ios/std::noshowpoint", "ios/std::noshowpos", "ios/std::noskipws", "ios/std::nounitbuf", "ios/std::nouppercase", "ios/std::oct", "ios/std::right", "ios/std::scientific", "ios/std::showbase", "ios/std::showpoint", "ios/std::showpos", "ios/std::skipws", "ios/std::unitbuf", "ios/std::uppercase"]
ms.assetid: 1382d53f-e531-4b41-adf6-6a1543512e51
helpviewer_keywords: ["std::defaultfloat [C++]", "std::boolalpha [C++]", "std::dec [C++]", "std::fixed [C++]", "std::hex [C++]", "std::hexfloat [C++]", "std::io_errc [C++]", "std::internal [C++]", "std::iostream_category [C++]", "std::is_error_code_enum [C++]", "std::left [C++]", "std::make_error_code [C++]", "std::make_error_condition [C++]", "std::noboolalpha [C++]", "std::noshowbase [C++]", "std::noshowpoint [C++]", "std::noshowpos [C++]", "std::noskipws [C++]", "std::nounitbuf [C++]", "std::nouppercase [C++]", "std::oct [C++]", "std::right [C++]", "std::scientific [C++]", "std::showbase [C++]", "std::showpoint [C++]", "std::showpos [C++]", "std::skipws [C++]", "std::unitbuf [C++]", "std::uppercase [C++]"]
---
# &lt;ios&gt; functions

## <a name="boolalpha"></a> boolalpha

Specifies that variables of type [bool](../cpp/bool-cpp.md) appear as **`true`** or **`false`** in the stream.

```cpp
ios_base& boolalpha(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

By default, variables of type **`bool`** are displayed as 1 or 0.

`boolalpha` effectively calls `str.`[setf](../standard-library/ios-base-class.md#setf)( `ios_base::boolalpha`), and then returns *str*.

[noboolalpha](../standard-library/ios-functions.md#noboolalpha) reverses the effect of `boolalpha`.

### Example

```cpp
// ios_boolalpha.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   bool b = true;
   cout << b << endl;
   boolalpha( cout );
   cout << b << endl;
   noboolalpha( cout );
   cout << b << endl;
   cout << boolalpha << b << endl;
}
```

```Output
1
true
1
true
```

## <a name="dec"></a> dec

Specifies that integer variables appear in base 10 notation.

```cpp
ios_base& dec(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

By default, integer variables are displayed in base 10.

`dec` effectively calls `str.`[setf](../standard-library/ios-base-class.md#setf)( `ios_base::dec`, `ios_base::basefield`), and then returns *str*.

### Example

```cpp
// ios_dec.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   int i = 100;

   cout << i << endl;   // Default is base 10
   cout << hex << i << endl;
   dec( cout );
   cout << i << endl;
   oct( cout );
   cout << i << endl;
   cout << dec << i << endl;
}
```

```Output
100
64
100
144
100
```

## <a name="ios_defaultfloat"></a> &lt;ios&gt; defaultfloat

Configures the flags of an `ios_base` object to use a default display format for float values.

```cpp
ios_base& defaultfloat(ios_base& iosbase);
```

### Parameters

*_Iosbase*\
An `ios_base` object.

### Remarks

The manipulator effectively calls `iosbase.`[ios_base::unsetf](../standard-library/ios-base-class.md#unsetf)`(ios_base::floatfield)`, then returns *iosbase*.

## <a name="fixed"></a> fixed

Specifies that a floating-point number is displayed in fixed-decimal notation.

```cpp
ios_base& fixed(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

`fixed` is the default display notation for floating-point numbers. [scientific](../standard-library/ios-functions.md#scientific) causes floating-point numbers to be displayed using scientific notation.

The manipulator effectively calls *str*.[setf](../standard-library/ios-base-class.md#setf)( `ios_base::fixed`, `ios_base::floatfield` ), and then returns *str*.

### Example

```cpp
// ios_fixed.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   float i = 1.1F;

   cout << i << endl;   // fixed is the default
   cout << scientific << i << endl;
   cout.precision( 1 );
   cout << fixed << i << endl;
}
```

```Output
1.1
1.100000e+000
1.1
```

## <a name="hex"></a> hex

Specifies that integer variables shall appear in base 16 notation.

```cpp
ios_base& hex(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

By default, integer variables are displayed in base 10 notation. [dec](../standard-library/ios-functions.md#dec) and [oct](../standard-library/ios-functions.md#oct) also change the way integer variables appear.

The manipulator effectively calls `str`**.**[setf](../standard-library/ios-base-class.md#setf)( `ios_base::hex`, `ios_base::basefield`), and then returns *str*.

### Example

See [dec](../standard-library/ios-functions.md#dec) for an example of how to use `hex`.

## <a name="hexfloat"></a> hexfloat

```cpp
ios_base& hexfloat (ios_base& str);
```

## <a name="io_errc"></a> io_errc

```cpp
enum class io_errc {
    stream = 1
};
```

## <a name="internal"></a> internal

Causes a number's sign to be left justified and the number to be right justified.

```cpp
ios_base& internal(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

[showpos](../standard-library/ios-functions.md#showpos) causes the sign to display for positive numbers.

The manipulator effectively calls `str.`[setf](../standard-library/ios-base-class.md#setf)`(`[ios_base::internal](../standard-library/ios-base-class.md#fmtflags)`,` [ios_base::adjustfield](../standard-library/ios-base-class.md#fmtflags)`)`, and then returns *str*.

### Example

```cpp
// ios_internal.cpp
// compile with: /EHsc
#include <iostream>
#include <iomanip>

int main( void )
{
   using namespace std;
   float i = -123.456F;
   cout.fill( '.' );
   cout << setw( 10 ) << i << endl;
   cout << setw( 10 ) << internal << i << endl;
}
```

```Output
..-123.456
-..123.456
```

## <a name="is_error_code_enum"></a> is_error_code_enum

```cpp
template <> struct is_error_code_enum<io_errc> : public true_type { };
```

## <a name="iostream_category"></a> iostream_category

```cpp
const error_category& iostream_category() noexcept;
```

## <a name="left"></a> left

Causes text that is not as wide as the output width to appear in the stream flush with the left margin.

```cpp
ios_base& left(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

The manipulator effectively calls `str.`[setf](../standard-library/ios-base-class.md#setf)`(ios_base::left, ios_base::adjustfield)`, and then returns *str*.

### Example

```cpp
// ios_left.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   double f1= 5.00;
   cout.width( 20 );
   cout << f1 << endl;
   cout << left << f1 << endl;
}
```

```Output
5
        5
```

## <a name="make_error_code"></a> make_error_code

```cpp
error_code make_error_code(io_errc e) noexcept;
```

## <a name="make_error_condition"></a> make_error_condition

```cpp
error_condition make_error_condition(io_errc e) noexcept;
```

## <a name="noboolalpha"></a> noboolalpha

Specifies that variables of type [bool](../cpp/bool-cpp.md) appear as 1 or 0 in the stream.

```cpp
ios_base& noboolalpha(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

By default, `noboolalpha` is in effect.

`noboolalpha` effectively calls `str.`[unsetf](../standard-library/ios-base-class.md#unsetf)`(ios_base::boolalpha)`, and then returns *str*.

[boolalpha](../standard-library/ios-functions.md#boolalpha) reverses the effect of `noboolalpha`.

### Example

See [boolalpha](../standard-library/ios-functions.md#boolalpha) for an example of using `noboolalpha`.

## <a name="noshowbase"></a> noshowbase

Turns off indicating the notational base in which a number is displayed.

```cpp
ios_base& noshowbase(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

`noshowbase` is on by default. Use [showbase](../standard-library/ios-functions.md#showbase) to indicate the notational base of numbers.

The manipulator effectively calls `str.`[unsetf](../standard-library/ios-base-class.md#unsetf)`(ios_base::showbase)`, and then returns *str*.

### Example

See [showbase](../standard-library/ios-functions.md#showbase) for an example of how to use `noshowbase`.

## <a name="noshowpoint"></a> noshowpoint

Displays only the whole-number part of floating-point numbers whose fractional part is zero.

```cpp
ios_base& noshowpoint(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

`noshowpoint` is on by default; use [showpoint](../standard-library/ios-functions.md#showpoint) and [precision](../standard-library/ios-base-class.md#precision) to display zeros after the decimal point.

The manipulator effectively calls `str.`[unsetf](../standard-library/ios-base-class.md#unsetf)`(ios_base::showpoint)`, and then returns *str*.

### Example

```cpp
// ios_noshowpoint.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   double f1= 5.000;
   cout << f1 << endl;   // noshowpoint is default
   cout.precision( 4 );
   cout << showpoint << f1 << endl;
   cout << noshowpoint << f1 << endl;
}
```

```Output
5
5.000
5
```

## <a name="noshowpos"></a> noshowpos

Causes positive numbers to not be explicitly signed.

```cpp
ios_base& noshowpos(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

`noshowpos` is on by default.

The manipulator effectively calls `str.`[unsetf](../standard-library/ios-base-class.md#unsetf)`(ios_base::showps)`, then returns *str*.

### Example

See [showpos](../standard-library/ios-functions.md#showpos) for an example of using `noshowpos`.

## <a name="noskipws"></a> noskipws

Cause spaces to be read by the input stream.

```cpp
ios_base& noskipws(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

By default, [skipws](../standard-library/ios-functions.md#skipws) is in effect. When a space is read in the input stream, it signals the end of the buffer.

The manipulator effectively calls `str.`[unsetf](../standard-library/ios-base-class.md#unsetf)`(ios_base::skipws)`, and then returns *str*.

### Example

```cpp
// ios_noskipws.cpp
// compile with: /EHsc
#include <iostream>
#include <string>

int main() {
   using namespace std;
   string s1, s2, s3;
   cout << "Enter three strings: ";
   cin >> noskipws >> s1 >> s2 >> s3;
   cout << "." << s1  << "." << endl;
   cout << "." << s2 << "." << endl;
   cout << "." << s3 << "." << endl;
}
```

## <a name="nounitbuf"></a> nounitbuf

Causes output to be buffered and processed on when the buffer is full.

```cpp
ios_base& nounitbuf(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

[unitbuf](../standard-library/ios-functions.md#unitbuf) causes the buffer to be processed when it is not empty.

The manipulator effectively calls `str.`[unsetf](../standard-library/ios-base-class.md#unsetf)`(ios_base::unitbuf)`, and then returns *str*.

## <a name="nouppercase"></a> nouppercase

Specifies that hexadecimal digits and the exponent in scientific notation appear in lowercase.

```cpp
ios_base& nouppercase(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

The manipulator effectively calls `str.`[unsetf](../standard-library/ios-base-class.md#unsetf)`(ios_base::uppercase)`, and then returns *str*.

### Example

See [uppercase](../standard-library/ios-functions.md#uppercase) for an example of using `nouppercase`.

## <a name="oct"></a> oct

Specifies that integer variables appear in base 8 notation.

```cpp
ios_base& oct(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

By default, integer variables are displayed in base 10 notation. [dec](../standard-library/ios-functions.md#dec) and [hex](../standard-library/ios-functions.md#hex) also change the way integer variables appear.

The manipulator effectively calls `str.`[setf](../standard-library/ios-base-class.md#setf)`(ios_base::oct, ios_base::basefield)`, and then returns *str*.

### Example

See [dec](../standard-library/ios-functions.md#dec) for an example of how to use `oct`.

## <a name="right"></a> right

Causes text that is not as wide as the output width to appear in the stream flush with the right margin.

```cpp
ios_base& right(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

[left](../standard-library/ios-functions.md#left) also modifies the justification of text.

The manipulator effectively calls `str.`[setf](../standard-library/ios-base-class.md#setf)`(ios_base::right, ios_base::adjustfield)`, and then returns *str*.

### Example

```cpp
// ios_right.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   double f1= 5.00;
   cout << f1 << endl;
   cout.width( 20 );
   cout << f1 << endl;
   cout.width( 20 );
   cout << left << f1 << endl;
   cout.width( 20 );
   cout << f1 << endl;
   cout.width( 20 );
   cout << right << f1 << endl;
   cout.width( 20 );
   cout << f1 << endl;
}
```

```Output
5
                   5
5
5
                   5
                   5
```

## <a name="scientific"></a> scientific

Causes floating-point numbers to be displayed using scientific notation.

```cpp
ios_base& scientific(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

By default, [fixed](../standard-library/ios-functions.md#fixed) notation is in effect for floating-point numbers.

The manipulator effectively calls `str.`[setf](../standard-library/ios-base-class.md#setf)`(ios_base::scientific, ios_base::floatfield)`, and then returns *str*.

### Example

```cpp
// ios_scientific.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   float i = 100.23F;

   cout << i << endl;
   cout << scientific << i << endl;
}
```

```Output
100.23
1.002300e+002
```

## <a name="showbase"></a> showbase

Indicates the notational base in which a number is displayed.

```cpp
ios_base& showbase(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

The notational base of a number can be changed with [dec](../standard-library/ios-functions.md#dec), [oct](../standard-library/ios-functions.md#oct), or [hex](../standard-library/ios-functions.md#hex).

The manipulator effectively calls `str.`[setf](../standard-library/ios-base-class.md#setf)`(ios_base::showbase)`, and then returns *str*.

### Example

```cpp
// ios_showbase.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   int j = 100;

   cout << showbase << j << endl;   // dec is default
   cout << hex << j << showbase << endl;
   cout << oct << j << showbase << endl;

   cout << dec << j << noshowbase << endl;
   cout << hex << j << noshowbase << endl;
   cout << oct << j << noshowbase << endl;
}
```

```Output
100
0x64
0144
100
64
144
```

## <a name="showpoint"></a> showpoint

Displays the whole-number part of a floating-point number and digits to the right of the decimal point even when the fractional part is zero.

```cpp
ios_base& showpoint(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

By default, [noshowpoint](../standard-library/ios-functions.md#noshowpoint) is in effect.

The manipulator effectively calls `str.`[setf](../standard-library/ios-base-class.md#setf)`(ios_base::showpoint)`, and then returns *str*.

### Example

See [noshowpoint](../standard-library/ios-functions.md#noshowpoint) for an example of using `showpoint`.

## <a name="showpos"></a> showpos

Causes positive numbers to be explicitly signed.

```cpp
ios_base& showpos(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

[noshowpos](../standard-library/ios-functions.md#noshowpos) is the default.

The manipulator effectively calls `str.`[setf](../standard-library/ios-base-class.md#setf)`(ios_base::showpos)`, and then returns *str*.

### Example

```cpp
// ios_showpos.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   int i = 1;

   cout << noshowpos << i << endl;   // noshowpos is default
   cout << showpos << i << endl;
}
```

```Output
1
+1
```

## <a name="skipws"></a> skipws

Cause spaces to not be read by the input stream.

```cpp
ios_base& skipws(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

By default, `skipws` is in effect. [noskipws](../standard-library/ios-functions.md#noskipws) will cause spaces to be read from the input stream.

The manipulator effectively calls `str.`[setf](../standard-library/ios-base-class.md#setf)`(ios_base::skipws)`, and then returns *str*.

### Example

```cpp
#include <iostream>
#include <string>

int main( )
{
   using namespace std;
   char s1, s2, s3;
   cout << "Enter three characters: ";
   cin >> skipws >> s1 >> s2 >> s3;
   cout << "." << s1  << "." << endl;
   cout << "." << s2 << "." << endl;
   cout << "." << s3 << "." << endl;
}
```

```Input
1 2 3
```

```Output
Enter three characters: 1 2 3
.1.
.2.
.3.
```

## <a name="unitbuf"></a> unitbuf

Causes output to be processed when the buffer is not empty.

```cpp
ios_base& unitbuf(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

Note that `endl` also flushes the buffer.

[nounitbuf](../standard-library/ios-functions.md#nounitbuf) is in effect by default.

The manipulator effectively calls `str.`[setf](../standard-library/ios-base-class.md#setf)`(`[ios_base::unitbuf](../standard-library/ios-base-class.md#fmtflags)`)`, and then returns *str*.

## <a name="uppercase"></a> uppercase

Specifies that hexadecimal digits and the exponent in scientific notation appear in uppercase.

```cpp
ios_base& uppercase(ios_base& str);
```

### Parameters

*str*\
A reference to an object of type [ios_base](../standard-library/ios-base-class.md), or to a type that inherits from `ios_base`.

### Return Value

A reference to the object from which *str* is derived.

### Remarks

By default, [nouppercase](../standard-library/ios-functions.md#nouppercase) is in effect.

The manipulator effectively calls `str.`[setf](../standard-library/ios-base-class.md#setf)`(`[ios_base::uppercase](../standard-library/ios-base-class.md#fmtflags)`)`, and then returns *str*.

### Example

```cpp
// ios_uppercase.cpp
// compile with: /EHsc
#include <iostream>

int main( void )
{
   using namespace std;

   double i = 1.23e100;
   cout << i << endl;
   cout << uppercase << i << endl;

   int j = 10;
   cout << hex << nouppercase << j << endl;
   cout << hex << uppercase << j << endl;
}
```

```Output
1.23e+100
1.23E+100
a
A
```
