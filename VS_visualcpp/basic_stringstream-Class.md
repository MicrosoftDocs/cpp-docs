---
title: "basic_stringstream Class"
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
ms.assetid: 49629814-ca37-45c5-931b-4ff894e6ebd2
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
# basic_stringstream Class
Describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [basic_stringbuf](../VS_visualcpp/basic_stringbuf-Class.md)< **Elem**, **Tr**, `Alloc`>.  
  
## Syntax  
  
```  
template <    class  Elem ,     class  Tr  = char _ traits< Elem >,     class  Alloc  = allocator< Elem >  >    class basic _ stringstream : public basic _ iostream< Elem ,  Tr >  
  
```  
  
#### Parameters  
 `Alloc`  
 The allocator class.  
  
 `Elem`  
 The type of the basic element of the string.  
  
 *Tr*  
 The character traits specialized on the basic element of the string.  
  
## Remarks  
 The template class describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [basic_stringbuf](../VS_visualcpp/basic_stringbuf-Class.md)< **Elem**, **Tr**, `Alloc`>, with elements of type **Elem**, whose character traits are determined by the class **Tr**, and whose elements are allocated by an allocator of class `Alloc`. The object stores an object of class basic_stringbuf< **Elem**, **Tr**, `Alloc`>.  
  
### Constructors  
  
|||  
|-|-|  
|[basic_stringstream](#basic_stringstream__basic_stringstream)|Constructs an object of type `basic_stringstream`.|  
  
### Typedefs  
  
|||  
|-|-|  
|[allocator_type](#basic_stringstream__allocator_type)|The type is a synonym for the template parameter `Alloc`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[rdbuf](#basic_stringstream__rdbuf)|Returns the address of the stored stream buffer of type `pointer` to [basic_stringbuf](../VS_visualcpp/basic_stringbuf-Class.md)< `Elem`, `Tr`, `Alloc`>.|  
|[str](#basic_stringstream__str)|Sets or gets the text in a string buffer without changing the write position.|  
  
## Requirements  
 **Header:** <sstream\>  
  
 **Namespace:** std  
  
##  <a name="basic_stringstream__allocator_type"></a>  basic_stringstream::allocator_type  
 The type is a synonym for the template parameter `Alloc`.  
  
```  
typedef  Alloc  allocator_type;  
  
```  
  
##  <a name="basic_stringstream__basic_stringstream"></a>  basic_stringstream::basic_stringstream  
 Constructs an object of type `basic_stringstream`.  
  
```  
explicit basic _ stringstream(    ios _ base::openmode  _Mode  = ios _ base::in | ios _ base::out ); explicit basic _ stringstream(    const basic _ string<Elem, Tr, Alloc>&  _Str ,    ios _ base::openmode  _Mode  = ios _ base::in | ios _ base::out );  
  
```  
  
### Parameters  
 `_Mode`  
 One of the enumerations in [ios_base::openmode](../VS_visualcpp/ios_base-Class.md#ios_base__openmode).  
  
 `_Str`  
 An object of type `basic_string`.  
  
### Remarks  
 The first constructor initializes the base class by calling [basic_iostream](../VS_visualcpp/basic_iostream-Class.md)( **sb**), where **sb** is the stored object of class [basic_stringbuf](../VS_visualcpp/basic_stringbuf-Class.md)< **Elem**, **Tr**, `Alloc`>. It also initializes **sb** by calling basic_stringbuf< **Elem**, **Tr**, `Alloc`>( `_Mode`).  
  
 The second constructor initializes the base class by calling basic_iostream( **sb**). It also initializes **sb** by calling basic_stringbuf< **Elem**, **Tr**, `Alloc`>(_                        *Str*, `_Mode`).  
  
##  <a name="basic_stringstream__rdbuf"></a>  basic_stringstream::rdbuf  
 Returns the address of the stored stream buffer of type **pointer** to [basic_stringbuf](../VS_visualcpp/basic_stringbuf-Class.md)< **Elem**, **Tr**, `Alloc`>.  
  
```  
basic_stringbuf<Elem, Tr, Alloc> *rdbuf( ) const;  
```  
  
### Return Value  
 The address of the stored stream buffer of type **pointer** to basic_stringbuf< **Elem**, **Tr**, `Alloc`>.  
  
### Example  
  See [basic_filebuf::close](../VS_visualcpp/basic_filebuf-Class.md#basic_filebuf__close) for an example that uses `rdbuf`.  
  
##  <a name="basic_stringstream__str"></a>  basic_stringstream::str  
 Sets or gets the text in a string buffer without changing the write position.  
  
```  
basic_string<Elem, Tr, Alloc> str( ) const;  
void str(  
    const basic_string<Elem, Tr, Alloc>& _Newstr  
);  
```  
  
### Parameters  
 `_Newstr`  
 The new string.  
  
### Return Value  
 Returns an object of class [basic_string](../VS_visualcpp/basic_string-Class.md)< **Elem**, **Tr**, `Alloc`>, whose controlled sequence is a copy of the sequence controlled by **\*this**.  
  
### Remarks  
 The first member function returns [rdbuf](#basic_stringstream__rdbuf) -> [str](../VS_visualcpp/basic_stringbuf-Class.md#basic_stringbuf__str). The second member function calls `rdbuf` -> **str**( `_Newstr`).  
  
### Example  
  See [basic_stringbuf::str](../VS_visualcpp/basic_stringbuf-Class.md#basic_stringbuf__str) for an example that uses **str**.  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [iostreams Conventions](../VS_visualcpp/iostreams-Conventions.md)