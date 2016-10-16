---
title: "&lt;complex&gt;"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "<complex>"
  - "std.<complex>"
  - "std::<complex>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "complex header"
ms.assetid: 5e728995-3059-496a-9ce9-61d1bfbe4f2b
caps.latest.revision: 20
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# &lt;complex&gt;
Defines the container template class complex and its supporting templates.  
  
## Syntax  
  
```  
#include <complex>  
  
```  
  
## Remarks  
 A complex number is an ordered pair of real numbers. In purely geometrical terms, the complex plane is the real, two-dimensional plane. The special qualities of the complex plane that distinguish it from the real plane are due to its having an additional algebraic structure. This algebraic structure has two fundamental operations:  
  
-   Addition defined as (*a, b*) + (*c, d*) = (*a + c, b + d)*  
  
-   Multiplication defined as (*a, b*) \* (*c, d*) = (*ac - bd, ad + bc*)  
  
 The set of complex numbers with the operations of complex addition and complex multiplication are a field in the standard algebraic sense:  
  
-   The operations of addition and multiplication are commutative and associative and multiplication distributes over addition exactly as it does with real addition and multiplication on the field of real numbers.  
  
-   The complex number (*0, 0*) is the additive identity and (*1, 0*) is the multiplicative identity.  
  
-   The additive inverse for a complex number (*a, b*) is (*-a, -b*), and the multiplicative inverse for all such complex numbers except (*0, 0*) is  
  
     (*a*/(*a*<sup>2</sup> + *b*<sup>2</sup>), -*b*/(*a*<sup>2</sup> + *b*<sup>2</sup>)  
  
 By representing a complex number *z = (a, b)* in the form *z = a + bi*, where *i*<sup>2</sup> *=* -1, the rules for the algebra of the set of real numbers can be applied to the set of complex numbers and to their components. For example:  
  
 (1 + 2*i*) \* (2 + 3*i*)    = 1\*(2 + 3*i*) + 2*i*\*(2 + 3*i*) = (2 + 3*i*) + (4*i* + 6*i*<sup>2</sup>)  
  
 = (2 –6) + (3 + 4)*i* = -4 + 7*i*  
  
 The system of complex numbers is a field, but it is not an ordered field. There is no ordering of the complex numbers as there is for the field or real numbers and its subsets, so inequalities cannot be applied to complex numbers as they are to real numbers which is an ordered field.  
  
 There are three common forms of representing a complex number *z*:  
  
-   Cartesian: *z = a + bi*  
  
-   Polar: *z = r* (cos *+ i*sin)  
  
-   Exponential: *z = r \** exp()  
  
 The terms used in these standard representations of a complex number are referred to as follows:  
  
-   The real Cartesian component or real part *a*.  
  
-   The imaginary Cartesian component or imaginary part *b*.  
  
-   The modulus or absolute value of a complex number Ρ.  
  
-   The argument or phase angle .  
  
 Unless otherwise specified, functions that can return multiple values are required to return a principal value for their arguments greater than –pi and less than or equal to +pi to keep them single valued. All angles need to be expressed in radians, where there are 2 pi radians (360 degrees) in a circle.  
  
### Functions  
  
|||  
|-|-|  
|[abs](../stdcpplib/-complex--functions.md#abs)|Calculates the modulus of a complex number.|  
|[arg](../stdcpplib/-complex--functions.md#arg)|Extracts the argument from a complex number.|  
|[conj](../stdcpplib/-complex--functions.md#conj)|Returns the complex conjugate of a complex number.|  
|[cos](../stdcpplib/-complex--functions.md#cos)|Returns the cosine of a complex number.|  
|[cosh](../stdcpplib/-complex--functions.md#cosh)|Returns the hyperbolic cosine of a complex number.|  
|[exp](../stdcpplib/-complex--functions.md#exp)|Returns the exponential function of a complex number.|  
|[imag](../stdcpplib/-complex--functions.md#imag)|Extracts the imaginary component of a complex number.|  
|[log](../stdcpplib/-complex--functions.md#log)|Returns the natural logarithm of a complex number.|  
|[log10](../stdcpplib/-complex--functions.md#log10)|Returns the base 10 logarithm of a complex number.|  
|[norm](../stdcpplib/-complex--functions.md#norm)|Extracts the norm of a complex number.|  
|[polar](../stdcpplib/-complex--functions.md#polar)|Returns the complex number, which corresponds to a specified modulus and argument, in Cartesian form.|  
|[pow](../stdcpplib/-complex--functions.md#pow)|Evaluates the complex number obtained by raising a base that is a complex number to the power of another complex number.|  
|[real](../stdcpplib/-complex--functions.md#real)|Extracts the real component of a complex number.|  
|[sin](../stdcpplib/-complex--functions.md#sin)|Returns the sine of a complex number.|  
|[sinh](../stdcpplib/-complex--functions.md#sinh)|Returns the hyperbolic sine of a complex number.|  
|[sqrt](../stdcpplib/-complex--functions.md#sqrt)|Returns the square root of a complex number.|  
|[tan](../stdcpplib/-complex--functions.md#functions_tan)|Returns the tangent of a complex number.|  
|[tanh](../stdcpplib/-complex--functions.md#tanh)|Returns the hyperbolic tangent of a complex number.|  
  
### Operators  
  
|||  
|-|-|  
|[operator!=](../stdcpplib/-complex--operators.md#operator_neq)|Tests for inequality between two complex numbers, one or both of which may belong to the subset of the type for the real and imaginary parts.|  
|[operator*](../stdcpplib/-complex--operators.md#operator_star)|Multiplies two complex numbers, one or both of which may belong to the subset of the type for the real and imaginary parts.|  
|[operator+](../stdcpplib/-complex--operators.md#operator_add)|Adds two complex numbers, one or both of which may belong to the subset of the type for the real and imaginary parts.|  
|[operator-](../stdcpplib/-complex--operators.md#operator-)|Subtracts two complex numbers, one or both of which may belong to the subset of the type for the real and imaginary parts.|  
|[operator/](../stdcpplib/-complex--operators.md#operator_)|Divides two complex numbers, one or both of which may belong to the subset of the type for the real and imaginary parts.|  
|[operator<\<](../stdcpplib/-complex--operators.md#operator_lt__lt_)|A template function that inserts a complex number into the output stream.|  
|[operator==](../stdcpplib/-complex--operators.md#operator_eq_eq)|Tests for equality between two complex numbers, one or both of which may belong to the subset of the type for the real and imaginary parts.|  
|[operator>>](../stdcpplib/-complex--operators.md#operator_gt__gt_)|A template function that extracts a complex value from the input stream.|  
  
### Classes  
  
|||  
|-|-|  
|[complex\<double>](../stdcpplib/complex-double-.md)|The explicitly specialized template class describes an object that stores an ordered pair of objects both of type **double***,* first representing the real part of a complex number and the second representing the imaginary part.|  
|[complex\<float>](../stdcpplib/complex-float-.md)|The explicitly specialized template class describes an object that stores an ordered pair of objects both of type **float***,* first representing the real part of a complex number and the second representing the imaginary part.|  
|[complex\<long double>](../stdcpplib/complex-long-double-.md)|The explicitly specialized template class describes an object that stores an ordered pair of objects both of type `long double`*,* first representing the real part of a complex number and the second representing the imaginary part.|  
|[complex](../stdcpplib/complex-class.md)|The template class describes an object used to represent the complex number system and perform complex arithmetic operations.|  
  
### Literals  
 The \<complex> header defines the following [user-defined literals](../cpp/user-defined-literals---c---.md) which create a complex number with the real part being zero and the imaginary part being the value of the input parameter.  
  
|||  
|-|-|  
|`constexpr complex<long double> operator""il(long double d)il(long double d)`<br /><br /> `constexpr complex<long double> operator""il(unsigned long long d)`|Returns `complex<long double>{0.0L, static_cast<long double>(d)}`|  
|`constexpr complex<double> operator""i(long double d)`<br /><br /> `constexpr complex<double> operator""i(unsigned long long d)`|Returns: `complex<double>{0.0, static_cast<double>(d)}`.|  
|`constexpr complex<float> operator""if(long double d)`<br /><br /> `constexpr complex<float> operator""if(unsigned long long d)`|Returns: `complex<float>{0.0f, static_cast<float>(d)}`.|  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)

