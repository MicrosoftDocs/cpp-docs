---
title: "basic_istream Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "basic_istream"
  - "istream/std::basic_istream"
  - "std::basic_istream"
  - "std.basic_istream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_istream class"
ms.assetid: c7c27111-de6d-42b4-95a3-a7e65259bf17
caps.latest.revision: 21
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
# basic_istream Class
Describes an object that controls extraction of elements and encoded objects from a stream buffer with elements of type `Elem`, also known as [char_type](../standard-library/basic-ios-class.md#basic_ios__char_type), whose character traits are determined by the class *Tr*, also known as [traits_type](../standard-library/basic-ios-class.md#basic_ios__traits_type).  
  
## Syntax  
  
```  
template <class Elem, class Tr = char_traits<Elem>>  
class basic_istream : virtual public basic_ios<Elem, Tr>  
```  
  
## Remarks  
 Most of the member functions that overload [operator>>](#basic_istream__operator_gt__gt_) are formatted input functions. They follow the pattern:  
  
```cpp  
iostate state = goodbit;
const sentry ok(*this);

if (ok)
{
    try
    {
        /*extract elements and convert
            accumulate flags in state.
            store a successful conversion*/
    }
    catch (...)
    {
        try
        {
            setstate(badbit);

        }
        catch (...)
        {
        }
        if ((exceptions()& badbit) != 0)
            throw;
    }
}
setstate(state);

return (*this);
```  
  
 Many other member functions are unformatted input functions. They follow the pattern:  
  
```cpp  
iostate state = goodbit;
count = 0;    // the value returned by gcount  
const sentry ok(*this, true);

if (ok)
{
    try
    {
        /* extract elements and deliver
            count extracted elements in count
            accumulate flags in state */
    }
    catch (...)
    {
        try
        {
            setstate(badbit);

        }
        catch (...)
        {
        }
        if ((exceptions()& badbit) != 0)
            throw;
    }
}
setstate(state);
```  
  
 Both groups of functions call [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **eofbit**) if they encounter end of file while extracting elements.  
  
 An object of class `basic_istream`< `Elem`, *Tr*> stores:  
  
-   A virtual public base object of class [basic_ios](../standard-library/basic-ios-class.md)< `Elem`, *Tr*> `.`  
  
-   An extraction count for the last unformatted input operation (called **count** in the previous code).  
  
## Example  
 See the example for [basic_ifstream Class](../standard-library/basic-ifstream-class.md) to learn more about input streams.  
  
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
 **Header:** \<istream>  
  
 **Namespace:** std  
  
##  <a name="basic_istream__basic_istream"></a>  basic_istream::basic_istream  
 Constructs an object of type `basic_istream`.  
  
```  
explicit basic_istream(
    basic_streambuf<Elem, Tr>* strbuf,  
    bool _Isstd = false);

basic_istream(basic_istream&& right);
```  
  
### Parameters  
 ` strbuf`  
 An object of type [basic_streambuf](../standard-library/basic-streambuf-class.md).  
  
 `_Isstd`  
 `true` if this is a standard stream; otherwise, `false`.  
  
 ` right`  
 A `basic_istream` object to copy.  
  
### Remarks  
 The first constructor initializes the base class by calling [init](../standard-library/basic-ios-class.md#basic_ios__init)(_S `trbuf`). It also stores zero in the extraction count. For more information about this extraction count, see the Remarks section of the [basic_istream Class](../standard-library/basic-istream-class.md) overview topic.  
  
 The second constructor initializes the base class by calling `move``( right)`. It also stores _R `ight.gcount()` in the extraction count and stores zero in the extraction count for _R `ight`.  
  
### Example  
  See the example for [basic_ifstream::basic_ifstream](../standard-library/basic-ifstream-class.md#basic_ifstream__basic_ifstream) to learn more about input streams.  
  
##  <a name="basic_istream__gcount"></a>  basic_istream::gcount  
 Returns the number of characters read during the last unformatted input.  
  
```  
streamsize gcount() const;
```  
  
### Return Value  
 The extraction count.  
  
### Remarks  
 Use [basic_istream::get](#basic_istream__get) to read unformatted characters.  
  
### Example  
  
```cpp  
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
  
```Output  
  
a  
  
```  
  
```Output  
  
      aType the letter 'a':  
a  
1  
```  
  
##  <a name="basic_istream__get"></a>  basic_istream::get  
 Reads one or more characters from the input stream.  
  
```  
int_type get();

basic_istream<Elem, Tr>& get(Elem& Ch);
basic_istream<Elem, Tr>& get(Elem* str, streamsize count);
basic_istream<Elem, Tr>& get(Elem* str, streamsize count, Elem Delim);

basic_istream<Elem, Tr>& get(basic_streambuf<Elem, Tr>& strbuf);
basic_istream<Elem, Tr>& get(basic_streambuf<Elem, Tr>& strbuf, Elem Delim);
```  
  
### Parameters  
 ` count`  
 The number of characters to read from `strbuf`.  
  
 `Delim`  
 The character that should terminate the read if it is encountered before ` count`.  
  
 ` str`  
 A string in which to write.  
  
 `Ch`  
 A character to get.  
  
 ` strbuf`  
 A buffer in which to write.  
  
### Return Value  
 The parameterless form of get returns the element read as an integer or end of file. The remaining forms return the stream (* `this`).  
  
### Remarks  
 The first of these unformatted input functions extracts an element, if possible, as if by returning `rdbuf`-> `sbumpc`. Otherwise, it returns **traits_type::**[eof](../standard-library/char-traits-struct.md#char_traits__eof). If the function extracts no element, it calls [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**).  
  
 The second function extracts the [int_type](../standard-library/basic-ios-class.md#basic_ios__int_type) element `meta` the same way. If `meta` compares equal to **traits_type::eof**, the function calls `setstate`( **failbit**). Otherwise, it stores **traits_type::**[to_char_type](../standard-library/char-traits-struct.md#char_traits__to_char_type)( `meta`) in `Ch`. The function returns **\*this**.  
  
 The third function returns **get**(_ *Str*, ` count`, `widen`('\ **n**')).  
  
 The fourth function extracts up to ` count` - 1 elements and stores them in the array beginning at _ *Str*. It always stores `char_type` after any extracted elements it stores. In order of testing, extraction stops:  
  
-   At end of file.  
  
-   After the function extracts an element that compares equal to `Delim`, in which case the element is put back to the controlled sequence.  
  
-   After the function extracts ` count` - 1 elements.  
  
 If the function extracts no elements, it calls `setstate`( **failbit**). In any case, it returns **\*this**.  
  
 The fifth function returns **get**( **strbuf**, `widen`('\ **n**')).  
  
 The sixth function extracts elements and inserts them in **strbuf**. Extraction stops on end-of-file or on an element that compares equal to _ *Delim,* which is not extracted. It also stops, without extracting the element in question, if an insertion fails or throws an exception (which is caught but not rethrown). If the function extracts no elements, it calls `setstate`( **failbit**). In any case, the function returns **\*this**.  
  
### Example  
  
```cpp  
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
  
```Output  
  
1111  
```  
  
##  <a name="basic_istream__getline"></a>  basic_istream::getline  
 Gets a line from the input stream.  
  
```  
basic_istream<Elem, Tr>& getline(
    char_type* str,   
    streamsize count);

basic_istream<Elem, Tr>& getline(
    char_type* str,   
    streamsize count,   
    char_type Delim);
```  
  
### Parameters  
 ` count`  
 The number of characters to read from **strbuf**.  
  
 `Delim`  
 The character that should terminate the read if it is encountered before ` count`.  
  
 ` str`  
 A string in which to write.  
  
### Return Value  
 The stream ( **\*this**).  
  
### Remarks  
 The first of these unformatted input functions returns **getline**(_ *Str*, ` count`, `widen`(' `\`**n**')).  
  
 The second function extracts up to ` count` - 1 elements and stores them in the array beginning at _ *Str*. It always stores the string termination character after any extracted elements it stores. In order of testing, extraction stops:  
  
-   At end of file.  
  
-   After the function extracts an element that compares equal to `Delim`, in which case the element is neither put back nor appended to the controlled sequence.  
  
-   After the function extracts ` count` - 1 elements.  
  
 If the function extracts no elements or ` count` - 1 elements, it calls [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). In any case, it returns **\*this**.  
  
### Example  
  
```cpp  
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
  
```Output  
  
121  
```  
  
##  <a name="basic_istream__ignore"></a>  basic_istream::ignore  
 Causes a number of elements to be skipped from the current read position.  
  
```  
basic_istream<Elem, Tr>& ignore(
    streamsize count = 1,  
    int_type Delim = traits_type::eof());
```  
  
### Parameters  
 ` count`  
 The number of elements to skip from the current read position.  
  
 `Delim`  
 The element that, if encountered before count, causes **ignore** to return and allowing all elements after `Delim` to be read.  
  
### Return Value  
 The stream ( **\*this**).  
  
### Remarks  
 The unformatted input function extracts up to ` count` elements and discards them. If ` count` equals **numeric_limits\<int>::max**, however, it is taken as arbitrarily large. Extraction stops early on end of file or on an element `Ch` such that **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#char_traits__to_int_type)( `Ch`) compares equal to _ *Delim* (which is also extracted). The function returns **\*this**.  
  
### Example  
  
```cpp  
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
  
```Output  
  
abcdef  
  
```  
  
```Output  
  
abcdefdef  
```  
  
##  <a name="basic_istream__operator_gt__gt_"></a>  basic_istream::operator&gt;&gt;
  
Calls a function on the input stream or reads formatted data from the input stream.  
    
```  
basic_istream& operator>>(basic_istream& (* Pfn)(basic_istream&));
basic_istream& operator>>(ios_base& (* Pfn)(ios_base&));
basic_istream& operator>>(basic_ios<Elem, Tr>& (* Pfn)(basic_ios<Elem, Tr>&));  
basic_istream& operator>>(basic_streambuf<Elem, Tr>* strbuf);
basic_istream& operator>>(bool& val);
basic_istream& operator>>(short& val);
basic_istream& operator>>(unsigned short& val);
basic_istream& operator>>(int& val);
basic_istream& operator>>(unsigned int& val);
basic_istream& operator>>(long& val);
basic_istream& operator>>(unsigned long& val);
basic_istream& operator>>(long long& val);
basic_istream& operator>>(unsigned long long& val);
basic_istream& operator>>(void *& val);
basic_istream& operator>>(float& val);
basic_istream& operator>>(double& val);
basic_istream& operator>>(long double& val);
```  
  
### Parameters  
 `Pfn`  
 A function pointer.  
  
 ` strbuf`  
 An object of type **stream_buf**.  
  
 ` val`  
 The value to read from the stream.  
  
### Return Value  
 The stream ( **\*this**).  
  
### Remarks  
 The `<istream>` header also defines several global extraction operators. For more information, see [operator>> (\<istream>)](../standard-library/istream-operators.md#operator_gt__gt_).  
  
 The first member function ensures that an expression of the form **istr** >> `ws` calls [ws](../standard-library/istream-functions.md#ws)( **istr**), and then returns **\*this**. The second and third functions ensure that other manipulators, such as [hex](../standard-library/ios-functions.md#hex), behave similarly. The remaining functions constitute the formatted input functions.  
  
 The function:  
  
```  
basic_istream& operator>>(
    basic_streambuf<Elem, Tr>* strbuf);
```  
  
 extracts elements, if _ *Strbuf* is not a null pointer, and inserts them in ` strbuf`. Extraction stops on end of file. It also stops without extracting the element in question, if an insertion fails or throws an exception (which is caught but not rethrown). If the function extracts no elements, it calls [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). In any case, the function returns **\*this**.  
  
 The function:  
  
```  
basic_istream& operator>>(bool& val);
```  
  
 extracts a field and converts it to a Boolean value by calling [use_facet](../standard-library/basic-filebuf-class.md#basic_filebuf__open) < `num_get`\< **Elem**, **InIt**>( [getloc](../standard-library/ios-base-class.md#ios_base__getloc)). [get](../standard-library/ios-base-class.md#ios_base__getloc)( **InIt**( [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf)), `Init`(0), **\*this**, `getloc`, ` val`). Here, **InIt** is defined as [istreambuf_iterator](../standard-library/istreambuf-iterator-class.md)\< **Elem**, **Tr**>. The function returns **\*this**.  
  
 The functions:  
  
```  
basic_istream& operator>>(short& val);
basic_istream& operator>>(unsigned short& val);
basic_istream& operator>>(int& val);
basic_istream& operator>>(unsigned int& val);
basic_istream& operator>>(long& val);
basic_istream& operator>>(unsigned long& val); 
basic_istream& operator>>(long long& val);
basic_istream& operator>>(unsigned long long& val); 
basic_istream& operator>>(void *& val);
```  
  
 each extract a field and convert it to a numeric value by calling `use_facet`< `num_get`\< **Elem**, **InIt**>( `getloc`). [get](#basic_istream__get)( **InIt**( `rdbuf`), `Init`(0), **\*this**, `getloc`, ` val`). Here, **InIt** is defined as `istreambuf_iterator`\< **Elem**, **Tr**>, and ` val` has type **long***,*`unsigned long`*,* or **void \*** as needed.  
  
 If the converted value cannot be represented as the type of ` val`, the function calls [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). In any case, the function returns **\*this**.  
  
 The functions:  
  
```  
basic_istream& operator>>(float& val);
basic_istream& operator>>(double& val);
basic_istream& operator>>(long double& val);
```  
  
 each extract a field and convert it to a numeric value by calling `use_facet`< `num_get`\< **Elem**, **InIt**>( `getloc`). **get**( **InIt**( `rdbuf`), `Init`(0), **\*this**, `getloc`, ` val`). Here, **InIt** is defined as `istreambuf_iterator`\< **Elem**, **Tr**>, and ` val` has type **double** or `long double` as needed.  
  
 If the converted value cannot be represented as the type of ` val`, the function calls `setstate`( **failbit**). In any case, it returns **\*this**.  
  
### Example  
  
```cpp  
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
basic_istream& operator=(basic_istream&& right);
```  
  
### Parameters  
 ` right`  
 An `rvalue` reference to a `basic_ifstream` object.  
  
### Return Value  
 Returns *this.  
  
### Remarks  
 The member operator calls swap `( right)`.  
  
##  <a name="basic_istream__peek"></a>  basic_istream::peek  
 Returns the next character to be read.  
  
```  
int_type peek();
```  
  
### Return Value  
 The next character that will be read.  
  
### Remarks  
 The unformatted input function extracts an element, if possible, as if by returning `rdbuf` -> [sgetc](../standard-library/basic-streambuf-class.md#basic_streambuf__sgetc). Otherwise, it returns **traits_type::**[eof](../standard-library/char-traits-struct.md#char_traits__eof).  
  
### Example  
  
```cpp  
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
  
```Output  
  
abcde  
  
```  
  
```Output  
  
      abcdeType 'abcde': abcde  
a abcde  
```  
  
##  <a name="basic_istream__putback"></a>  basic_istream::putback  
 Puts a specified character into the stream.  
  
```  
basic_istream<Elem, Tr>& putback(
    char_type Ch);
```  
  
### Parameters  
 `Ch`  
 A character to put back into the stream.  
  
### Return Value  
 The stream ( **\*this**).  
  
### Remarks  
 The [unformatted input function](../standard-library/basic-istream-class.md) puts back `Ch`, if possible, as if by calling [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf)`->`[sputbackc](../standard-library/basic-streambuf-class.md#basic_streambuf__sputbackc). If rdbuf is a null pointer, or if the call to `sputbackc` returns **traits_type::**[eof](../standard-library/char-traits-struct.md#char_traits__eof), the function calls [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **badbit**). In any case, it returns **\*this**.  
  
### Example  
  
```cpp  
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
  
```Output  
  
qwq  
```  
  
##  <a name="basic_istream__read"></a>  basic_istream::read  
 Reads a specified number of characters from the stream and stores them in an array.  
  
 This method is potentially unsafe, as it relies on the caller to check that the passed values are correct.  
  
```  
basic_istream<Elem, Tr>& read(
    char_type* str,   
    streamsize count);
```  
  
### Parameters  
 ` str`  
 The array in which to read the characters.  
  
 ` count`  
 The number of characters to read.  
  
### Return Value  
 The stream ( `*this`).  
  
### Remarks  
 The unformatted input function extracts up to `count` elements and stores them in the array beginning at _ `Str`. Extraction stops early on end of file, in which case the function calls [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( `failbit`). In any case, it returns `*this`.  
  
### Example  
  
```cpp  
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
  
```Output  
  
abcde  
  
```  
  
```Output  
  
      abcdeType 'abcde': abcde  
abcde  
```  
  
##  <a name="basic_istream__readsome"></a>  basic_istream::readsome  
 Reads the specified number of character values.  
  
 This method is potentially unsafe, as it relies on the caller to check that the passed values are correct.  
  
```  
streamsize readsome(
    char_type* str,  
    streamsize count);
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
  
```cpp  
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
basic_istream<Elem, Tr>& seekg(pos_type pos);

basic_istream<Elem, Tr>& seekg(off_type off, ios_base::seekdir way);
```  
  
### Parameters  
 `pos`  
 The absolute position in which to move the read pointer.  
  
 `off`  
 An offset to move the read pointer relative to `way`.  
  
 `way`  
 One of the [ios_base::seekdir](../standard-library/ios-base-class.md#ios_base__seekdir) enumerations.  
  
### Return Value  
 The stream ( **\*this**).  
  
### Remarks  
 The first member function performs an absolute seek, the second member function performs a relative seek.  
  
> [!NOTE]
>  Do not use the second member function with text files, because Standard C++ does not support relative seeks in text files.  
  
 If [fail](../standard-library/basic-ios-class.md#basic_ios__fail) is false, the first member function calls **newpos** = [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf) -> [pubseekpos](../standard-library/basic-streambuf-class.md#basic_streambuf__pubseekpos)( `pos`), for some **pos_type** temporary object **newpos**. If **fail** is false, the second function calls **newpos** = **rdbuf** -> [pubseekoff](../standard-library/basic-streambuf-class.md#basic_streambuf__pubseekoff)( `off`, `way`). In either case, if ( `off_type`) **newpos** == ( `off_type`)(-1) (the positioning operation fails), the function calls **istr**. [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). Both functions return **\*this**.  
  
 If [fail](../standard-library/basic-ios-class.md#basic_ios__fail) is true, the member functions do nothing.  
  
### Example  
  
```cpp  
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
  
class sentry {  
   public:  
   explicit sentry(
   basic_istream\<Elem, Tr>& _Istr,  
   bool _Noskip = false);
   operator bool() const;
   };  
  
### Remarks  
 If `_Istr``.`[good](../standard-library/basic-ios-class.md#basic_ios__good) is true, the constructor:  
  
-   Calls `_Istr`. [tie](../standard-library/basic-ios-class.md#basic_ios__tie) -> [flush](../standard-library/basic-ostream-class.md#basic_ostream__flush) if `_Istr`. `tie` is not a null pointer  
  
-   Effectively calls [ws](../standard-library/istream-functions.md#ws)( `_Istr`) if `_Istr`. [flags](../standard-library/ios-base-class.md#ios_base__flags)**&**[skipws](../standard-library/ios-functions.md#skipws) is nonzero  
  
 If, after any such preparation, `_Istr`. **good** is false, the constructor calls `_Istr`. [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). In any case, the constructor stores the value returned by `_Istr`. **good** in **status**. A later call to **operator bool** delivers this stored value.  
  
##  <a name="basic_istream__swap"></a>  basic_istream::swap  
 Exchanges the contents of two `basic_istream` objects.  
  
```  
void swap(basic_istream& right);
```  
  
### Parameters  
 ` right`  
 An lvalue reference to a `basic_istream` object.  
  
### Remarks  
 The member function calls [basic_ios::swap](../standard-library/basic-ios-class.md#basic_ios__swap)`(`` right``)`. It also exchanges the extraction count with the extraction count for ` right`.  
  
##  <a name="basic_istream__sync"></a>  basic_istream::sync  
 Synchronizes the input device associated with the stream with the stream's buffer.  
  
```  
int sync();
```  
  
### Return Value  
 If [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf) is a null pointer, the function returns -1. Otherwise, it calls `rdbuf` -> [pubsync](../standard-library/basic-streambuf-class.md#basic_streambuf__pubsync). If that returns -1, the function calls [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **badbit**) and returns -1. Otherwise, the function returns zero.  
  
##  <a name="basic_istream__tellg"></a>  basic_istream::tellg  
 Reports the current read position in the stream.  
  
```  
pos_type tellg();
```  
  
### Return Value  
 The current position in the stream.  
  
### Remarks  
 If [fail](../standard-library/basic-ios-class.md#basic_ios__fail) is false, the member function returns [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf) -> [pubseekoff](../standard-library/basic-streambuf-class.md#basic_streambuf__pubseekoff)(0, `cur`, **in**). Otherwise, it returns `pos_type`(-1).  
  
### Example  
  
```cpp  
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
basic_istream<Elem, Tr>& unget();
```  
  
### Return Value  
 The stream ( **\*this**).  
  
### Remarks  
 The [unformatted input function](../standard-library/basic-istream-class.md) puts back the previous element in the stream, if possible, as if by calling `rdbuf` -> [sungetc](../standard-library/basic-streambuf-class.md#basic_streambuf__sungetc). If [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf) is a null pointer, or if the call to `sungetc` returns **traits_type::**[eof](../standard-library/basic-ios-class.md#basic_ios__eof), the function calls [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **badbit**). In any case, it returns **\*this**.  
  
 For information on how `unget` might fail, see [basic_streambuf::sungetc](../standard-library/basic-streambuf-class.md#basic_streambuf__sungetc).  
  
### Example  
  
```cpp  
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
  
```Output  
  
abc  
  
```  
  
```Output  
  
      abcType 'abc': abc  
abc  
```  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)

