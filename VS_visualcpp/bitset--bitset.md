---
title: "bitset::bitset"
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
ms.assetid: 8f412b9a-6a51-4fe6-8c99-45d308bbefa7
caps.latest.revision: 17
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
# bitset::bitset
Constructs an object of class `bitset<N>` and initializes the bits to zero, or to some specified value, or to values obtained from characters in a string.  
  
## Syntax  
  
```  
bitset( );  
bitset(  
   unsigned long long _Val  
);  
explicit bitset(  
   const char * _CStr  
);   
template<   
  class CharType,   
  class Traits,   
  class Allocator   
>  
  explicit bitset(  
    const basic_string< CharType, Traits, Allocator >& _Str,  
    typename basic_string<   
      CharType, Traits, Allocator >::size_type _Pos = 0  
  );  
template<  
  class CharType,  
  class Traits,  
  class Allocator   
>  
 explicit bitset(  
  const basic_string< CharType, Traits, Allocator >& _Str,  
  typename basic_string<  
    CharType, Traits, Allocator >::size_type _Pos,  
  typename basic_string<   
    CharType, Traits, Allocator >::size_type _Count,  
  CharType _Zero = CharType (’0’),   
  CharType _One  = CharType (’1’)  
);  
```  
  
#### Parameters  
 `_Val`  
 The unsigned integer whose base two representation is used to initialize the bits in the bitset being constructed.  
  
 `_Str`  
 The string of zeros and ones used to initialize the bitset bit values.  
  
 `_CStr`  
 A C-style string of zeros and ones used to initialize the bitset bit values.  
  
 `_Pos`  
 The position of the character in the string, counting from left to right and starting with zero, used to initialize the first bit in the bitset.  
  
 `_Count`  
 The number of characters in the string that is used to provide initial values for the bits in the bitset.  
  
 `_Zero`  
 The character that is used to represent a zero. The default is '0'.  
  
 `_One`  
 The character that is used to represent a one. The default is '1'.  
  
## Remarks  
 Three constructors can be used to construct obects of class `bitset<N>`:  
  
-   The first constructor accepts no parameters, constructs an object of class `bitset<N>` and initializes all N bits to a default value of zero.  
  
-   The second constructor constructs an object of class `bitset<N>` and initializes the bits by using the single `unsigned long long` parameter.  
  
-   The third constructor constructs an object of class `bitset<N>`, initializing the N bits to values that correspond to the characters provided in a c-style character string of zeros and ones. You call the constructor without casting the string into a string type: `bitset<5> b5("01011");`  
  
 There are also two constructor templates provided:  
  
-   The first constructor template constructs an object of class `bitset<N>` and initializes bits from the characters provided in a string of zeros and ones. If any characters of the string are other than 0 or 1, the constructor throws an object of class [invalid argument](../VS_visualcpp/invalid_argument-Class.md). If the position specified (`_Pos`) is beyond the length of the string, then the constructor throws an object of class [out_of_range](../VS_visualcpp/out_of_range-Class.md). The constructor sets only those bits at position *j* in the bitset for which the character in the string at position `_Pos + j` is 1. By default, `_Pos` is 0.  
  
-   The second constructor template is similar to the first, but includes an additional parameter (`_Count`) that is used to specify the number of bits to initialize. It also has two optional parameters, `_Zero` and `_One`, which indicate what character in `_Str` is to be interpreted to mean a 0 bit and a 1 bit, respectively.  
  
## Example  
  
```  
// bitset_bitset.cpp  
// compile with: /EHsc  
#include <bitset>  
#include <iostream>  
  
int main( )  
{  
   // Using the default constructor  
   using namespace std;  
   bitset<2> b0;  
   cout << "The set of bits in bitset<2> b0 is: ( "  
        << b0 << " )." << endl;  
  
   // Using the second member function  
   bitset<5> b1 ( 6 );  
   cout << "The set of bits in bitset<5> b1( 6 ) is: ( "  
        << b1 << " )." << endl;  
  
   // The template parameter N can be an expresssion  
   bitset< 2 * sizeof ( int ) > b2;  
   cout << "The set of bits in bitset<2 * sizeof ( int ) > b2 is: ( "  
        << b2 << " )." << endl;  
  
   // The base two representation will be truncated  
   // if its length exceeds the size of the bitset  
   bitset<3> b3 ( 6 );  
   cout << "The set of bits in bitset<3> b3( 6 ) is ( "  
        << b3 << " )." << endl;  
  
   // Using a c-style string to initialize the bitset  
    bitset<7> b3andahalf ( "1001001" );  
    cout << "The set of bits in bitset<7> b3andahalf ( \"1001001\" )"  
         << " is ( " << b3andahalf << " )." << endl;   
  
   // Using the fifth member function with the first parameter  
   string bitval4 ( "10011" );  
   bitset<5> b4 ( bitval4 );  
   cout << "The set of bits in bitset<5> b4( bitval4 ) is ( "  
        << b4 << " )." << endl;  
  
   // Only part of the string may be used for initialization  
  
   // Starting at position 3 for a length of 6 (100110)  
   string bitval5 ("11110011011");  
   bitset<6> b5 ( bitval5, 3, 6 );  
   cout << "The set of bits in bitset<11> b5( bitval, 3, 6 ) is ( "  
        << b5 << " )." << endl;  
  
   // The bits not initialized with part of the string  
   // will default to zero  
   bitset<11> b6 ( bitval5, 3, 5 );  
   cout << "The set of bits in bitset<11> b6( bitval5, 3, 5 ) is ( "  
        << b6 << " )." << endl;  
  
   // Starting at position 2 and continue to the end of the string  
   bitset<9> b7 ( bitval5, 2 );  
   cout << "The set of bits in bitset<9> b7( bitval, 2 ) is ( "  
        << b7 << " )." << endl;  
}  
```  
  
 **The set of bits in bitset<2> b0 is: ( 00 ).**  
**The set of bits in bitset<5> b1( 6 ) is: ( 00110 ).**  
**The set of bits in bitset<2 \* sizeof ( int ) > b2 is: ( 00000000 ).**  
**The set of bits in bitset<3> b3( 6 ) is ( 110 ).**  
**The set of bits in bitset<5> b4( bitval4 ) is ( 10011 ).**  
**The set of bits in bitset<11> b5( bitval, 3, 6 ) is ( 100110 ).**  
**The set of bits in bitset<11> b6( bitval5, 3, 5 ) is ( 00000010011 ).**  
**The set of bits in bitset<9> b7( bitval, 2 ) is ( 110011011 ).**   
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std  
  
## See Also  
 [bitset Class](../VS_visualcpp/bitset-Class.md)