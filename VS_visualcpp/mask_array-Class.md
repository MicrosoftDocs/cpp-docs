---
title: "mask_array Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c49bed6a-3000-4f39-bff6-cb9a453acb0b
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
# mask_array Class
An internal, auxiliary template class that supports objects that are subsets of parent valarrays, specified with a Boolean expression, by providing operations between the subset arrays.  
  
## Syntax  
  
```  
template<class Type>  
   class mask_array {  
public:  
   typedef Type value_type;  
   void operator=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator=(  
      const Type& x  
   ) const;  
  
   void operator*=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator/=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator%=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator+=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator-=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator^=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator&=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator|=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator<<=(  
      const valarray<Type>& x  
   ) const;  
  
   void operator>>=(  
      const valarray<Type>& x  
   ) const;  
  
// The rest is private or implementation defined  
}  
```  
  
## Remarks  
 The class describes an object that stores a reference to an object **va** of class [valarray](../VS_visualcpp/valarray-Class.md)**<Type\>**, along with an object **ba** of class [valarray<bool\>](../VS_visualcpp/valarray-bool--Class.md), which describes the sequence of elements to select from the **valarray<Type\>** object.  
  
 You construct a **mask_array<Type\>** object only by writing an expression of the form [va&#91;ba&#93;](../VS_visualcpp/valarray-Class.md#valarray__operator_at). The member functions of class mask_array then behave like the corresponding function signatures defined for **valarray<Type\>**, except that only the sequence of selected elements is affected.  
  
 The sequence consists of at most **ba.size** elements. An element                 *J* is included only if **ba**[                *J*] is true. Thus, there are as many elements in the sequence as there are true elements in **ba**. If `I` is the index of the lowest true element in **ba**, then **va**[ `I`] is element zero in the selected sequence.  
  
## Example:  
  
```  
// mask_array.cpp  
// compile with: /EHsc  
#include <valarray>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   int i;  
  
   valarray<int> va ( 10 );  
   for ( i = 0 ; i < 10 ; i += 2 )  
      va [ i ] =  i;  
   for ( i = 1 ; i < 10 ; i += 2 )  
      va [ i ] =  -1;  
  
   cout << "The initial operand valarray is:  ( ";  
      for ( i = 0 ; i < 10 ; i++ )  
         cout << va [ i ] << " ";  
   cout << ")." << endl;  
  
   // Use masked subsets to assign a value of 10  
   // to all elements grrater than 3 in value  
   va [va > 3 ] = 10;  
   cout << "The modified operand valarray is:  ( ";  
      for ( i = 0 ; i < 10 ; i++ )  
         cout << va [ i ] << " ";  
   cout << ")." << endl;  
}  
```  
  
### Output  
  
```  
The initial operand valarray is:  ( 0 -1 2 -1 4 -1 6 -1 8 -1 ).  
The modified operand valarray is:  ( 0 -1 2 -1 10 -1 10 -1 10 -1 ).  
```  
  
## Requirements  
 **Header:** <valarray\>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)