---
title: "basic_ios Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.basic_ios"
  - "ios/std::basic_ios"
  - "basic_ios"
  - "std::basic_ios"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_ios class"
ms.assetid: 4fdcd8e1-62d2-4611-8a70-1e4f58434007
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# basic_ios Class
The template class describes the storage and member functions common to both input streams (of template class [basic_istream](../standard-library/basic-istream-class.md)) and output streams (of template class [basic_ostream](../standard-library/basic-ostream-class.md)) that depend on the template parameters. (The class [ios_base](../standard-library/ios-base-class.md) describes what is common and not dependent on template parameters.) An object of class **basic_ios\<class Elem, class Traits>** helps control a stream with elements of type **Elem**, whose character traits are determined by the class **Traits**.  
  
## Syntax  
  
```  
 
template <class Elem, class Traits>  
class basic_ios : public ios_base  
```  
  
#### Parameters  
 `Elem`  
 A type.  
  
 `Traits`  
 A variable of type `char_traits`.  
  
## Remarks  
 An object of class **basic_ios\<class Elem, class Traits>** stores:  
  
-   A tie pointer to an object of type [basic_istream](../standard-library/basic-istream-class.md)**\<Elem, Traits>**.  
  
-   A stream buffer pointer to an object of type [basic_streambuf](../standard-library/basic-streambuf-class.md)**\<Elem, Traits >**.  
  
- [Formatting information](../standard-library/ios-base-class.md).  
  
- [Stream state information](../standard-library/ios-base-class.md) in a base object of type [ios_base](../standard-library/ios-base-class.md).  
  
-   A fill character in an object of type `char_type`.  
  
### Constructors  
  
