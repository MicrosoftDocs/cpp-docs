---
title: "&lt;ios&gt; functions"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 1382d53f-e531-4b41-adf6-6a1543512e51
caps.latest.revision: 6
---
# &lt;ios&gt; functions
||||  
|-|-|-|  
|[&lt;ios&gt; defaultfloat](#ios_defaultfloat)|[boolalpha](#boolalpha)|[dec](#dec)|  
|[fixed](#fixed)|[hex](#hex)|[internal](#internal)|  
|[left](#left)|[noboolalpha](#noboolalpha)|[noshowbase](#noshowbase)|  
|[noshowpoint](#noshowpoint)|[noshowpos](#noshowpos)|[noskipws](#noskipws)|  
|[nounitbuf](#nounitbuf)|[nouppercase](#nouppercase)|[oct](#oct)|  
|[right](#right)|[scientific](#scientific)|[showbase](#showbase)|  
|[showpoint](#showpoint)|[showpos](#showpos)|[skipws](#skipws)|  
|[unitbuf](#unitbuf)|[uppercase](#uppercase)|  
  
##  <a name="boolalpha"></a>  boolalpha  
 Specifies that variables of type [bool](../VS_visualcpp/bool--C---.md) appear as **true** or **false** in the stream.  
  
```  
ios _ base& boolalpha(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 By default, variables of type `bool` are displayed as 1 or 0.  
  
 `boolalpha` effectively calls `_Str.`[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( `ios_base::boolalpha`), and then returns `_Str.`  
  
 [noboolalpha](../VS_visualcpp/-ios--functions.md#noboolalpha) reverses the effect of `boolalpha`.  
  
### Example  
  
```  
// ios_boolalpha.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   bool b = true;  
   cout << b << endl;  
   boolalpha( cout );  
   cout << b << endl;  
   noboolalpha( cout );  
   cout << b << endl;  
   cout << boolalpha << b << endl;  
}  
```  
  
  **1**  
**true**  
**1**  
**true**    
##  <a name="dec"></a>  dec  
 Specifies that integer variables appear in base 10 notation.  
  
```  
ios _ base& dec(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 By default, integer variables are displayed in base 10.  
  
 **dec** effectively calls `_Str``.`[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( `ios_base::dec`**, ios_base::basefield**), and then returns `_Str`.  
  
### Example  
  
```  
// ios_dec.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   int i = 100;  
  
   cout << i << endl;   // Default is base 10  
   cout << hex << i << endl;     
   dec( cout );  
   cout << i << endl;  
   oct( cout );  
   cout << i << endl;  
   cout << dec << i << endl;  
}  
```  
  
  **100**  
**64**  
**100**  
**144**  
**100**    
##  <a name="ios_defaultfloat"></a>  &lt;ios&gt; defaultfloat  
 Configures the flags of an `ios_base` object to use a default display format for float values.  
  
```  
ios_base& defaultfloat(  
    ios_base& _Iosbase  
);  
```  
  
### Parameters  
 `_Iosbase`  
 An `ios_base` object.  
  
### Remarks  
 The manipulator effectively calls _I `osbase.`[ios_base::unsetf](../VS_visualcpp/ios_base-Class.md#ios_base__unsetf)`(ios_base::floatfield)`, then returns _I `osbase`.  
  
##  <a name="fixed"></a>  fixed  
 Specifies that a floating-point number is displayed in fixed-decimal notation.  
  
```  
ios _ base& fixed(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 **fixed** is the default display notation for floating-point numbers. [scientific](../VS_visualcpp/-ios--functions.md#scientific) causes floating-point numbers to be displayed using scientific notation.  
  
 The manipulator effectively calls  *_Str.*[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( `ios_base::fixed`,  **ios_base::floatfield**), and then returns `_Str`.  
  
### Example  
  
```  
// ios_fixed.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   float i = 1.1F;  
  
   cout << i << endl;   // fixed is the default  
   cout << scientific << i << endl;  
   cout.precision( 1 );  
   cout << fixed << i << endl;  
}  
```  
  
  **1.1**  
**1.100000e+000**  
**1.1**    
##  <a name="hex"></a>  hex  
 Specifies that integer variables shall appear in base 16 notation.  
  
```  
ios _ base& hex(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 By default, integer variables are displayed in base 10 notation. [dec](../VS_visualcpp/-ios--functions.md#dec) and [oct](../VS_visualcpp/-ios--functions.md#oct) also change the way integer variables appear.  
  
 The manipulator effectively calls `_Str`**.**[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( `ios_base::hex`,  **ios_base::basefield**), and then returns `_Str`.  
  
### Example  
  See [dec](../VS_visualcpp/-ios--functions.md#dec) for an example of how to use **hex**.  
  
##  <a name="internal"></a>  internal  
 Causes a number's sign to be left justified and the number to be right justified.  
  
```  
ios _ base& internal(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which `_Str` is derived.  
  
### Remarks  
 [showpos](../VS_visualcpp/-ios--functions.md#showpos) causes the sign to display for positive numbers.  
  
 The manipulator effectively calls `_Str`. [setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( [ios_base::internal](../VS_visualcpp/ios_base-Class.md#ios_base__fmtflags), [ios_base::adjustfield](../VS_visualcpp/ios_base-Class.md#ios_base__fmtflags)), and then returns `_Str`.  
  
### Example  
  
```  
// ios_internal.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iomanip>  
  
int main( void )   
{  
   using namespace std;  
   float i = -123.456F;  
   cout.fill( '.' );  
   cout << setw( 10 ) << i << endl;  
   cout << setw( 10 ) << internal << i << endl;  
}  
```  
  
  **..-123.456**  
**-..123.456**    
##  <a name="left"></a>  left  
 Causes text that is not as wide as the output width to appear in the stream flush with the left margin.  
  
```  
ios _ base& left(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 The manipulator effectively calls `_Str.`[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( `ios_base::left`,  **ios_base::adjustfield**), and then returns `_Str`.  
  
### Example  
  
```  
// ios_left.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   double f1= 5.00;  
   cout.width( 20 );   
   cout << f1 << endl;  
   cout << left << f1 << endl;  
}  
```  
  
   **5**  
**5**    
##  <a name="noboolalpha"></a>  noboolalpha  
 Specifies that variables of type [bool](../VS_visualcpp/bool--C---.md) appear as 1 or 0 in the stream.  
  
```  
ios _ base& noboolalpha(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 By default, `noboolalpha` is in effect.  
  
 `noboolalpha` effectively calls `_Str.`[unsetf](../VS_visualcpp/ios_base-Class.md#ios_base__unsetf)( `ios_base::boolalpha`), and then returns `_Str`.  
  
 [boolalpha](../VS_visualcpp/-ios--functions.md#boolalpha) reverses the effect of `noboolalpha`.  
  
### Example  
  See [boolalpha](../VS_visualcpp/-ios--functions.md#boolalpha) for an example of using `noboolalpha`.  
  
##  <a name="noshowbase"></a>  noshowbase  
 Turns off indicating the notational base in which a number is displayed.  
  
```  
ios _ base& noshowbase(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 `noshowbase` is on by default. Use [showbase](../VS_visualcpp/-ios--functions.md#showbase) to indicate the notational base of numbers.  
  
 The manipulator effectively calls `_Str.`[unsetf](../VS_visualcpp/ios_base-Class.md#ios_base__unsetf)( `ios_base::showbase`), and then returns `_Str`.  
  
### Example  
  See [showbase](../VS_visualcpp/-ios--functions.md#showbase) for an example of how to use `noshowbase`.  
  
##  <a name="noshowpoint"></a>  noshowpoint  
 Displays only the whole-number part of floating-point numbers whose fractional part is zero.  
  
```  
ios _ base& noshowpoint(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 `noshowpoint` is on by default; use [showpoint](../VS_visualcpp/-ios--functions.md#showpoint) and [precision](../VS_visualcpp/ios_base-Class.md#ios_base__precision) to display zeros after the decimal point.  
  
 The manipulator effectively calls `_Str.`[unsetf](../VS_visualcpp/ios_base-Class.md#ios_base__unsetf)( `ios_base::showpoint`), and then returns `_Str`.  
  
### Example  
  
```  
// ios_noshowpoint.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   double f1= 5.000;  
   cout << f1 << endl;   // noshowpoint is default  
   cout.precision( 4 );  
   cout << showpoint << f1 << endl;  
   cout << noshowpoint << f1 << endl;  
}  
```  
  
  **5**  
**5.000**  
**5**    
##  <a name="noshowpos"></a>  noshowpos  
 Causes positive numbers to not be explicitly signed.  
  
```  
ios _ base& noshowpos(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 `noshowpos` is on by default.  
  
 The manipulator effectively calls `_Str.`[unsetf](../VS_visualcpp/ios_base-Class.md#ios_base__unsetf)( `ios_base::showps`), then returns `_Str`.  
  
### Example  
  See [showpos](../VS_visualcpp/-ios--functions.md#showpos) for an example of using `noshowpos`.  
  
##  <a name="noskipws"></a>  noskipws  
 Cause spaces to be read by the input stream.  
  
```  
ios _ base& noskipws(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 By default, [skipws](../VS_visualcpp/-ios--functions.md#skipws) is in effect. When a space is read in the input stream, it signals the end of the buffer.  
  
 The manipulator effectively calls `_Str.`[unsetf](../VS_visualcpp/ios_base-Class.md#ios_base__unsetf)( `ios_base::skipws`), and then returns `_Str`.  
  
### Example  
  
```  
// ios_noskipws.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <string>  
  
int main() {  
   using namespace std;     
   string s1, s2, s3;  
   cout << "Enter three strings: ";  
   cin >> noskipws >> s1 >> s2 >> s3;  
   cout << "." << s1  << "." << endl;  
   cout << "." << s2 << "." << endl;  
   cout << "." << s3 << "." << endl;     
}  
```  
  
##  <a name="nounitbuf"></a>  nounitbuf  
 Causes output to be buffered and processed on when the buffer is full.  
  
```  
ios _ base& nounitbuf(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 [unitbuf](../VS_visualcpp/-ios--functions.md#unitbuf) causes the buffer to be processed when it is not empty.  
  
 The manipulator effectively calls `_Str.`[unsetf](../VS_visualcpp/ios_base-Class.md#ios_base__unsetf)( `ios_base::unitbuf`), and then returns `_Str`.  
  
##  <a name="nouppercase"></a>  nouppercase  
 Specifies that hexadecimal digits and the exponent in scientific notation appear in lowercase.  
  
```  
ios _ base& nouppercase(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 The manipulator effectively calls `_Str.`[unsetf](../VS_visualcpp/ios_base-Class.md#ios_base__unsetf)( `ios_base::uppercase`), and then returns `_Str`.  
  
### Example  
  See [uppercase](../VS_visualcpp/-ios--functions.md#uppercase) for an example of using `nouppercase`.  
  
##  <a name="oct"></a>  oct  
 Specifies that integer variables appear in base 8 notation.  
  
```  
ios _ base& oct(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 By default, integer variables are displayed in base 10 notation. [dec](../VS_visualcpp/-ios--functions.md#dec) and [hex](../VS_visualcpp/-ios--functions.md#hex) also change the way integer variables appear.  
  
 The manipulator effectively calls `_Str.`[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( `ios_base::oct`, `ios_base::basefield`), and then returns `_Str`.  
  
### Example  
  See [dec](../VS_visualcpp/-ios--functions.md#dec) for an example of how to use **oct**.  
  
##  <a name="right"></a>  right  
 Causes text that is not as wide as the output width to appear in the stream flush with the right margin.  
  
```  
ios _ base& right(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 [left](../VS_visualcpp/-ios--functions.md#left) also modifies the justification of text.  
  
 The manipulator effectively calls `_Str.`[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( `ios_base::right`, `ios_base::adjustfield`), and then returns `_Str`.  
  
### Example  
  
```  
// ios_right.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   double f1= 5.00;  
   cout << f1 << endl;  
   cout.width( 20 );  
   cout << f1 << endl;  
   cout.width( 20 );  
   cout << left << f1 << endl;  
   cout.width( 20 );  
   cout << f1 << endl;  
   cout.width( 20 );  
   cout << right << f1 << endl;  
   cout.width( 20 );  
   cout << f1 << endl;  
}  
```  
  
  **5**  
 **5**  
**5**   
**5**   
 **5**  
 **5**    
##  <a name="scientific"></a>  scientific  
 Causes floating-point numbers to be displayed using scientific notation.  
  
```  
ios _ base& scientific(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 By default, [fixed](../VS_visualcpp/-ios--functions.md#fixed) notation is in effect for floating-point numbers.  
  
 The manipulator effectively calls `_Str.`[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( `ios_base::scientific`, `ios_base::floatfield`), and then returns `_Str`.  
  
### Example  
  
```  
// ios_scientific.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   float i = 100.23F;  
  
   cout << i << endl;  
   cout << scientific << i << endl;  
}  
```  
  
  **100.23**  
**1.002300e+002**    
##  <a name="showbase"></a>  showbase  
 Indicates the notational base in which a number is displayed.  
  
```  
ios _ base& showbase(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 The notational base of a number can be changed with [dec](../VS_visualcpp/-ios--functions.md#dec), [oct](../VS_visualcpp/-ios--functions.md#oct), or [hex](../VS_visualcpp/-ios--functions.md#hex).  
  
 The manipulator effectively calls `_Str.`[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( `ios_base::showbase`), and then returns `_Str`.  
  
### Example  
  
```  
// ios_showbase.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   int j = 100;  
  
   cout << showbase << j << endl;   // dec is default  
   cout << hex << j << showbase << endl;  
   cout << oct << j << showbase << endl;  
  
   cout << dec << j << noshowbase << endl;  
   cout << hex << j << noshowbase << endl;  
   cout << oct << j << noshowbase << endl;  
}  
```  
  
  **100**  
**0x64**  
**0144**  
**100**  
**64**  
**144**    
##  <a name="showpoint"></a>  showpoint  
 Displays the whole-number part of a floating-point number and digits to the right of the decimal point even when the fractional part is zero.  
  
```  
ios _ base& showpoint(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 By default, [noshowpoint](../VS_visualcpp/-ios--functions.md#noshowpoint) is in effect.  
  
 The manipulator effectively calls `_Str.`[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( `ios_base::showpoint`), and then returns `_Str`.  
  
### Example  
  See [noshowpoint](../VS_visualcpp/-ios--functions.md#noshowpoint) for an example of using `showpoint`.  
  
##  <a name="showpos"></a>  showpos  
 Causes positive numbers to be explicitly signed.  
  
```  
ios _ base& showpos(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 [noshowpos](../VS_visualcpp/-ios--functions.md#noshowpos) is the default.  
  
 The manipulator effectively calls `_Str.`[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( `ios_base::showpos`), and then returns `_Str`.  
  
### Example  
  
```  
// ios_showpos.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   int i = 1;  
  
   cout << noshowpos << i << endl;   // noshowpos is default  
   cout << showpos << i << endl;  
}  
```  
  
  **1**  
**+1**    
##  <a name="skipws"></a>  skipws  
 Cause spaces to not be read by the input stream.  
  
```  
ios _ base& skipws(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which _                        *Str* is derived.  
  
### Remarks  
 By default, `skipws` is in effect. [noskipws](../VS_visualcpp/-ios--functions.md#noskipws) will cause spaces to be read from the input stream.  
  
 The manipulator effectively calls `_Str.`[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( `ios_base::skipws`), and then returns `_Str`.  
  
### Example  
  
```  
#include <iostream>  
#include <string>  
  
int main( )   
{  
   using namespace std;  
   char s1, s2, s3;  
   cout << "Enter three characters: ";  
   cin >> skipws >> s1 >> s2 >> s3;  
   cout << "." << s1  << "." << endl;  
   cout << "." << s2 << "." << endl;  
   cout << "." << s3 << "." << endl;  
}  
```  
  
   **`1 2 3` `1 2 3`.1.**  
**.2.**  
**.3.**    
##  <a name="unitbuf"></a>  unitbuf  
 Causes output to be processed when the buffer is not empty.  
  
```  
ios _ base& unitbuf(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which `_Str` is derived.  
  
### Remarks  
 Note that `endl` also flushes the buffer.  
  
 [nounitbuf](../VS_visualcpp/-ios--functions.md#nounitbuf) is in effect by default.  
  
 The manipulator effectively calls `_Str.`[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( [ios_base::unitbuf](../VS_visualcpp/ios_base-Class.md#ios_base__fmtflags)), and then returns `_Str`.  
  
##  <a name="uppercase"></a>  uppercase  
 Specifies that hexadecimal digits and the exponent in scientific notation appear in uppercase.  
  
```  
ios _ base& uppercase(    ios _ base&  _Str );  
  
```  
  
### Parameters  
 `_Str`  
 A reference to an object of type [ios_base](../VS_visualcpp/ios_base-Class.md), or to a type that inherits from `ios_base`.  
  
### Return Value  
 A reference to the object from which `_Str` is derived.  
  
### Remarks  
 By default, [nouppercase](../VS_visualcpp/-ios--functions.md#nouppercase) is in effect.  
  
 The manipulator effectively calls `_Str.`[setf](../VS_visualcpp/ios_base-Class.md#ios_base__setf)( [ios_base::uppercase](../VS_visualcpp/ios_base-Class.md#ios_base__fmtflags)), and then returns `_Str`.  
  
### Example  
  
```  
// ios_uppercase.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( void )   
{  
   using namespace std;  
  
   double i = 1.23e100;  
   cout << i << endl;  
   cout << uppercase << i << endl;  
  
   int j = 10;  
   cout << hex << nouppercase << j << endl;  
   cout << hex << uppercase << j << endl;  
}  
```  
  
  **1.23e+100**  
**1.23E+100**  
**a**  
**A**    
## See Also  
 [<ios\>](../VS_visualcpp/-ios-.md)