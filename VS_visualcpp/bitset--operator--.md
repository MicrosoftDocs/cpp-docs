---
title: "bitset::operator&lt;&lt;"
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
ms.assetid: 64fe0256-6054-4ed7-8dc6-4f11753de664
caps.latest.revision: 14
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
# bitset::operator&lt;&lt;
Shifts the bits in a bitset to the left a specified number of positions and returns the result to a new bitset.  
  
## Syntax  
  
```  
bitset<N> operator<<(  
   size_t _Pos  
) const;  
```  
  
#### Parameters  
 `_Pos`  
 The number of positions to the left that the bits in the bitset are to be shifted.  
  
## Return Value  
 The modified bitset with the bits shifted to the left the required number of positions.  
  
## Remarks  
 The member operator function returns **bitset**(**\*this**) **<<= pos,** where [<<=](../VS_visualcpp/bitset--operator--=.md) shifts the bits in a bitset to the left a specified number of positions and returns the result to the targeted bitset.  
  
## Example  
  
```  
// bitset_op_LS.cpp  
// compile with: /EHsc  
#include <bitset>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   bitset<5> b1 ( 7 );  
  
   cout << "The bitset b1 is: ( "<< b1 << " )." << endl;  
  
   bitset<5> b2;  
   b2 = b1 << 2;  
  
   cout << "After shifting the bits 2 positions to the left,\n"  
        << " the bitset b2 is: ( "<< b2 << " )."  
        << endl;  
  
   bitset<5> b3 = b2 >> 1;  
  
   cout << "After shifting the bits 1 position to the right,\n"  
        << " the bitset b3 is: ( " << b3 << " )."  
        << endl;  
}  
```  
  
## Output  
  
```  
The bitset b1 is: ( 00111 ).  
After shifting the bits 2 positions to the left,  
 the bitset b2 is: ( 11100 ).  
After shifting the bits 1 position to the right,  
 the bitset b3 is: ( 01110 ).  
```  
  
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std  
  
## See Also  
 [bitset Class](../VS_visualcpp/bitset-Class.md)