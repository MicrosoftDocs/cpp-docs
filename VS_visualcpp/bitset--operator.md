---
title: "bitset::operator"
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
ms.assetid: b3bc20eb-4a13-4f3e-bf6b-6c3bd6d7ae06
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
# bitset::operator
Returns a reference to a bit at a specified position in a bitset if the bitset is modifiable; otherwise, it returns the value of the bit at that position.  
  
## Syntax  
  
```  
bool operator[](size_t _Pos) const;  
reference operator[](size_t _Pos);  
```  
  
#### Parameters  
 `_Pos`  
 The position locating the bit within the bitset.  
  
## Remarks  
 When compiling with _SECURE_SCL 1, a runtime error will occur if you attempt to access an element outside the bounds of the bitset.  See [Checked Iterators](../VS_visualcpp/Checked-Iterators.md) for more information.  
  
## Example  
  
```  
// bitset_op_REF.cpp  
// compile with: /EHsc  
#include <bitset>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   bool b;  
   bitset<5> b1 ( 6 );  
   cout << "The initialized bitset<5> b1( 2 ) is: ( "<< b1 << " )."  
        << endl;  
  
   int i;  
   for ( i = 0 ; i <= 4 ; i++ )  
   {  
      b = b1[ i ];  
      cout << "  The bit in position "  
           << i << " is " << b << ".\n";  
   }  
}  
```  
  
## Output  
  
```  
The initialized bitset<5> b1( 2 ) is: ( 00110 ).  
  The bit in position 0 is 0.  
  The bit in position 1 is 1.  
  The bit in position 2 is 1.  
  The bit in position 3 is 0.  
  The bit in position 4 is 0.  
```  
  
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std  
  
## See Also  
 [bitset Class](../VS_visualcpp/bitset-Class.md)