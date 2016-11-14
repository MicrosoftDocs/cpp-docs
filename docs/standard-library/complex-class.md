---
title: "complex Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "complex"
  - "std::complex"
  - "std.complex"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "complex numbers"
  - "complex class"
ms.assetid: d6492e1c-5eba-4bc5-835b-2a88001a5868
caps.latest.revision: 18
author: "corob-msft"
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
# complex Class
The template class describes an object that stores two objects of type **Type**, one that represents the real part of a complex number and one that represents the imaginary part.  
  
## Syntax  
  
```  
 
template <class   
Type>  
class complex  
```  
  
## Remarks  
 An object of class **Type**:  
  
-   Has a public default constructor, destructor, copy constructor, and assignment operator with conventional behavior.  
  
-   Can be assigned integer or floating-point values, or type cast to such values with conventional behavior.  
  
-   Defines the arithmetic operators and math functions, as needed, that are defined for the floating-point types with conventional behavior.  
  
 In particular, no subtle differences may exist between copy construction and default construction followed by assignment. None of the operations on objects of class **Type** may throw exceptions.  
  
 Explicit specializations of template class complex exist for the three floating-point types. In this implementation, a value of any other type **Type** is typecast to **double** for actual calculations, with the **double** result assigned back to the stored object of type **Type**`.`  
  
### Constructors  
  
