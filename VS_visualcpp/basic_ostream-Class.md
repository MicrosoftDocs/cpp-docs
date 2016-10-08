---
title: "basic_ostream Class"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 5baadc65-b662-4fab-8c9f-94457c58cda1
caps.latest.revision: 20
manager: ghogen
translation.priority.mt: 
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
# basic_ostream Class
This template class describes an object that controls insertion of elements and encoded objects into a stream buffer with elements of type **Elem**, also known as [char_type](../VS_visualcpp/basic_ios-Class.md#basic_ios__char_type), whose character traits are determined by the class **Tr**, also known as [traits_type](../VS_visualcpp/basic_ios-Class.md#basic_ios__traits_type).  
  
## Syntax  
  
```  
template <class  _Elem , class  _Tr  = char _ traits<Elem> >    class basic _ ostream        : virtual public basic _ ios< _Elem ,  _Tr >  
  
```  
  
#### Parameters  
 `_Elem`  
 A `char_type`.  
  
 `_Tr`  
 The character `traits_type`.  
  
## Remarks  
 Most of the member functions that overload [operator<<](#basic_ostream__operator_lt__lt_) are formatted output functions. They follow the pattern:  
  
```  
iostate state = goodbit;  
const sentry ok( *this );  
if ( ok )  
   {try  
      {<convert and insert elements  
      accumulate flags in state> }  
   catch ( ... )  
      {try  
        {setstate( badbit ); }  
      catch ( ... )  
        {}  
      if ( ( exceptions( ) & badbit ) != 0 )  
        throw; }}  
width( 0 );    // Except for operator<<(Elem)  
setstate( state );  
return ( *this );  
```  
  
 Two other member functions are unformatted output functions. They follow the pattern:  
  
```  
iostate state = goodbit;  
const sentry ok( *this );  
if ( !ok )  
   state |= badbit;  
else  
   {try  
      {<obtain and insert elements  
      accumulate flags in state> }  
   catch ( ... )  
      {try  
         {setstate( badbit ); }  
      catch ( ... )  
         {}  
      if ( ( exceptions( ) & badbit ) != 0 )  
         throw; }}  
setstate( state );  
return ( *this );  
```  
  
 Both groups of functions call [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)**(badbit)** if they encounter a failure while inserting elements.  
  
 An object of class basic_istream< **Elem**, **Tr**> stores only a virtual public base object of class [basic_ios](../VS_visualcpp/basic_ios-Class.md)**<Elem**,  **Tr>**.  
  
## Example  
 See the example for [basic_ofstream Class](../VS_visualcpp/basic_ofstream-Class.md) to learn more about output streams.  
  
### Constructors  
  
|||  
|-|-|  
|[basic_ostream](#basic_ostream__basic_ostream)|Constructs a `basic_ostream` object.|  
  
### Member Functions  
  
|||  
|-|-|  
|[flush](#basic_ostream__flush)|Flushes the buffer.|  
|[put](#basic_ostream__put)|Puts a character in a stream.|  
|[seekp](#basic_ostream__seekp)|Resets position in output stream.|  
|[sentry](#basic_ostream__sentry)|The nested class describes an object whose declaration structures the formatted output functions and the unformatted output functions.|  
|[swap](#basic_ostream__operator_eq)|Exchanges the values of this `basic_ostream` object for those of the provided `basic_ostream` object.|  
|[tellp](#basic_ostream__tellp)|Reports position in output stream.|  
|[write](#basic_ostream__write)|Puts characters in a stream.|  
  
### Operators  
  
|||  
|-|-|  
|[operator=](#basic_ostream__operator_eq)|Assigns the value of the provided `basic_ostream` object parameter to this object.|  
|[operator<<](#basic_ostream__operator_lt__lt_)|Writes to the stream.|  
  
## Requirements  
 **Header:** <ostream\>  
  
 **Namespace:** std  
  
##  <a name="basic_ostream__basic_ostream"></a>  basic_ostream::basic_ostream  
 Constructs a `basic_ostream` object.  
  
```  
explicit basic_ostream(  
    basic_streambuf<_Elem, _Tr> * _Strbuf,  
    bool _Isstd = false  
);  
basic_ostream(  
    basic_ostream&& _Right  
);  
```  
  
### Parameters  
 `_Strbuf`  
 An object of type [basic_streambuf](../VS_visualcpp/basic_streambuf-Class.md).  
  
 `_Isstd`  
 `true` if this is a standard stream; otherwise, `false`.  
  
 `_Right`  
 An rvalue reference to an object of type `basic_ostream`.  
  
### Remarks  
 The first constructor initializes the base class by calling [init](../VS_visualcpp/basic_ios-Class.md#basic_ios__init)(`_Strbuf`). The second constructor initializes the base class by calling [basic_ios::move](../VS_visualcpp/basic_ios-Class.md#basic_ios__move)`(``_Right``)`.  
  
### Example  
  See the example for [basic_ofstream::basic_ofstream](../VS_visualcpp/basic_ofstream-Class.md#basic_ofstream__basic_ofstream) to learn more about output streams.  
  
##  <a name="basic_ostream__flush"></a>  basic_ostream::flush  
 Flushes the buffer.  
  
```  
basic_ostream<_Elem, _Tr>& flush( );  
```  
  
### Return Value  
 A reference to the basic_ostream object.  
  
### Remarks  
 If [rdbuf](../VS_visualcpp/basic_ios-Class.md#basic_ios__rdbuf) is not a null pointer, the function calls **rdbuf->**[pubsync](../VS_visualcpp/basic_streambuf-Class.md#basic_streambuf__pubsync). If that returns -1, the function calls [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)(**badbit**). It returns **\*this**.  
  
### Example  
  
```  
// basic_ostream_flush.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << "test";  
   cout.flush();  
}  
```  
  
  **test**    
##  <a name="basic_ostream__operator_lt__lt_"></a>  basic_ostream::operator&lt;&lt;  
 Writes to the stream.  
  
```  
basic_ostream<_Elem, _Tr>& operator<<(  
    basic_ostream<_Elem, _Tr>& (* _Pfn)(basic_ostream<_Elem, _Tr>&)  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    ios_base& (* _Pfn)(ios_base&)  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    basic_ios<_Elem, _Tr>& (* _Pfn)(basic_ios<_Elem, _Tr>&)  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    basic_streambuf<_Elem, _Tr> * _Strbuf  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    bool _Val  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    short _Val  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    unsigned short _Val  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    int __w64 _Val  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    unsigned int __w64 _Val  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    long _Val  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    unsigned long __w64 _Val  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
     long long _Val  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
     unsigned long long _Val  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    float _Val  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    double _Val  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    long double _Val  
);  
basic_ostream<_Elem, _Tr>& operator<<(  
    const void * _Val  
);  
```  
  
### Parameters  
 `_Pfn`  
 A function pointer.  
  
 `_Strbuf`  
 A pointer to a **stream_buf** object.  
  
 `_Val`  
 An element to write to the stream.  
  
### Return Value  
 A reference to the basic_ostream object.  
  
### Remarks  
 The `<ostream>` header also defines several global insertion operators. For more information, see [operator&lt;&lt;](../VS_visualcpp/-ostream--operators.md#operator_lt__lt_).  
  
 The first member function ensures that an expression of the form **ostr << endl** calls [endl](../VS_visualcpp/-ostream--functions.md#endl)**(ostr)**, and then returns **\*this**. The second and third functions ensure that other manipulators, such as [hex](../VS_visualcpp/-ios--functions.md#hex), behave similarly. The remaining functions are all formatted output functions.  
  
 The function  
  
```  
basic_ostream<_Elem, _Tr>& operator<<(basic_streambuf<Elem, Tr> *_Strbuf);  
```  
  
 extracts elements from `_Strbuf`, if `_Strbuf` is not a null pointer, and inserts them. Extraction stops on end of file, or if an extraction throws an exception (which is rethrown). It also stops, without extracting the element in question, if an insertion fails. If the function inserts no elements, or if an extraction throws an exception, the function calls [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)(**failbit**). In any case, the function returns **\*this**.  
  
 The function  
  
```  
basic_ostream<_Elem, _Tr>& operator<<(bool _Val);  
```  
  
 converts _`Val` to a Boolean field and inserts it by calling [use_facet](../VS_visualcpp/basic_filebuf-Class.md#basic_filebuf__open)**<num_put<Elem, OutIt>**`(`[getloc](../VS_visualcpp/ios_base-Class.md#ios_base__getloc)). [put](#basic_ostream__put)(**OutIt**([rdbuf](../VS_visualcpp/basic_ios-Class.md#basic_ios__rdbuf)), **\*this**, `getloc`, **val**). Here, **OutIt** is defined as [ostreambuf_iterator](../VS_visualcpp/ostreambuf_iterator-Class.md)**<Elem, Tr>**. The function returns **\*this**.  
  
 The functions  
  
```  
basic_ostream<_Elem, _Tr>& operator<<(short _Val);  
basic_ostream<_Elem, _Tr>& operator<<(unsigned short _Val);  
basic_ostream<_Elem, _Tr>& operator<<(int _Val);  
basic_ostream<_Elem, _Tr>& operator<<(unsigned int __w64 _Val);  
basic_ostream<_Elem, _Tr>& operator<<(long _Val);  
basic_ostream<_Elem, _Tr>& operator<<(unsigned long _Val);  
basic_ostream<_Elem, _Tr>& operator<<(long long _Val);  
basic_ostream<_Elem, _Tr>& operator<<(unsigned long long _Val);  
basic_ostream<_Elem, _Tr>& operator<<(const void *_Val);  
```  
  
 each convert `_Val` to a numeric field and insert it by calling **use_facet<num_put<Elem, OutIt>**(`getloc`). **put**(**OutIt**(`rdbuf`), **\*this**, `getloc`, **val**). Here, **OutIt** is defined as **ostreambuf_iterator<Elem, Tr>**. The function returns **\*this**.  
  
 The functions  
  
```  
basic_ostream<_Elem, _Tr>& operator<<(float _Val);  
basic_ostream<_Elem, _Tr>& operator<<(double _Val);  
basic_ostream<_Elem, _Tr>& operator<<(long double _Val);  
```  
  
 each convert _`Val` to a numeric field and insert it by calling **use_facet<num_put<Elem, OutIt>**(`getloc`)**. put**(**OutIt**(`rdbuf`), **\*this**, `getloc`, **val**). Here, **OutIt** is defined as **ostreambuf_iterator<Elem, Tr>**. The function returns **\*this**.  
  
### Example  
  
```  
// basic_ostream_op_write.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <string.h>  
  
using namespace std;  
  
ios_base& hex2( ios_base& ib )  
{  
   ib.unsetf( ios_base::dec );  
   ib.setf( ios_base::hex );  
   return ib;  
}  
  
basic_ostream<char, char_traits<char> >& somefunc(basic_ostream<char, char_traits<char> > &i)  
{  
   if ( i == cout )  
   {  
      i << "i is cout" << endl;  
   }  
   return i;  
}  
  
class CTxtStreambuf : public basic_streambuf< char, char_traits< char > >  
{  
public:  
   CTxtStreambuf(char *_pszText)  
   {  
      pszText = _pszText;  
      setg(pszText, pszText, pszText+strlen(pszText));  
   };  
          char *pszText;  
};  
  
int main( )  
{  
   cout << somefunc;  
   cout << 21 << endl;  
  
   hex2(cout);  
   cout << 21 << endl;  
  
   CTxtStreambuf f("text in streambuf");  
   cout << &f << endl;  
}  
```  
  
##  <a name="basic_ostream__operator_eq"></a>  basic_ostream::operator=  
 Assigns values for the provided `basic_ostream` object parameter to this object.  
  
```  
basic_ostream& operator=(  
    basic_ostream&& _Right  
);  
```  
  
### Parameters  
 `_Right`  
 An `rvalue` reference to a `basic_ostream` object.  
  
### Remarks  
 The member operator calls swap `(``_Right``)`.  
  
##  <a name="basic_ostream__put"></a>  basic_ostream::put  
 Puts a character in a stream.  
  
```  
basic_ostream<_Elem, _Tr>& put(  
    char_type _Ch  
);  
```  
  
### Parameters  
 `_Ch`  
 A character.  
  
### Return Value  
 A reference to the basic_ostream object.  
  
### Remarks  
 The unformatted output function inserts the element `_Ch`. It returns **\*this**.  
  
### Example  
  
```  
// basic_ostream_put.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout.put( 'v' );  
   cout << endl;  
   wcout.put( L'l' );  
}  
```  
  
  **v**  
**l**    
##  <a name="basic_ostream__seekp"></a>  basic_ostream::seekp  
 Reset position in output stream.  
  
```  
basic_ostream<_Elem, _Tr>& seekp(  
    pos_type _Pos  
);  
basic_ostream<_Elem, _Tr>& seekp(  
    off_type _Off,  
    ios_base::seekdir _Way  
);  
```  
  
### Parameters  
 `_Pos`  
 The position in the stream.  
  
 `_Off`  
 The offset relative to `_Way`.  
  
 `_Way`  
 One of the [ios_base::seekdir](../VS_visualcpp/ios_base-Class.md#ios_base__seekdir) enumerations.  
  
### Return Value  
 A reference to the basic_ostream object.  
  
### Remarks  
 If [fail](../VS_visualcpp/basic_ios-Class.md#basic_ios__fail) is **false**, the first member function calls **newpos =** [rdbuf](../VS_visualcpp/basic_ios-Class.md#basic_ios__rdbuf)**->** [pubseekpos](../VS_visualcpp/basic_streambuf-Class.md#basic_streambuf__pubseekpos)(_*Pos*), for some `pos_type` temporary object **newpos**. If **fail** is false, the second function calls **newpos = rdbuf->** [pubseekoff](../VS_visualcpp/basic_streambuf-Class.md#basic_streambuf__pubseekoff)(*_Off, _Way*). In either case, if (`off_type`)**newpos ==** (`off_type`)(-1) (the positioning operation fails), then the function calls **istr.**[setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)(**failbit**). Both functions return **\*this**.  
  
### Example  
  
```  
// basic_ostream_seekp.cpp  
// compile with: /EHsc  
#include <fstream>  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
    ofstream x("basic_ostream_seekp.txt");  
    streamoff i = x.tellp();  
    cout << i << endl;  
    x << "testing";  
    i = x.tellp();  
    cout << i << endl;  
    x.seekp(2);   // Put char in third char position in file  
    x << " ";  
  
    x.seekp(2, ios::end);   // Put char two after end of file  
    x << "z";  
}  
```  
  
  **0**  
**7**    
##  <a name="basic_ostream__sentry"></a>  basic_ostream::sentry  
 The nested class describes an object whose declaration structures the formatted output functions and the unformatted output functions.  
  
```  
class sentry {  
public:  
    explicit sentry( basic_ostream<_Elem, _Tr>& _Ostr );  
    operator bool( ) const;  
    ~sentry( );  
};  
```  
  
### Remarks  
 The nested class describes an object whose declaration structures the formatted output functions and the unformatted output functions. If **ostr.**[good](../VS_visualcpp/basic_ios-Class.md#basic_ios__good) is **true** and **ostr.**[tie](../VS_visualcpp/basic_ios-Class.md#basic_ios__tie) is not a null pointer, the constructor calls **ostr.tie->**[flush](#basic_ostream__flush). The constructor then stores the value returned by **ostr.good** in **status**. A later call to **operator bool** delivers this stored value.  
  
 If `uncaught_exception` returns **false** and [flags](../VS_visualcpp/ios_base-Class.md#ios_base__flags) **&** [unitbuf](../VS_visualcpp/-ios--functions.md#unitbuf) is nonzero, the destructor calls [flush](#basic_ostream__flush).  
  
##  <a name="basic_ostream__swap"></a>  basic_ostream::swap  
 Exchanges the values of this `basic_ostream` object for the values of the provided `basic_ostream`.  
  
```  
void swap(  
    basic_ostream& _Right  
);  
```  
  
### Parameters  
 `_Right`  
 A reference to a `basic_ostream` object.  
  
### Remarks  
 The member function calls [basic_ios::swap](../VS_visualcpp/basic_ios-Class.md#basic_ios__swap)`(``_Right``)` to exchange the contents of this object for the contents of `_Right`.  
  
##  <a name="basic_ostream__tellp"></a>  basic_ostream::tellp  
 Report position in output stream.  
  
```  
pos_type tellp( );  
```  
  
### Return Value  
 Position in output stream.  
  
### Remarks  
 If [fail](../VS_visualcpp/basic_ios-Class.md#basic_ios__fail) is **false**, the member function returns [rdbuf](../VS_visualcpp/basic_ios-Class.md#basic_ios__rdbuf)**->** [pubseekoff](../VS_visualcpp/basic_streambuf-Class.md#basic_streambuf__pubseekoff)(0, `cur`, **in**). Otherwise, it returns `pos_type`(-1).  
  
### Example  
  See [seekp](#basic_ostream__seekp) for an example using `tellp`.  
  
##  <a name="basic_ostream__write"></a>  basic_ostream::write  
 Put characters in a stream.  
  
```  
basic_ostream<_Elem, _Tr>& write(  
    const char_type * _Str,  
    streamsize _Count  
);  
```  
  
### Parameters  
 `_Count`  
 Count of characters to put into the stream.  
  
 `_Str`  
 Characters to put into the stream.  
  
### Return Value  
 A reference to the basic_ostream object.  
  
### Remarks  
 The [unformatted output function](../VS_visualcpp/basic_ostream-Class.md) inserts the sequence of `_Count` elements beginning at `_Str`.  
  
### Example  
  See [streamsize](../VS_visualcpp/-ios--typedefs.md#streamsize) for an example using `write`.  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [iostreams Conventions](../VS_visualcpp/iostreams-Conventions.md)