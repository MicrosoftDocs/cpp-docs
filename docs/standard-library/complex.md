---
description: "Learn more about: &lt;complex&gt;"
title: "&lt;complex&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<complex>", "std::<complex>"]
helpviewer_keywords: ["complex header"]
ms.assetid: 5e728995-3059-496a-9ce9-61d1bfbe4f2b
---
# &lt;complex&gt;

Defines the container class template `complex` and its supporting templates.

## Requirements

**Header**: \<complex>

**Namespace:** std

## Remarks

A complex number is an ordered pair of real numbers. In purely geometrical terms, the complex plane is the real, two-dimensional plane. The special qualities of the complex plane that distinguish it from the real plane are due to its having an additional algebraic structure. This algebraic structure has two fundamental operations:

- Addition defined as (*a*, *b*) + (*c*, *d*) = (*a* + *c*, *b* + *d*)

- Multiplication defined as (*a*, *b*) \* (*c*, *d*) = (*ac* - *bd*, *ad* + *bc*)

The set of complex numbers with the operations of complex addition and complex multiplication are a field in the standard algebraic sense:

- The operations of addition and multiplication are commutative and associative and multiplication distributes over addition exactly as it does with real addition and multiplication on the field of real numbers.

- The complex number (0, 0) is the additive identity and (1, 0) is the multiplicative identity.

- The additive inverse for a complex number (*a*, *b*) is (-*a*, -*b*), and the multiplicative inverse for all such complex numbers except (0, 0) is

   (*a*/(*a*<sup>2</sup> + *b*<sup>2</sup>), -*b*/(*a*<sup>2</sup> + *b*<sup>2</sup>))

By representing a complex number *z* = (*a*, *b*) in the form *z* = *a* + *bi*, where *i*<sup>2</sup> = -1, the rules for the algebra of the set of real numbers can be applied to the set of complex numbers and to their components. For example:

   (1 + 2*i*) \* (2 + 3*i*)
   = 1 \* (2 + 3*i*) + 2*i* \* (2 + 3*i*)
   = (2 + 3*i*) + (4*i* + 6*i*<sup>2</sup>)
   = (2 - 6) + (3 + 4)*i*
   = -4 + 7*i*

The system of complex numbers is a field, but it is not an ordered field. There is no ordering of the complex numbers as there is for the field of real numbers and its subsets, so inequalities cannot be applied to complex numbers as they are to real numbers.

There are three common forms of representing a complex number *z*:

- Cartesian: *z* = *a* + *bi*

- Polar: *z* = *r* (cos *p* + *i* sin *p*)

- Exponential: *z* = *r* \* *e*<sup>*ip*</sup>

The terms used in these standard representations of a complex number are referred to as follows:

- The real Cartesian component or real part *a*.

- The imaginary Cartesian component or imaginary part *b*.

- The modulus or absolute value of a complex number *r*.

- The argument or phase angle *p* in radians.

Unless otherwise specified, functions that can return multiple values are required to return a principal value for their arguments greater than -π and less than or equal to +π to keep them single valued. All angles must be expressed in radians, where there are 2π radians (360 degrees) in a circle.

## Members

### Functions

