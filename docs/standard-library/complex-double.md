---
description: "Learn more about: complex&lt;double&gt;"
title: "complex&lt;double&gt;"
ms.date: "11/04/2016"
f1_keywords: ["complex/std::complex<double>"]
helpviewer_keywords: ["complex<double> function"]
ms.assetid: 0d0b9d2a-9b9b-410b-82a0-86b6df127e47
---
# complex&lt;double&gt;

Describes an object that stores an ordered pair of objects both of type **`double`**, the first representing the real part of a complex number and the second representing the imaginary part.

## Syntax

```cpp
template <>
class complex<double> {
public:
    constexpr complex(
    double RealVal = 0,
    double ImagVal = 0);

constexpr complex(const complex<double>& complexNum);

constexpr explicit complex(const complex<long double>& complexNum);
// rest same as class template complex
};
```

### Parameters

*RealVal*\
The value of type **`double`** for the real part of the complex number being constructed.

*ImagVal*\
The value of type **`double`** for the imaginary part of the complex number being constructed.

*complexNum*\
The complex number of type **`float`** or of type **`long double`** whose real and imaginary parts are used to initialize a complex number of type **`double`** being constructed.

## Return Value

A complex number of type **`double`**.

## Remarks

The explicit specialization of the class template complex to a complex class of type **`double`** differs from the class template only in the constructors it defines. The conversion from **`float`** to **`double`** is allowed to be implicit, but the conversion from **`long double`** to **`double`** is required to be **`explicit`**. The use of **`explicit`** rules out the initiation with type conversion using assignment syntax.

For more information on the class template `complex`, see [complex Class](../standard-library/complex-class.md). For a list of members of the class template `complex`, see .

## Example

```cpp
// complex_comp_dbl.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;

   // The first constructor specifies real & imaginary parts
   complex <double> c1 ( 4.0 , 5.0 );
   cout << "Specifying initial real & imaginary parts,\n"
        << "as type double gives c1 = " << c1 << endl;

   // The second constructor initializes values of the real &
   // imaginary parts using those of complex number of type float
   complex <float> c2float ( 4.0 , 5.0 );
   complex <double> c2double ( c2float );
   cout << "Implicit conversion from type float to type double,"
        << endl << "gives c2double = " << c2double << endl;

   // The third constructor initializes values of the real &
   // imaginary parts using those of a complex number
   // of type long double
   complex <long double> c3longdouble ( 4.0 , 5.0 );
   complex <double> c3double ( c3longdouble );
   cout << "Explicit conversion from type float to type double,"
        << endl << "gives c3longdouble = " << c3longdouble << endl;

   // The modulus and argument of a complex number can be recovered
   double absc3 = abs ( c3longdouble );
   double argc3 = arg ( c3longdouble );
   cout << "The modulus of c3 is recovered from c3 using: abs ( c3 ) = "
        << absc3 << endl;
   cout << "Argument of c3 is recovered from c3 using:" << endl
        << "arg ( c3 ) = " << argc3 << " radians, which is "
        << argc3 * 180 / pi << " degrees." << endl;
}
/* Output:
Specifying initial real & imaginary parts,
as type double gives c1 = (4,5)
Implicit conversion from type float to type double,
gives c2double = (4,5)
Explicit conversion from type float to type double,
gives c3longdouble = (4,5)
The modulus of c3 is recovered from c3 using: abs ( c3 ) = 6.40312
Argument of c3 is recovered from c3 using:
arg ( c3 ) = 0.896055 radians, which is 51.3402 degrees.
*/
```

## Requirements

**Header**: \<complex>

**Namespace:** std

## See also

[complex Class](../standard-library/complex-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
