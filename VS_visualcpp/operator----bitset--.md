---
title: "operator&amp; (&lt;bitset&gt;)"
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
ms.assetid: 04f24147-d74e-4ca7-8cb9-e36eb7567585
caps.latest.revision: 12
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
# operator&amp; (&lt;bitset&gt;)
Performs a bitwise `AND` between two bitsets.  
  
## Syntax  
  
```  
template <size_t size>  
bitset<size> operator&(  
   const bitset<size>& _Left,  
   const bitset<size>& _Right  
);  
```  
  
#### Parameters  
 `_Left`  
 The first of the two bitsets whose respective elements are to be combined with the bitwise `AND`.  
  
 `_Right`  
 The second of the two valarrays whose respective elements are to be combined with the bitwise `AND`.  
  
## Return Value  
 A bitset whose elements are the result of performing the `AND` operation on the corresponding elements of `_Left` and `_Right`.  
  
## Example  
  
```  
// bitset_and.cpp  
// compile with: /EHsc  
#include <bitset>  
#include <iostream>  
#include <string>  
  
using namespace std;  
  
int main()  
{  
   bitset<4> b1 ( string("0101") );  
   bitset<4> b2 ( string("0011") );  
   bitset<4> b3 = b1 & b2;  
   cout << "bitset 1: " << b1 << endl;  
   cout << "bitset 2: " << b2 << endl;  
   cout << "bitset 3: " << b3 << endl;  
}  
```  
  
 **bitset 1: 0101**  
**bitset 2: 0011**  
**bitset 3: 0001**   
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std