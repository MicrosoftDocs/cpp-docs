---
title: "bitset::none"
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
ms.assetid: 85830040-7b36-4e5e-ad69-65285d8c55cf
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
# bitset::none
Tests if no bit has been set to 1 in a bitset object.  
  
## Syntax  
  
```  
  
bool none( ) const;  
  
```  
  
## Return Value  
 **true** if no bit in the bitset has been set to 1; **false** if at least one bit has been set to 1.  
  
## Example  
  
```  
// bitset_none.cpp  
// compile with: /EHsc  
#include <bitset>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   bitset<5> b1 ( 6 );  
   bool b, rb;  
  
   cout << "Original bitset b1(6) is: ( " << b1 << " )"  
        << endl;  
  
   b = b1.none ( );  
  
   if ( b )  
      cout << "None of the bits in bitset b1 are set to 1."  
           << endl;  
   else  
      cout << "At least one of the bits in bitset b1 is set to 1."  
           << endl;  
  
   bitset<5> rb1;  
   rb1 = b1.reset ( );  
   rb = rb1.none ( );  
   if ( rb )  
      cout << "None of the bits in bitset b1 are set to 1."  
           << endl;  
   else  
      cout << "At least one of the bits in bitset b1 is set to 1."  
           << endl;  
}  
```  
  
 **Original bitset b1(6) is: ( 00110 )**  
**At least one of the bits in bitset b1 is set to 1.**  
**None of the bits in bitset b1 are set to 1.**   
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std  
  
## See Also  
 [bitset Class](../VS_visualcpp/bitset-Class.md)