|||  
|-|-|  
|[complex](#complex__complex)|Constructs a complex number with specified real and imaginary parts or as a copy of some other complex number.|  
  
### Typedefs  
  
|||  
|-|-|  
|[value_type](#complex__value_type)|A type that represents the data type used to represent the real and imaginary parts of a complex number.|  
  
### Member Functions  
  
|||  
|-|-|  
|[imag](#complex__imag)|Extracts the imaginary component of a complex number.|  
|[real](#complex__real)|Extracts the real component of a complex number.|  
  
### Operators  
  
|||  
|-|-|  
|[operator*=](#complex__operator_star_eq)|Multiplies a target complex number by a factor, which may be complex or be the same type as are the real and imaginary parts of the complex number.|  
|[operator+=](#complex__operator_add_eq)|Adds a number to a target complex number, where the number added may be complex or of the same type as are the real and imaginary parts of the complex number to which it is added.|  
|[operator-=](#complex__operator-_eq)|Subtracts a number from a target complex number, where the number subtracted may be complex or of the same type as are the real and imaginary parts of the complex number to which it is added.|  
|[operator/=](#complex__operator__eq)|Divides a target complex number by a divisor, which may be complex or be the same type as are the real and imaginary parts of the complex number.|  
|[operator=](#complex__operator_eq)|Assigns a number to a target complex number, where the number assigned may be complex or of the same type as are the real and imaginary parts of the complex number to which it is being assigned.|  
  
## Requirements  
 **Header**: \<complex>  
  
 **Namespace:** std  
  
##  <a name="complex__complex"></a>  complex::complex  
 Constructs a complex number with specified real and imaginary parts or as a copy of some other complex number.  
  
```  
constexpr complex(
    const T& 
    _RealVal = 0  ,   
    const T& 
    _ImagVal = 0);

    template <class Other>  
constexpr complex(
    const complex<Other>& 
    complexNum);
```  
  
### Parameters  
 `_RealVal`  
 The value of the real part used to initialize the complex number being constructed.  
  
 `_ImagVal`  
 The value of the imaginary part used to initialize the complex number being constructed.  
  
 ` complexNum`  
 The complex number whose real and imaginary parts are used to initialize the complex number being constructed.  
  
### Remarks  
 The first constructor initializes the stored real part to _ *RealVal* and the stored imaginary part to \_ *Imagval*. The second constructor initializes the stored real part to ` complexNum`**.real**() and the stored imaginary part to ` complexNum`**.imag**().  
  
 In this implementation, if a translator does not support member template functions, the template:  
  
```  
template <class Other>  
complex(const complex<Other>& right);
```  
  
 is replaced with:  
  
```  
 
complex(const complex& right);
```  
  
 which is the copy constructor.  
  
### Example  
  
```cpp  
// complex_complex.cpp  
// compile with: /EHsc  
#include <complex>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   double pi = 3.14159265359;   
  
   // The first constructor specifies real & imaginary parts  
   complex <double> c1 ( 4.0 , 5.0 );  
   cout << "Specifying initial real & imaginary parts,"  
        << "c1 = " << c1 << endl;   
  
   // The second constructor initializes values of the real &  
   // imaginary parts using those of another complex number  
   complex <double> c2 ( c1 );  
   cout << "Initializing with the real and imaginary parts of c1,"  
        << " c2 = " << c2 << endl;   
  
   // Complex numbers can be initialized in polar form  
   // but will be stored in Cartesian form  
   complex <double> c3 ( polar ( sqrt( (double)8 ) , pi / 4 ) );  
   cout << "c3 = polar ( sqrt ( 8 ) , pi / 4 ) = " << c3 << endl;   
  
   // The modulus and argument of a complex number can be recovered  
   double absc3 = abs ( c3 );  
   double argc3 = arg ( c3 );  
   cout << "The modulus of c3 is recovered from c3 using: abs ( c3 ) = "  
        << absc3 << endl;  
   cout << "Argument of c3 is recovered from c3 using:\n arg ( c3 ) = "  
        << argc3 << " radians, which is " << argc3 * 180 / pi  
        << " degrees." << endl;  
}  
```  
  
##  <a name="complex__imag"></a>  complex::imag  
 Extracts the imaginary component of a complex number.  
  
```  
T imag() const;

 
T imag(const T& right);
```  
  
### Parameters  
 ` right`  
 A complex number whose imaginary value is to be extracted.  
  
### Return Value  
 The imaginary part of the complex number.  
  
### Remarks  
 For a complex number *a + bi*, the imaginary part or component is *Im(a + bi) = b.*  
  
### Example  
  
```cpp  
// complex_imag.cpp  
// compile with: /EHsc  
#include <complex>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   complex <double> c1 ( 4.0 , 3.0 );  
   cout << "The complex number c1 = " << c1 << endl;  
  
   double dr1 = c1.real ( );  
   cout << "The real part of c1 is c1.real ( ) = "  
        << dr1 << "." << endl;  
  
   double di1 = c1.imag ( );  
   cout << "The imaginary part of c1 is c1.imag ( ) = "  
        << di1 << "." << endl;  
}  
```  
  
```Output  
The complex number c1 = (4,3)  
The real part of c1 is c1.real ( ) = 4.  
The imaginary part of c1 is c1.imag ( ) = 3.  
```  
  
##  <a name="complex__operator_star_eq"></a>  complex::operator*=  
 Multiplies a target complex number by a factor, which may be complex or be the same type as are the real and imaginary parts of the complex number.  
  
```  
template <class Other>  
complex& operator*=(const complex<Other>& right);

complex<Type>& operator*=(const Type& right);

complex<Type>& operator*=(const complex<Type>& right);
```  
  
### Parameters  
 ` right`  
 A complex number or a number that is of the same type as the parameter of the target complex number.  
  
### Return Value  
 A complex number that has been multiplied by the number specified as a parameter.  
  
### Remarks  
 The operation is overloaded so that simple arithmetic operations can be executed without the conversion of the data to a particular format.  
  
### Example  
  
```cpp  
// complex_op_me.cpp  
// compile with: /EHsc  
#include <complex>  
#include <iostream>  
  
int main() {  
   using namespace std;  
   double pi = 3.14159265359;  
  
   // Example of the first member function  
   // type complex<double> multiplied by type complex<double>  
   complex <double> cl1 ( polar ( 3.0 , pi / 6 ) );  
   complex <double> cr1 ( polar ( 2.0 , pi / 3 ) );  
   cout << "The left-side complex number is cl1 = " << cl1 << endl;  
   cout << "The right-side complex number is cr1 = " << cr1 << endl;  
  
   complex <double> cs1 = cl1 * cr1;  
   cout << "Quotient of two complex numbers is: cs1 = cl1 * cr1 = "  
        << cs1 << endl;  
  
   // This is equivalent to the following operation  
   cl1 *= cr1;  
   cout << "Quotient of two complex numbers is also: cl1 *= cr1 = "  
        << cl1 << endl;  
  
   double abscl1 = abs ( cl1 );  
   double argcl1 = arg ( cl1 );  
   cout << "The modulus of cl1 is: " << abscl1 << endl;  
   cout << "The argument of cl1 is: "<< argcl1 << " radians, which is "   
        << argcl1 * 180 / pi << " degrees." << endl << endl;   
  
   // Example of the second member function  
   // type complex<double> multiplied by type double  
   complex <double> cl2 ( polar ( 3.0 , pi / 6 ) );  
   double cr2 = 5.0;  
   cout << "The left-side complex number is cl2 = " << cl2 << endl;  
   cout << "The right-side complex number is cr2 = " << cr2 << endl;  
  
   complex <double> cs2 = cl2 * cr2;  
   cout << "Quotient of two complex numbers is: cs2 = cl2 * cr2 = "   
        << cs2 << endl;  
  
   // This is equivalent to the following operation  
   cl2 *= cr2;  
   cout << "Quotient of two complex numbers is also: cl2 *= cr2 = "  
        << cl2 << endl;  
  
   double abscl2 = abs ( cl2 );  
   double argcl2 = arg ( cl2 );  
   cout << "The modulus of cl2 is: " << abscl2 << endl;  
   cout << "The argument of cl2 is: "<< argcl2 << " radians, which is "   
        << argcl2 * 180 / pi << " degrees." << endl;  
}  
```  
  
##  <a name="complex__operator_add_eq"></a>  complex::operator+=  
 Adds a number to a target complex number, where the number added may be complex or of the same type as are the real and imaginary parts of the complex number to which it is added.  
  
```  
template <class Other>  
complex<Type>& operator+=(const complex<Other>& right);

complex<Type>& operator+=(const Type& right);

complex<Type>& operator+=(const complex<Type>& right);
```  
  
### Parameters  
 ` right`  
 A complex number or a number that is of the same type as the parameter of the target complex number.  
  
### Return Value  
 A complex number that has had the number specified as a parameter added.  
  
### Remarks  
 The operation is overloaded so that simple arithmetic operations can be executed without the conversion of the data to a particular format.  
  
### Example  
  
```cpp  
// complex_op_pe.cpp  
// compile with: /EHsc  
#include <complex>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   double pi = 3.14159265359;  
  
   // Example of the first member function  
   // type complex<double> added to type complex<double>  
   complex <double> cl1 ( 3.0 , 4.0 );  
   complex <double> cr1 ( 2.0 , -1.0 );  
   cout << "The left-side complex number is cl1 = " << cl1 << endl;  
   cout << "The right-side complex number is cr1 = " << cr1 << endl;  
  
   complex <double> cs1 = cl1 + cr1;  
   cout << "The sum of the two complex numbers is: cs1 = cl1 + cr1 = "  
        << cs1 << endl;  
  
   // This is equivalent to the following operation  
   cl1 += cr1;  
   cout << "The complex number cr1 added to the complex number cl1 is:"  
        << "\n cl1 += cr1 = " << cl1 << endl;  
  
   double abscl1 = abs ( cl1 );  
   double argcl1 = arg ( cl1 );  
   cout << "The modulus of cl1 is: " << abscl1 << endl;  
   cout << "The argument of cl1 is: "<< argcl1 << " radians, which is "   
        << argcl1 * 180 / pi << " degrees." << endl << endl;   
  
   // Example of the second member function  
   // type double added to type complex<double>  
   complex <double> cl2 ( -2 , 4 );  
   double cr2 =5.0;  
   cout << "The left-side complex number is cl2 = " << cl2 << endl;  
   cout << "The right-side complex number is cr2 = " << cr2 << endl;  
  
   complex <double> cs2 = cl2 + cr2;  
   cout << "The sum of the two complex numbers is: cs2 = cl2 + cr2 = "   
        << cs2 << endl;  
  
   // This is equivalent to the following operation  
   cl2 += cr2;  
   cout << "The complex number cr2 added to the complex number cl2 is:"  
        << "\n cl2 += cr2 = " << cl2 << endl;  
  
   double abscl2 = abs ( cl2 );  
   double argcl2 = arg ( cl2 );  
   cout << "The modulus of cl2 is: " << abscl2 << endl;  
   cout << "The argument of cl2 is: "<< argcl2 << " radians, which is "   
        << argcl2 * 180 / pi << " degrees." << endl << endl;  
}  
```  
  
```Output  
The left-side complex number is cl1 = (3,4)  
The right-side complex number is cr1 = (2,-1)  
The sum of the two complex numbers is: cs1 = cl1 + cr1 = (5,3)  
The complex number cr1 added to the complex number cl1 is:  
 cl1 += cr1 = (5,3)  
The modulus of cl1 is: 5.83095  
The argument of cl1 is: 0.54042 radians, which is 30.9638 degrees.  
  
The left-side complex number is cl2 = (-2,4)  
The right-side complex number is cr2 = 5  
The sum of the two complex numbers is: cs2 = cl2 + cr2 = (3,4)  
The complex number cr2 added to the complex number cl2 is:  
 cl2 += cr2 = (3,4)  
The modulus of cl2 is: 5  
The argument of cl2 is: 0.927295 radians, which is 53.1301 degrees.  
```  
  
##  <a name="complex__operator-_eq"></a>  complex::operator-=  
 Subtracts a number from a target complex number, where the number subtracted may be complex or of the same type as are the real and imaginary parts of the complex number to which it is added.  
  
```  
template <class Other>  
complex<Type>& operator-=(const complex<Other>& complexNum);

complex<Type>& operator-=(const Type& _RealPart);

complex<Type>& operator-=(const complex<Type>& complexNum);
```  
  
### Parameters  
 ` complexNum`  
 A complex number to be subtracted from the target complex number.  
  
 `_RealPart`  
 A real number to be subtracted from the target complex number.  
  
### Return Value  
 A complex number that has had the number specified as a parameter subtracted from it.  
  
### Remarks  
 The operation is overloaded so that simple arithmetic operations can be executed without the conversion of the data to a particular format.  
  
### Example  
  
```cpp  
// complex_op_se.cpp  
// compile with: /EHsc  
#include <complex>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   double pi = 3.14159265359;  
  
   // Example of the first member function  
   // type complex<double> subtracted from type complex<double>  
   complex <double> cl1 ( 3.0 , 4.0 );  
   complex <double> cr1 ( 2.0 , -1.0 );  
   cout << "The left-side complex number is cl1 = " << cl1 << endl;  
   cout << "The right-side complex number is cr1 = " << cr1 << endl;  
  
   complex <double> cs1 = cl1 - cr1;  
   cout << "The difference between the two complex numbers is:"  
        << "\n cs1 = cl1 - cr1 = " << cs1 << endl;  
  
   // This is equivalent to the following operation  
   cl1 -= cr1;  
   cout << "Complex number cr1 subtracted from complex number cl1 is:"  
        << "\n cl1 -= cr1 = " << cl1 << endl;  
  
   double abscl1 = abs ( cl1 );  
   double argcl1 = arg ( cl1 );  
   cout << "The modulus of cl1 is: " << abscl1 << endl;  
   cout << "The argument of cl1 is: "<< argcl1 << " radians, which is "   
        << argcl1 * 180 / pi << " degrees." << endl << endl;   
  
   // Example of the second member function  
   // type double subtracted from type complex<double>  
   complex <double> cl2 ( 2.0 , 4.0 );  
   double cr2 = 5.0;  
   cout << "The left-side complex number is cl2 = " << cl2 << endl;  
   cout << "The right-side complex number is cr2 = " << cr2 << endl;  
  
   complex <double> cs2 = cl2 - cr2;  
   cout << "The difference between the two complex numbers is:"  
        << "\n cs2 = cl2 - cr2 = " << cs2 << endl;  
  
   // This is equivalent to the following operation  
   cl2  -= cr2;  
   cout << "Complex number cr2 subtracted from complex number cl2 is:"  
        << "\n cl2 -= cr2 = " << cl2 << endl;  
  
   double abscl2 = abs ( cl2 );  
   double argcl2 = arg ( cl2 );  
   cout << "The modulus of cl2 is: " << abscl2 << endl;  
   cout << "The argument of cl2 is: "<< argcl2 << " radians, which is "   
        << argcl2 * 180 / pi << " degrees." << endl << endl;  
}  
```  
  
```Output  
The left-side complex number is cl1 = (3,4)  
The right-side complex number is cr1 = (2,-1)  
The difference between the two complex numbers is:  
 cs1 = cl1 - cr1 = (1,5)  
Complex number cr1 subtracted from complex number cl1 is:  
 cl1 -= cr1 = (1,5)  
The modulus of cl1 is: 5.09902  
The argument of cl1 is: 1.3734 radians, which is 78.6901 degrees.  
  
The left-side complex number is cl2 = (2,4)  
The right-side complex number is cr2 = 5  
The difference between the two complex numbers is:  
 cs2 = cl2 - cr2 = (-3,4)  
Complex number cr2 subtracted from complex number cl2 is:  
 cl2 -= cr2 = (-3,4)  
The modulus of cl2 is: 5  
The argument of cl2 is: 2.2143 radians, which is 126.87 degrees.  
```  
  
##  <a name="complex__operator__eq"></a>  complex::operator/=  
 Divides a target complex number by a divisor, which may be complex or be the same type as are the real and imaginary parts of the complex number.  
  
```  
template <class Other>  
complex<Type>& operator/=(const complex<Other>& complexNum);

complex<Type>& operator/=(const Type& _RealPart);

complex<Type>& operator/=(const complex<Type>& complexNum);
```  
  
### Parameters  
 ` complexNum`  
 A complex number to be subtracted from the target complex number.  
  
 `_RealPart`  
 A real number to be subtracted from the target complex number.  
  
### Return Value  
 A complex number that has been divided by the number specified as a parameter.  
  
### Remarks  
 The operation is overloaded so that simple arithmetic operations can be executed without the conversion of the data to a particular format.  
  
### Example  
  
```cpp  
// complex_op_de.cpp  
// compile with: /EHsc  
#include <complex>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   double pi = 3.14159265359;  
  
   // Example of the first member function  
   // type complex<double> divided by type complex<double>  
   complex <double> cl1 ( polar (3.0 , pi / 6 ) );  
   complex <double> cr1 ( polar (2.0 , pi / 3 ) );  
   cout << "The left-side complex number is cl1 = " << cl1 << endl;  
   cout << "The right-side complex number is cr1 = " << cr1 << endl;  
  
   complex <double> cs1 = cl1 / cr1;  
   cout << "The quotient of the two complex numbers is: cs1 = cl1 /cr1 = "  
        << cs1 << endl;  
  
   // This is equivalent to the following operation  
   cl1 /= cr1;  
   cout << "Quotient of two complex numbers is also: cl1 /= cr1 = "  
        << cl1 << endl;  
  
   double abscl1 = abs ( cl1 );  
   double argcl1 = arg ( cl1 );  
   cout << "The modulus of cl1 is: " << abscl1 << endl;  
   cout << "The argument of cl1 is: "<< argcl1 << " radians, which is "   
        << argcl1 * 180 / pi << " degrees." << endl << endl;   
  
   // Example of the second member function  
   // type complex<double> divided by type double  
   complex <double> cl2 ( polar (3.0 , pi / 6 ) );  
   double cr2 =5;  
   cout << "The left-side complex number is cl2 = " << cl2 << endl;  
   cout << "The right-side complex number is cr2 = " << cr2 << endl;  
  
   complex <double> cs2 = cl2 / cr2;  
   cout << "The quotient of the two complex numbers is: cs2 /= cl2 cr2 = "   
        << cs2 << endl;  
  
   // This is equivalent to the following operation  
   cl2 /= cr2;  
   cout << "Quotient of two complex numbers is also: cl2 = /cr2 = "  
        << cl2 << endl;  
  
   double abscl2 = abs ( cl2 );  
   double argcl2 = arg ( cl2 );  
   cout << "The modulus of cl2 is: " << abscl2 << endl;  
   cout << "The argument of cl2 is: "<< argcl2 << " radians, which is "   
        << argcl2 * 180 / pi << " degrees." << endl << endl;  
}  
```  
  
```Output  
The left-side complex number is cl1 = (2.59808,1.5)  
The right-side complex number is cr1 = (1,1.73205)  
The quotient of the two complex numbers is: cs1 = cl1 /cr1 = (1.29904,-0.75)  
Quotient of two complex numbers is also: cl1 /= cr1 = (1.29904,-0.75)  
The modulus of cl1 is: 1.5  
The argument of cl1 is: -0.523599 radians, which is -30 degrees.  
  
The left-side complex number is cl2 = (2.59808,1.5)  
The right-side complex number is cr2 = 5  
The quotient of the two complex numbers is: cs2 /= cl2 cr2 = (0.519615,0.3)  
Quotient of two complex numbers is also: cl2 = /cr2 = (0.519615,0.3)  
The modulus of cl2 is: 0.6  
The argument of cl2 is: 0.523599 radians, which is 30 degrees.  
```  
  
##  <a name="complex__operator_eq"></a>  complex::operator=  
 Assigns a number to a target complex number, where the number assigned may be complex or of the same type as are the real and imaginary parts of the complex number to which it is being assigned.  
  
```  
template <class Other>  
complex<Type>& operator=(const complex<Other>& right);

complex<Type>& operator=(const Type& right);
```  
  
### Parameters  
 ` right`  
 A complex number or a number that is of the same type as the parameter of the target complex number.  
  
### Return Value  
 A complex number that has been assigned the number specified as a parameter.  
  
### Remarks  
 The operation is overloaded so that simple arithmetic operations can be executed without the conversion of the data to a particular format.  
  
### Example  
  
```cpp  
// complex_op_as.cpp  
// compile with: /EHsc  
#include <complex>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   double pi = 3.14159265359;  
  
   // Example of the first member function  
   // type complex<double> assigned to type complex<double>  
   complex <double> cl1 ( 3.0 , 4.0 );  
   complex <double> cr1 ( 2.0 , -1.0 );  
   cout << "The left-side complex number is cl1 = " << cl1 << endl;  
   cout << "The right-side complex number is cr1 = " << cr1 << endl;  
  
   cl1  = cr1;  
   cout << "The complex number cr1 assigned to the complex number cl1 is:"  
        << "\n cl1 = cr1 = " << cl1 << endl;  
  
   // Example of the second member function  
   // type double assigned to type complex<double>  
   complex <double> cl2 ( -2 , 4 );  
   double cr2 =5.0;  
   cout << "The left-side complex number is cl2 = " << cl2 << endl;  
   cout << "The right-side complex number is cr2 = " << cr2 << endl;  
  
   cl2 = cr2;  
   cout << "The complex number cr2 assigned to the complex number cl2 is:"  
        << "\n cl2 = cr2 = " << cl2 << endl;  
  
   cl2 = complex<double>(3.0, 4.0);  
   cout << "The complex number (3, 4) assigned to the complex number cl2 is:"  
        << "\n cl2 = " << cl2 << endl;  
}  
```  
  
```Output  
The left-side complex number is cl1 = (3,4)  
The right-side complex number is cr1 = (2,-1)  
The complex number cr1 assigned to the complex number cl1 is:  
 cl1 = cr1 = (2,-1)  
The left-side complex number is cl2 = (-2,4)  
The right-side complex number is cr2 = 5  
The complex number cr2 assigned to the complex number cl2 is:  
 cl2 = cr2 = (5,0)  
The complex number (3, 4) assigned to the complex number cl2 is:  
 cl2 = (3,4)  
```  
  
##  <a name="complex__real"></a>  complex::real  
 Gets or sets the real component of a complex number.  
  
```  
constexpr T real() const;

 
T real(const T& right);
```  
  
### Parameters  
 ` right`  
 A complex number whose real value is to be extracted.  
  
### Return Value  
 The real part of the complex number.  
  
### Remarks  
 For a complex number *a + bi*, the real part or component is *Re(a + bi) = a.*  
  
### Example  
  
```cpp  
// complex_class_real.cpp  
// compile with: /EHsc  
#include <complex>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   complex <double> c1 ( 4.0 , 3.0 );  
   cout << "The complex number c1 = " << c1 << endl;  
  
   double dr1 = c1.real ( );  
   cout << "The real part of c1 is c1.real ( ) = "  
        << dr1 << "." << endl;  
  
   double di1 = c1.imag ( );  
   cout << "The imaginary part of c1 is c1.imag ( ) = "  
        << di1 << "." << endl;  
}  
```  
  
```Output  
The complex number c1 = (4,3)  
The real part of c1 is c1.real ( ) = 4.  
The imaginary part of c1 is c1.imag ( ) = 3.  
```  
  
##  <a name="complex__value_type"></a>  complex::value_type  
 A type that represents the data type used to represent the real and imaginary parts of a complex number.  
  
```  
 
typedef Type value_type;  
```  
  
### Remarks  
 `value_type` is a synonym for the class complex **Type** template parameter.  
  
### Example  
  
```cpp  
// complex_valuetype.cpp  
// compile with: /EHsc  
#include <complex>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   complex <double>::value_type a = 3, b = 4;  
  
   complex <double> c1 ( a , b );  
   cout << "Specifying initial real & imaginary parts"  
      << "\nof type value_type: "  
      << "c1 = " << c1 << "." << endl;  
}  
```  
  
```Output  
Specifying initial real & imaginary parts  
of type value_type: c1 = (3,4).  
```  
  
## See Also  
 [complex Members](http://msdn.microsoft.com/en-us/d5c4466c-43a0-4817-aca1-9a5d492dae28)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

