---
description: "Learn more about: numeric_limits Class"
title: "numeric_limits Class"
ms.date: "11/04/2016"
f1_keywords: ["limits/std::numeric_limits", "limits/std::numeric_limits::denorm_min", "limits/std::numeric_limits::digits", "limits/std::numeric_limits::digits10", "limits/std::numeric_limits::epsilon", "limits/std::numeric_limits::has_denorm", "limits/std::numeric_limits::has_denorm_loss", "limits/std::numeric_limits::has_infinity", "limits/std::numeric_limits::has_quiet_NaN", "limits/std::numeric_limits::has_signaling_NaN", "limits/std::numeric_limits::infinity", "limits/std::numeric_limits::is_bounded", "limits/std::numeric_limits::is_exact", "limits/std::numeric_limits::is_iec559", "limits/std::numeric_limits::is_integer", "limits/std::numeric_limits::is_modulo", "limits/std::numeric_limits::is_signed", "limits/std::numeric_limits::is_specialized", "limits/std::numeric_limits::lowest", "limits/std::numeric_limits::max", "limits/std::numeric_limits::max_digits10", "limits/std::numeric_limits::max_exponent", "limits/std::numeric_limits::max_exponent10", "limits/std::numeric_limits::min", "limits/std::numeric_limits::min_exponent", "limits/std::numeric_limits::min_exponent10", "limits/std::numeric_limits::quiet_NaN", "limits/std::numeric_limits::radix", "limits/std::numeric_limits::round_error", "limits/std::numeric_limits::round_style", "limits/std::numeric_limits::signaling_NaN", "limits/std::numeric_limits::tinyness_before", "limits/std::numeric_limits::traps"]
helpviewer_keywords: ["std::numeric_limits [C++]", "std::numeric_limits [C++], denorm_min", "std::numeric_limits [C++], digits", "std::numeric_limits [C++], digits10", "std::numeric_limits [C++], epsilon", "std::numeric_limits [C++], has_denorm", "std::numeric_limits [C++], has_denorm_loss", "std::numeric_limits [C++], has_infinity", "std::numeric_limits [C++], has_quiet_NaN", "std::numeric_limits [C++], has_signaling_NaN", "std::numeric_limits [C++], infinity", "std::numeric_limits [C++], is_bounded", "std::numeric_limits [C++], is_exact", "std::numeric_limits [C++], is_iec559", "std::numeric_limits [C++], is_integer", "std::numeric_limits [C++], is_modulo", "std::numeric_limits [C++], is_signed", "std::numeric_limits [C++], is_specialized", "std::numeric_limits [C++], lowest", "std::numeric_limits [C++], max", "std::numeric_limits [C++], max_digits10", "std::numeric_limits [C++], max_exponent", "std::numeric_limits [C++], max_exponent10", "std::numeric_limits [C++], min", "std::numeric_limits [C++], min_exponent", "std::numeric_limits [C++], min_exponent10", "std::numeric_limits [C++], quiet_NaN", "std::numeric_limits [C++], radix", "std::numeric_limits [C++], round_error", "std::numeric_limits [C++], round_style", "std::numeric_limits [C++], signaling_NaN", "std::numeric_limits [C++], tinyness_before", "std::numeric_limits [C++], traps"]
ms.assetid: 9e817177-0e91-48e6-b680-0531c4b26625
---
# numeric_limits Class

The class template describes arithmetic properties of built-in numerical types.

## Syntax

```cpp
template <class Type>
    class numeric_limits
```

### Parameters

*Type*\
The fundamental element data type whose properties are being tested or queried or set. *Type* can also be declared **`const`**, **`volatile`**, or **`const volatile`**.

## Remarks