|||  
|-|-|  
|[basic_ios](#basic_ios__basic_ios)|Constructs the `basic_ios` class.|  
  
### Typedefs  
  
|||  
|-|-|  
|[char_type](#basic_ios__char_type)|A synonym for the template parameter `Elem`.|  
|[int_type](#basic_ios__int_type)|A synonym for `Traits::int_type`.|  
|[off_type](#basic_ios__off_type)|A synonym for `Traits::off_type`.|  
|[pos_type](#basic_ios__pos_type)|A synonym for `Traits::pos_type`.|  
|[traits_type](#basic_ios__traits_type)|A synonym for the template parameter `Traits`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[bad](#basic_ios__bad)|Indicates a loss of integrity of the stream buffer.|  
|[clear](#basic_ios__clear)|Clears all error flags.|  
|[copyfmt](#basic_ios__copyfmt)|Copies flags from one stream to another.|  
|[eof](#basic_ios__eof)|Indicates if the end of a stream has been reached.|  
|[exceptions](#basic_ios__exceptions)|Indicates which exceptions will be thrown by the stream.|  
|[fail](#basic_ios__fail)|Indicates failure to extract a valid field from a stream.|  
|[fill](#basic_ios__fill)|Specifies or returns the character that will be used when the text is not as wide as the stream.|  
|[good](#basic_ios__good)|Indicates the stream is in good condition.|  
|[imbue](#basic_ios__imbue)|Changes the locale.|  
|[init](#basic_ios__init)|Called by `basic_ios` constructors.|  
|[move](#basic_ios__move)|Moves all values, except the pointer to the stream buffer, from the parameter to the current object.|  
|[narrow](#basic_ios__narrow)|Finds the equivalent char to a given `char_type`.|  
|[rdbuf](#basic_ios__rdbuf)|Routes stream to specified buffer.|  
|[rdstate](#basic_ios__rdstate)|Reads the state of bits for flags.|  
|[set_rdbuf](#basic_ios__set_rdbuf)|Assigns a stream buffer to be the read buffer for this stream object.|  
|[setstate](#basic_ios__setstate)|Sets additional flags.|  
|[swap](#basic_ios__swap)|Exchanges the values in this `basic_ios` object for those of another `basic_ios` object. The pointers to the stream buffers are not swapped.|  
|[tie](#basic_ios__tie)|Ensures that one stream is processed before another stream.|  
|[widen](#basic_ios__widen)|Finds the equivalent `char_type` to a given char.|  
  
### Operators  
  
|||  
|-|-|  
|[explicit operator bool](#basic_ios__operator_bool)|Allows use of a `basic_ios` object as a `bool`. Automatic type conversion is disabled to prevent common, unintended side effects.|  
|[operator void *](#basic_ios__operator_void_star)|Indicates if the stream is still good.|  
|[operator!](#basic_ios__operator_not)|Indicates if the stream is not bad.|  
  
## Requirements  
 **Header:** \<ios>  
  
 **Namespace:** std  
  
##  <a name="basic_ios__bad"></a>  basic_ios::bad  
 Indicates a loss of integrity of the stream buffer  
  
```  
bool bad() const;
```  
  
### Return Value  
 `true` if `rdstate & badbit` is nonzero; otherwise `false`.  
  
 For more information on `badbit`, see [ios_base::iostate](../standard-library/ios-base-class.md#ios_base__iostate).  
  
### Example  
  
```cpp  
  
// basic_ios_bad.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( void )  
{  
  using namespace std;  
  bool b = cout.bad( );  
  cout << boolalpha;  
  cout << b << endl;  
    
  b = cout.good( );  
  cout << b << endl;  
}  
  
```  
  
##  <a name="basic_ios__basic_ios"></a>  basic_ios::basic_ios  
 Constructs the basic_ios class.  
  
```   
explicit basic_ios(basic_streambuf<Elem,  Traits>* sb);
basic_ios();
```  
  
### Parameters  
 `sb`  
 Standard buffer to store input or output elements.  
  
### Remarks  
 The first constructor initializes its member objects by calling [init](#basic_ios__init)(_ *Sb*). The second (protected) constructor leaves its member objects uninitialized. A later call to **init** must initialize the object before it can be safely destroyed.  
  
##  <a name="basic_ios__char_type"></a>  basic_ios::char_type  
 A synonym for the template parameter **Elem**.  
  
```   
typedef Elem char_type;  
```  
  
##  <a name="basic_ios__clear"></a>  basic_ios::clear  
 Clears all error flags.  
  
```   
void clear(iostate state = goodbit, bool reraise = false); 
void clear(io_state state);
```  
  
### Parameters  
 `state` (optional)  
 The flags you want to set after clearing all flags. Defaults to `goodbit`.  
  
 `reraise` (optional)  
 Specifies whether the exception should be re-raised. Defaults to `false` (will not re-raise the exception).  
  
### Remarks  
 The flags are **goodbit**, **failbit**, **eofbit**, and **badbit**. Test for these flags with [good](#basic_ios__good), [bad](#basic_ios__bad), [eof](#basic_ios__eof), and [fail](#basic_ios__fail)  
  
 The member function replaces the stored stream state information with:  
  
 `state` &#124; `(`[rdbuf](#basic_ios__rdbuf) != 0 **goodbit** : **badbit**)  
  
 If `state`**&**[exceptions](#basic_ios__exceptions) is nonzero, it then throws an object of class [failure](../standard-library/ios-base-class.md#ios_base__failure).  
  
### Example  
  See [rdstate](#basic_ios__rdstate) and [getline](../standard-library/string-functions.md#getline) for examples using **clear**.  
  
##  <a name="basic_ios__copyfmt"></a>  basic_ios::copyfmt  
 Copies flags from one stream to another.  
  
```   
basic_ios<Elem, Traits>& copyfmt(
const basic_ios<Elem, Traits>& right);
```  
  
### Parameters  
 ` right`  
 The stream whose flags you want to copy.  
  
### Return Value  
 The **this** object for the stream to which you are copying the flags.  
  
### Remarks  
 The member function reports the callback eventÂ erase_event. It then copies from ` right` into **\*this** the fill character, the tie pointer, and the formatting information. Before altering the exception mask, it reports the callback event copyfmt_event. If, after the copy is complete, **state &**[exceptions](#basic_ios__exceptions) is nonzero, the function effectively calls [clear](#basic_ios__clear) with the argument [rdstate](#basic_ios__rdstate). It returns **\*this**.  
  
### Example  
  
```cpp    
// basic_ios_copyfmt.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main( )  
{  
  using namespace std;  
  ofstream x( "test.txt" );  
  int i = 10;  
    
  x << showpos;  
  cout << i << endl;  
  cout.copyfmt( x );  
  cout << i << endl;  
}  
  
```  
  
##  <a name="basic_ios__eof"></a>  basic_ios::eof  
 Indicates if the end of a stream has been reached.  
  
```  
bool eof() const;
```  
  
### Return Value  
 `true` if the end of the stream has been reached, `false` otherwise.  
  
### Remarks  
 The member function returns `true` if [rdstate](#basic_ios__rdstate) `& eofbit` is nonzero. For more information on `eofbit`, see [ios_base::iostate](../standard-library/ios-base-class.md#ios_base__iostate).  
  
### Example  
  
```cpp    
// basic_ios_eof.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
using namespace std;  
  
int main( int argc, char* argv[] )  
{  
  fstream   fs;  
  int n = 1;  
  fs.open( "basic_ios_eof.txt" );   // an empty file  
  cout << boolalpha  
  cout << fs.eof() << endl;  
  fs >> n;   // Read the char in the file  
  cout << fs.eof() << endl;  
}  
  
```  
  
##  <a name="basic_ios__exceptions"></a>  basic_ios::exceptions  
 Indicates which exceptions will be thrown by the stream.  
  
```   
iostate exceptions() const; 
void exceptions(iostate Newexcept);
void exceptions(io_state Newexcept);
```  
  
### Parameters  
 *Newexcept*  
 The flags that you want to throw an exception.  
  
### Return Value  
 The flags that are currently specified to thrown an exception for the stream.  
  
### Remarks  
 The first member function returns the stored exception mask. The second member function stores *_Except* in the exception mask and returns its previous stored value. Note that storing a new exception mask can throw an exception just like the call [clear](#basic_ios__clear)( [rdstate](#basic_ios__rdstate) ).  
  
### Example  
  
```cpp  
  
// basic_ios_exceptions.cpp  
// compile with: /EHsc /GR  
#include <iostream>  
  
int main( )  
{  
  using namespace std;  
    
  cout << cout.exceptions( ) << endl;  
  cout.exceptions( ios::eofbit );  
  cout << cout.exceptions( ) << endl;  
  try  
  {  
    cout.clear( ios::eofbit );   // Force eofbit on  
  }  
  catch ( exception &e )  
  {  
    cout.clear( );  
    cout << "Caught the exception." << endl;  
    cout << "Exception class: " << typeid(e).name()  << endl;  
    cout << "Exception description: " << e.what() << endl;  
  }  
}  
  
```  
  
```Output  
  
0  
1  
Caught the exception.  
Exception class: class std::ios_base::failure  
Exception description: ios_base::eofbit set   
```  
  
##  <a name="basic_ios__fail"></a>  basic_ios::fail  
 Indicates failure to extract a valid field from a stream.  
  
```  
bool fail() const;
```  
  
### Return Value  
 `true` if [rdstate](#basic_ios__rdstate) `& (badbit|failbit)` is nonzero, otherwise `false`.  
  
 For more information on `failbit`, see [ios_base::iostate](../standard-library/ios-base-class.md#ios_base__iostate).  
  
### Example  
  
```cpp  
  
// basic_ios_fail.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( void )  
{  
  using namespace std;  
  bool b = cout.fail( );  
  cout << boolalpha;  
  cout << b << endl;  
}  
  
```  
  
##  <a name="basic_ios__fill"></a>  basic_ios::fill  
 Specifies or returns the character that will be used when the text is not as wide as the stream.  
  
```   
char_type fill() const; 
char_type fill(char_type Char);
```  
  
### Parameters  
 `Char`  
 The character you want as the fill character.  
  
### Return Value  
 The current fill character.  
  
### Remarks  
 The first member function returns the stored fill character. The second member function stores `Char` in the fill character and returns its previous stored value.  
  
### Example  
  
```cpp  
  
// basic_ios_fill.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iomanip>  
  
int main( )  
{  
  using namespace std;  
    
  cout << setw( 5 ) << 'a' << endl;     
  cout.fill( 'x' );  
  cout << setw( 5 ) << 'a' << endl;      
  cout << cout.fill( ) << endl;  
}  
  
```  
  
```Output  
  
a  
xxxxa  
x   
```  
  
##  <a name="basic_ios__good"></a>  basic_ios::good  
 Indicates the stream is in good condition.  
  
```  
bool good() const;
```  
  
### Return Value  
 `true` if [rdstate](#basic_ios__rdstate) `== goodbit` (no state flags are set), otherwise, `false`.  
  
 For more information on `goodbit`, see [ios_base::iostate](../standard-library/ios-base-class.md#ios_base__iostate).  
  
### Example  
  See [basic_ios::bad](#basic_ios__bad) for an example of using `good`.  
  
##  <a name="basic_ios__imbue"></a>  basic_ios::imbue  
 Changes the locale.  
  
```   
locale imbue(const locale& Loc);
```  
  
### Parameters  
 `Loc`  
 A locale string.  
  
### Return Value  
 The previous locale.  
  
### Remarks  
 If [rdbuf](#basic_ios__rdbuf) is not a null pointer, the member function calls  
  
 `rdbuf`-> [pubimbue](../standard-library/basic-streambuf-class.md#basic_streambuf__pubimbue)(_ *Loc*)  
  
 In any case, it returns [ios_base::imbue](../standard-library/ios-base-class.md#ios_base__imbue)(_ *Loc*).  
  
### Example  
  
```cpp  
  
// basic_ios_imbue.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <locale>  
  
int main( )  
{  
  using namespace std;  
    
  cout.imbue( locale( "french_france" ) );  
  double x = 1234567.123456;  
  cout << x << endl;  
}  
  
```  
  
##  <a name="basic_ios__init"></a>  basic_ios::init  
 Called by basic_ios constructors.  
  
```  
 
void init(basic_streambuf<Elem,Traits>* _Sb, bool _Isstd = false);
```  
  
### Parameters  
 `_Sb`  
 Standard buffer to store input or output elements.  
  
 `_Isstd`  
 Specifies whether this is a standard stream.  
  
### Remarks  
 The member function stores values in all member objects, so that:  
  
- [rdbuf](#basic_ios__rdbuf) returns *_Sb.*  
  
- [tie](#basic_ios__tie) returns a null pointer.  
  
- [rdstate](#basic_ios__rdstate) returns [goodbit](../standard-library/ios-base-class.md#ios_base__iostate) if `_Sb` is nonzero; otherwise, it returns [badbit](../standard-library/ios-base-class.md#ios_base__iostate).  
  
- [exceptions](#basic_ios__exceptions) returns **goodbit**.  
  
- [flags](../standard-library/ios-base-class.md#ios_base__flags) returns [skipws](../standard-library/ios-base-class.md#ios_base__fmtflags) &#124; [dec](../standard-library/ios-base-class.md#ios_base__fmtflags).  
  
- [width](../standard-library/ios-base-class.md#ios_base__width) returns 0.  
  
- [precision](../standard-library/ios-base-class.md#ios_base__precision) returns 6.  
  
- [fill](#basic_ios__fill) returns the space character.  
  
- [getloc](../standard-library/ios-base-class.md#ios_base__getloc) returns `locale::classic`.  
  
- [iword](../standard-library/ios-base-class.md#ios_base__iword) returns zero, and [pword](../standard-library/ios-base-class.md#ios_base__pword) returns a null pointer for all argument values.  
  
##  <a name="basic_ios__int_type"></a>  basic_ios::int_type  
 A synonym for **traits_type::int_type**.  
  
```  
typedef typename traits_type::int_type int_type;  
```  
  
##  <a name="basic_ios__move"></a>  basic_ios::move  
 Moves all values, except the pointer to the stream buffer, from the parameter to the current object.  
  
```   
void move(basic_ios&& right);
```  
  
### Parameters  
 `right`  
 The `ios_base` object to move values from.  
  
### Remarks  
 The protected member function moves all the values stored in ` right` to `*this` except the stored `stream buffer pointer`, which is unchanged in ` right` and set to a null pointer in `*this`. The stored `tie pointer` is set to a null pointer in ` right`.  
  
##  <a name="basic_ios__narrow"></a>  basic_ios::narrow  
 Finds the equivalent char to a given `char_type`.  
  
```  
 
char narrow(char_type Char, char Default = '\0') const;
```  
  
### Parameters  
 `Char`  
 The `char` to convert.  
  
 `Default`  
 The `char` that you want returned if no equivalent is found.  
  
### Return Value  
 The equivalent `char` to a given `char_type`.  
  
### Remarks  
 The member function returns [use_facet](../standard-library/basic-filebuf-class.md#basic_filebuf__open)**<**Â **ctype**\< **E**> >( [getloc](../standard-library/ios-base-class.md#ios_base__getloc)( ) ). `narrow`( `Char`, `Default`).  
  
### Example  
  
```cpp  
  
// basic_ios_narrow.cpp  
// compile with: /EHsc  
#include <ios>  
#include <iostream>  
#include <wchar.h>  
  
int main( )  
{  
  using namespace std;  
  wchar_t *x = L"test";  
  char y[10];  
  cout << x[0] << endl;  
  wcout << x << endl;  
  y[0] = wcout.narrow( x[0] );  
  cout << y[0] << endl;  
}  
  
```  
  
##  <a name="basic_ios__off_type"></a>  basic_ios::off_type  
 A synonym for **traits_type::off_type**.  
  
```  
typedef typename traits_type::off_type off_type;  
```  
  
##  <a name="basic_ios__operator_void_star"></a>  basic_ios::operator void *  
 Indicates if the stream is still good.  
  
```  
 operator void *() const;
```  
  
### Return Value  
 The operator returns a null pointer only if [fail](#basic_ios__fail).  
  
### Example  
  
```cpp  
  
// basic_ios_opgood.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )  
{  
  using namespace std;  
  cout << (bool)(&cout != 0) << endl;   // Stream is still good  
}  
  
```  
  
```Output  
1  
```  
  
##  <a name="basic_ios__operator_not"></a>  basic_ios::operator!  
 Indicates if the stream is not bad.  
  
```   
bool operator!() const;
```  
  
### Return Value  
 Returns [fail](#basic_ios__fail).  
  
### Example  
  
```cpp  
  
// basic_ios_opbad.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )  
{  
  using namespace std;  
  cout << !cout << endl;   // Stream is not bad  
}  
  
```  
  
```Output  
0  
```  
  
##  <a name="basic_ios__operator_bool"></a>  basic_ios::operator bool  
 Allows use of a `basic_ios` object as a `bool`. Automatic type conversion is disabled to prevent common, unintended side effects.  
  
```  
explicit operator bool() const;
```  
  
### Remarks  
 The operator returns a value convertible to `false` only if `fail``()`. The return type is convertible only to `bool`, not to `void *` or other known scalar type.  
  
##  <a name="basic_ios__pos_type"></a>  basic_ios::pos_type  
 A synonym for **traits_type::pos_type**.  
  
```  
typedef typename traits_type::pos_type pos_type;  
```  
  
##  <a name="basic_ios__rdbuf"></a>  basic_ios::rdbuf  
 Routes stream to specified buffer.  
  
```   
basic_streambuf<Elem, Traits> *rdbuf() const; 
basic_streambuf<Elem, Traits> *rdbuf(
basic_streambuf<Elem, Traits>* _Sb);
```  
  
### Parameters  
 `_Sb`  
 A stream.  
  
### Remarks  
 The first member function returns the stored stream buffer pointer.  
  
 The second member function stores `_Sb` in the stored stream buffer pointer and returns the previously stored value.  
  
### Example  
  
```cpp  
  
// basic_ios_rdbuf.cpp  
// compile with: /EHsc  
#include <ios>  
#include <iostream>  
#include <fstream>  
  
int main( )  
{  
  using namespace std;  
  ofstream file( "rdbuf.txt" );  
  streambuf *x = cout.rdbuf( file.rdbuf( ) );  
  cout << "test" << endl;   // Goes to file  
  cout.rdbuf(x);  
  cout << "test2" << endl;  
}  
  
```  
  
```Output  
test2  
```  
  
##  <a name="basic_ios__rdstate"></a>  basic_ios::rdstate  
 Reads the state of bits for flags.  
  
```  
 
iostate rdstate() const;
```  
  
### Return Value  
 The stored stream state information.  
  
### Example  
  
```cpp  
  
// basic_ios_rdstate.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
using namespace std;  
  
void TestFlags( ios& x )  
{  
  cout << ( x.rdstate( ) & ios::badbit ) << endl;  
  cout << ( x.rdstate( ) & ios::failbit ) << endl;  
  cout << ( x.rdstate( ) & ios::eofbit ) << endl;  
  cout << endl;  
}  
  
int main( )  
{  
  fstream x( "c:\test.txt", ios::out );  
  x.clear( );  
  TestFlags( x );  
  x.clear( ios::badbit | ios::failbit | ios::eofbit );  
  TestFlags( x );  
}  
  
```  
  
```Output  
  
0  
0  
0  
  
4  
2  
1   
```  
  
##  <a name="basic_ios__setstate"></a>  basic_ios::setstate  
 Sets additional flags.  
  
```   
void setstate(iostate _State);
```  
  
### Parameters  
 `_State`  
 Additional flags to set.  
  
### Remarks  
 The member function effectively calls [clear](#basic_ios__clear)(_ *State* &#124; [rdstate](#basic_ios__rdstate)).  
  
### Example  
  
```cpp    
// basic_ios_setstate.cpp  
// compile with: /EHsc  
#include <ios>  
#include <iostream>  
using namespace std;  
  
int main( )  
{  
  bool b = cout.bad( );  
  cout << b << endl;   // Good  
  cout.clear( ios::badbit );  
  b = cout.bad( );  
  // cout.clear( );  
  cout << b << endl;   // Is bad, good  
  b = cout.fail( );  
  cout << b << endl;   // Not failed  
  cout.setstate( ios::failbit );  
  b = cout.fail( );  
  cout.clear( );  
  cout << b << endl;   // Is failed, good  
  return 0;  
}  
  
```  
  
```Output  
  
0  
1   
```  
  
##  <a name="basic_ios__set_rdbuf"></a>  basic_ios::set_rdbuf  
 Assigns a stream buffer to be the read buffer for this stream object.  
  
```   
void set_rdbuf(
basic_streambuf<Elem, Tr>* strbuf)  
```  
  
### Parameters  
 ` strbuf`  
 The stream buffer to become the read buffer.  
  
### Remarks  
 The protected member function stores ` strbuf` in the `stream buffer pointer`.It does not call `clear`.  
  
##  <a name="basic_ios__tie"></a>  basic_ios::tie  
 Ensures that one stream is processed before another stream.  
  
```  
 
basic_ostream<Elem, Traits> *tie() const; 
basic_ostream<Elem, Traits> *tie(
basic_ostream<Elem, Traits>* str);
```  
  
### Parameters  
 ` str`  
 A stream.  
  
### Return Value  
 The first member function returns the stored tie pointer. The second member function stores ` str` in the tie pointer and returns its previous stored value.  
  
### Remarks  
 `tie` causes two streams to be synchronized, such that, operations on one stream occur after operations on the other stream are complete.  
  
### Example  
  In this example, by tying cin to cout, it is guaranteed that the "Enter a number:" string will go to the console before the number itself is extracted from cin. This eliminates the possibility that the "Enter a number:" string is still sitting in the buffer when the number is read, so that we are certain that the user actually has some prompt to respond to. By default, cin and cout are tied.  
  
```  
  
#include <ios>  
#include <iostream>  
  
int main( )  
{  
  using namespace std;  
  int i;  
  cin.tie( &cout );  
  cout << "Enter a number:";  
  cin >> i;  
}  
  
```  
  
##  <a name="basic_ios__traits_type"></a>  basic_ios::traits_type  
 A synonym for the template parameter **Traits**.  
  
```   
typedef Traits traits_type;  
```  
  
##  <a name="basic_ios__widen"></a>  basic_ios::widen  
 Finds the equivalent `char_type` to a given `char`.  
  
```   
char_type widen(char Char) const;
```  
  
### Parameters  
 `Char`  
 The character to convert.  
  
### Return Value  
 Finds the equivalent `char_type` to a given `char`.  
  
### Remarks  
 The member function returns [use_facet](../standard-library/basic-filebuf-class.md#basic_filebuf__open)< **ctype**\< **E**> >( [getloc](../standard-library/ios-base-class.md#ios_base__getloc)). `widen`( `Char`).  
  
### Example  
  
```cpp    
// basic_ios_widen.cpp  
// compile with: /EHsc  
#include <ios>  
#include <iostream>  
#include <wchar.h>  
  
int main( )  
{  
  using namespace std;  
  char *z = "Hello";  
  wchar_t y[2] = {0,0};  
  cout << z[0] << endl;  
  y[0] = wcout.widen( z[0] );  
  wcout << &y[0] << endl;  
}  
  
```  
  
##  <a name="basic_ios__swap"></a>  basic_ios::swap  
 Exchanges the values in this `basic_ios` object for those of another `basic_ios` object. However, the pointers to the stream buffers are not swapped.  
  
```   
void swap(basic_ios&& right);
```  
  
### Parameters  
 `right`  
 The `basic_ios` object that is used to exchange values.  
  
### Remarks  
 The protected member function exchanges all the values stored in ` right` with `*this` except the stored `stream buffer pointer`.  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)

