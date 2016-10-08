---
title: "bitset::reference"
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
ms.assetid: 7aea1fdf-8aae-4011-bb21-21f5a5529a35
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
# bitset::reference
A proxy class that provides references to bits contained in a bitset that is used to access and manipulate the individual bits as a helper class for the `operator[]` of class bitset.  
  
## Syntax  
  
```  
class reference {  
   friend class bitset<N>;  
   public:  
      reference& operator=(  
         bool _Val  
      );  
      reference& operator=(  
         const reference& _Bitref  
      );  
      bool operator~( ) const;  
      operator bool( ) const;  
      reference& flip( );  
};  
```  
  
#### Parameters  
 `_Val`  
 The value of the object of type `bool` to be assigned to a bit in a bitset.  
  
 `_Bitref`  
 A reference of the form *x [ i ]* to the bit at position *i* in bitset *x*.  
  
## Return Value  
 A reference to the bit in the bitset specified by the argument position for the first, second, and fifth member functions of class reference, and **true** or **false**, to reflect the value of the modified bit in the bitset for the third and fourth member functions of class reference.  
  
## Remarks  
 The class reference exists only as a helper class for the bitset `operator[]`. The member class describes an object that can access an individual bit within a bitset. Let *b* be an object of type `bool`, *x* and *y* objects of type **bitset<***N***>**, and *i* and *j* valid positions within such an object. The notation *x [i]* references the bit at position *i* in bitset *x*. The member functions of class reference provide, in order, the following operations:  
  
|Operation|Definition|  
|---------------|----------------|  
|*x*[*i*] = *b*|Stores `bool` value *b* at bit position *i* in bitset *x*.|  
|*x*[*i*] = *y*[*j*]|Stores the value of the bit *y*[*j*] at bit position *i* in bitset *x*.|  
|*b* = ~*x*[*i*]|Stores the flipped value of the bit *x*[*i*] in `bool` *b*.|  
|*b* = *x*[*i*]|Stores the value of the bit *x*[*i*] in `bool` *b*.|  
|*x*[*i*].`flip`( )|Stores the flipped value of the bit *x*[*i*] back at bit position *i* in *x*.|  
  
## Example  
  
```  
// bitset_reference.cpp  
// compile with: /EHsc  
#include <bitset>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   bitset<5> b1 ( 2 );  
   bitset<5> b2 ( 6 );  
   cout << "The initialized bitset<5> b1( 2 ) is: ( "<< b1 << " )."  
        << endl;  
   cout << "The initialized bitset<5> b2( 6 ) is: ( "<< b2 << " )."  
        << endl;  
  
   // Example of x [i] = b storing bool b at bit position i  
   // in bitset x  
   b1[ 0 ] = true;  
   cout << "The bitset<5> b1 with the bit at position 0 set to 1"  
        << " is: ( "<< b1 << " )" << endl;  
  
   // Example of x [i] = y [j] storing the bool value of the  
   // bit at position j in bitset y at bit position i in bitset x  
   b2 [4] = b1 [0];      // b1 [0] = true  
   cout << "The bitset<5> b2 with the bit at position 4 set to the "  
        << "value\n of the bit at position 0 of the bit in "  
        << "bitset<5> b1 is: ( "<<  b2  << " )" << endl;  
  
   // Example of b = ~x [i] flipping the value of the bit at  
   // position i of bitset x and storing the value in an   
   // object b of type bool  
   bool b = ~b2 [4];      // b2 [4] = false  
   if ( b )  
      cout << "The value of the object b = ~b2 [4] "  
           << "of type bool is true." << endl;  
   else  
      cout << "The value of the object b = ~b2 [4] "  
           << "of type bool is false." << endl;  
  
   // Example of b = x [i] storing the value of the bit at  
   // position i of bitset x in the object b of type bool  
   b = b2 [4];  
   if ( b )  
      cout << "The value of the object b = b2 [4] "  
           << "of type bool is true." << endl;  
   else  
      cout << "The value of the object b = b2 [4] "  
           << "of type bool is false." << endl;  
  
   // Example of x [i] . flip ( ) toggling the value of the bit at  
   // position i of bitset x  
   cout << "Before flipping the value of the bit at position 4 in "  
        << "bitset b2,\n it is ( "<<  b2  << " )." << endl;  
   b2 [4].flip( );  
   cout << "After flipping the value of the bit at position 4 in "  
        << "bitset b2,\n it becomes ( "<<  b2  << " )." << endl;  
   bool c;  
   c = b2 [4].flip( );  
   cout << "After a second toggle, the value of the position 4"  
        << " bit in b2 is now: " << c << ".";  
}  
```  
  
 **The initialized bitset<5> b1( 2 ) is: ( 00010 ).**  
**The initialized bitset<5> b2( 6 ) is: ( 00110 ).**  
**The bitset<5> b1 with the bit at position 0 set to 1 is: ( 00011 )**  
**The bitset<5> b2 with the bit at position 4 set to the value**  
 **of the bit at position 0 of the bit in bitset<5> b1 is: ( 10110 )**  
**The value of the object b = ~b2 [4] of type bool is false.**  
**The value of the object b = b2 [4] of type bool is true.**  
**Before flipping the value of the bit at position 4 in bitset b2,**  
 **it is ( 10110 ).**  
**After flipping the value of the bit at position 4 in bitset b2,**  
 **it becomes ( 00110 ).**  
**After a second toggle, the value of the position 4 bit in b2 is now: 1.**   
## Requirements  
 **Header:** <bitset\>  
  
 **Namespace:** std  
  
## See Also  
 [bitset Class](../VS_visualcpp/bitset-Class.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)