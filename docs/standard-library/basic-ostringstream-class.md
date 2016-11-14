---
title: "basic_ostringstream Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "basic_ostringstream"
  - "std.basic_ostringstream"
  - "sstream/std::basic_ostringstream"
  - "std::basic_ostringstream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_ostringstream class"
ms.assetid: aea699f7-350f-432a-acca-adbae7b483fb
caps.latest.revision: 19
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
# basic_ostringstream Class
Describes an object that controls insertion of elements and encoded objects into a stream buffer of class [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.  
  
## Syntax  
  
```  
template <class Elem, class Tr = char_traits<Elem>, class Alloc = allocator<Elem>>  
class basic_ostringstream : public basic_ostream<Elem, Tr>  
```  
  
#### Parameters  
 `Alloc`  
 The allocator class.  
  
 `Elem`  
 The type of the basic element of the string.  
  
 *Tr*  
 The character traits specialized on the basic element of the string.  
  
## Remarks  
 The class describes an object that controls insertion of elements and encoded objects into a stream buffer, with elements of type **Elem**, whose character traits are determined by the class **Tr**, and whose elements are allocated by an allocator of class `Alloc`. The object stores an object of class basic_stringbuf< **Elem**, **Tr**, `Alloc`>.  
  
### Constructors  
  
|||  
|-|-|  
|[basic_ostringstream](#basic_ostringstream__basic_ostringstream)|Constructs an object of type `basic_ostringstream`.|  
  
### Typedefs  
  
|||  
|-|-|  
|[allocator_type](#basic_ostringstream__allocator_type)|The type is a synonym for the template parameter `Alloc`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[rdbuf](#basic_ostringstream__rdbuf)|Returns the address of the stored stream buffer of type `pointer` to [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< `Elem`, `Tr`, `Alloc`>.|  
|[str](#basic_ostringstream__str)|Sets or gets the text in a string buffer without changing the write position.|  
  
## Requirements  
 **Header:** \<sstream>  
  
 **Namespace:** std  
  
##  <a name="basic_ostringstream__allocator_type"></a>  basic_ostringstream::allocator_type  
 The type is a synonym for the template parameter `Alloc`.  
  
```  
typedef Alloc allocator_type;  
```  
  
##  <a name="basic_ostringstream__basic_ostringstream"></a>  basic_ostringstream::basic_ostringstream  
 Constructs an object of type basic_ostringstream.  
  
```  
explicit basic_ostringstream(ios_base::openmode _Mode = ios_base::out);

explicit basic_ostringstream(const basic_string<Elem, Tr, Alloc>& str, ios_base::openmode _Mode = ios_base::out);
```  
  
### Parameters  
 `_Mode`  
 One of the enumerations in [ios_base::openmode](../standard-library/ios-base-class.md#ios_base__openmode).  
  
 ` str`  
 An object of type `basic_string`.  
  
### Remarks  
 The first constructor initializes the base class by calling [basic_ostream](../standard-library/basic-ostream-class.md)( **sb**), where **sb** is the stored object of class [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>. It also initializes **sb** by calling basic_stringbuf< **Elem**, **Tr**, `Alloc`>( `_Mode` &#124; `ios_base::out`).  
  
 The second constructor initializes the base class by calling basic_ostream( **sb**). It also initializes **sb** by calling basic_stringbuf< **Elem**, **Tr**, `Alloc`>(_ *Str*, `_Mode` &#124; `ios_base::out`).  
  
##  <a name="basic_ostringstream__rdbuf"></a>  basic_ostringstream::rdbuf  
 Returns the address of the stored stream buffer of type **pointer** to [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.  
  
```  
basic_stringbuf<Elem, Tr, Alloc> *rdbuf() const;
```  
  
### Return Value  
 The address of the stored stream buffer, of type **pointer** to basic_stringbuf< **Elem**, **Tr**, `Alloc`>.  
  
### Remarks  
 The member function returns the address of the stored stream buffer of type **pointer** to basic_stringbuf< **Elem**, **Tr**, `Alloc`>.  
  
### Example  
  See [basic_filebuf::close](../standard-library/basic-filebuf-class.md#basic_filebuf__close) for an example that uses `rdbuf`.  
  
##  <a name="basic_ostringstream__str"></a>  basic_ostringstream::str  
 Sets or gets the text in a string buffer without changing the write position.  
  
```  
basic_string<Elem, Tr, Alloc> str() const;

 
void str(
    const basic_string<Elem, Tr, Alloc>& _Newstr);
```  
  
### Parameters  
 `_Newstr`  
 The new string.  
  
### Return Value  
 Returns an object of class [basic_string](../standard-library/basic-string-class.md)< **Elem**, **Tr**, `Alloc`>, whose controlled sequence is a copy of the sequence controlled by **\*this**.  
  
### Remarks  
 The first member function returns [rdbuf](#basic_ostringstream__rdbuf) -> [str](../standard-library/basic-stringbuf-class.md#basic_stringbuf__str). The second member function calls `rdbuf` -> **str**( `_Newstr`).  
  
### Example  
  See [basic_stringbuf::str](../standard-library/basic-stringbuf-class.md#basic_stringbuf__str) for an example that uses **str**.  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)

