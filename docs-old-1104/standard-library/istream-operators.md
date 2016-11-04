---
title: "&lt;istream&gt; operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/01/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 7174da41-f301-4a34-b631-0ab918b188d2
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;istream&gt; operators
||  
|-|  
|[operator&gt;&gt;](#operator_gt__gt_)|  
  
##  <a name="operator_gt__gt_"></a>  operator&gt;&gt;  
 Extracts characters and strings from the stream.  
  
```  
template <class Elem, class Tr>  
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& _Istr,   
    Elem* str);

template <class Elem, class Tr>  
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& _Istr,   
    Elem& _Ch);

template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& _Istr,   
    signed char* str);

template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& _Istr,   
    signed char& _Ch);

template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& _Istr,   
    unsigned char* str);

template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& _Istr,   
    unsigned char& _Ch);

template <class Elem, class Tr, class Type>  
basic_istream<Elem, Tr>& operator>>(
    basic_istream<char, Tr>&& _Istr,  
    Type& val);
```  
  
### Parameters  
 `_Ch`  
 A character.  
  
 `_Istr`  
 A stream.  
  
 ` str`  
 A string.  
  
 ` val`  
 A type.  
  
### Return Value  
 The stream  
  
### Remarks  
 The `basic_istream` class also defines several extraction operators. For more information, see [basic_istream::operator>>](../standard-library/basic-istream-class.md#basic_istream__operator_gt__gt_).  
  
 The template function:  
  
```  
template <class Elem, class Tr>  
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& _Istr, Elem* str);
```  
  
 extracts up to *N* - 1 elements and stores them in the array starting at _ *Str*. If `_Istr`. [width](../standard-library/ios-base-class.md#ios_base__width) is greater than zero, *N* is `_Istr`. **width**; otherwise, it is the size of the largest array of **Elem** that can be declared. The function always stores the value **Elem()** after any extracted elements it stores. Extraction stops early on end of file, on a character with value **Elem**(0) (which is not extracted), or on any element (which is not extracted) that would be discarded by [ws](../standard-library/istream-functions.md#ws). If the function extracts no elements, it calls `_Istr`. [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). In any case, it calls `_Istr`. **width**(0) and returns `_Istr`.  
  
 **Security Note** The null-terminated string being extracted from the input stream must not exceed the size of the destination buffer ` str`. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 The template function:  
  
```  
template <class Elem, class Tr>  
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& _Istr, Elem& _Ch);
```  
  
 extracts an element, if it is possible, and stores it in `_Ch`. Otherwise, it calls **is**. [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). In any case, it returns `_Istr`.  
  
 The template function:  
  
```  
template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& _Istr, signed char* str);
```  
  
 returns `_Istr` >> ( `char`**\***) ` str`.  
  
 The template function:  
  
```  
template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& _Istr, signed char& _Ch);
```  
  
 returns `_Istr` >> ( **char&**) `_Ch`.  
  
 The template function:  
  
```  
template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& _Istr, unsigned char* str);
```  
  
 returns `_Istr` >> ( **char \***) ` str`.  
  
 The template function:  
  
```  
template <class Tr>  
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& _Istr, unsigned char& _Ch);
```  
  
 returns `_Istr` >> ( **char&**) `_Ch`.  
  
 The template function:  
  
```  
template <class Elem, class Tr, class Type>  
basic_istream<Elem, Tr>& operator>>(
    basic_istream<char, Tr>&& _Istr,  
    Type& val);
```  
  
 returns `_Istr` `>>` ` val` (and converts an `rvalue reference` to `_Istr` to an `lvalue` in the process).  
  
### Example  
  
```  
// istream_op_extract.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   ws( cin );  
   char c[10];  
  
   cin.width( 9 );  
   cin >> c;  
   cout << c << endl;  
}  
```  
  
## See Also  
 [\<istream>](../standard-library/istream.md)

