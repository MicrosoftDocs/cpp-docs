---
description: "Learn more about: complex&lt;float&gt;"
title: "complex&lt;float&gt;"
ms.date: "11/04/2016"
f1_keywords: ["complex/std::complex<float>"]
helpviewer_keywords: ["complex<float> function"]
ms.assetid: 1178eb1e-39bd-4017-89cd-aea95f813939
---
# complex&lt;float&gt;

Describes an object that stores an ordered pair of objects both of type **`float`**, the first representing the real part of a complex number and the second representing the imaginary part.

## Syntax

```cpp
template <>
class complex<float> {
public:
    constexpr complex(
    float _RealVal = 0,
    float _ImagVal = 0);

constexpr complex(
    const complex<float>& complexNum);

constexpr complex(
    const complex<double>& complexNum);

constexpr complex(
    const complex<long double>& complexNum);
// rest same as class template complex
};
```

### Parameters

*_RealVal*\
The value of type **`float`** for the real part of the complex number being constructed.

*_ImagVal*\
The value of type **`float`** for the imaginary part of the complex number being constructed.

*complexNum*\
The complex number of type **`double`** or of type **`long double`** whose real and imaginary parts are used to initialize a complex number of type **`float`** being constructed.

## Return Value

A complex number of type **`float`**.

## Remarks

The explicit specialization of the class template complex to a complex class of type **`float`** differs from the class template only in the constructors it defines. The conversion from **`float`** to **`double`** is allowed to be implicit, but the less safe conversion from **`float`** to **`long double`** is required to be **`explicit`**. The use of **`explicit`** rules out the initiation with type conversion using assignment syntax.

For more information on the class template `complex`, see [complex Class](../standard-library/complex-class.md). For a list of members of the class template `complex`, see .

## Example

```cpp
// complex_comp_flt.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;

   // The first constructor specifies real & imaginary parts
   complex <float> c1 ( 4.0 , 5.0 );
   cout << "Specifying initial real & imaginary parts,\n"
        << " as type float gives c1 = " << c1 << endl;

   // The second constructor initializes values of the real &
   // imaginary parts using those of complex number of type double
   complex <double> c2double ( 1.0 , 3.0 );
   complex <float> c2float ( c2double );
   cout << "Implicit conversion from type double to type float,"
        << endl << "gives c2float = " << c2float << endl;

   // The third constructor initializes values of the real &
   // imaginary parts using those of a complex number
   // of type long double
   complex <long double> c3longdouble ( 3.0 , 4.0 );
   complex <float> c3float ( c3longdouble );
   cout << "Explicit conversion from type long double to type float,"
        << endl << "gives c3float = " << c3float << endl;

   // The modulus and argument of a complex number can be recovered
   double absc3 = abs ( c3float);
   double argc3 = arg ( c3float);
   cout << "The modulus of c3 is recovered from c3 using: abs ( c3 ) = "
        << absc3 << endl;
   cout << "Argument of c3 is recovered from c3 using:"
        << endl << "arg ( c3 ) = "
        << argc3 << " radians, which is " << argc3 * 180 / pi
        << " degrees." << endl;
}
/* Output:
Specifying initial real & imaginary parts,
as type float gives c1 = (4,5)
Implicit conversion from type double to type float,
gives c2float = (1,3)
Explicit conversion from type long double to type float,
gives c3float = (3,4)
The modulus of c3 is recovered from c3 using: abs ( c3 ) = 5
Argument of c3 is recovered from c3 using:
arg ( c3 ) = 0.927295 radians, which is 53.1301 degrees.
*/
```

## Requirements

**Header**: \<complex>

**Namespace:** std

## See also

[complex Class](../standard-library/complex-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