|Name|Description|
|-|-|
|[abs](../standard-library/complex-functions.md#abs)|Calculates the modulus of a complex number.|
|[acos](../standard-library/complex-functions.md#acos)||
|[acosh](../standard-library/complex-functions.md#acosh)||
|[arg](../standard-library/complex-functions.md#arg)|Extracts the argument from a complex number.|
|[asin](../standard-library/complex-functions.md#asin)||
|[asinh](../standard-library/complex-functions.md#asinh)||
|[atan](../standard-library/complex-functions.md#atan)||
|[atanh](../standard-library/complex-functions.md#atanh)||
|[conj](../standard-library/complex-functions.md#conj)|Returns the complex conjugate of a complex number.|
|[cos](../standard-library/complex-functions.md#cos)|Returns the cosine of a complex number.|
|[cosh](../standard-library/complex-functions.md#cosh)|Returns the hyperbolic cosine of a complex number.|
|[exp](../standard-library/complex-functions.md#exp)|Returns the exponential function of a complex number.|
|[imag](../standard-library/complex-functions.md#imag)|Extracts the imaginary component of a complex number.|
|[log](../standard-library/complex-functions.md#log)|Returns the natural logarithm of a complex number.|
|[log10](../standard-library/complex-functions.md#log10)|Returns the base 10 logarithm of a complex number.|
|[norm](../standard-library/complex-functions.md#norm)|Extracts the norm of a complex number.|
|[polar](../standard-library/complex-functions.md#polar)|Returns the complex number, which corresponds to a specified modulus and argument, in Cartesian form.|
|[pow](../standard-library/complex-functions.md#pow)|Evaluates the complex number obtained by raising a base that is a complex number to the power of another complex number.|
|[proj](../standard-library/complex-functions.md#proj)||
|[real](../standard-library/complex-functions.md#real)|Extracts the real component of a complex number.|
|[sin](../standard-library/complex-functions.md#sin)|Returns the sine of a complex number.|
|[sinh](../standard-library/complex-functions.md#sinh)|Returns the hyperbolic sine of a complex number.|
|[sqrt](../standard-library/complex-functions.md#sqrt)|Returns the square root of a complex number.|
|[tan](../standard-library/complex-functions.md#tan)|Returns the tangent of a complex number.|
|[tanh](../standard-library/complex-functions.md#tanh)|Returns the hyperbolic tangent of a complex number.|

### Operators

|Name|Description|
|-|-|
|[operator!=](../standard-library/complex-operators.md#op_neq)|Tests for inequality between two complex numbers, one or both of which may belong to the subset of the type for the real and imaginary parts.|
|[operator*](../standard-library/complex-operators.md#op_star)|Multiplies two complex numbers, one or both of which may belong to the subset of the type for the real and imaginary parts.|
|[operator+](../standard-library/complex-operators.md#op_add)|Adds two complex numbers, one or both of which may belong to the subset of the type for the real and imaginary parts.|
|[operator-](../standard-library/complex-operators.md#operator-)|Subtracts two complex numbers, one or both of which may belong to the subset of the type for the real and imaginary parts.|
|[operator/](../standard-library/complex-operators.md#op_div)|Divides two complex numbers, one or both of which may belong to the subset of the type for the real and imaginary parts.|
|[operator<\<](../standard-library/complex-operators.md#op_lt_lt)|A template function that inserts a complex number into the output stream.|
|[operator==](../standard-library/complex-operators.md#op_eq_eq)|Tests for equality between two complex numbers, one or both of which may belong to the subset of the type for the real and imaginary parts.|
|[operator>>](../standard-library/complex-operators.md#op_gt_gt)|A template function that extracts a complex value from the input stream.|

### Classes

|Name|Description|
|-|-|
|[complex\<double>](../standard-library/complex-double.md)|The explicitly specialized class template describes an object that stores an ordered pair of objects, both of type **`double`**, where the first represents the real part of a complex number and the second represents the imaginary part.|
|[complex\<float>](../standard-library/complex-float.md)|The explicitly specialized class template describes an object that stores an ordered pair of objects, both of type **`float`**, where the first represents the real part of a complex number and the second represents the imaginary part.|
|[complex\<long double>](../standard-library/complex-long-double.md)|The explicitly specialized class template describes an object that stores an ordered pair of objects, both of type **`long double`**, where the first represents the real part of a complex number and the second represents the imaginary part.|
|[complex](../standard-library/complex-class.md)|The class template describes an object used to represent the complex number system and perform complex arithmetic operations.|

### Literals

The \<complex> header defines the following [user-defined literals](../cpp/user-defined-literals-cpp.md) which create a complex number with the real part being zero and the imaginary part being the value of the input parameter.

|Declaration|Description|
|-|-|
|`constexpr complex<long double> operator""il(long double d)`<br />`constexpr complex<long double> operator""il(unsigned long long d)`|Returns: `complex<long double>{0.0L, static_cast<long double>(d)}`|
|`constexpr complex<double> operator""i(long double d)`<br />`constexpr complex<double> operator""i(unsigned long long d)`|Returns: `complex<double>{0.0, static_cast<double>(d)}`.|
|`constexpr complex<float> operator""if(long double d)`<br />`constexpr complex<float> operator""if(unsigned long long d)`|Returns: `complex<float>{0.0f, static_cast<float>(d)}`.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
