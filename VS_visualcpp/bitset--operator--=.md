---
title: "bitset::operator&gt;&gt;="
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
ms.assetid: 1353d76f-6084-4fb9-aa5d-b23c58ed4b16
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
# bitset::operator&gt;&gt;=
Shifts the bits in a bitset to the right a specified number of positions and returns the result to the targeted bitset.  
  
## Syntax  
  
```  
bitset<N>& operator>>=(  
   size_t _Pos  
);  
```  
  
#### Parameters  
 `_Pos`  
 The number of positions to the right the bits in the bitset are to be shifted.  
  
## Return Value  
 The targeted bitset modified so that the bits have been shifted to the right the required number of positions.  
  
## Remarks  
 If no element exists to shift into the position, the function clears the bit to a value of 0.  
  
## Example  
  
```  
// bitset_op_RSE.cpp  
// compile with: /EHsc  
#include <bitset>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   bitset<5> b1 ( 28 );  
   cout << "The target bitset b1 is: ( "<< b1 << " )." << endl;  
  
   b1 >>= 2;  
   cout << "After shifting the bits 2 positions to the right,\n"  
        << " the target bitset b1 becomes: ( "<< b1 << " )."   
        << endl;  
}  
```  
  
 **The target bitset b1 is: ( 11100 ).**  
**After shifting the bits 2 positions to the right,**  
 **the target bitset b1 becomes: ( 00111 ).**   
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std  
  
## See Also  
 [bitset Class](../VS_visualcpp/bitset-Class.md)