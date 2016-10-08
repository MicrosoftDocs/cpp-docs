---
title: "bitset::operator!="
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
ms.assetid: e3513727-6615-4f72-84e2-2869282e1c79
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
# bitset::operator!=
Tests a target bitset for inequality with a specified bitset.  
  
## Syntax  
  
```  
  
      bool operator !=(  
   const bitset<N>& _Right  
) const;  
```  
  
#### Parameters  
 `_Right`  
 The bitset that is to be compared to the target bitset for inequality.  
  
## Return Value  
 **true** if the bitsets are different; **false** if they are the same.  
  
## Remarks  
 Bitsets must be of the same size to be tested for inequality by the member operator function.  
  
## Example  
  
```  
// bitset_op_NE.cpp  
// compile with: /EHsc  
#include <bitset>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   bitset<5> b1 ( 7 );  
   bitset<5> b2 ( 7 );  
   bitset<5> b3 ( 2 );  
   bitset<4> b4 ( 7 );  
  
   if ( b1 != b2 )  
      cout << "Bitset b1 is different from bitset b2." << endl;  
   else  
      cout << "Bitset b1 is the same as bitset b2." << endl;  
  
   if ( b1 != b3 )  
      cout << "Bitset b1 is different from bitset b3." << endl;  
   else  
      cout << "Bitset b1 is the same as bitset b3." << endl;  
  
   // This would cause an error because bitsets must have the  
   // same size to be tested  
   // if ( b1 != b4 )  
   //   cout << "Bitset b1 is different from bitset b4." << endl;  
   // else  
   //   cout << "Bitset b1 is the same as bitset b4." << endl;  
}  
```  
  
 **Bitset b1 is the same as bitset b2.**  
**Bitset b1 is different from bitset b3.**   
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std  
  
## See Also  
 [bitset Class](../VS_visualcpp/bitset-Class.md)