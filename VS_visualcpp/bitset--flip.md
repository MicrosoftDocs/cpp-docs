---
title: "bitset::flip"
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
ms.assetid: cfe8506a-a77c-44d1-8c7b-ca070b5353b8
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
# bitset::flip
Toggles the value of all the bits in a bitset or toggles a single bit at a specified position.  
  
## Syntax  
  
```  
  
      bitset<N>& flip( );   
bitset<N>& flip(  
   size_t _Pos  
);  
```  
  
#### Parameters  
 `_Pos`  
 The position of the bit whose value is to be toggled.  
  
## Return Value  
 A copy of the modified bitset for which the member function was invoked.  
  
## Remarks  
 The second member function throws an [out_of_range](../VS_visualcpp/out_of_range-Class.md) exception if the position specified as a parameter is greater than the size *N* of the **bitset<***N***>** whose bit was toggled.  
  
## Example  
  
```  
// bitset_flip.cpp  
// compile with: /EHsc  
#include <bitset>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   bitset<5> b1 ( 6 );  
  
   cout << "The collection of bits in the original bitset is: ( "  
        << b1 << " )" << endl;  
  
   bitset<5> fb1;  
   fb1 = b1.flip ( );  
  
   cout << "After flipping all the bits, the bitset becomes: ( "  
        << fb1 << " )" << endl;  
  
   bitset<5> f3b1;  
   f3b1 = b1.flip ( 3 );  
  
   cout << "After flipping the fourth bit, the bitset becomes: ( "  
        << f3b1 << " )" << endl << endl;  
  
   bitset<5> b2;  
   int i;  
   for ( i = 0 ; i <= 4 ; i++ )  
   {  
      b2.flip(i);  
      cout << b2 << "  The bit flipped is in position "  
           << i << ".\n";  
   }  
}  
```  
  
 **The collection of bits in the original bitset is: ( 00110 )**  
**After flipping all the bits, the bitset becomes: ( 11001 )**  
**After flipping the fourth bit, the bitset becomes: ( 10001 )**  
**00001  The bit flipped is in position 0.**  
**00011  The bit flipped is in position 1.**  
**00111  The bit flipped is in position 2.**  
**01111  The bit flipped is in position 3.**  
**11111  The bit flipped is in position 4.**   
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std  
  
## See Also  
 [bitset Class](../VS_visualcpp/bitset-Class.md)