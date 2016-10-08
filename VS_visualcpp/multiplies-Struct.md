---
title: "multiplies Struct"
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
ms.assetid: ec85e8af-70ad-44ad-90f0-d961a5847864
caps.latest.revision: 19
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
# multiplies Struct
A predefined function object that performs the multiplication operation (binary `operator*`) on its arguments.  
  
## Syntax  
  
```  
template<class Type = void>  
   struct multiplies : public binary_function <Type, Type, Type>   
   {  
      Type operator()(  
         const Type& Left,   
         const Type& Right  
      ) const;  
   };  
  
// specialized transparent functor for operator*  
template<>  
   struct multiplies<void>  
   {  
      template<class Type1, class Type2>  
      auto operator()(Type1&& Left, Type2&& Right) const  
         -> decltype(std::forward<Type1>( Left)  
            * std::forward<Type2>( Right));  
   };  
  
```  
  
#### Parameters  
 `Type`, `Type1`, `Type2`  
 A type that supports a binary `operator*` that takes operands of the specified or inferred types.  
  
 `Left`  
 The left operand of the multiplication operation. The unspecialized template takes an lvalue reference argument of type `Type`. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type `Type1`.  
  
 `Right`  
 The right operand of the multiplication operation. The unspecialized template takes an lvalue reference argument of type `Type`. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type `Type2`.  
  
## Return Value  
 The result of `Left``*``Right`. The specialized template does perfect forwarding of the result, which has the type that's returned by `operator*`.  
  
## Example  
  
```  
// functional_multiplies.cpp  
// compile with: /EHsc  
#include <vector>  
#include <functional>  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
  
int main( )  
{  
   vector <int> v1, v2, v3 ( 6 );  
   vector <int>::iterator Iter1, Iter2, Iter3;  
  
   int i;  
   for ( i = 1 ; i <= 6 ; i++ )  
   {  
      v1.push_back( 2 * i );  
   }  
  
   int j;  
   for ( j = 1 ; j <= 6 ; j++ )  
   {  
      v2.push_back( 3 * j );  
   }  
  
   cout << "The vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
  
   cout << "The vector v2 = ( " ;  
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )  
      cout << *Iter2 << " ";  
   cout << ")" << endl;  
  
   // Finding the element-wise products of the elements of v1 & v2  
   transform ( v1.begin( ),  v1.end( ), v2.begin( ), v3.begin ( ),   
      multiplies<int>( ) );  
  
   cout << "The element-wise products of vectors V1 & v2\n are: ( " ;  
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )  
      cout << *Iter3 << " ";  
   cout << ")" << endl;  
}  
\* Output:   
The vector v1 = ( 2 4 6 8 10 12 )  
The vector v2 = ( 3 6 9 12 15 18 )  
The element-wise products of vectors V1 & v2  
 are: ( 6 24 54 96 150 216 )  
*\  
```  
  
## Requirements  
 **Header:** <functional\>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)