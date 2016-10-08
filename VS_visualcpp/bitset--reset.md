---
title: "bitset::reset"
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
ms.assetid: dbbe5964-4577-4697-a3fb-7dec3ec07c4e
caps.latest.revision: 13
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
# bitset::reset
Resets all the bits in a bitset to 0 or resets a bit at a specified position to 0.  
  
## Syntax  
  
```  
  
      bitset<N>& reset( );   
bitset<N>& reset(  
   size_t _Pos  
);  
```  
  
#### Parameters  
 `_Pos`  
 The position of the bit in the bitset to be reset to 0.  
  
## Return Value  
 A copy of the bitset for which the member function was invoked.  
  
## Remarks  
 The second member function throws an [out_of_range](../VS_visualcpp/out_of_range-Class.md) exception if the position specified is greater than the size of the bitset.  
  
## Example  
  
```  
// bitset_reset.cpp  
// compile with: /EHsc  
#include <bitset>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   bitset<5> b1 ( 13 );  
   cout << "The set of bits in bitset<5> b1(13) is: ( "<< b1 << " )"  
        << endl;  
  
   bitset<5> b1r3;  
   b1r3 = b1.reset( 2 );  
   cout << "The collecion of bits obtained from resetting the\n"  
        << " third bit of bitset b1 is: ( "<< b1r3 << " )"   
        << endl;  
  
   bitset<5> b1r;  
   b1r = b1.reset( );  
   cout << "The collecion of bits obtained from resetting all\n"  
        << " the elements of the bitset b1 is: ( "<< b1r << " )"  
        << endl;  
}  
```  
  
 **The set of bits in bitset<5> b1(13) is: ( 01101 )**  
**The collecion of bits obtained from resetting the**  
 **third bit of bitset b1 is: ( 01001 )**  
**The collecion of bits obtained from resetting all**  
 **the elements of the bitset b1 is: ( 00000 )**   
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std  
  
## See Also  
 [bitset Class](../VS_visualcpp/bitset-Class.md)