---
title: "Default Arguments | Microsoft Docs"
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
  - "arguments [C++], function"
  - "function declarators"
  - "functions [C++], default arguments"
  - "declaring functions, declarators"
  - "default arguments"
  - "arguments [C++], default"
  - "defaults [C++], arguments"
ms.assetid: d32cf516-05cb-4d4d-b169-92f5649fdfa2
caps.latest.revision: 10
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
# Default Arguments
In many cases, functions have arguments that are used so infrequently that a default value would suffice. To address this, the default-argument facility allows for specifying only those arguments to a function that are meaningful in a given call. To illustrate this concept, consider the example presented in [Function Overloading](../cpp/function-overloading.md).  
  
```  
// Prototype three print functions.  
int print( char *s );                  // Print a string.  
int print( double dvalue );            // Print a double.  
int print( double dvalue, int prec );  // Print a double with a  
//  given precision.  
```  
  
 In many applications, a reasonable default can be supplied for `prec`, eliminating the need for two functions:  
  
```  
// Prototype two print functions.  
int print( char *s );                    // Print a string.  
int print( double dvalue, int prec=2 );  // Print a double with a  
//  given precision.  
```  
  
 The implementation of the `print` function is changed slightly to reflect the fact that only one such function exists for type **double**:  
  
```  
// default_arguments.cpp  
// compile with: /EHsc /c  
  
// Print a double in specified precision.  
//  Positive numbers for precision indicate how many digits  
//  precision after the decimal point to show. Negative  
//  numbers for precision indicate where to round the number  
//  to the left of the decimal point.  
  
#include <iostream>  
#include <math.h>  
using namespace std;  
  
int print( double dvalue, int prec ) {  
   // Use table-lookup for rounding/truncation.  
   static const double rgPow10[] = {   
      10E-7, 10E-6, 10E-5, 10E-4, 10E-3, 10E-2, 10E-1, 10E0,  
         10E1,  10E2,  10E3,  10E4, 10E5,  10E6  
   };  
   const int iPowZero = 6;  
   // If precision out of range, just print the number.  
   if( prec >= -6 && prec <= 7 )  
      // Scale, truncate, then rescale.  
      dvalue = floor( dvalue / rgPow10[iPowZero - prec] ) *  
      rgPow10[iPowZero - prec];  
   cout << dvalue << endl;  
   return cout.good();  
}  
```  
  
 To invoke the new `print` function, use code such as the following:  
  
```  
print( d );    // Precision of 2 supplied by default argument.  
print( d, 0 ); // Override default argument to achieve other  
//  results.  
```  
  
 Note these points when using default arguments:  
  
-   Default arguments are used only in function calls where trailing arguments are omitted — they must be the last argument(s). Therefore, the following code is illegal:  
  
    ```  
    int print( double dvalue = 0.0, int prec );  
    ```  
  
-   A default argument cannot be redefined in later declarations even if the redefinition is identical to the original. Therefore, the following code produces an error:  
  
    ```  
    // Prototype for print function.  
    int print( double dvalue, int prec = 2 );  
  
    ...  
  
    // Definition for print function.  
    int print( double dvalue, int prec = 2 )  
    {  
    ...  
    }  
    ```  
  
     The problem with this code is that the function declaration in the definition redefines the default argument for `prec`.  
  
-   Additional default arguments can be added by later declarations.  
  
-   Default arguments can be provided for pointers to functions. For example:  
  
    ```  
    int (*pShowIntVal)( int i = 0 );  
    ```  
  
## See Also  
 [C++ Abstract Declarators](http://msdn.microsoft.com/en-us/e7e18c18-0cad-4450-942b-d27e1d4dd088)