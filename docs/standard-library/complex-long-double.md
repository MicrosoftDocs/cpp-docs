---
description: "Learn more about: complex&lt;long double&gt;"
title: "complex&lt;long double&gt;"
ms.date: "11/04/2016"
f1_keywords: ["std::complex<long double>", "complex<long double>", "std.complex<long double>"]
helpviewer_keywords: ["complex<long double> function"]
ms.assetid: 37591991-b385-46e9-b727-d534dbc10432
---
# complex&lt;long double&gt;

This explicitly specialized class template describes an object that stores an ordered pair of objects, both of type **`long double`**, the first representing the real part of a complex number and the second representing the imaginary part.

## Syntax

```cpp
template <>
class complex<long double> {
public:
    constexpr complex(
    long double _RealVal = 0,
    long double _ImagVal = 0);

complex(
    constexpr complex<long double>& complexNum);

// rest same as class template complex
};
```

### Parameters

*_RealVal*\
The value of type **`long double`** for the real part of the complex number being constructed.

*_ImagVal*\
The value of type **`long double`** for the imaginary part of the complex number being constructed.

*complexNum*\
The complex number of type **`double`** or of type **`float`** whose real and imaginary parts are used to initialize a complex number of type **`long double`** being constructed.

## Return Value

A complex number of type **`long double`**.

## Remarks

The explicit specialization of the class template `complex` to a complex class of type **`long double`** differs from the class template only in the constructors it defines. The conversion from **`long double`** to **`float`** is allowed to be implicit, but the conversion from **`double`** to **`long double`** is required to be **`explicit`**. The use of **`explicit`** rules out the initiation with type conversion using assignment syntax.

For more information on the class template `complex` and its members, see [complex Class](../standard-library/complex-class.md).

**Microsoft-specific**: The **`long double`** and **`double`** types have the same representation, but are distinct types. For more information, see [Built-in types](../cpp/fundamental-types-cpp.md).

## Example

```cpp
// complex_comp_ld.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
    using namespace std;
    double pi = 3.14159265359;

    // The first constructor specifies real & imaginary parts
    complex<long double> c1( 4.0 , 5.0 );
    cout << "Specifying initial real & imaginary parts,\n"
        << " as type float gives c1 = " << c1 << endl;

    // The second constructor initializes values of the real &
    // imaginary parts using those of complex number of type float
    complex<float> c2float( 1.0 , 3.0 );
    complex<long double> c2longdouble ( c2float );
    cout << "Implicit conversion from type float to type long double,"
        << "\n gives c2longdouble = " << c2longdouble << endl;

    // The third constructor initializes values of the real &
    // imaginary parts using those of a complex number
    // of type double
    complex<double> c3double( 3.0 , 4.0 );
    complex<long double> c3longdouble( c3double );
    cout << "Implicit conversion from type long double to type float,"
        << "\n gives c3longdouble = " << c3longdouble << endl;

    // The modulus and argument of a complex number can be recovered
    double absc3 = abs( c3longdouble );
    double argc3 = arg( c3longdouble );
    cout << "The modulus of c3 is recovered from c3 using: abs( c3 ) = "
        << absc3 << endl;
    cout << "Argument of c3 is recovered from c3 using:\n arg( c3 ) = "
        << argc3 << " radians, which is " << argc3 * 180 / pi
        << " degrees." << endl;
}
```

```Output
Specifying initial real & imaginary parts,
as type float gives c1 = (4,5)
Implicit conversion from type float to type long double,
gives c2longdouble = (1,3)
Implicit conversion from type long double to type float,
gives c3longdouble = (3,4)
The modulus of c3 is recovered from c3 using: abs( c3 ) = 5
Argument of c3 is recovered from c3 using:
arg( c3 ) = 0.927295 radians, which is 53.1301 degrees.
```

## Requirements

**Header**: \<complex>

**Namespace:** std

## See also

[complex Class](../standard-library/complex-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
