---
title: "bitset::set"
ms.custom: na
ms.date: 10/05/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c1f3666b-414f-4565-bf02-e26c3b5e9869
caps.latest.revision: 13
manager: ghogen
translation.priority.mt: 
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
# bitset::set
Sets all the bits in a bitset to 1 or sets a bit at a specified position to 1.  
  
## Syntax  
  
```  
  
      bitset<N>& set( );  
bitset<N>& set(  
   size_t _Pos,   
   bool _Val = true  
);  
```  
  
#### Parameters  
 `_Pos`  
 The position of the bit in the bitset to be set to assigned a value.  
  
 `_Val`  
 The value to be assigned to the bit at the position specified.  
  
## Return Value  
 A copy of the bitset for which the member function was invoked.  
  
## Remarks  
 The second member function throws an [out_of_range](../VS_visualcpp/out_of_range-Class.md) exception if the position specified is greater than the size of the bitset.  
  
## Example  
  
```  
// bitset_set.cpp  
// compile with: /EHsc  
#include <bitset>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   bitset<5> b1 ( 6 );  
   cout << "The set of bits in bitset<5> b1(6) is: ( "<< b1 << " )"  
        << endl;  
  
   bitset<5> b1s0;  
   b1s0 = b1.set( 0 );  
   cout << "The collecion of bits obtained from setting the\n"  
        << " zeroth bit of bitset b1 is: ( "<< b1s0 << " )"   
        << endl;  
  
   bitset<5> bs1;  
   bs1 = b1.set( );  
   cout << "The collecion of bits obtained from setting all the\n"  
        << " elements of the bitset b1 is: ( "<< bs1 << " )"  
        << endl;  
}  
```  
  
 **The set of bits in bitset<5> b1(6) is: ( 00110 )**  
**The collecion of bits obtained from setting the**  
 **zeroth bit of bitset b1 is: ( 00111 )**  
**The collecion of bits obtained from setting all the**  
 **elements of the bitset b1 is: ( 11111 )**   
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std  
  
## See Also  
 [bitset Class](../VS_visualcpp/bitset-Class.md)