---
title: "logical_and Struct"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 1a375cc2-0592-4d57-a553-78009c7ad610
caps.latest.revision: 20
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# logical_and Struct
A predefined function object that performs the logical conjunction operation ( `operator&&`) on its arguments.  
  
## Syntax  
  
```  
template<class Type = void>  
   struct logical_and : public binary_function<Type, Type, bool>   
   {  
      bool operator()(  
         const Type& Left,   
         const Type& Right  
      ) const;  
   };  
  
// specialized transparent functor for operator&&  
template<>  
   struct logical_and<void>  
   {  
      template<class Type1, class Type2>  
      auto operator()(Type1&& Left, Type2&& Right) const  
         -> decltype(std::forward<Type1>( Left)  
            && std::forward<Type2>( Right));  
   };  
  
```  
  
#### Parameters  
 `Type`, `Type1`, `Type2`  
 Any type that supports an `operator&&` that takes operands of the specified or inferred types.  
  
 `Left`  
 The left operand of the logical conjunction operation. The unspecialized template takes an lvalue reference argument of type `Type`. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type `Type1`.  
  
 `Right`  
 The right operand of the logical conjunction operation. The unspecialized template takes an lvalue reference argument of type `Type`. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type `Type2`.  
  
## Return Value  
 The result of `Left``&&``Right`. The specialized template does perfect forwarding of the result, which has the type that's returned by `operator&&`.  
  
## Remarks  
 For user-defined types, there is no short-circuiting of operand evaluation. Both arguments are evaluated by `operator&&`.  
  
## Example  
  
```  
// functional_logical_and.cpp  
// compile with: /EHsc  
  
#define _CRT_RAND_S  
#include <stdlib.h>  
#include <deque>  
#include <algorithm>  
#include <functional>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   deque<bool> d1, d2, d3( 7 );  
   deque<bool>::iterator iter1, iter2, iter3;  
  
   unsigned int randomValue;  
  
   int i;  
   for ( i = 0 ; i < 7 ; i++ )  
   {  
      if ( rand_s( &randomValue ) == 0 )  
      {  
         d1.push_back((bool)(( randomValue % 2 ) != 0));  
      }  
  
   }  
  
   int j;  
   for ( j = 0 ; j < 7 ; j++ )  
   {  
      if ( rand_s( &randomValue ) == 0 )  
      {  
         d2.push_back((bool)(( randomValue % 2 ) != 0));  
      }  
   }  
  
   cout << boolalpha;    // boolalpha I/O flag on  
  
   cout << "Original deque:\n d1 = ( " ;  
   for ( iter1 = d1.begin( ) ; iter1 != d1.end( ) ; iter1++ )  
      cout << *iter1 << " ";  
   cout << ")" << endl;  
  
   cout << "Original deque:\n d2 = ( " ;  
   for ( iter2 = d2.begin( ) ; iter2 != d2.end( ) ; iter2++ )  
      cout << *iter2 << " ";  
   cout << ")" << endl;  
  
   // To find element-wise conjunction of the truth values  
   // of d1 & d2, use the logical_and function object  
   transform( d1.begin( ), d1.end( ), d2.begin( ),  
      d3.begin( ), logical_and<bool>( ) );  
   cout << "The deque which is the conjuction of d1 & d2 is:\n d3 = ( " ;  
   for ( iter3 = d3.begin( ) ; iter3 != d3.end( ) ; iter3++ )  
      cout << *iter3 << " ";  
   cout << ")" << endl;  
}  
  
/* Output:  
Original deque:  
 d1 = ( true true true true true false false )  
Original deque:  
 d2 = ( true false true true false true false )  
The deque which is the conjuction of d1 & d2 is:  
 d3 = ( true false true true false false false )  
 */  
```  
  
## Requirements  
 **Header:** <functional\>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)