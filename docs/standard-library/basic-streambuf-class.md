---
title: "basic_streambuf Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "basic_streambuf"
  - "streambuf/std::basic_streambuf"
  - "std.basic_streambuf"
  - "std::basic_streambuf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_streambuf class"
ms.assetid: 136af6c3-13bf-4501-9288-b93da26efac7
caps.latest.revision: 27
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
# basic_streambuf Class
Describes an abstract base class for deriving a stream buffer, which controls the transmission of elements to and from a specific representation of a stream.  
  
## Syntax  
  
```  
template <class Elem, class Tr = char_traits<Elem>>  
class basic_streambuf;  
```  
  
#### Parameters  
 `Elem`  
 A [char_type](#basic_streambuf__char_type).  
  
 `Tr`  
 The character [traits_type](#basic_streambuf__traits_type).  
  
## Remarks  
 The template class describes an abstract base class for deriving a stream buffer, which controls the transmission of elements to and from a specific representation of a stream. An object of class `basic_streambuf` helps control a stream with elements of type `Tr`, also known as [char_type](#basic_streambuf__char_type), whose character traits are determined by the class [char_traits](../standard-library/char-traits-struct.md), also known as [traits_type](#basic_streambuf__traits_type).  
  
 Every stream buffer conceptually controls two independent streams: one for extractions (input) and one for insertions (output). A specific representation may, however, make either or both of these streams inaccessible. It typically maintains some relationship between the two streams. What you insert into the output stream of a [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< `Elem`, `Tr`> object, for example, is what you later extract from its input stream. When you position one stream of a [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`> object, you position the other stream in tandem.  
  
 The public interface to template class `basic_streambuf` supplies the operations that are common to all stream buffers, however specialized. The protected interface supplies the operations needed for a specific representation of a stream to do its work. The protected virtual member functions let you tailor the behavior of a derived stream buffer for a specific representation of a stream. Each derived stream buffer in this library describes how it specializes the behavior of its protected virtual member functions. The default behavior for the base class, which is often to do nothing, is described in this topic.  
  
 The remaining protected member functions control copying to and from any storage supplied to buffer transmissions to and from streams. An input buffer, for example, is characterized by:  
  
- [eback](#basic_streambuf__eback), a pointer to the beginning of the buffer.  
  
- [gptr](#basic_streambuf__gptr), a pointer to the next element to read.  
  
- [egptr](#basic_streambuf__egptr), a pointer just past the end of the buffer.  
  
 Similarly, an output buffer is characterized by:  
  
- [pbase](#basic_streambuf__pbase), a pointer to the beginning of the buffer.  
  
- [pptr](#basic_streambuf__pptr), a pointer to the next element to write.  
  
- [epptr](#basic_streambuf__epptr), a pointer just past the end of the buffer.  
  
 For any buffer, the following protocol is used:  
  
-   If the next pointer is null, no buffer exists. Otherwise, all three pointers point into the same sequence. They can be safely compared for order.  
  
-   For an output buffer, if the next pointer compares less than the end pointer, you can store an element at the write position designated by the next pointer.  
  
-   For an input buffer, if the next pointer compares less than the end pointer, you can read an element at the read position designated by the next pointer.  
  
-   For an input buffer, if the beginning pointer compares less than the next pointer, you can put back an element at the putback position designated by the decremented next pointer.  
  
 Any protected virtual member functions you write for a class derived from `basic_streambuf`< `Elem`, `Tr`> must cooperate in maintaining this protocol.  
  
 An object of class `basic_streambuf`< `Elem`, `Tr`> stores the six pointers previously described. It also stores a locale object in an object of type [locale](../standard-library/locale-class.md) for potential use by a derived stream buffer.  
  
### Constructors  
  
|||  
|-|-|  
|[basic_streambuf](#basic_streambuf__basic_streambuf)|Constructs an object of type `basic_streambuf`.|  
  
### Typedefs  
  
|||  
|-|-|  
|[char_type](#basic_streambuf__char_type)|Associates a type name with the `Elem` template parameter.|  
|[int_type](#basic_streambuf__int_type)|Associates a type name within `basic_streambuf` scope with the `Elem` template parameter.|  
|[off_type](#basic_streambuf__off_type)|Associates a type name within `basic_streambuf` scope with the `Elem` template parameter.|  
|[pos_type](#basic_streambuf__pos_type)|Associates a type name within `basic_streambuf` scope with the `Elem` template parameter.|  
|[traits_type](#basic_streambuf__traits_type)|Associates a type name with the `Tr` template parameter.|  
  
### Member Functions  
  
|||  
|-|-|  
|[eback](#basic_streambuf__eback)|A protected function that returns a pointer to the beginning of the input buffer.|  
|[egptr](#basic_streambuf__egptr)|A protected function that returns a pointer just past the end of the input buffer.|  
|[epptr](#basic_streambuf__epptr)|A protected function that returns a pointer just past the end of the output buffer.|  
|[gbump](#basic_streambuf__gbump)|A protected function that adds ` count` to the next pointer for the input buffer.|  
|[getloc](#basic_streambuf__getloc)|Gets the `basic_streambuf` object's locale.|  
|[gptr](#basic_streambuf__gptr)|A protected function that returns a pointer to the next element of the input buffer.|  
|[imbue](#basic_streambuf__imbue)|A protected, virtual function called by [pubimbue](#basic_streambuf__pubimbue).|  
|[in_avail](#basic_streambuf__in_avail)|Returns the number of elements that are ready to be read from the buffer.|  
|[overflow](#basic_streambuf__overflow)|A protected virtual function that can be called when a new character is inserted into a full buffer.|  
|[pbackfail](#basic_streambuf__pbackfail)|A protected virtual member function that tries to put back an element into the input stream, then make it the current element (pointed to by the next pointer).|  
|[pbase](#basic_streambuf__pbase)|A protected function that returns a pointer to the beginning of the output buffer.|  
|[pbump](#basic_streambuf__pbump)|A protected function that adds `count` to the next pointer for the output buffer.|  
|[pptr](#basic_streambuf__pptr)|A protected function that returns a pointer to the next element of the output buffer.|  
|[pubimbue](#basic_streambuf__pubimbue)|Sets the `basic_streambuf` object's locale.|  
|[pubseekoff](#basic_streambuf__pubseekoff)|Calls [seekoff](#basic_streambuf__seekoff), a protected virtual function that is overridden in a derived class.|  
|[pubseekpos](#basic_streambuf__pubseekpos)|Calls [seekpos](#basic_streambuf__seekpos), a protected virtual function that is overridden in a derived class and resets the current pointer position.|  
|[pubsetbuf](#basic_streambuf__pubsetbuf)|Calls [setbuf](#basic_streambuf__setbuf), a protected virtual function that is overridden in a derived class.|  
|[pubsync](#basic_streambuf__pubsync)|Calls [sync](#basic_streambuf__sync), a protected virtual function that is overridden in a derived class and updates the external stream associated with this buffer.|  
|[sbumpc](#basic_streambuf__sbumpc)|Reads and returns the current element, moving the stream pointer.|  
|[seekoff](#basic_streambuf__seekoff)|The protected virtual member function tries to alter the current positions for the controlled streams.|  
|[seekpos](#basic_streambuf__seekpos)|The protected virtual member function tries to alter the current positions for the controlled streams.|  
|[setbuf](#basic_streambuf__setbuf)|The protected virtual member function performs an operation particular to each derived stream buffer.|  
|[setg](#basic_streambuf__setg)|A protected function that stores `_Gbeg` in the beginning pointer, `_Gnext` in the next pointer, and `_Gend` in the end pointer for the input buffer.|  
|[setp](#basic_streambuf__setp)|A protected function that stores `_Pbeg` in the beginning pointer and `_Pend` in the end pointer for the output buffer.|  
|[sgetc](#basic_streambuf__sgetc)|Returns current element without changing position in the stream.|  
|[sgetn](#basic_streambuf__sgetn)|Returns the number of elements read.|  
|[showmanyc](#basic_streambuf__showmanyc)|Protected virtual member function that returns a count of the number of characters that can be extracted from the input stream and ensure that the program will not be subject to an indefinite wait.|  
|[snextc](#basic_streambuf__snextc)|Reads the current element and returns the following element.|  
|[sputbackc](#basic_streambuf__sputbackc)|Puts a `char_type` in the stream.|  
|[sputc](#basic_streambuf__sputc)|Puts a character into the stream.|  
|[sputn](#basic_streambuf__sputn)|Puts a character string into the stream.|  
|[stossc](#basic_streambuf__stossc)|Move past the current element in the stream.|  
|[sungetc](#basic_streambuf__sungetc)|Gets a character from the stream.|  
|[swap](#basic_streambuf__swap)|Exchanges the values in this object for the values in the provided `basic_streambuf` object parameter.|  
|[sync](#basic_streambuf__sync)|A protected virtual function that tries to synchronize the controlled streams with any associated external streams.|  
|[uflow](#basic_streambuf__uflow)|A protected virtual function that extracts the current element from the input stream.|  
|[underflow](#basic_streambuf__underflow)|A protected virtual function that extracts the current element from the input stream.|  
|[xsgetn](#basic_streambuf__xsgetn)|A protected virtual function that extracts elements from the input stream.|  
|[xsputn](#basic_streambuf__xsputn)|A protected virtual function that inserts elements into the output stream.|  
  
### Operators  
  
|||  
|-|-|  
|[operator=](#basic_streambuf__operator_eq)|Assigns the values of this object from another `basic_streambuf` object.|  
  
## Requirements  
 **Header:** \<streambuf>  
  
 **Namespace:** std  
  
##  <a name="basic_streambuf__basic_streambuf"></a>  basic_streambuf::basic_streambuf  
 Constructs an object of type `basic_streambuf`.  
  
```  
basic_streambuf();

basic_streambuf(const basic_streambuf& right);
```  
  
### Parameters  
 ` right`  
 An lvalue reference to the `basic_streambuf` object that is used to set the values for this `basic_streambuf` object.  
  
### Remarks  
 The first protected constructor stores a null pointer in all pointers controlling the input buffer and the output buffer. It also stores `locale::classic` in the locale object. For more information, see [locale::classic](../standard-library/locale-class.md#locale__classic).  
  
 The second protected constructor copies the pointers and locale from ` right`.  
  
##  <a name="basic_streambuf__char_type"></a>  basic_streambuf::char_type  
 Associates a type name with the **Elem** template parameter.  
  
```  
typedef Elem char_type;  
```  
  
##  <a name="basic_streambuf__eback"></a>  basic_streambuf::eback  
 A protected function that returns a pointer to the beginning of the input buffer.  
  
```  
char_type *eback() const;
```  
  
### Return Value  
 A pointer to the beginning of the input buffer.  
  
##  <a name="basic_streambuf__egptr"></a>  basic_streambuf::egptr  
 A protected function that returns a pointer just past the end of the input buffer.  
  
```  
char_type *egptr() const;
```  
  
### Return Value  
 A pointer just past the end of the input buffer.  
  
##  <a name="basic_streambuf__epptr"></a>  basic_streambuf::epptr  
 A protected function that returns a pointer just past the end of the output buffer.  
  
```  
char_type *epptr() const;
```  
  
### Return Value  
 A pointer just past the end of the output buffer.  
  
##  <a name="basic_streambuf__gbump"></a>  basic_streambuf::gbump  
 A protected function that adds ` count` to the next pointer for the input buffer.  
  
```  
void gbump(int count);
```  
  
### Parameters  
 ` count`  
 The amount by which to advance the pointer.  
  
##  <a name="basic_streambuf__getloc"></a>  basic_streambuf::getloc  
 Gets the basic_streambuf object's locale.  
  
```  
locale getloc() const;
```  
  
### Return Value  
 The stored locale object.  
  
### Remarks  
 For related information, see [ios_base::getloc](../standard-library/ios-base-class.md#ios_base__getloc).  
  
### Example  
  
```cpp  
// basic_streambuf_getloc.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << cout.rdbuf( )->getloc( ).name( ).c_str( ) << endl;  
}  
```  
  
```Output  
C  
```  
  
##  <a name="basic_streambuf__gptr"></a>  basic_streambuf::gptr  
 A protected function that returns a pointer to the next element of the input buffer.  
  
```  
char_type *gptr() const;
```  
  
### Return Value  
 A pointer to the next element of the input buffer.  
  
##  <a name="basic_streambuf__imbue"></a>  basic_streambuf::imbue  
 A protected virtual function called by [pubimbue](#basic_streambuf__pubimbue).  
  
```  
virtual void imbue(const locale& _Loc);
```  
  
### Parameters  
 `_Loc`  
 A reference to a locale.  
  
### Remarks  
 The default behavior is to do nothing.  
  
##  <a name="basic_streambuf__in_avail"></a>  basic_streambuf::in_avail  
 Returns the number of elements that are ready to be read from the buffer.  
  
```  
streamsize in_avail();
```  
  
### Return Value  
 The number of elements that are ready to be read from the buffer.  
  
### Remarks  
 If a [read position](../standard-library/basic-streambuf-class.md) is available, the member function returns [egptr](#basic_streambuf__egptr) – [gptr](#basic_streambuf__gptr). Otherwise, it returns [showmanyc](#basic_streambuf__showmanyc).  
  
### Example  
  
```cpp  
// basic_streambuf_in_avail.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   char c;  
   // cin's buffer is empty, in_avail will return 0  
   cout << cin.rdbuf( )->in_avail( ) << endl;  
   cin >> c;  
   cout << cin.rdbuf( )->in_avail( ) << endl;  
}  
```  
  
##  <a name="basic_streambuf__int_type"></a>  basic_streambuf::int_type  
 Associates a type name within basic_streambuf scope with one of the types in a template parameter.  
  
```  
typedef typename traits_type::int_type int_type;  
```  
  
##  <a name="basic_streambuf__off_type"></a>  basic_streambuf::off_type  
 Associates a type name within basic_streambuf scope with one of the types in a template parameter.  
  
```  
typedef typename traits_type::off_type off_type;  
```  
  
##  <a name="basic_streambuf__operator_eq"></a>  basic_streambuf::operator=  
 Assigns the values of this object from another `basic_streambuf` object.  
  
```  
basic_streambuf& operator=(const basic_streambuf& right);
```  
  
### Parameters  
 ` right`  
 An lvalue reference to the `basic_streambuf` object that is used to assign values to this object.  
  
### Remarks  
 The protected member operator copies from ` right` the pointers that control the input buffer and the output buffer. It also stores ` right``.`[getloc()](#basic_streambuf__getloc) in the `locale object`. It returns `*this`.  
  
##  <a name="basic_streambuf__overflow"></a>  basic_streambuf::overflow  
 A protected virtual function that can be called when a new character is inserted into a full buffer.  
  
```  
virtual int_type overflow(int_type _Meta = traits_type::eof());
```  
  
### Parameters  
 `_Meta`  
 The character to insert into the buffer, or **traits_type::**[eof](../standard-library/char-traits-struct.md#char_traits__eof).  
  
### Return Value  
 If the function cannot succeed, it returns **traits_type::eof** or throws an exception. Otherwise, it returns **traits_type::**[not_eof](../standard-library/char-traits-struct.md#char_traits__not_eof)(_ *Meta*). The default behavior is to return **traits_type::eof**.  
  
### Remarks  
 If _ *Meta* does not compare equal to **traits_type::eof**, the protected virtual member function endeavors to insert the element **traits_type::**[to_char_type](../standard-library/char-traits-struct.md#char_traits__to_char_type)(\_ *Meta*) into the output stream. It can do so in various ways:  
  
-   If a `write position` is available, it can store the element into the write position and increment the next pointer for the output buffer.  
  
-   It can make a write position available by allocating new or additional storage for the output buffer.  
  
-   It can make a write position available by writing out, to some external destination, some or all of the elements between the beginning and next pointers for the output buffer.  
  
 The virtual overflow function, together with the [sync](#basic_streambuf__sync) and [underflow](#basic_streambuf__underflow) functions, defines the characteristics of the streambuf-derived class. Each derived class might implement overflow differently, but the interface with the calling stream class is the same.  
  
 The `overflow` function is most frequently called by public `streambuf` functions like `sputc` and `sputn` when the put area is full, but other classes, including the stream classes, can call `overflow` anytime.  
  
 The function consumes the characters in the put area between the `pbase` and `pptr` pointers and then reinitializes the put area. The `overflow` function must also consume `nCh` (if `nCh` is not `EOF`), or it might choose to put that character in the new put area so that it will be consumed on the next call.  
  
 The definition of consume varies among derived classes. For example, the `filebuf` class writes its characters to a file, while the `strstreambuf` class keeps them in its buffer and (if the buffer is designated as dynamic) expands the buffer in response to a call to overflow. This expansion is achieved by freeing the old buffer and replacing it with a new, larger one. The pointers are adjusted as necessary.  
  
##  <a name="basic_streambuf__pbackfail"></a>  basic_streambuf::pbackfail  
 A protected virtual member function that tries to put back an element into the input stream, then make it the current element (pointed to by the next pointer).  
  
```  
virtual int_type pbackfail(int_type _Meta = traits_type::eof());
```  
  
### Parameters  
 `_Meta`  
 The character to insert into the buffer, or **traits_type::**[eof](../standard-library/char-traits-struct.md#char_traits__eof).  
  
### Return Value  
 If the function cannot succeed, it returns **traits_type::eof** or throws an exception. Otherwise, it returns some other value. The default behavior is to return **traits_type::eof**.  
  
### Remarks  
 If _ *Meta* compares equal to **traits_type::eof**, the element to push back is effectively the one already in the stream before the current element. Otherwise, that element is replaced by **traits_type::**[to_char_type](../standard-library/char-traits-struct.md#char_traits__to_char_type)(\_ *Meta*). The function can put back an element in various ways:  
  
-   If a putback position is available, it can store the element into the putback position and decrement the next pointer for the input buffer.  
  
-   It can make a putback position available by allocating new or additional storage for the input buffer.  
  
-   For a stream buffer with common input and output streams, it can make a putback position available by writing out, to some external destination, some or all of the elements between the beginning and next pointers for the output buffer.  
  
##  <a name="basic_streambuf__pbase"></a>  basic_streambuf::pbase  
 A protected function that returns a pointer to the beginning of the output buffer.  
  
```  
char_type *pbase() const;
```  
  
### Return Value  
 A pointer to the beginning of the output buffer.  
  
##  <a name="basic_streambuf__pbump"></a>  basic_streambuf::pbump  
 A protected function that adds ` count` to the next pointer for the output buffer.  
  
```  
void pbump(int count);
```  
  
### Parameters  
 ` count`  
 The number of characters by which to move the write position forward.  
  
##  <a name="basic_streambuf__pos_type"></a>  basic_streambuf::pos_type  
 Associates a type name within basic_streambuf scope with one of the types in a template parameter.  
  
```  
typedef typename traits_type::pos_type pos_type;  
```  
  
##  <a name="basic_streambuf__pptr"></a>  basic_streambuf::pptr  
 A protected function that returns a pointer to the next element of the output buffer.  
  
```  
char_type *pptr() const;
```  
  
### Return Value  
 A pointer to the next element of the output buffer.  
  
##  <a name="basic_streambuf__pubimbue"></a>  basic_streambuf::pubimbue  
 Sets the basic_streambuf object's locale.  
  
```  
locale pubimbue(const locale& _Loc);
```  
  
### Parameters  
 `_Loc`  
 A reference to a locale.  
  
### Return Value  
 The previous value stored in the locale object.  
  
### Remarks  
 The member function stores _ *Loc* in the locale object and calls [imbue](#basic_streambuf__imbue).  
  
### Example  
  See [basic_ios::imbue](../standard-library/basic-ios-class.md#basic_ios__imbue) for an example that uses `pubimbue`.  
  
##  <a name="basic_streambuf__pubseekoff"></a>  basic_streambuf::pubseekoff  
 Calls [seekoff](#basic_streambuf__seekoff), a protected virtual function that is overridden in a derived class.  
  
```  
pos_type pubseekoff(off_type _Off,
    ios_base::seekdir _Way,
    ios_base::openmode _Which = ios_base::in | ios_base::out);
```  
  
### Parameters  
 `_Off`  
 The position to seek for relative to `_Way`.  
  
 `_Way`  
 The starting point for offset operations. See [seekdir](../standard-library/ios-base-class.md#ios_base__seekdir) for possible values.  
  
 `_Which`  
 Specifies the mode for the pointer position. The default is to allow you to modify the read and write positions.  
  
### Return Value  
 Returns the new position or an invalid stream position ( [seekoff](#basic_streambuf__seekoff)(_ *Off*, `_Way`, `_Which`) ).  
  
### Remarks  
 Moves the pointer relative to `_Way`.  
  
##  <a name="basic_streambuf__pubseekpos"></a>  basic_streambuf::pubseekpos  
 Calls [seekpos](#basic_streambuf__seekpos), a protected virtual function that is overridden in a derived class, and resets the current pointer position.  
  
```  
pos_type pubseekpos(pos_type _Sp, ios_base::openmode _Which = ios_base::in | ios_base::out);
```  
  
### Parameters  
 `_Sp`  
 The position to seek for.  
  
 `_Which`  
 Specifies the mode for the pointer position. The default is to allow you to modify the read and write positions.  
  
### Return Value  
 The new position or an invalid stream position. To determine if the stream position is invalid, compare the return value with `pos_type(off_type(-1))`.  
  
### Remarks  
 The member function returns [seekpos](#basic_streambuf__seekpos)(_ *Sp*, `_Which`).  
  
##  <a name="basic_streambuf__pubsetbuf"></a>  basic_streambuf::pubsetbuf  
 Calls [setbuf](#basic_streambuf__setbuf), a protected virtual function that is overridden in a derived class.  
  
```  
basic_streambuf<Elem, Tr> *pubsetbuf(
    char_type* _Buffer,  
    streamsize count);
```  
  
### Parameters  
 `_Buffer`  
 A pointer to `char_type` for this instantiation.  
  
 ` count`  
 The size of the buffer.  
  
### Return Value  
 Returns [setbuf](#basic_streambuf__setbuf)( `_Buffer`, ` count`).  
  
##  <a name="basic_streambuf__pubsync"></a>  basic_streambuf::pubsync  
 Calls [sync](#basic_streambuf__sync), a protected virtual function that is overridden in a derived class, and updates the external stream associated with this buffer.  
  
```  
int pubsync();
```  
  
### Return Value  
 Returns [sync](#basic_streambuf__sync) or –1 if failure.  
  
##  <a name="basic_streambuf__sbumpc"></a>  basic_streambuf::sbumpc  
 Reads and returns the current element, moving the stream pointer.  
  
```  
int_type sbumpc();
```  
  
### Return Value  
 The current element.  
  
### Remarks  
 If a read position is available, the member function returns **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#char_traits__to_int_type)( **\***[gptr](#basic_streambuf__gptr)) and increments the next pointer for the input buffer. Otherwise, it returns [uflow](#basic_streambuf__uflow).  
  
### Example  
  
```cpp  
// basic_streambuf_sbumpc.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   int i = 0;  
   i = cin.rdbuf( )->sbumpc( );  
   cout << i << endl;  
}  
```  
  
```Output  
  
3  
  
```  
  
```Output  
  
      33  
51  
```  
  
##  <a name="basic_streambuf__seekoff"></a>  basic_streambuf::seekoff  
 A protected virtual member function that tries to alter the current positions for the controlled streams.  
  
```  
virtual pos_type seekoff(
    off_type _Off,  
    ios_base::seekdir _Way,  
    ios_base::openmode _Which = ios_base::in | ios_base::out);
```  
  
### Parameters  
 `_Off`  
 The position to seek for relative to `_Way`.  
  
 `_Way`  
 The starting point for offset operations. See [seekdir](../standard-library/ios-base-class.md#ios_base__seekdir) for possible values.  
  
 `_Which`  
 Specifies the mode for the pointer position. The default is to allow you to modify the read and write positions.  
  
### Return Value  
 Returns the new position or an invalid stream position ( `seekoff` (_ *Off*, `_Way`, `_Which`) ).  
  
### Remarks  
 The new position is determined as follows:  
  
-   If `_Way` == `ios_base::beg`, the new position is the beginning of the stream plus _ *Off*.  
  
-   If `_Way` == `ios_base::cur`, the new position is the current stream position plus _ *Off*.  
  
-   If `_Way` == `ios_base::end`, the new position is the end of the stream plus _ *Off*.  
  
 Typically, if **which & ios_base::in** is nonzero, the input stream is affected, and if **which & ios_base::out** is nonzero, the output stream is affected. Actual use of this parameter varies among derived stream buffers, however.  
  
 If the function succeeds in altering the stream position or positions, it returns the resulting stream position or one of the resulting stream positions. Otherwise, it returns an invalid stream position. The default behavior is to return an invalid stream position.  
  
##  <a name="basic_streambuf__seekpos"></a>  basic_streambuf::seekpos  
 A protected virtual member function that tries to alter the current positions for the controlled streams.  
  
```  
virtual pos_type seekpos(pos_type _Sp, ios_base::openmode _Which = ios_base::in | ios_base::out);
```  
  
### Parameters  
 `_Sp`  
 The position to seek for.  
  
 `_Which`  
 Specifies the mode for the pointer position. The default is to allow you to modify the read and write positions.  
  
### Return Value  
 The new position, or an invalid stream position. To determine if the stream position is invalid, compare the return value with `pos_type(off_type(-1))`.  
  
### Remarks  
 The new position is _ *Sp*.  
  
 Typically, if **which & ios_base::in** is nonzero, the input stream is affected, and if **which & ios_base::out** is nonzero, the output stream is affected. Actual use of this parameter varies among derived stream buffers, however.  
  
 If the function succeeds in altering the stream position or positions, it returns the resulting stream position or one of the resulting stream positions. Otherwise, it returns an invalid stream position (-1). The default behavior is to return an invalid stream position.  
  
##  <a name="basic_streambuf__setbuf"></a>  basic_streambuf::setbuf  
 A protected virtual member function that performs an operation particular to each derived stream buffer.  
  
```  
virtual basic_streambuf<Elem, Tr> *setbuf(
    char_type* _Buffer,  
    streamsize count);
```  
  
### Parameters  
 `_Buffer`  
 Pointer to a buffer.  
  
 ` count`  
 Size of the buffer.  
  
### Return Value  
 The default behavior is to return **this**.  
  
### Remarks  
 See [basic_filebuf](../standard-library/basic-filebuf-class.md). `setbuf` provides an area of memory for the `streambuf` object to use. How the buffer is used in defined in the derived classes.  
  
##  <a name="basic_streambuf__setg"></a>  basic_streambuf::setg  
 A protected function that stores _ *Gbeg* in the beginning pointer, `_Gnext` in the next pointer, and `_Gend` in the end pointer for the input buffer.  
  
```  
void setg(char_type* _Gbeg,
    char_type* _Gnext,
    char_type* _Gend);
```  
  
### Parameters  
 *_Gbeg*  
 A pointer to the beginning of the buffer.  
  
 `_Gnext`  
 A pointer to somewhere in the middle of the buffer.  
  
 `_Gend`  
 A pointer to the end of the buffer.  
  
##  <a name="basic_streambuf__setp"></a>  basic_streambuf::setp  
 A protected function that stores `_Pbeg` in the beginning pointer and `_Pend` in the end pointer for the output buffer.  
  
```  
void setp(char_type* _Pbeg, char_type* _Pend);
```  
  
### Parameters  
 `_Pbeg`  
 A pointer to the beginning of the buffer.  
  
 `_Pend`  
 A pointer to the end of the buffer.  
  
##  <a name="basic_streambuf__sgetc"></a>  basic_streambuf::sgetc  
 Returns current element without changing position in the stream.  
  
```  
int_type sgetc();
```  
  
### Return Value  
 The current element.  
  
### Remarks  
 If a read position is available, the member function returns **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#char_traits__to_int_type)( `*`[gptr](#basic_streambuf__gptr)). Otherwise, it returns [underflow](#basic_streambuf__underflow).  
  
### Example  
  
```cpp  
// basic_streambuf_sgetc.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main( )   
{  
   using namespace std;  
   ifstream myfile( "basic_streambuf_sgetc.txt", ios::in );  
  
   char i = myfile.rdbuf( )->sgetc( );  
   cout << i << endl;  
   i = myfile.rdbuf( )->sgetc( );  
   cout << i << endl;  
}  
```  
  
##  <a name="basic_streambuf__sgetn"></a>  basic_streambuf::sgetn  
 Extracts up to ` count` characters from the input buffer and stores them in the provided buffer ` ptr`.  
  
 This method is potentially unsafe, as it relies on the caller to check that the passed values are correct.  
  
```  
streamsize sgetn(
    char_type* ptr,  
    streamsize count);
```  
  
### Parameters  
 ` ptr`  
 The buffer to contain the extracted characters.  
  
 ` count`  
 The number of elements to read.  
  
### Return Value  
 The number of elements read. See [streamsize](../standard-library/ios-typedefs.md#streamsize) for more information.  
  
### Remarks  
 The member function returns [xsgetn](#basic_streambuf__xsgetn)( ` ptr`, ` count`).  
  
### Example  
  
```cpp  
// basic_streambuf_sgetn.cpp  
// compile with: /EHsc /W3  
#include <iostream>  
#include <fstream>  
  
int main()  
{  
    using namespace std;  
  
    ifstream myfile("basic_streambuf_sgetn.txt", ios::in);  
    char a[10];  
  
    // Extract 3 characters from myfile and store them in a.  
    streamsize i = myfile.rdbuf()->sgetn(&a[0], 3);  // C4996  
    a[i] = myfile.widen('\0');  
  
    // Display the size and contents of the buffer passed to sgetn.  
    cout << i << " " << a << endl;  
  
    // Display the contents of the original input buffer.  
    cout << myfile.rdbuf() << endl;  
}  
```  
  
##  <a name="basic_streambuf__showmanyc"></a>  basic_streambuf::showmanyc  
 A protected virtual member function that returns a count of the number of characters that can be extracted from the input stream and ensure that the program will not be subject to an indefinite wait.  
  
```  
virtual streamsize showmanyc();
```  
  
### Return Value  
 The default behavior is to return zero.  
  
##  <a name="basic_streambuf__snextc"></a>  basic_streambuf::snextc  
 Reads the current element and returns the following element.  
  
```  
int_type snextc();
```  
  
### Return Value  
 The next element in the stream.  
  
### Remarks  
 The member function calls [sbumpc](#basic_streambuf__sbumpc) and, if that function returns **traits_type::**[eof](../standard-library/char-traits-struct.md#char_traits__eof), returns **traits_type::eof**. Otherwise, it returns [sgetc](#basic_streambuf__sgetc).  
  
### Example  
  
```cpp  
// basic_streambuf_snextc.cpp  
// compile with: /EHsc  
#include <iostream>  
int main( )   
{  
   using namespace std;  
   int i = 0;  
   i = cin.rdbuf( )->snextc( );  
   // cout << ( int )char_traits<char>::eof << endl;  
   cout << i << endl;  
}  
```  
  
```Output  
  
aa  
  
```  
  
```Output  
  
aa97  
```  
  
##  <a name="basic_streambuf__sputbackc"></a>  basic_streambuf::sputbackc  
 Puts a char_type in the stream.  
  
```  
int_type sputbackc(char_type _Ch);
```  
  
### Parameters  
 `_Ch`  
 The character.  
  
### Return Value  
 Returns the character or failure.  
  
### Remarks  
 If a putback position is available and `_Ch` compares equal to the character stored in that position, the member function decrements the next pointer for the input buffer and returns **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#char_traits__to_int_type)( `_Ch`). Otherwise, it returns [pbackfail](#basic_streambuf__pbackfail)( `_Ch`).  
  
### Example  
  
```cpp  
// basic_streambuf_sputbackc.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main( )  
{  
    using namespace std;  
  
    ifstream myfile("basic_streambuf_sputbackc.txt",  
        ios::in);  
  
    int i = myfile.rdbuf()->sbumpc();  
    cout << (char)i << endl;  
    int j = myfile.rdbuf()->sputbackc('z');  
    if (j == 'z')  
    {  
        cout << "it worked" << endl;  
    }  
    i = myfile.rdbuf()->sgetc();  
    cout << (char)i << endl;  
}  
```  
  
##  <a name="basic_streambuf__sputc"></a>  basic_streambuf::sputc  
 Puts a character into the stream.  
  
```  
int_type sputc(char_type _Ch);
```  
  
### Parameters  
 `_Ch`  
 The character.  
  
### Return Value  
 Returns the character, if successful.  
  
### Remarks  
 If a `write position` is available, the member function stores `_Ch` in the write position, increments the next pointer for the output buffer, and returns **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#char_traits__to_int_type)( `_Ch`). Otherwise, it returns [overflow](#basic_streambuf__overflow)( `_Ch`).  
  
### Example  
  
```cpp  
// basic_streambuf_sputc.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main( )   
{  
   using namespace std;  
  
   int i = cout.rdbuf( )->sputc( 'a' );  
   cout << endl << ( char )i << endl;  
}  
```  
  
```Output  
a  
a  
```  
  
##  <a name="basic_streambuf__sputn"></a>  basic_streambuf::sputn  
 Puts a character string into the stream.  
  
```  
streamsize sputn(const char_type* ptr, streamsize count);
```  
  
### Parameters  
 ` ptr`  
 The character string.  
  
 ` count`  
 The count of characters.  
  
### Return Value  
 The number of characters actually inserted into the stream.  
  
### Remarks  
 The member function returns [xsputn](#basic_streambuf__xsputn)( ` ptr`, ` count`). See the Remarks section of this member for more information.  
  
### Example  
  
```cpp  
// basic_streambuf_sputn.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main()  
{  
    using namespace std;  
  
    streamsize i = cout.rdbuf()->sputn("test", 4);  
    cout << endl << i << endl;  
}  
```  
  
```Output  
test  
4  
```  
  
##  <a name="basic_streambuf__stossc"></a>  basic_streambuf::stossc  
 Move past the current element in the stream.  
  
```  
void stossc();
```  
  
### Remarks  
 The member function calls [sbumpc](#basic_streambuf__sbumpc). Note that an implementation is not required to supply this member function.  
  
### Example  
  
```cpp  
// basic_streambuf_stossc.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main( )   
{  
   using namespace std;  
   ifstream myfile( "basic_streambuf_stossc.txt", ios::in );  
  
   myfile.rdbuf( )->stossc( );  
   char i = myfile.rdbuf( )->sgetc( );  
   cout << i << endl;  
}  
```  
  
##  <a name="basic_streambuf__sungetc"></a>  basic_streambuf::sungetc  
 Gets a character from the stream.  
  
```  
int_type sungetc();
```  
  
### Return Value  
 Returns either the character or failure.  
  
### Remarks  
 If a putback position is available, the member function decrements the next pointer for the input buffer and returns `traits_type::`[to_int_type](../standard-library/char-traits-struct.md#char_traits__to_int_type)( `*`[gptr](#basic_streambuf__gptr)). However, it is not always possible to determine the last character read so that it can be captured in the state of the current buffer. If this is true, then the function returns [pbackfail](#basic_streambuf__pbackfail). To avoid this situation, keep track of the character to put back and call `sputbackc(ch)`, which will not fail provided you don't call it at the beginning of the stream and you don't try to put back more than one character.  
  
### Example  
  
```cpp  
// basic_streambuf_sungetc.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main( )   
{  
   using namespace std;  
  
   ifstream myfile( "basic_streambuf_sungetc.txt", ios::in );  
  
   // Read and increment  
   int i = myfile.rdbuf( )->sbumpc( );  
   cout << ( char )i << endl;  
  
   // Read and increment  
   i = myfile.rdbuf( )->sbumpc( );  
   cout << ( char )i << endl;  
  
   // Decrement, read, and do not increment  
   i = myfile.rdbuf( )->sungetc( );  
   cout << ( char )i << endl;  
  
   i = myfile.rdbuf( )->sungetc( );   
   cout << ( char )i << endl;  
  
   i = myfile.rdbuf( )->sbumpc( );  
   cout << ( char )i << endl;  
}  
```  
  
##  <a name="basic_streambuf__swap"></a>  basic_streambuf::swap  
 Exchanges the values in this object for the values in the provided `basic_streambuf` object.  
  
```  
void swap(basic_streambuf& right);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|` right`|An lvalue reference to the `basic_streambuf` object that is used to exchange values.|  
  
### Remarks  
 The protected member function exchanges with ` right` all the pointers controlling the `input buffer` and the `output buffer`. It also exchanges ` right``.`[getloc()](#basic_streambuf__getloc) with the `locale` object.  
  
##  <a name="basic_streambuf__sync"></a>  basic_streambuf::sync  
 A protected virtual function that tries to synchronize the controlled streams with any associated external streams.  
  
```  
virtual int sync();
```  
  
### Return Value  
 If the function cannot succeed, it returns -1. The default behavior is to return zero.  
  
### Remarks  
 `sync` involves writing out any elements between the beginning and next pointers for the output buffer. It does not involve putting back any elements between the next and end pointers for the input buffer.  
  
##  <a name="basic_streambuf__traits_type"></a>  basic_streambuf::traits_type  
 Associates a type name with the **Tr** template parameter.  
  
```  
typedef Tr traits_type;  
```  
  
##  <a name="basic_streambuf__uflow"></a>  basic_streambuf::uflow  
 A protected virtual function that extracts the current element from the input stream.  
  
```  
virtual int_type uflow();
```  
  
### Return Value  
 The current element.  
  
### Remarks  
 The protected virtual member function tries to extract the current element **ch** from the input stream, then advance the current stream position, and return the element as **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#char_traits__to_int_type)( **ch**). It can do so in various ways:  
  
-   If a read position is available, it takes **ch** as the element stored in the read position and advances the next pointer for the input buffer.  
  
-   It can read an element directly, from some external source, and deliver it as the value **ch**.  
  
-   For a stream buffer with common input and output streams, it can make a read position available by writing out, to some external destination, some or all of the elements between the beginning and next pointers for the output buffer. Or it can allocate new or additional storage for the input buffer. The function then reads in, from some external source, one or more elements.  
  
 If the function cannot succeed, it returns **traits_type::**[eof](../standard-library/char-traits-struct.md#char_traits__eof), or throws an exception. Otherwise, it returns the current element `ch` in the input stream, converted as described above, and advances the next pointer for the input buffer. The default behavior is to call [underflow](#basic_streambuf__underflow) and, if that function returns **traits_type::eof**, to return **traits_type::eof**. Otherwise, the function returns the current element **ch** in the input stream, converted as previously described, and advances the next pointer for the input buffer.  
  
##  <a name="basic_streambuf__underflow"></a>  basic_streambuf::underflow  
 Protected, virtual function to extract the current element from the input stream.  
  
```  
virtual int_type underflow();
```  
  
### Return Value  
 The current element.  
  
### Remarks  
 The protected virtual member function endeavors to extract the current element **ch** from the input stream, without advancing the current stream position, and return it as `traits_type::`[to_int_type](../standard-library/char-traits-struct.md#char_traits__to_int_type)( **ch**). It can do so in various ways:  
  
-   If a read position is available, **ch** is the element stored in the read position. For more information on this, see the Remarks section of the [basic_streambuf Class](../standard-library/basic-streambuf-class.md).  
  
-   It can make a read position available by allocating new or additional storage for the input buffer, then reading in, from some external source, one or more elements. For more information on this, see the Remarks section of the [basic_streambuf Class](../standard-library/basic-streambuf-class.md).  
  
 If the function cannot succeed, it returns `traits_type::`[eof](../standard-library/char-traits-struct.md#char_traits__eof)`()` or throws an exception. Otherwise, it returns the current element in the input stream, converted as previously described. The default behavior is to return `traits_type::eof()`.  
  
 The virtual `underflow` function, with the [sync](#basic_streambuf__sync) and [overflow](#basic_streambuf__overflow) functions, defines the characteristics of the `streambuf`-derived class. Each derived class might implement `underflow` differently, but the interface with the calling stream class is the same.  
  
 The `underflow` function is most frequently called by public `streambuf` functions like [sgetc](#basic_streambuf__sgetc) and [sgetn](#basic_streambuf__sgetn) when the get area is empty, but other classes, including the stream classes, can call `underflow` anytime.  
  
 The `underflow` function supplies the get area with characters from the input source. If the get area contains characters, `underflow` returns the first character. If the get area is empty, it fills the get area and returns the next character (which it leaves in the get area). If there are no more characters available, then `underflow` returns `EOF` and leaves the get area empty.  
  
 In the `strstreambuf` class, `underflow` adjusts the [egptr](#basic_streambuf__egptr) pointer to access storage that was dynamically allocated by a call to `overflow`.  
  
##  <a name="basic_streambuf__xsgetn"></a>  basic_streambuf::xsgetn  
 Protected, virtual function to extract elements from the input stream.  
  
 This method is potentially unsafe, as it relies on the caller to check that the passed values are correct.  
  
```  
virtual streamsize xsgetn(
    char_type* ptr,  
    streamsize count);
```  
  
### Parameters  
 ` ptr`  
 The buffer to contain the extracted characters.  
  
 ` count`  
 The number of elements to extract.  
  
### Return Value  
 The number of elements extracted.  
  
### Remarks  
 The protected virtual member function extracts up to ` count` elements from the input stream, as if by repeated calls to [sbumpc](#basic_streambuf__sbumpc), and stores them in the array beginning at ` ptr`. It returns the number of elements actually extracted.  
  
##  <a name="basic_streambuf__xsputn"></a>  basic_streambuf::xsputn  
 Protected, virtual function to insert elements into the output stream.  
  
```  
virtual streamsize xsputn(const char_type* ptr, streamsize count);
```  
  
### Parameters  
 ` ptr`  
 Pointer to elements to insert.  
  
 ` count`  
 Number of elements to insert.  
  
### Return Value  
 The number of elements actually inserted into the stream.  
  
### Remarks  
 The protected virtual member function inserts up to ` count` elements into the output stream, as if by repeated calls to [sputc](#basic_streambuf__sputc), from the array beginning at ` ptr`. The insertion of characters into the output stream stops once all ` count` characters have been written, or if calling `sputc( count)` would return `traits::eof()`. It returns the number of elements actually inserted.  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)

