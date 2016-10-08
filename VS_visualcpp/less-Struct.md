---
title: "less Struct"
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
ms.assetid: 39349da3-11cd-4774-b2cc-b46af5aae5d7
caps.latest.revision: 22
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
# less Struct
A binary predicate that performs the less-than operation ( `operator<`) on its arguments.  
  
## Syntax  
  
```  
template<class Type = void>  
   struct less : public binary_function <Type, Type, bool>   
   {  
      bool operator()(  
         const Type& Left,   
         const Type& Right  
      ) const;  
   };  
  
// specialized transparent functor for operator<  
template<>  
   struct less<void>  
   {  
      template<class Type1, class Type2>  
      auto operator()(Type1&& Left, Type2&& Right) const  
         -> decltype(std::forward<Type1>( Left)  
            < std::forward<Type2>( Right));  
   };  
  
```  
  
#### Parameters  
 `Type`, `Type1`, `Type2`  
 Any type that supports an `operator<` that takes operands of the specified or inferred types.  
  
 `Left`  
 The left operand of the less-than operation. The unspecialized template takes an lvalue reference argument of type `Type`. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type `Type1`.  
  
 `Right`  
 The right operand of the less-than operation. The unspecialized template takes an lvalue reference argument of type `Type`. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type `Type2`.  
  
## Return Value  
 The result of `Left``<``Right`. The specialized template does perfect forwarding of the result, which has the type that's returned by `operator<`.  
  
## Remarks  
 The binary predicate `less`< `Type`> provides a strict weak ordering of a set of element values of type `Type` into equivalence classes, if and only if this type satisfies the standard mathematical requirements for being so ordered. The specializations for any pointer type yield a total ordering of elements, in that all elements of distinct values are ordered with respect to each other.  
  
## Example  
  
```  
// functional_less.cpp  
// compile with: /EHsc  
#include <vector>  
#include <algorithm>  
#include <functional>  
#include <iostream>  
  
struct MyStruct {  
   MyStruct(int i) : m_i(i){}  
  
   bool operator < (const MyStruct & rhs) const {  
      return m_i < rhs.m_i;  
   }     
  
   int m_i;  
};  
  
int main() {  
   using namespace std;  
   vector <MyStruct> v1;  
   vector <MyStruct>::iterator Iter1;  
   vector <MyStruct>::reverse_iterator rIter1;  
  
   int i;  
   for ( i = 0 ; i < 7 ; i++ )       
       v1.push_back( MyStruct(rand()));  
  
   cout << "Original vector v1 = ( " ;  
   for ( Iter1 = v1.begin() ; Iter1 != v1.end() ; Iter1++ )   
cout << Iter1->m_i << " ";  
   cout << ")" << endl;  
  
   // To sort in ascending order,  
   sort( v1.begin( ), v1.end( ), less<MyStruct>());  
  
   cout << "Sorted vector v1 = ( " ;  
   for ( Iter1 = v1.begin() ; Iter1 != v1.end() ; Iter1++ )   
cout << Iter1->m_i << " ";  
   cout << ")" << endl;  
 }  
```  
  
## Output  
  
```  
Original vector v1 = ( 41 18467 6334 26500 19169 15724 11478 )  
Sorted vector v1 = ( 41 6334 11478 15724 18467 19169 26500 )  
```  
  
## Requirements  
 **Header:** <functional\>  
  
 **Namespace:** std  
  
## See Also  
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)