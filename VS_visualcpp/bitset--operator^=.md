---
title: "bitset::operator^="
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
ms.assetid: e961c4aa-6a17-4117-b136-dbc5786aaf48
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
# bitset::operator^=
Performs a bitwise combination of bitsets with the exclusive `OR` operation.  
  
## Syntax  
  
```  
  
      bitset<N>& operator^=(  
   const bitset<N>& _Right  
);  
```  
  
#### Parameters  
 `_Right`  
 The bitset that is to be combined bitwise with the target bitset.  
  
## Return Value  
 The modified target bitset that results from the bitwise exclusive `OR` operation with the bitset specified as a parameter.  
  
## Remarks  
 Two bits combined by the exclusive **OR** operator return **true** if at least one, but not both, of the bits is **true**; otherwise, their combination returns **false**.  
  
 Bitsets must be of the same size to be combined bitwise with the exclusive `OR` operator by the member operator function.  
  
## Example  
  
```  
// bitset_op_bitwiseOR.cpp  
// compile with: /EHsc  
#include <bitset>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   bitset<5> b1 ( 7 );  
   bitset<5> b2 ( 11 );  
   bitset<4> b3 ( 7 );  
  
   cout << "The target bitset b1 is:    ( "<< b1 << " )." << endl;  
   cout << "The parameter bitset b2 is: ( "<< b2 << " )." << endl;  
   cout << endl;  
  
   b1 ^= b2;  
   cout << "After bitwise exclusive OR combination,\n"  
        << " the target bitset b1 becomes:   ( "<< b1 << " )."   
        << endl;  
  
   // Note that the parameter-specified bitset in unchanged  
   cout << "The parameter bitset b2 remains: ( "<< b2 << " )."   
        << endl;  
  
   // The following would cause an error because the bisets   
   // must be of the same size to be combined  
   // b1 |= b3;  
}  
```  
  
 **The target bitset b1 is:    ( 00111 ).**  
**The parameter bitset b2 is: ( 01011 ).**  
**After bitwise exclusive OR combination,**  
 **the target bitset b1 becomes:   ( 01100 ).**  
**The parameter bitset b2 remains: ( 01011 ).**   
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std  
  
## See Also  
 [bitset Class](../VS_visualcpp/bitset-Class.md)