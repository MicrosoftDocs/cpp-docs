---
title: "binary_negate Class"
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
ms.assetid: 7b86f02c-af7e-4c7f-9df1-08addae4dd65
caps.latest.revision: 18
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# binary_negate Class
A template class providing a member function that negates the return value of a specified binary function.  
  
## Syntax  
  
```  
template<class Operation>    class binary_negate       : public binary_function <          typename Operation::first_argument_type,          typename Operation::second_argument_type,           bool>     {    public:    explicit binary_negate(       const Operation&  _Func );    bool operator()(       const typename Operation::first_argument_type&  _Left ,       const typename Operation::second_argument_type&  _Right ) const;    };  
  
```  
  
#### Parameters  
 `_Func`  
 The binary function to be negated.  
  
 `_Left`  
 The left operand of the binary function to be negated.  
  
 `_Right`  
 The right operand of the binary function to be negated.  
  
## Return Value  
 The negation of the binary function.  
  
## Remarks  
 The template class stores a copy of a binary function object _                *Func*. It defines its member function `operator()` as returning **!**\_                *Func(_Left, _Right).*  
  
 The constructor of `binary_negate` is rarely used directly. The helper function [not2](../VS_visualcpp/-functional--functions.md#not2_function) is usually preferred to declare and use the **binary_negator** adaptor predicate.  
  
## Example  
  
```  
// functional_binary_negate.cpp  
// compile with: /EHsc  
#define _CRT_RAND_S  
#include <stdlib.h>  
  
#include <vector>  
#include <algorithm>  
#include <functional>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   vector <unsigned int> v1;  
   vector <unsigned int>::iterator Iter1;  
  
   unsigned int i;  
   v1.push_back( 6262 );  
   v1.push_back( 6262 );  
   unsigned int randVal = 0;  
   for ( i = 0 ; i < 5 ; i++ )  
   {  
      rand_s(&randVal);  
      v1.push_back( randVal );  
   }  
  
   cout << "Original vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
  
   // To sort in ascending order,  
   // use default binary predicate less<unsigned int>( )  
   sort( v1.begin( ), v1.end( ) );  
   cout << "Sorted vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
  
   // To sort in descending order,  
   // use the binary_negate function  
   sort( v1.begin( ), v1.end( ),  
   binary_negate<less<unsigned int> >(less<unsigned int>( ) ) );  
  
   // The helper function not2 could also have been used  
   // in the above line and is usually preferred for convenience  
   // sort( v1.begin( ), v1.end( ), not2(less<unsigned int>( ) ) );  
  
   cout << "Resorted vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
}  
\* Output:   
Original vector v1 = ( 6262 6262 2233879413 2621500314 580942933 3715465425 3739828298 )  
Sorted vector v1 = ( 6262 6262 580942933 2233879413 2621500314 3715465425 3739828298 )  
Resorted vector v1 = ( 3739828298 3715465425 2621500314 2233879413 580942933 6262 6262 )  
*\  
```  
  
## Requirements  
 **Header:** <functional\>  
  
 std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)