---
title: "Arrays (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "declaring arrays, about declaring arrays"
  - "multidimensional arrays"
  - "arrays [C++]"
ms.assetid: 3f5986aa-485c-4ba4-9502-67e2ef924238
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
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
# Arrays (C++)
An array is a collection of like objects. The simplest case of an array is a vector, which may be declared by the following sequence:  
  
```  
  
      decl-specifier identifier [ constant-expression ]  
decl-specifier identifier []  
decl-specifier identifer [][ constant-expression] . . .  
decl-specifier identifier [ constant-expression ]  
[ constant-expression ] . . .  
```  
  
 1. The declaration specifier:  
  
-   An optional storage class specifier.  
  
-   Optional **const** and/or `volatile` specifiers.  
  
-   The type name of the elements of the array.  
  
 2. The declarator:  
  
-   The identifier.  
  
-   A constant expression of integral type enclosed in brackets, **[].** If multiple dimensions are declared using additional brackets, the constant expression may be omitted on the first set of brackets.  
  
-   Optional additional brackets enclosing constant expressions.  
  
 3. An optional initializer.  See [Initializers](../cpp/initializers.md).  
  
 The number of elements in the array is given by the constant expression. The first element in the array is the 0th element, and the last element is the (*n*-1) element, where *n* is the number of elements the array can contain. The *constant-expression* must be of an integral type and must be greater than 0. A zero-sized array is legal only when the array is the last field in a `struct` or **union** and when the Microsoft extensions (/Ze) are enabled.  
  
 The following example shows how to define an array at run time:  
  
```  
// arrays.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main() {  
   using namespace std;  
   int size = 3, i = 0;  
  
   int* myarr = new int[size];  
  
   for (i = 0 ; i < size ; i++)  
      myarr[i] = 10;  
  
   for (i = 0 ; i < size ; i++)  
      printf_s("myarr[%d] = %d\n", i, myarr[i]);  
  
   delete [] myarr;  
}  
```  
  
 Arrays are derived types and can therefore be constructed from any other derived or fundamental type except functions, references, and `void`.  
  
 Arrays constructed from other arrays are multidimensional arrays. These multidimensional arrays are specified by placing multiple bracketed constant expressions in sequence. For example, consider this declaration:  
  
```  
int i2[5][7];  
```  
  
 It specifies an array of type `int`, conceptually arranged in a two-dimensional matrix of five rows and seven columns, as shown in the following figure:  
  
 ![Conceptual layout of a multi&#45;dimensional array](../cpp/media/vc38rc1.gif "vc38RC1")  
Conceptual Layout of Multidimensional Array  
  
 In declarations of multidimensioned arrays that have an initializer list (as described in [Initializers](../cpp/initializers.md)), the constant expression that specifies the bounds for the first dimension can be omitted. For example:  
  
```  
// arrays2.cpp  
// compile with: /c  
const int cMarkets = 4;  
// Declare a float that represents the transportation costs.  
double TransportCosts[][cMarkets] = {   
   { 32.19, 47.29, 31.99, 19.11 },  
   { 11.29, 22.49, 33.47, 17.29 },  
   { 41.97, 22.09,  9.76, 22.55 }  
};  
```  
  
 The preceding declaration defines an array that is three rows by four columns. The rows represent factories and the columns represent markets to which the factories ship. The values are the transportation costs from the factories to the markets. The first dimension of the array is left out, but the compiler fills it in by examining the initializer.  
  
 Topics in this section:  
  
-   [Using Arrays](../cpp/using-arrays-cpp.md)  
  
-   [Arrays in Expressions](../cpp/arrays-in-expressions.md)  
  
-   [Interpretation of Subscript Operator](../cpp/interpretation-of-subscript-operator.md)  
  
-   [Indirection on Array Types](../cpp/indirection-on-array-types.md)  
  
-   [Ordering of C++ Arrays](../cpp/ordering-of-cpp-arrays.md)  
  
## Example  
 The technique of omitting the bounds specification for the first dimension of a multidimensional array can also be used in function declarations as follows:  
  
```  
// multidimensional_arrays.cpp  
// compile with: /EHsc  
// arguments: 3  
#include <limits>   // Includes DBL_MAX  
#include <iostream>  
  
const int cMkts = 4, cFacts = 2;  
  
// Declare a float that represents the transportation costs  
double TransportCosts[][cMkts] = {   
   { 32.19, 47.29, 31.99, 19.11 },  
   { 11.29, 22.49, 33.47, 17.29 },  
   { 41.97, 22.09,  9.76, 22.55 }    
};  
  
// Calculate size of unspecified dimension  
const int cFactories = sizeof TransportCosts /  
                  sizeof( double[cMkts] );  
  
double FindMinToMkt( int Mkt, double myTransportCosts[][cMkts], int mycFacts);  
  
using namespace std;  
  
int main( int argc, char *argv[] ) {  
   double MinCost;  
  
   if (argv[1] == 0) {  
      cout << "You must specify the number of markets." << endl;  
      exit(0);  
   }  
   MinCost = FindMinToMkt( *argv[1] - '0', TransportCosts, cFacts);  
   cout << "The minimum cost to Market " << argv[1] << " is: "  
       << MinCost << "\n";  
}  
  
double FindMinToMkt(int Mkt, double myTransportCosts[][cMkts], int mycFacts) {  
   double MinCost = DBL_MAX;  
  
   for( int i = 0; i < cFacts; ++i )  
      MinCost = (MinCost < TransportCosts[i][Mkt]) ?  
         MinCost : TransportCosts[i][Mkt];  
  
   return MinCost;  
}  
```  
  
```Output  
The minimum cost to Market 3 is: 17.29  
```  
  
## Comments  
 The function `FindMinToMkt` is written such that adding new factories does not require any code changes, just a recompilation.  
  
## See Also  
 [C++ Abstract Declarators](http://msdn.microsoft.com/en-us/e7e18c18-0cad-4450-942b-d27e1d4dd088)