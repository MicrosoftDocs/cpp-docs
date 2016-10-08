---
title: "bitset::test"
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
ms.assetid: 57301aae-7d51-4006-a9ef-c82b6c0ff21e
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
# bitset::test
Tests whether the bit at a specified position in a bitset is set to 1.  
  
## Syntax  
  
```  
bool test(  
   size_t _Pos,  
) const;  
```  
  
#### Parameters  
 `_Pos`  
 The position of the bit in the bitset to be tested for its value.  
  
## Return Value  
 **true** if the bit specified by the argument position is set to 1; otherwise, **false**.  
  
## Remarks  
 The member function throws an [out_of_range](../VS_visualcpp/out_of_range-Class.md) exception that is the size of the bitset is less than or equal to the position specified in the argument.  
  
## Example  
  
```  
// bitset_test.cpp  
// compile with: /EHsc  
#include <bitset>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   bitset<5> b1 ( 6 );  
   bool b;  
   bitset<5>::element_type e;  
  
   cout << "Original bitset b1(6) is: ( "<< b1 << " )"  
        << endl;  
   cout << "Note: positions in a bitset are numbered\n"  
         << " from the right starting with 0.\n" << endl;  
  
   b = b1.test ( 3 );  
  
   if ( b )  
      cout << "The bit at position 3 of bitset b1 "  
           << "has a value of 1." << endl;  
   else  
      cout << "The bit at position 3 of bitset b1 "  
           << "has a value of 0." << endl;  
  
   b1[3] = 1;  
   cout << "Bitset b1 modified by b1[3] = 1 is: ( "<< b1 << " )"  
        << endl;  
  
   e = b1.test ( 3 );  
   if ( e )  
      cout << "The bit at position 3 of bitset b1 "  
           << "has a value of 1." << endl;  
   else  
      cout << "The bit at position 3 of bitset b1 "  
           << "has a value of 0." << endl;  
}  
```  
  
 **Original bitset b1(6) is: ( 00110 )**  
**Note: positions in a bitset are numbered**  
 **from the right starting with 0.**  
**The bit at position 3 of bitset b1 has a value of 0.**  
**Bitset b1 modified by b1[3] = 1 is: ( 01110 )**  
**The bit at position 3 of bitset b1 has a value of 1.**   
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std  
  
## See Also  
 [bitset Class](../VS_visualcpp/bitset-Class.md)