The header defines explicit specializations for the types **`wchar_t`**, **`bool`**, **`char`**, **`signed char`**, **`unsigned char`**, **`short`**, **`unsigned short`**, **`int`**, **`unsigned int`**, **`long`**, **`unsigned long`**, **`float`**, **`double`**, **`long double`**, **`long long`**, **`unsigned long long`**, **`char16_t`**, and **`char32_t`**. For these explicit specializations, the member [numeric_limits::is_specialized](#is_specialized) is **`true`**, and all relevant members have meaningful values. The program can supply additional explicit specializations. Most member functions of the class describe or test possible implementations of **`float`**.

For an arbitrary specialization, no members have meaningful values. A member object that does not have a meaningful value stores zero (or **`false`**) and a member function that does not return a meaningful value returns `Type(0)`.

## Static Functions and Constants

|Name|Description|
|-|-|
|[denorm_min](#denorm_min)|Returns the smallest nonzero denormalized value.|
|[digits](#digits)|Returns the number of radix digits that the type can represent without loss of precision.|
|[digits10](#digits10)|Returns the number of decimal digits that the type can represent without loss of precision.|
|[epsilon](#epsilon)|Returns the difference between 1 and the smallest value greater than 1 that the data type can represent.|
|[has_denorm](#has_denorm)|Tests whether a type allows denormalized values.|
|[has_denorm_loss](#has_denorm_loss)|Tests whether loss of accuracy is detected as a denormalization loss rather than as an inexact result.|
|[has_infinity](#has_infinity)|Tests whether a type has a representation for positive infinity.|
|[has_quiet_NaN](#has_quiet_nan)|Tests whether a type has a representation for a quiet not a number (NAN), which is non-signaling.|
|[has_signaling_NaN](#has_signaling_nan)|Tests whether a type has a representation for signaling not a number (NAN).|
|[infinity](#infinity)|The representation for positive infinity for a type, if available.|
|[is_bounded](#is_bounded)|Tests if the set of values that a type may represent is finite.|
|[is_exact](#is_exact)|Tests if the calculations done on a type are free of rounding errors.|
|[is_iec559](#is_iec559)|Tests if a type conforms to IEC 559 standards.|
|[is_integer](#is_integer)|Tests if a type has an integer representation.|
|[is_modulo](#is_modulo)|Tests if a type has a modulo representation.|
|[is_signed](#is_signed)|Tests if a type has a signed representation.|
|[is_specialized](#is_specialized)|Tests if a type has an explicit specialization defined in the class template `numeric_limits`.|
|[lowest](#lowest)|Returns the most negative finite value.|
|[max](#max)|Returns the maximum finite value for a type.|
|[max_digits10](#max_digits10)|Returns the number of decimal digits required to ensure that two distinct values of the type have distinct decimal representations.|
|[max_exponent](#max_exponent)|Returns the maximum positive integral exponent that the floating-point type can represent as a finite value when a base of radix is raised to that power.|
|[max_exponent10](#max_exponent10)|Returns the maximum positive integral exponent that the floating-point type can represent as a finite value when a base of ten is raised to that power.|
|[min](#min)|Returns the minimum normalized value for a type.|
|[min_exponent](#min_exponent)|Returns the maximum negative integral exponent that the floating-point type can represent as a finite value when a base of radix is raised to that power.|
|[min_exponent10](#min_exponent10)|Returns the maximum negative integral exponent that the floating-point type can represent as a finite value when a base of ten is raised to that power.|
|[quiet_NaN](#quiet_nan)|Returns the representation of a quiet not a number (NAN) for the type.|
|[radix](#radix)|Returns the integral base, referred to as radix, used for the representation of a type.|
|[round_error](#round_error)|Returns the maximum rounding error for the type.|
|[round_style](#round_style)|Returns a value that describes the various methods that an implementation can choose for rounding a floating-point value to an integer value.|
|[signaling_NaN](#signaling_nan)|Returns the representation of a signaling not a number (NAN) for the type.|
|[tinyness_before](#tinyness_before)|Tests whether a type can determine that a value is too small to represent as a normalized value before rounding it.|
|[traps](#traps)|Tests whether trapping that reports on arithmetic exceptions is implemented for a type.|

### <a name="denorm_min"></a> denorm_min

Returns the smallest nonzero denormalized value.

```cpp
static constexpr Type denorm_min() throw();
```

#### Return Value

The smallest nonzero denormalized value.

#### Remarks

**`long double`** is the same as **`double`** for the C++ compiler.

The function returns the minimum value for the type, which is the same as [min](#min) if [has_denorm](#has_denorm) is not equal to `denorm_present`.

#### Example

```cpp
// numeric_limits_denorm_min.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The smallest nonzero denormalized value" << endl
        << "for float objects is: "
        << numeric_limits<float>::denorm_min( ) << endl;
   cout << "The smallest nonzero denormalized value" << endl
        << "for double objects is: "
        << numeric_limits<double>::denorm_min( ) << endl;
   cout << "The smallest nonzero denormalized value" << endl
        << "for long double objects is: "
        << numeric_limits<long double>::denorm_min( ) << endl;

   // A smaller value will round to zero
   cout << numeric_limits<float>::denorm_min( )/2 <<endl;
   cout << numeric_limits<double>::denorm_min( )/2 <<endl;
   cout << numeric_limits<long double>::denorm_min( )/2 <<endl;
}
```

```Output
The smallest nonzero denormalized value
for float objects is: 1.4013e-045
The smallest nonzero denormalized value
for double objects is: 4.94066e-324
The smallest nonzero denormalized value
for long double objects is: 4.94066e-324
0
0
0
```

### <a name="digits"></a> digits

Returns the number of radix digits that the type can represent without loss of precision.

```cpp
static constexpr int digits = 0;
```

#### Return Value

The number of radix digits that the type can represent without loss of precision.

#### Remarks

The member stores the number of radix digits that the type can represent without change, which is the number of bits other than any sign bit for a predefined integer type, or the number of mantissa digits for a predefined floating-point type.

#### Example

```cpp
// numeric_limits_digits_min.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << numeric_limits<float>::digits <<endl;
   cout << numeric_limits<double>::digits <<endl;
   cout << numeric_limits<long double>::digits <<endl;
   cout << numeric_limits<int>::digits <<endl;
   cout << numeric_limits<__int64>::digits <<endl;
}
```

```Output
24
53
53
31
63
```

### <a name="digits10"></a> digits10

Returns the number of decimal digits that the type can represent without loss of precision.

```cpp
static constexpr int digits10 = 0;
```

#### Return Value

The number of decimal digits that the type can represent without loss of precision.

#### Example

```cpp
// numeric_limits_digits10.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << numeric_limits<float>::digits10 <<endl;
   cout << numeric_limits<double>::digits10 <<endl;
   cout << numeric_limits<long double>::digits10 <<endl;
   cout << numeric_limits<int>::digits10 <<endl;
   cout << numeric_limits<__int64>::digits10 <<endl;
   float f = (float)99999999;
   cout.precision ( 10 );
   cout << "The float is; " << f << endl;
}
```

```Output
6
15
15
9
18
The float is; 100000000
```

### <a name="epsilon"></a> epsilon

The function returns the difference between 1 and the smallest value greater than 1 that is representable for the data type.

```cpp
static constexpr Type epsilon() throw();
```

#### Return Value

The difference between 1 and the smallest value greater than 1 that is representable for the data type.

#### Remarks

The value is FLT_EPSILON for type **`float`**. `epsilon` for a type is the smallest positive floating-point number *N* such that *N* + `epsilon` + *N* is representable.

#### Example

```cpp
// numeric_limits_epsilon.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The difference between 1 and the smallest "
        << "value greater than 1" << endl
        << "for float objects is: "
        << numeric_limits<float>::epsilon( ) << endl;
   cout << "The difference between 1 and the smallest "
        << "value greater than 1" << endl
        << "for double objects is: "
        << numeric_limits<double>::epsilon( ) << endl;
   cout << "The difference between 1 and the smallest "
        << "value greater than 1" << endl
        << "for long double objects is: "
        << numeric_limits<long double>::epsilon( ) << endl;
}
```

```Output
The difference between 1 and the smallest value greater than 1
for float objects is: 1.19209e-007
The difference between 1 and the smallest value greater than 1
for double objects is: 2.22045e-016
The difference between 1 and the smallest value greater than 1
for long double objects is: 2.22045e-016
```

### <a name="has_denorm"></a> has_denorm

Tests whether a type allows denormalized values.

```cpp
static constexpr float_denorm_style has_denorm = denorm_absent;
```

#### Return Value

An enumeration value of type `const float_denorm_style`, indicating whether the type allows denormalized values.

#### Remarks

The member stores `denorm_present` for a floating-point type that has denormalized values, effectively a variable number of exponent bits.

#### Example

```cpp
// numeric_limits_has_denorm.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects allow denormalized values: "
        << numeric_limits<float>::has_denorm
        << endl;
   cout << "Whether double objects allow denormalized values: "
        << numeric_limits<double>::has_denorm
        << endl;
   cout << "Whether long int objects allow denormalized values: "
        << numeric_limits<long int>::has_denorm
        << endl;
}
```

```Output
Whether float objects allow denormalized values: 1
Whether double objects allow denormalized values: 1
Whether long int objects allow denormalized values: 0
```

### <a name="has_denorm_loss"></a> has_denorm_loss

Tests whether loss of accuracy is detected as a denormalization loss rather than as an inexact result.

```cpp
static constexpr bool has_denorm_loss = false;
```

#### Return Value

**`true`** if the loss of accuracy is detected as a denormalization loss; **`false`** if not.

#### Remarks

The member stores true for a type that determines whether a value has lost accuracy because it is delivered as a denormalized result (too small to represent as a normalized value) or because it is inexact (not the same as a result not subject to limitations of exponent range and precision), an option with IEC 559 floating-point representations that can affect some results.

#### Example

```cpp
// numeric_limits_has_denorm_loss.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects can detect denormalized loss: "
        << numeric_limits<float>::has_denorm_loss
        << endl;
   cout << "Whether double objects can detect denormalized loss: "
        << numeric_limits<double>::has_denorm_loss
        << endl;
   cout << "Whether long int objects can detect denormalized loss: "
        << numeric_limits<long int>::has_denorm_loss
        << endl;
}
```

```Output
Whether float objects can detect denormalized loss: 1
Whether double objects can detect denormalized loss: 1
Whether long int objects can detect denormalized loss: 0
```

### <a name="has_infinity"></a> has_infinity

Tests whether a type has a representation for positive infinity.

```cpp
static constexpr bool has_infinity = false;
```

#### Return Value

**`true`** if the type has a representation for positive infinity; **`false`** if not.

#### Remarks

The member returns **`true`** if [is_iec559](#is_iec559) is **`true`**.

#### Example

```cpp
// numeric_limits_has_infinity.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have infinity: "
        << numeric_limits<float>::has_infinity
        << endl;
   cout << "Whether double objects have infinity: "
        << numeric_limits<double>::has_infinity
        << endl;
   cout << "Whether long int objects have infinity: "
        << numeric_limits<long int>::has_infinity
        << endl;
}
```

```Output
Whether float objects have infinity: 1
Whether double objects have infinity: 1
Whether long int objects have infinity: 0
```

### <a name="has_quiet_nan"></a> has_quiet_NaN

Tests whether a type has a representation for a quiet not a number (NAN), which is nonsignaling.

```cpp
static constexpr bool has_quiet_NaN = false;
```

#### Return Value

**`true`** if the **type** has a representation for a quiet NAN; **`false`** if not.

#### Remarks

A quiet NAN is an encoding for not a number, which does not signal its presence in an expression. The return value is **`true`** if [is_iec559](#is_iec559) is true.

#### Example

```cpp
// numeric_limits_has_quiet_nan.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have quiet_NaN: "
        << numeric_limits<float>::has_quiet_NaN
        << endl;
   cout << "Whether double objects have quiet_NaN: "
        << numeric_limits<double>::has_quiet_NaN
        << endl;
   cout << "Whether long int objects have quiet_NaN: "
        << numeric_limits<long int>::has_quiet_NaN
        << endl;
}
```

```Output
Whether float objects have quiet_NaN: 1
Whether double objects have quiet_NaN: 1
Whether long int objects have quiet_NaN: 0
```

### <a name="has_signaling_nan"></a> has_signaling_NaN

Tests whether a type has a representation for signaling not a number (NAN).

```cpp
static constexpr bool has_signaling_NaN = false;
```

#### Return Value

**`true`** if the type has a representation for a signaling NAN; **`false`** if not.

#### Remarks

A signaling NAN is an encoding for not a number, which signals its presence in an expression. The return value is **`true`** if [is_iec559](#is_iec559) is true.

#### Example

```cpp
// numeric_limits_has_signaling_nan.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have a signaling_NaN: "
        << numeric_limits<float>::has_signaling_NaN
        << endl;
   cout << "Whether double objects have a signaling_NaN: "
        << numeric_limits<double>::has_signaling_NaN
        << endl;
   cout << "Whether long int objects have a signaling_NaN: "
        << numeric_limits<long int>::has_signaling_NaN
        << endl;
}
```

```Output
Whether float objects have a signaling_NaN: 1
Whether double objects have a signaling_NaN: 1
Whether long int objects have a signaling_NaN: 0
```

### <a name="infinity"></a> infinity

The representation of positive infinity for a type, if available.

```cpp
static constexpr Type infinity() throw();
```

#### Return Value

The representation of positive infinity for a type, if available.

#### Remarks

The return value is meaningful only if [has_infinity](#has_infinity) is **`true`**.

#### Example

```cpp
// numeric_limits_infinity.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << numeric_limits<float>::has_infinity <<endl;
   cout << numeric_limits<double>::has_infinity<<endl;
   cout << numeric_limits<long double>::has_infinity <<endl;
   cout << numeric_limits<int>::has_infinity <<endl;
   cout << numeric_limits<__int64>::has_infinity <<endl;

   cout << "The representation of infinity for type float is: "
        << numeric_limits<float>::infinity( ) <<endl;
   cout << "The representation of infinity for type double is: "
        << numeric_limits<double>::infinity( ) <<endl;
   cout << "The representation of infinity for type long double is: "
        << numeric_limits<long double>::infinity( ) <<endl;
}
```

```Output
1
1
1
0
0
The representation of infinity for type float is: inf
The representation of infinity for type double is: inf
The representation of infinity for type long double is: inf
```

### <a name="is_bounded"></a> is_bounded

Tests if the set of values that a type may represent is finite.

```cpp
static constexpr bool is_bounded = false;
```

#### Return Value

**`true`** if the type has a bounded set of representable values; **`false`** if not.

#### Remarks

All predefined types have a bounded set of representable values and return **`true`**.

#### Example

```cpp
// numeric_limits_is_bounded.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have bounded set "
        << "of representable values: "
        << numeric_limits<float>::is_bounded
        << endl;
   cout << "Whether double objects have bounded set "
        << "of representable values: "
        << numeric_limits<double>::is_bounded
        << endl;
   cout << "Whether long int objects have bounded set "
        << "of representable values: "
        << numeric_limits<long int>::is_bounded
        << endl;
   cout << "Whether unsigned char objects have bounded set "
        << "of representable values: "
        << numeric_limits<unsigned char>::is_bounded
        << endl;
}
```

```Output
Whether float objects have bounded set of representable values: 1
Whether double objects have bounded set of representable values: 1
Whether long int objects have bounded set of representable values: 1
Whether unsigned char objects have bounded set of representable values: 1
```

### <a name="is_exact"></a> is_exact

Tests if the calculations done on a type are free of rounding errors.

```cpp
static constexpr bool is_exact = false;
```

#### Return Value

**`true`** if the calculations are free of rounding errors; **`false`** if not.

#### Remarks

All predefined integer types have exact representations for their values and return **`false`**. A fixed-point or rational representation is also considered exact, but a floating-point representation is not.

#### Example

```cpp
// numeric_limits_is_exact.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have calculations "
        << "free of rounding errors: "
        << numeric_limits<float>::is_exact
        << endl;
   cout << "Whether double objects have calculations "
        << "free of rounding errors: "
        << numeric_limits<double>::is_exact
        << endl;
   cout << "Whether long int objects have calculations "
        << "free of rounding errors: "
        << numeric_limits<long int>::is_exact
        << endl;
   cout << "Whether unsigned char objects have calculations "
        << "free of rounding errors: "
        << numeric_limits<unsigned char>::is_exact
        << endl;
}
```

```Output
Whether float objects have calculations free of rounding errors: 0
Whether double objects have calculations free of rounding errors: 0
Whether long int objects have calculations free of rounding errors: 1
Whether unsigned char objects have calculations free of rounding errors: 1
```

### <a name="is_iec559"></a> is_iec559

Tests if a type conforms to IEC 559 standards.

```cpp
static constexpr bool is_iec559 = false;
```

#### Return Value

**`true`** if the type conforms to the IEC 559 standards; **`false`** if not.

#### Remarks

The IEC 559 is an international standard for representing floating-point values and is also known as IEEE 754 in the USA.

#### Example

```cpp
// numeric_limits_is_iec559.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects conform to iec559 standards: "
        << numeric_limits<float>::is_iec559
        << endl;
   cout << "Whether double objects conform to iec559 standards: "
        << numeric_limits<double>::is_iec559
        << endl;
   cout << "Whether int objects conform to iec559 standards: "
        << numeric_limits<int>::is_iec559
        << endl;
   cout << "Whether unsigned char objects conform to iec559 standards: "
        << numeric_limits<unsigned char>::is_iec559
        << endl;
}
```

```Output
Whether float objects conform to iec559 standards: 1
Whether double objects conform to iec559 standards: 1
Whether int objects conform to iec559 standards: 0
Whether unsigned char objects conform to iec559 standards: 0
```

### <a name="is_integer"></a> is_integer

Tests if a type has an integer representation.

```cpp
static constexpr bool is_integer = false;
```

#### Return Value

**`true`** if the type has an integer representation; **`false`** if not.

#### Remarks

All predefined integer types have an integer representation.

#### Example

```cpp
// numeric_limits_is_integer.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have an integral representation: "
        << numeric_limits<float>::is_integer
        << endl;
   cout << "Whether double objects have an integral representation: "
        << numeric_limits<double>::is_integer
        << endl;
   cout << "Whether int objects have an integral representation: "
        << numeric_limits<int>::is_integer
        << endl;
   cout << "Whether unsigned char objects have an integral representation: "
        << numeric_limits<unsigned char>::is_integer
        << endl;
}
```

```Output
Whether float objects have an integral representation: 0
Whether double objects have an integral representation: 0
Whether int objects have an integral representation: 1
Whether unsigned char objects have an integral representation: 1
```

### <a name="is_modulo"></a> is_modulo

Tests if a **type** has a modulo representation.

```cpp
static constexpr bool is_modulo = false;
```

#### Return Value

**`true`** if the type has a modulo representation; **`false`** if not.

#### Remarks

A modulo representation is a representation where all results are reduced modulo some value. All predefined unsigned integer types have a modulo representation.

#### Example

```cpp
// numeric_limits_is_modulo.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have a modulo representation: "
        << numeric_limits<float>::is_modulo
        << endl;
   cout << "Whether double objects have a modulo representation: "
        << numeric_limits<double>::is_modulo
        << endl;
   cout << "Whether signed char objects have a modulo representation: "
        << numeric_limits<signed char>::is_modulo
        << endl;
   cout << "Whether unsigned char objects have a modulo representation: "
        << numeric_limits<unsigned char>::is_modulo
        << endl;
}
```

```Output
Whether float objects have a modulo representation: 0
Whether double objects have a modulo representation: 0
Whether signed char objects have a modulo representation: 1
Whether unsigned char objects have a modulo representation: 1
```

### <a name="is_signed"></a> is_signed

Tests if a type has a signed representation.

```cpp
static constexpr bool is_signed = false;
```

#### Return Value

**`true`** if the type has a signed representation; **`false`** if not.

#### Remarks

The member stores true for a type that has a signed representation, which is the case for all predefined floating-point and signed integer types.

#### Example

```cpp
// numeric_limits_is_signaled.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have a signed representation: "
        << numeric_limits<float>::is_signed
        << endl;
   cout << "Whether double objects have a signed representation: "
        << numeric_limits<double>::is_signed
        << endl;
   cout << "Whether signed char objects have a signed representation: "
        << numeric_limits<signed char>::is_signed
        << endl;
   cout << "Whether unsigned char objects have a signed representation: "
        << numeric_limits<unsigned char>::is_signed
        << endl;
}
```

```Output
Whether float objects have a signed representation: 1
Whether double objects have a signed representation: 1
Whether signed char objects have a signed representation: 1
Whether unsigned char objects have a signed representation: 0
```

### <a name="is_specialized"></a> is_specialized

Tests if a type has an explicit specialization defined in the class template `numeric_limits`.

```cpp
static constexpr bool is_specialized = false;
```

#### Return Value

**`true`** if the type has an explicit specialization defined in the class template; **`false`** if not.

#### Remarks

All scalar types other than pointers have an explicit specialization defined for class template `numeric_limits`.

#### Example

```cpp
// numeric_limits_is_specialized.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have an explicit "
        << "specialization in the class: "
        << numeric_limits<float>::is_specialized
        << endl;
   cout << "Whether float* objects have an explicit "
        << "specialization in the class: "
        << numeric_limits<float*>::is_specialized
        << endl;
   cout << "Whether int objects have an explicit "
        << "specialization in the class: "
        << numeric_limits<int>::is_specialized
        << endl;
   cout << "Whether int* objects have an explicit "
        << "specialization in the class: "
        << numeric_limits<int*>::is_specialized
        << endl;
}
```

```Output
Whether float objects have an explicit specialization in the class: 1
Whether float* objects have an explicit specialization in the class: 0
Whether int objects have an explicit specialization in the class: 1
Whether int* objects have an explicit specialization in the class: 0
```

### <a name="lowest"></a> lowest

Returns the most negative finite value.

```cpp
static constexpr Type lowest() throw();
```

#### Return Value

Returns the most negative finite value.

#### Remarks

Returns the most negative finite value for the type (which is typically `min()` for integer types and `-max()` for floating-point types). The return value is meaningful if `is_bounded` is **`true`**.

### <a name="max"></a> max

Returns the maximum finite value for a type.

```cpp
static constexpr Type max() throw();
```

#### Return Value

The maximum finite value for a type.

#### Remarks

The maximum finite value is INT_MAX for type **`int`** and FLT_MAX for type **`float`**. The return value is meaningful if [is_bounded](#is_bounded) is **`true`**.

#### Example

```cpp
// numeric_limits_max.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main() {
   cout << "The maximum value for type float is:  "
        << numeric_limits<float>::max( )
        << endl;
   cout << "The maximum value for type double is:  "
        << numeric_limits<double>::max( )
        << endl;
   cout << "The maximum value for type int is:  "
        << numeric_limits<int>::max( )
        << endl;
   cout << "The maximum value for type short int is:  "
        << numeric_limits<short int>::max( )
        << endl;
}
```

### <a name="max_digits10"></a> max_digits10

Returns the number of decimal digits required to make sure that two distinct values of the type have distinct decimal representations.

```cpp
static constexpr int max_digits10 = 0;
```

#### Return Value

Returns the number of decimal digits that are required to make sure that two distinct values of the type have distinct decimal representations.

#### Remarks

The member stores the number of decimal digits required to make sure that two distinct values of the type have distinct decimal representations.

### <a name="max_exponent"></a> max_exponent

Returns the maximum positive integral exponent that the floating-point type can represent as a finite value when a base of radix is raised to that power.

```cpp
static constexpr int max_exponent = 0;
```

#### Return Value

The maximum integral radix-based exponent representable by the type.

#### Remarks

The member function return is meaningful only for floating-point types. The `max_exponent` is the value FLT_MAX_EXP for type **`float`**.

#### Example

```cpp
// numeric_limits_max_exponent.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The maximum radix-based exponent for type float is:  "
        << numeric_limits<float>::max_exponent
        << endl;
   cout << "The maximum radix-based exponent for type double is:  "
        << numeric_limits<double>::max_exponent
        << endl;
   cout << "The maximum radix-based exponent for type long double is:  "
        << numeric_limits<long double>::max_exponent
        << endl;
}
```

```Output
The maximum radix-based exponent for type float is:  128
The maximum radix-based exponent for type double is:  1024
The maximum radix-based exponent for type long double is:  1024
```

### <a name="max_exponent10"></a> max_exponent10

Returns the maximum positive integral exponent that the floating-point type can represent as a finite value when a base of ten is raised to that power.

```cpp
static constexpr int max_exponent10 = 0;
```

#### Return Value

The maximum integral base 10 exponent representable by the type.

#### Remarks

The member function return is meaningful only for floating-point types. The `max_exponent` is the value FLT_MAX_10 for type **`float`**.

#### Example

```cpp
// numeric_limits_max_exponent10.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The maximum base 10 exponent for type float is:  "
           << numeric_limits<float>::max_exponent10
           << endl;
   cout << "The maximum base 10 exponent for type double is:  "
           << numeric_limits<double>::max_exponent10
           << endl;
   cout << "The maximum base 10 exponent for type long double is:  "
           << numeric_limits<long double>::max_exponent10
           << endl;
}
```

```Output
The maximum base 10 exponent for type float is:  38
The maximum base 10 exponent for type double is:  308
The maximum base 10 exponent for type long double is:  308
```

### <a name="min"></a> min

Returns the minimum normalized value for a type.

```cpp
static constexpr Type min() throw();
```

#### Return Value

The minimum normalized value for the type.

#### Remarks

The minimum normalized value is INT_MIN for type **`int`** and FLT_MIN for type **`float`**. The return value is meaningful if [is_bounded](#is_bounded) is **`true`** or if [is_signed](#is_signed) is **`false`**.

#### Example

```cpp
// numeric_limits_min.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The minimum value for type float is:  "
        << numeric_limits<float>::min( )
        << endl;
   cout << "The minimum value for type double is:  "
        << numeric_limits<double>::min( )
        << endl;
   cout << "The minimum value for type int is:  "
        << numeric_limits<int>::min( )
        << endl;
   cout << "The minimum value for type short int is:  "
        << numeric_limits<short int>::min( )
        << endl;
}
```

```Output
The minimum value for type float is:  1.17549e-038
The minimum value for type double is:  2.22507e-308
The minimum value for type int is:  -2147483648
The minimum value for type short int is:  -32768
```

### <a name="min_exponent"></a> min_exponent

Returns the maximum negative integral exponent that the floating-point type can represent as a finite value when a base of radix is raised to that power.

```cpp
static constexpr int min_exponent = 0;
```

#### Return Value

The minimum integral radix-based exponent representable by the type.

#### Remarks

The member function is meaningful only for floating-point types. The `min_exponent` is the value FLT_MIN_EXP for type **`float`**.

#### Example

```cpp
// numeric_limits_min_exponent.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The minimum radix-based exponent for type float is:  "
        << numeric_limits<float>::min_exponent
        << endl;
   cout << "The minimum radix-based exponent for type double is:  "
        << numeric_limits<double>::min_exponent
        << endl;
   cout << "The minimum radix-based exponent for type long double is:  "
         << numeric_limits<long double>::min_exponent
        << endl;
}
```

```Output
The minimum radix-based exponent for type float is:  -125
The minimum radix-based exponent for type double is:  -1021
The minimum radix-based exponent for type long double is:  -1021
```

### <a name="min_exponent10"></a> min_exponent10

Returns the maximum negative integral exponent that the floating-point type can represent as a finite value when a base of ten is raised to that power.

```cpp
static constexpr int min_exponent10 = 0;
```

#### Return Value

The minimum integral base 10 exponent representable by the type.

#### Remarks

The member function is meaningful only for floating-point types. The `min_exponent10` is the value FLT_MIN_10_EXP for type **`float`**.

#### Example

```cpp
// numeric_limits_min_exponent10.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The minimum base 10 exponent for type float is:  "
        << numeric_limits<float>::min_exponent10
        << endl;
   cout << "The minimum base 10 exponent for type double is:  "
        << numeric_limits<double>::min_exponent10
        << endl;
   cout << "The minimum base 10 exponent for type long double is:  "
        << numeric_limits<long double>::min_exponent10
        << endl;
}
```

```Output
The minimum base 10 exponent for type float is:  -37
The minimum base 10 exponent for type double is:  -307
The minimum base 10 exponent for type long double is:  -307
```

### <a name="quiet_nan"></a> quiet_NaN

Returns the representation of a quiet not a number (NAN) for the type.

```cpp
static constexpr Type quiet_NaN() throw();
```

#### Return Value

The representation of a quiet NAN for the type.

#### Remarks

The return value is meaningful only if [has_quiet_NaN](#has_quiet_nan) is **`true`**.

#### Example

```cpp
// numeric_limits_quiet_nan.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The quiet NaN for type float is:  "
        << numeric_limits<float>::quiet_NaN( )
        << endl;
   cout << "The quiet NaN for type int is:  "
        << numeric_limits<int>::quiet_NaN( )
        << endl;
   cout << "The quiet NaN for type long double is:  "
        << numeric_limits<long double>::quiet_NaN( )
        << endl;
}
```

```Output
The quiet NaN for type float is:  1.#QNAN
The quiet NaN for type int is:  0
The quiet NaN for type long double is:  1.#QNAN
```

### <a name="radix"></a> radix

Returns the integral base, referred to as radix, used for the representation of a type.

```cpp
static constexpr int radix = 0;
```

#### Return Value

The integral base for the representation of the type.

#### Remarks

The base is 2 for the predefined integer types, and the base to which the exponent is raised, or FLT_RADIX, for the predefined floating-point types.

#### Example

```cpp
// numeric_limits_radix.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The base for type float is:  "
        << numeric_limits<float>::radix
        << endl;
   cout << "The base for type int is:  "
        << numeric_limits<int>::radix
        << endl;
   cout << "The base for type long double is:  "
        << numeric_limits<long double>::radix
        << endl;
}
```

```Output
The base for type float is:  2
The base for type int is:  2
The base for type long double is:  2
```

### <a name="round_error"></a> round_error

Returns the maximum rounding error for the type.

```cpp
static constexpr Type round_error() throw();
```

#### Return Value

The maximum rounding error for the type.

#### Example

```cpp
// numeric_limits_round_error.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The maximum rounding error for type float is:  "
        << numeric_limits<float>::round_error( )
        << endl;
   cout << "The maximum rounding error for type int is:  "
        << numeric_limits<int>::round_error( )
        << endl;
   cout << "The maximum rounding error for type long double is:  "
        << numeric_limits<long double>::round_error( )
        << endl;
}
```

```Output
The maximum rounding error for type float is:  0.5
The maximum rounding error for type int is:  0
The maximum rounding error for type long double is:  0.5
```

### <a name="round_style"></a> round_style

Returns a value that describes the various methods that an implementation can choose for rounding a floating-point value to an integer value.

```cpp
static constexpr float_round_style round_style = round_toward_zero;
```

#### Return Value

A value from the `float_round_style` enumeration that describes the rounding style.

#### Remarks

The member stores a value that describes the various methods that an implementation can choose for rounding a floating-point value to an integer value.

The round style is hard coded in this implementation, so even if the program starts up with a different rounding mode, that value will not change.

#### Example

```cpp
// numeric_limits_round_style.cpp
// compile with: /EHsc
#include <iostream>
#include <float.h>
#include <limits>

using namespace std;

int main( )
{
   cout << "The rounding style for a double type is: "
        << numeric_limits<double>::round_style << endl;
   _controlfp_s(NULL,_RC_DOWN,_MCW_RC );
   cout << "The rounding style for a double type is now: "
        << numeric_limits<double>::round_style << endl;
   cout << "The rounding style for an int type is: "
        << numeric_limits<int>::round_style << endl;
}
```

```Output
The rounding style for a double type is: 1
The rounding style for a double type is now: 1
The rounding style for an int type is: 0
```

### <a name="signaling_nan"></a> signaling_NaN

Returns the representation of a signaling not a number (NAN) for the type.

```cpp
static constexpr Type signaling_NaN() throw();
```

#### Return Value

The representation of a signaling NAN for the type.

#### Remarks

The return value is meaningful only if [has_signaling_NaN](#has_signaling_nan) is **`true`**.

#### Example

```cpp
// numeric_limits_signaling_nan.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The signaling NaN for type float is:  "
        << numeric_limits<float>::signaling_NaN( )
        << endl;
   cout << "The signaling NaN for type int is:  "
        << numeric_limits<int>::signaling_NaN( )
        << endl;
   cout << "The signaling NaN for type long double is:  "
        << numeric_limits<long double>::signaling_NaN( )
        << endl;
}
```

### <a name="tinyness_before"></a> tinyness_before

Tests whether a type can determine that a value is too small to represent as a normalized value before rounding it.

```cpp
static constexpr bool tinyness_before = false;
```

#### Return Value

**`true`** if the type can detect tiny values before rounding; **`false`** if it cannot.

#### Remarks

Types that can detect tinyness were included as an option with IEC 559 floating-point representations and its implementation can affect some results.

#### Example

```cpp
// numeric_limits_tinyness_before.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float types can detect tinyness before rounding: "
        << numeric_limits<float>::tinyness_before
        << endl;
   cout << "Whether double types can detect tinyness before rounding: "
        << numeric_limits<double>::tinyness_before
        << endl;
   cout << "Whether long int types can detect tinyness before rounding: "
        << numeric_limits<long int>::tinyness_before
        << endl;
   cout << "Whether unsigned char types can detect tinyness before rounding: "
        << numeric_limits<unsigned char>::tinyness_before
        << endl;
}
```

```Output
Whether float types can detect tinyness before rounding: 1
Whether double types can detect tinyness before rounding: 1
Whether long int types can detect tinyness before rounding: 0
Whether unsigned char types can detect tinyness before rounding: 0
```

### <a name="traps"></a> traps

Tests whether trapping that reports on arithmetic exceptions is implemented for a type.

```cpp
static constexpr bool traps = false;
```

#### Return Value

**`true`** if trapping is implemented for the type; **`false`** if it is not.

#### Example

```cpp
// numeric_limits_traps.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float types have implemented trapping: "
        << numeric_limits<float>::traps
        << endl;
   cout << "Whether double types have implemented trapping: "
        << numeric_limits<double>::traps
        << endl;
   cout << "Whether long int types have implemented trapping: "
        << numeric_limits<long int>::traps
        << endl;
   cout << "Whether unsigned char types have implemented trapping: "
        << numeric_limits<unsigned char>::traps
        << endl;
}
```

```Output
Whether float types have implemented trapping: 1
Whether double types have implemented trapping: 1
Whether long int types have implemented trapping: 0
Whether unsigned char types have implemented trapping: 0
```
