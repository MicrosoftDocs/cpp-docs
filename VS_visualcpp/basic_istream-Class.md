---
title: "basic_istream Class"
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
ms.assetid: c7c27111-de6d-42b4-95a3-a7e65259bf17
caps.latest.revision: 18
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
# basic_istream Class
Describes an object that controls extraction of elements and encoded objects from a stream buffer with elements of type `Elem`, also known as [char_type](../VS_visualcpp/basic_ios-Class.md#basic_ios__char_type), whose character traits are determined by the class             *Tr*, also known as [traits_type](../VS_visualcpp/basic_ios-Class.md#basic_ios__traits_type).  
  
## Syntax  
  
```  
template <class  Elem , class  Tr  = char _ traits< Elem > >    class basic _ istream       : virtual public basic _ ios<Elem, Tr>  
  
```  
  
## Remarks  
 Most of the member functions that overload [operator>>](#basic_istream__operator_gt__gt_) are formatted input functions. They follow the pattern:  
  
```  
iostate state = goodbit;  
const sentry ok(*this);  
if (ok)  
    {try  
        {<extract elements and convert  
        accumulate flags in state  
        store a successful conversion> }  
    catch (...)  
        {try  
            {setstate(badbit); }  
        catch (...)  
            {}  
        if ((exceptions( ) & badbit) != 0)  
            throw; }}  
setstate(state);  
return (*this);  
```  
  
 Many other member functions are unformatted input functions. They follow the pattern:  
  
```  
iostate state = goodbit;  
count = 0;    // the value returned by gcount  
const sentry ok(*this, true);  
if (ok)  
    {try  
        {<extract elements and deliver  
        count extracted elements in count  
        accumulate flags in state> }  
    catch (...)  
        {try  
            {setstate(badbit); }  
        catch (...)  
            {}  
        if ((exceptions( ) & badbit) != 0)  
            throw; }}  
setstate(state);  
```  
  
 Both groups of functions call [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)( **eofbit**) if they encounter end of file while extracting elements.  
  
 An object of class `basic_istream`< `Elem`,                 *Tr*> stores:  
  
-   A virtual public base object of class [basic_ios](../VS_visualcpp/basic_ios-Class.md)< `Elem`,                         *Tr*> `.`  
  
-   An extraction count for the last unformatted input operation (called **count** in the previous code).  
  
## Example  
 See the example for [basic_ifstream Class](../VS_visualcpp/basic_ifstream-Class.md) to learn more about input streams.  
  
### Constructors  
  
|||  
|-|-|  
|[basic_istream](#basic_istream__basic_istream)|Constructs an object of type `basic_istream`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[gcount](#basic_istream__gcount)|Returns the number of characters read during the last unformatted input.|  
|[get](#basic_istream__get)|Reads one or more characters from the input stream.|  
|[getline](#basic_istream__getline)|Reads a line from the input stream.|  
|[ignore](#basic_istream__ignore)|Causes a number of elements to be skipped from the current read position.|  
|[peek](#basic_istream__peek)|Returns the next character to be read.|  
|[putback](#basic_istream__putback)|Puts a specified character into the stream.|  
|[read](#basic_istream__read)|Reads a specified number of characters from the stream and stores them in an array.|  
|[readsome](#basic_istream__readsome)|Read from buffer only.|  
|[seekg](#basic_istream__seekg)|Moves the read position in a stream.|  
|[sentry](#basic_istream__sentry)|The nested class describes an object whose declaration structures the formatted input functions and the unformatted input functions.|  
|[swap](#basic_istream__swap)|Exchanges this `basic_istream` object for the provided `basic_istream` object parameter.|  
|[sync](#basic_istream__sync)|Synchronizes the input device associated with the stream with the stream's buffer.|  
|[tellg](#basic_istream__tellg)|Reports the current read position in the stream.|  
|[unget](#basic_istream__unget)|Puts the most recently read character back into the stream.|  
  
### Operators  
  
|||  
|-|-|  
|[operator>>](#basic_istream__operator_gt__gt_)|Calls a function on the input stream or reads formatted data from the input stream.|  
|[operator=](#basic_istream__operator_eq)|Assigns the `basic_istream` on the right side of the operator to this object. This is a move assignment involving an `rvalue` reference that does not leave a copy behind.|  
  
## Requirements  
 **Header:** <istream\>  
  
 **Namespace:** std  
  
##  <a name="basic_istream__basic_istream"></a>  basic_istream::basic_istream  
 Constructs an object of type `basic_istream`.  
  
```  
explicit basic_istream(  
    basic_streambuf<Elem, Tr> * _Strbuf,  
    bool _Isstd = false  
);  
basic_istream(basic_istream&& _Right);   
```  
  
### Parameters  
 `_Strbuf`  
 An object of type [basic_streambuf](../VS_visualcpp/basic_streambuf-Class.md).  
  
 `_Isstd`  
 `true` if this is a standard stream; otherwise, `false`.  
  
 `_Right`  
 A `basic_istream` object to copy.  
  
### Remarks  
 The first constructor initializes the base class by calling [init](../VS_visualcpp/basic_ios-Class.md#basic_ios__init)(_S `trbuf`). It also stores zero in the extraction count. For more information about this extraction count, see the Remarks section of the [basic_istream Class](../VS_visualcpp/basic_istream-Class.md) overview topic.  
  
 The second constructor initializes the base class by calling `move``(_Right)`. It also stores _R `ight.gcount()` in the extraction count and stores zero in the extraction count for _R `ight`.  
  
### Example  
  See the example for [basic_ifstream::basic_ifstream](../VS_visualcpp/basic_ifstream-Class.md#basic_ifstream__basic_ifstream) to learn more about input streams.  
  
##  <a name="basic_istream__gcount"></a>  basic_istream::gcount  
 Returns the number of characters read during the last unformatted input.  
  
```  
streamsize gcount( ) const;  
  
```  
  
### Return Value  
 The extraction count.  
  
### Remarks  
 Use [basic_istream::get](#basic_istream__get) to read unformatted characters.  
  
### Example  
  
```  
// basic_istream_gcount.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   cout << "Type the letter 'a': ";  
  
   ws( cin );  
   char c[10];  
  
   cin.get( &c[0],9 );  
   cout << c << endl;  
  
   cout << cin.gcount( ) << endl;  
}  
```  
  
   **`a` `a`Type the letter 'a':**  
**a**  
**1**    
##  <a name="basic_istream__get"></a>  basic_istream::get  
 Reads one or more characters from the input stream.  
  
```  
int_type get();  
basic_istream<Elem, Tr>& get(  
    Elem& _Ch  
);  
basic_istream<Elem, Tr>& get(  
    Elem * _Str,  
    streamsize _Count  
);  
basic_istream<Elem, Tr>& get(  
    Elem * _Str,  
    streamsize _Count,  
    Elem _Delim  
);  
basic_istream<Elem, Tr>& get(  
    basic_streambuf<Elem, Tr>& _Strbuf  
);  
basic_istream<Elem, Tr>& get(  
    basic_streambuf<Elem, Tr>& _Strbuf,  
    Elem _Delim  
);  
```  
  
### Parameters  
 `_Count`  
 The number of characters to read from `strbuf`.  
  
 `_Delim`  
 The character that should terminate the read if it is encountered before `_Count`.  
  
 `_Str`  
 A string in which to write.  
  
 `_Ch`  
 A character to get.  
  
 `_Strbuf`  
 A buffer in which to write.  
  
### Return Value  
 The parameterless form of get returns the element read as an integer or end of file. The remaining forms return the stream (* `this`).  
  
### Remarks  
 The first of these unformatted input functions extracts an element, if possible, as if by returning `rdbuf`-> `sbumpc`. Otherwise, it returns **traits_type::**[eof](../VS_visualcpp/char_traits-Struct.md#char_traits__eof). If the function extracts no element, it calls [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)( **failbit**).  
  
 The second function extracts the [int_type](../VS_visualcpp/basic_ios-Class.md#basic_ios__int_type) element `meta` the same way. If `meta` compares equal to **traits_type::eof**, the function calls `setstate`( **failbit**). Otherwise, it stores **traits_type::**[to_char_type](../VS_visualcpp/char_traits-Struct.md#char_traits__to_char_type)( `meta`) in `_Ch`. The function returns **\*this**.  
  
 The third function returns **get**(_                        *Str*, `_Count`, `widen`('\ **n**')).  
  
 The fourth function extracts up to `_Count` - 1 elements and stores them in the array beginning at _                        *Str*. It always stores `char_type` after any extracted elements it stores. In order of testing, extraction stops:  
  
-   At end of file.  
  
-   After the function extracts an element that compares equal to `_Delim`, in which case the element is put back to the controlled sequence.  
  
-   After the function extracts `_Count` - 1 elements.  
  
 If the function extracts no elements, it calls `setstate`( **failbit**). In any case, it returns **\*this**.  
  
 The fifth function returns **get**( **strbuf**, `widen`('\ **n**')).  
  
 The sixth function extracts elements and inserts them in **strbuf**. Extraction stops on end-of-file or on an element that compares equal to _                        *Delim,* which is not extracted. It also stops, without extracting the element in question, if an insertion fails or throws an exception (which is caught but not rethrown). If the function extracts no elements, it calls `setstate`( **failbit**). In any case, the function returns **\*this**.  
  
### Example  
  
```  
// basic_istream_get.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   char c[10];  
  
   c[0] = cin.get( );  
   cin.get( c[1] );  
   cin.get( &c[2],3 );  
   cin.get( &c[4], 4, '7' );  
  
   cout << c << endl;  
}  
```  
  
   **`11`11**    
##  <a name="basic_istream__getline"></a>  basic_istream::getline  
 Gets a line from the input stream.  
  
```  
basic_istream<Elem, Tr>& getline(  
    char_type * _Str,   
    streamsize _Count  
);  
basic_istream<Elem, Tr>& getline(  
    char_type * _Str,   
    streamsize _Count,   
    char_type _Delim  
);  
```  
  
### Parameters  
 `_Count`  
 The number of characters to read from **strbuf**.  
  
 `_Delim`  
 The character that should terminate the read if it is encountered before `_Count`.  
  
 `_Str`  
 A string in which to write.  
  
### Return Value  
 The stream ( **\*this**).  
  
### Remarks  
 The first of these unformatted input functions returns **getline**(_                        *Str*, `_Count`, `widen`(' `\`**n**')).  
  
 The second function extracts up to `_Count` - 1 elements and stores them in the array beginning at _                        *Str*. It always stores the string termination character after any extracted elements it stores. In order of testing, extraction stops:  
  
-   At end of file.  
  
-   After the function extracts an element that compares equal to `_Delim`, in which case the element is neither put back nor appended to the controlled sequence.  
  
-   After the function extracts `_Count` - 1 elements.  
  
 If the function extracts no elements or `_Count` - 1 elements, it calls [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)( **failbit**). In any case, it returns **\*this**.  
  
### Example  
  
```  
// basic_istream_getline.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   char c[10];  
  
   cin.getline( &c[0], 5, '2' );  
   cout << c << endl;  
}  
```  
  
   **`12`1**    
##  <a name="basic_istream__ignore"></a>  basic_istream::ignore  
 Causes a number of elements to be skipped from the current read position.  
  
```  
basic_istream<Elem, Tr>& ignore(  
    streamsize _Count = 1,  
    int_type _Delim = traits_type::eof( )  
);  
```  
  
### Parameters  
 `_Count`  
 The number of elements to skip from the current read position.  
  
 `_Delim`  
 The element that, if encountered before count, causes **ignore** to return and allowing all elements after `_Delim` to be read.  
  
### Return Value  
 The stream ( **\*this**).  
  
### Remarks  
 The unformatted input function extracts up to `_Count` elements and discards them. If `_Count` equals **numeric_limits<int\>::max**, however, it is taken as arbitrarily large. Extraction stops early on end of file or on an element `_Ch` such that **traits_type::**[to_int_type](../VS_visualcpp/char_traits-Struct.md#char_traits__to_int_type)( `_Ch`) compares equal to _                        *Delim* (which is also extracted). The function returns **\*this**.  
  
### Example  
  
```  
// basic_istream_ignore.cpp  
// compile with: /EHsc  
#include <iostream>  
int main( )   
{  
   using namespace std;  
   char chararray[10];  
   cout << "Type 'abcdef': ";  
   cin.ignore( 5, 'c' );  
   cin >> chararray;  
   cout << chararray;  
}  
```  
  
   **`abcdef` `abcdef`def**    
##  <a name="basic_istream__operator_gt__gt_"></a>  basic_istream::operator&gt;&gt;  
 Calls a function on the input stream or reads formatted data from the input stream.  
  
```  
basic_istream& operator>>(  
   basic_istream& (* _Pfn)(basic_istream&)  
);  
basic_istream& operator>>(  
   ios_base& (* _Pfn)(ios_base&)  
);  
basic_istream& operator>>(  
   basic_ios<Elem, Tr>& (* _Pfn)(basic_ios<Elem, Tr>&))  
;  
basic_istream& operator>>(  
   basic_streambuf<Elem, Tr> * _Strbuf  
);  
basic_istream& operator>>(  
   bool& _Val  
);  
basic_istream& operator>>(  
   short& _Val  
);  
basic_istream& operator>>(  
   unsigned short& _Val  
);  
basic_istream& operator>>(  
   int& _Val  
);  
basic_istream& operator>>(  
   unsigned int& _Val  
);  
basic_istream& operator>>(  
   long& _Val  
);  
basic_istream& operator>>(  
   unsigned long& _Val  
);  
basic_istream& operator>>(  
   long long& _Val  
);  
basic_istream& operator>>(  
   unsigned long long& _Val  
);  
basic_istream& operator>>(  
   void *& _Val  
);  
basic_istream& operator>>(  
   float& _Val  
);  
basic_istream& operator>>(  
   double& _Val  
);  
basic_istream& operator>>(  
   long double& _Val  
);  
```  
  
### Parameters  
 `_Pfn`  
 A function pointer.  
  
 `_Strbuf`  
 An object of type **stream_buf**.  
  
 `_Val`  
 The value to read from the stream.  
  
### Return Value  
 The stream ( **\*this**).  
  
### Remarks  
 The `<istream>` header also defines several global extraction operators. For more information, see [operator&gt;&gt;](../VS_visualcpp/-istream--operators.md#operator_gt__gt_).  
  
 The first member function ensures that an expression of the form **istr** >> `ws` calls [ws](../VS_visualcpp/-istream--functions.md#ws)( **istr**), and then returns **\*this**. The second and third functions ensure that other manipulators, such as [hex](../VS_visualcpp/-ios--functions.md#hex), behave similarly. The remaining functions constitute the formatted input functions.  
  
 The function:  
  
```  
basic_istream&                         operator>>(  
    basic_streambuf<Elem, Tr> *_Strbuf);  
```  
  
 extracts elements, if _                        *Strbuf* is not a null pointer, and inserts them in `_Strbuf`. Extraction stops on end of file. It also stops without extracting the element in question, if an insertion fails or throws an exception (which is caught but not rethrown). If the function extracts no elements, it calls [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)( **failbit**). In any case, the function returns **\*this**.  
  
 The function:  
  
```  
basic_istream&                         operator>>(bool& _Val);  
```  
  
 extracts a field and converts it to a Boolean value by calling [use_facet](../VS_visualcpp/basic_filebuf-Class.md#basic_filebuf__open) < `num_get`< **Elem**, **InIt**>( [getloc](../VS_visualcpp/ios_base-Class.md#ios_base__getloc)). [get](../VS_visualcpp/ios_base-Class.md#ios_base__getloc)( **InIt**( [rdbuf](../VS_visualcpp/basic_ios-Class.md#basic_ios__rdbuf)), `Init`(0), **\*this**, `getloc`, `_Val`). Here, **InIt** is defined as [istreambuf_iterator](../VS_visualcpp/istreambuf_iterator-Class.md)< **Elem**, **Tr**>. The function returns **\*this**.  
  
 The functions:  
  
```  
basic_istream&                         operator>>(short& _Val);  
basic_istream&                         operator>>(unsigned short& _Val);  
basic_istream&                         operator>>(int& _Val);  
basic_istream&                         operator>>(unsigned int& _Val);  
basic_istream&                         operator>>(long& _Val);  
basic_istream&                         operator>>(unsigned long& _Val);  
  
basic_istream&                         operator>>(long long& _Val);  
basic_istream&                         operator>>(unsigned long long& _Val);  
  
basic_istream&                         operator>>(void *& _Val);  
```  
  
 each extract a field and convert it to a numeric value by calling `use_facet`< `num_get`< **Elem**, **InIt**>( `getloc`). [get](#basic_istream__get)( **InIt**( `rdbuf`), `Init`(0), **\*this**, `getloc`, `_Val`). Here, **InIt** is defined as `istreambuf_iterator`< **Elem**, **Tr**>, and `_Val` has type **long***,*`unsigned long`*,* or **void \*** as needed.  
  
 If the converted value cannot be represented as the type of `_Val`, the function calls [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)( **failbit**). In any case, the function returns **\*this**.  
  
 The functions:  
  
```  
basic_istream&                         operator>>(float& _Val);  
basic_istream&                         operator>>(double& _Val);  
basic_istream&                         operator>>(long double& _Val);  
```  
  
 each extract a field and convert it to a numeric value by calling `use_facet`< `num_get`< **Elem**, **InIt**>( `getloc`). **get**( **InIt**( `rdbuf`), `Init`(0), **\*this**, `getloc`, `_Val`). Here, **InIt** is defined as `istreambuf_iterator`< **Elem**, **Tr**>, and `_Val` has type **double** or `long double` as needed.  
  
 If the converted value cannot be represented as the type of `_Val`, the function calls `setstate`( **failbit**). In any case, it returns **\*this**.  
  
### Example  
  
```  
// istream_basic_istream_op_is.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
  
ios_base& hex2( ios_base& ib )   
{  
   ib.unsetf( ios_base::dec );  
   ib.setf( ios_base::hex );  
   return ib;  
}  
  
basic_istream<char, char_traits<char> >& somefunc(basic_istream<char, char_traits<char> > &i)  
{  
   if ( i == cin )   
   {  
      cerr << "i is cin" << endl;  
   }  
   return i;  
}  
  
int main( )   
{  
   int i = 0;  
   cin >> somefunc;  
   cin >> i;  
   cout << i << endl;  
   cin >> hex2;  
   cin >> i;  
   cout << i << endl;  
}  
```  
  
##  <a name="basic_istream__operator_eq"></a>  basic_istream::operator=  
 Assigns the `basic_istream` on the right side of the operator to this object. This is a move assignment involving an `rvalue` reference that does not leave a copy behind.  
  
```  
basic_istream& operator=(  
    basic_istream&& _Right  
);  
```  
  
### Parameters  
 `_Right`  
 An `rvalue` reference to a `basic_ifstream` object.  
  
### Return Value  
 Returns *this.  
  
### Remarks  
 The member operator calls swap `(_Right)`.  
  
##  <a name="basic_istream__peek"></a>  basic_istream::peek  
 Returns the next character to be read.  
  
```  
int _ type peek( );  
  
```  
  
### Return Value  
 The next character that will be read.  
  
### Remarks  
 The unformatted input function extracts an element, if possible, as if by returning `rdbuf` -> [sgetc](../VS_visualcpp/basic_streambuf-Class.md#basic_streambuf__sgetc). Otherwise, it returns **traits_type::**[eof](../VS_visualcpp/char_traits-Struct.md#char_traits__eof).  
  
### Example  
  
```  
// basic_istream_peek.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   char c[10], c2;  
   cout << "Type 'abcde': ";  
  
   c2 = cin.peek( );  
   cin.getline( &c[0], 9 );  
  
   cout << c2 << " " << c << endl;  
}  
```  
  
   **`abcde` `abcde`Type 'abcde': abcde**  
**a abcde**    
##  <a name="basic_istream__putback"></a>  basic_istream::putback  
 Puts a specified character into the stream.  
  
```  
basic_istream<Elem, Tr>& putback(  
    char_type _Ch  
);  
```  
  
### Parameters  
 `_Ch`  
 A character to put back into the stream.  
  
### Return Value  
 The stream ( **\*this**).  
  
### Remarks  
 The [unformatted input function](../VS_visualcpp/basic_istream-Class.md) puts back `_Ch`, if possible, as if by calling [rdbuf](../VS_visualcpp/basic_ios-Class.md#basic_ios__rdbuf)`->`[sputbackc](../VS_visualcpp/basic_streambuf-Class.md#basic_streambuf__sputbackc). If rdbuf is a null pointer, or if the call to `sputbackc` returns **traits_type::**[eof](../VS_visualcpp/char_traits-Struct.md#char_traits__eof), the function calls [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)( **badbit**). In any case, it returns **\*this**.  
  
### Example  
  
```  
// basic_istream_putback.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   char c[10], c2, c3;  
  
   c2 = cin.get( );  
   c3 = cin.get( );  
   cin.putback( c2 );  
   cin.getline( &c[0], 9 );  
   cout << c << endl;  
}  
```  
  
   **`qw`q**    
##  <a name="basic_istream__read"></a>  basic_istream::read  
 Reads a specified number of characters from the stream and stores them in an array.  
  
 This method is potentially unsafe, as it relies on the caller to check that the passed values are correct.  
  
```  
basic_istream<Elem, Tr>& read(  
    char_type * _Str,   
    streamsize _Count  
);  
```  
  
### Parameters  
 `_Str`  
 The array in which to read the characters.  
  
 `_Count`  
 The number of characters to read.  
  
### Return Value  
 The stream ( `*this`).  
  
### Remarks  
 The unformatted input function extracts up to `count` elements and stores them in the array beginning at _ `Str`. Extraction stops early on end of file, in which case the function calls [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)( `failbit`). In any case, it returns `*this`.  
  
### Example  
  
```  
// basic_istream_read.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main()  
{  
    char c[10];  
    int count = 5;  
  
    cout << "Type 'abcde': ";  
  
    // Note: cin::read is potentially unsafe, consider  
    // using cin::_Read_s instead.  
    cin.read(&c[0], count);  
    c[count] = 0;  
  
    cout << c << endl;  
}  
```  
  
   **`abcde` `abcde`Type 'abcde': abcde**  
**abcde**    
##  <a name="basic_istream__readsome"></a>  basic_istream::readsome  
 Reads the specified number of character values.  
  
 This method is potentially unsafe, as it relies on the caller to check that the passed values are correct.  
  
```  
streamsize readsome(  
    char_type * str,  
    streamsize count  
);  
```  
  
### Parameters  
 `str`  
 The array in which `readsome` stores the characters it reads.  
  
 `count`  
 The number of characters to read.  
  
### Return Value  
 The number of characters actually read, [gcount](#basic_istream__gcount).  
  
### Remarks  
 This unformatted input function extracts up to `count` elements from the input stream and stores them in the array `str`.  
  
 This function does not wait for input. It reads whatever data is available.  
  
### Example  
  
```  
// basic_istream_readsome.cpp  
// compile with: /EHsc /W3  
#include <iostream>  
using namespace std;  
  
int main( )  
{  
   char c[10];  
   int count = 5;  
  
   cout << "Type 'abcdefgh': ";  
  
   // cin.read blocks until user types input.  
   // Note: cin::read is potentially unsafe, consider  
   // using cin::_Read_s instead.  
   cin.read(&c[0], 2);  
  
   // Note: cin::readsome is potentially unsafe, consider  
   // using cin::_Readsome_s instead.  
   int n = cin.readsome(&c[0], count);  // C4996  
   c[n] = 0;  
   cout << n << " characters read" << endl;  
   cout << c << endl;  
}  
```  
  
##  <a name="basic_istream__seekg"></a>  basic_istream::seekg  
 Moves the read position in a stream.  
  
```  
basic_istream<Elem, Tr>& seekg(  
    pos_type pos  
);  
basic_istream<Elem, Tr>& seekg(  
    off_type off,  
    ios_base::seekdir way  
);  
```  
  
### Parameters  
 `pos`  
 The absolute position in which to move the read pointer.  
  
 `off`  
 An offset to move the read pointer relative to `way`.  
  
 `way`  
 One of the [ios_base::seekdir](../VS_visualcpp/ios_base-Class.md#ios_base__seekdir) enumerations.  
  
### Return Value  
 The stream ( **\*this**).  
  
### Remarks  
 The first member function performs an absolute seek, the second member function performs a relative seek.  
  
> [!NOTE]
>  Do not use the second member function with text files, because Standard C++ does not support relative seeks in text files.  
  
 If [fail](../VS_visualcpp/basic_ios-Class.md#basic_ios__fail) is false, the first member function calls **newpos** = [rdbuf](../VS_visualcpp/basic_ios-Class.md#basic_ios__rdbuf) -> [pubseekpos](../VS_visualcpp/basic_streambuf-Class.md#basic_streambuf__pubseekpos)( `pos`), for some **pos_type** temporary object **newpos**. If **fail** is false, the second function calls **newpos** = **rdbuf** -> [pubseekoff](../VS_visualcpp/basic_streambuf-Class.md#basic_streambuf__pubseekoff)( `off`, `way`). In either case, if ( `off_type`) **newpos** == ( `off_type`)(-1) (the positioning operation fails), the function calls **istr**. [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)( **failbit**). Both functions return **\*this**.  
  
 If [fail](../VS_visualcpp/basic_ios-Class.md#basic_ios__fail) is true, the member functions do nothing.  
  
### Example  
  
```  
// basic_istream_seekg.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main ( )   
{  
   using namespace std;  
   ifstream file;  
   char c, c1;  
  
   file.open( "basic_istream_seekg.txt" );  
   file.seekg(2);   // seek to position 2  
   file >> c;  
   cout << c << endl;  
}  
```  
  
##  <a name="basic_istream__sentry"></a>  basic_istream::sentry  
 The nested class describes an object whose declaration structures the formatted and unformatted input functions.  
  
```  
class sentry {  
public:  
    explicit sentry(  
        basic_istream<Elem, Tr>& _Istr,  
        bool _Noskip = false  
    );  
    operator bool( ) const;  
};  
```  
  
### Remarks  
 If `_Istr``.`[good](../VS_visualcpp/basic_ios-Class.md#basic_ios__good) is true, the constructor:  
  
-   Calls `_Istr`. [tie](../VS_visualcpp/basic_ios-Class.md#basic_ios__tie) -> [flush](../VS_visualcpp/basic_ostream-Class.md#basic_ostream__flush) if `_Istr`. `tie` is not a null pointer  
  
-   Effectively calls [ws](../VS_visualcpp/-istream--functions.md#ws)( `_Istr`) if `_Istr`. [flags](../VS_visualcpp/ios_base-Class.md#ios_base__flags)**&**[skipws](../VS_visualcpp/-ios--functions.md#skipws) is nonzero  
  
 If, after any such preparation, `_Istr`. **good** is false, the constructor calls `_Istr`. [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)( **failbit**). In any case, the constructor stores the value returned by `_Istr`. **good** in **status**. A later call to **operator bool** delivers this stored value.  
  
##  <a name="basic_istream__swap"></a>  basic_istream::swap  
 Exchanges the contents of two `basic_istream` objects.  
  
```  
void swap(basic_istream& _Right);  
```  
  
### Parameters  
 `_Right`  
 An lvalue reference to a `basic_istream` object.  
  
### Remarks  
 The member function calls [basic_ios::swap](../VS_visualcpp/basic_ios-Class.md#basic_ios__swap)`(``_Right``)`. It also exchanges the extraction count with the extraction count for `_Right`.  
  
##  <a name="basic_istream__sync"></a>  basic_istream::sync  
 Synchronizes the input device associated with the stream with the stream's buffer.  
  
```  
int sync( );  
  
```  
  
### Return Value  
 If [rdbuf](../VS_visualcpp/basic_ios-Class.md#basic_ios__rdbuf) is a null pointer, the function returns -1. Otherwise, it calls `rdbuf` -> [pubsync](../VS_visualcpp/basic_streambuf-Class.md#basic_streambuf__pubsync). If that returns -1, the function calls [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)( **badbit**) and returns -1. Otherwise, the function returns zero.  
  
##  <a name="basic_istream__tellg"></a>  basic_istream::tellg  
 Reports the current read position in the stream.  
  
```  
pos _ type tellg( );  
  
```  
  
### Return Value  
 The current position in the stream.  
  
### Remarks  
 If [fail](../VS_visualcpp/basic_ios-Class.md#basic_ios__fail) is false, the member function returns [rdbuf](../VS_visualcpp/basic_ios-Class.md#basic_ios__rdbuf) -> [pubseekoff](../VS_visualcpp/basic_streambuf-Class.md#basic_streambuf__pubseekoff)(0, `cur`, **in**). Otherwise, it returns `pos_type`(-1).  
  
### Example  
  
```  
// basic_istream_tellg.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main()  
{  
    using namespace std;  
    ifstream file;  
    char c;  
    streamoff i;  
  
    file.open("basic_istream_tellg.txt");  
    i = file.tellg();  
    file >> c;  
    cout << c << " " << i << endl;  
  
    i = file.tellg();  
    file >> c;  
    cout << c << " " << i << endl;  
}  
```  
  
##  <a name="basic_istream__unget"></a>  basic_istream::unget  
 Puts the most recently read character back into the stream.  
  
```  
basic_istream<Elem, Tr>& unget( );  
```  
  
### Return Value  
 The stream ( **\*this**).  
  
### Remarks  
 The [unformatted input function](../VS_visualcpp/basic_istream-Class.md) puts back the previous element in the stream, if possible, as if by calling `rdbuf` -> [sungetc](../VS_visualcpp/basic_streambuf-Class.md#basic_streambuf__sungetc). If [rdbuf](../VS_visualcpp/basic_ios-Class.md#basic_ios__rdbuf) is a null pointer, or if the call to `sungetc` returns **traits_type::**[eof](../VS_visualcpp/basic_ios-Class.md#basic_ios__eof), the function calls [setstate](../VS_visualcpp/basic_ios-Class.md#basic_ios__setstate)( **badbit**). In any case, it returns **\*this**.  
  
 For information on how `unget` might fail, see [basic_streambuf::sungetc](../VS_visualcpp/basic_streambuf-Class.md#basic_streambuf__sungetc).  
  
### Example  
  
```  
// basic_istream_unget.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   char c[10], c2;  
  
   cout << "Type 'abc': ";  
   c2 = cin.get( );  
   cin.unget( );  
   cin.getline( &c[0], 9 );  
   cout << c << endl;  
}  
```  
  
   **`abc` `abc`Type 'abc': abc**  
**abc**    
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [iostreams Conventions](../VS_visualcpp/iostreams-Conventions.md)