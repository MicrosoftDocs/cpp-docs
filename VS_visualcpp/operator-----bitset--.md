---
title: "operator&gt;&gt; (&lt;bitset&gt;)"
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
ms.assetid: 9136f8b8-8c75-4396-bb2e-eea62bea91ba
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
# operator&gt;&gt; (&lt;bitset&gt;)
Reads a string of bit characters into a bitset.  
  
## Syntax  
  
```  
  
   template<class CharType, class Traits, size_t Bits>  
basic_istream<CharType, Traits>& operator>> (  
   basic_istream<CharType, Traits>& _Istr,  
   bitset<N>& _Right  
);  
```  
  
#### Parameters  
 `_Istr`  
 The string that is entered into the input stream to be inserted into the bitset.  
  
 `_Right`  
 The bitset that is receiving the bits from the input stream.  
  
## Return Value  
 The template function returns the string `_Istr`.  
  
## Remarks  
 The template function overloads **operator>>** to store in the bitset _*Right* the value bitset(`str`), where `str` is an object of type [basic_string](../Topic/basic_string::basic_string.md)<**CharType**, **Traits**, **allocator**<**CharType**> >**&** extracted from `_Istr`.  
  
 The template function extracts elements from `_Istr` and inserts them into the bitset until:  
  
-   All the bit elements have been extracted from the input stream and stored in the bitset.  
  
-   The bitset is filled up with bits from the input stream.  
  
-   An input element is encountered that is neither 0 nor 1.  
  
## Example  
  
```  
#include <bitset>  
#include <iostream>  
#include <string>  
  
using namespace std;  
int main()  
{  
  
   bitset<5> b1;  
   cout << "Enter string of (0 or 1) bits for input into bitset<5>.\n"  
        << "Try bit string of length less than or equal to 5,\n"  
        << " (for example: 10110): ";  
   cin >>  b1;  
  
   cout << "The ordered set of bits entered from the "  
        << "keyboard\n has been input into bitset<5> b1 as: ( "  
        << b1 << " )" << endl;  
  
   // Truncation due to longer string of bits than length of bitset  
   bitset<2> b3;  
   cout << "Enter string of bits (0 or 1) for input into bitset<2>.\n"  
        << " Try bit string of length greater than 2,\n"  
        << " (for example: 1011): ";  
   cin >>  b3;  
  
   cout << "The ordered set of bits entered from the "  
        << "keyboard\n has been input into bitset<2> b3 as: ( "  
        << b3 << " )" << endl;  
  
   // Flushing the input stream  
   char buf[100];  
   cin.getline(&buf[0], 99);  
  
   // Truncation with non-bit value  
   bitset<5> b2;  
   cout << "Enter a string for input into  bitset<5>.\n"  
        << " that contains a character than is NOT a 0 or a 1,\n "  
        << " (for example: 10k01): ";  
   cin >>  b2;  
  
   cout << "The string entered from the keyboard\n"  
        << " has been input into bitset<5> b2 as: ( "  
        << b2 << " )" << endl;  
}  
```  
  
## Input  
  
```  
10110  
1011  
10k10  
```  
  
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std