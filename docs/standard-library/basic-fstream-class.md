---
title: "basic_fstream Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::basic_fstream"
  - "basic_fstream"
  - "fstream/std::basic_fstream"
  - "std.basic_fstream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_fstream class"
ms.assetid: 8473817e-42a4-430b-82b8-b476c86bcf8a
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
# basic_fstream Class
Describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`>, with elements of type `Elem`, whose character traits are determined by the class `Tr`.  
  
## Syntax  
  
```  
template <class Elem, class Tr = char_traits<Elem>>  
class basic_fstream : public basic_iostream<Elem, Tr>  
```  
  
#### Parameters  
 `Elem`  
 The basic element of the file buffer.  
  
 `Tr`  
 The traits of the basic element of the file buffer (usually `char_traits`< `Elem`>).  
  
## Remarks  
 The object stores an object of class `basic_filebuf`< `Elem`, `Tr`>.  
  
> [!NOTE]
>  The get pointer and put pointer of an fstream object are **NOT** independent of each other. If the get pointer moves, so does the put pointer.  
  
## Example  
 The following example demonstrates how to create a `basic_fstream` object that can be read from and written to.  
  
```  
// basic_fstream_class.cpp  
// compile with: /EHsc  
  
#include <fstream>  
#include <iostream>  
  
using namespace std;  
  
int main(int argc, char **argv)  
{  
    fstream fs("fstream.txt", ios::in | ios::out | ios::trunc);  
    if (!fs.bad())  
    {  
        // Write to the file.  
        fs << "Writing to a basic_fstream object..." << endl;  
        fs.close();  
  
        // Dump the contents of the file to cout.  
        fs.open("fstream.txt", ios::in);  
        cout << fs.rdbuf();  
        fs.close();  
    }  
}  
```  
  
```Output  
Writing to a basic_fstream object...  
```  
  
### Constructors  
  
|||  
|-|-|  
|[basic_fstream](#basic_fstream__basic_fstream)|Constructs an object of type `basic_fstream`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[close](#basic_fstream__close)|Closes a file.|  
|[is_open](#basic_fstream__is_open)|Determines if a file is open.|  
|[open](#basic_fstream__open)|Opens a file.|  
|[rdbuf](#basic_fstream__rdbuf)|Returns the address of the stored stream buffer, of type pointer to [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`>.|  
|[swap](#basic_fstream__swap)|Exchanges the content of this object with the content of another `basic_fstream` object.|  
  
## Requirements  
 **Header:** \<fstream>  
  
 **Namespace:** std  
  
##  <a name="basic_fstream__basic_fstream"></a>  basic_fstream::basic_fstream  
 Constructs an object of type `basic_fstream`.  
  
```  
basic_fstream();

explicit basic_fstream(
    const char* _Filename,  
    ios_base::openmode _Mode = ios_base::in | ios_base::out,  
    int _Prot = (int)ios_base::_Openprot);

explicit basic_fstream(
    const wchar_t* _Filename,  
    ios_base::openmode _Mode = ios_base::in | ios_base::out,  
    int _Prot = (int)ios_base::_Openprot);

basic_fstream(basic_fstream&& right);
```  
  
### Parameters  
 `_Filename`  
 The name of the file to open.  
  
 `_Mode`  
 One of the enumerations in [ios_base::openmode](../standard-library/ios-base-class.md#ios_base__openmode).  
  
 `_Prot`  
 The default file opening protection, equivalent to the `shflag` parameter in [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).  
  
### Remarks  
 The first constructor initializes the base class by calling [basic_iostream](../standard-library/basic-iostream-class.md)( **sb**), where **sb** is the stored object of class [basic_filebuf](../standard-library/basic-filebuf-class.md)\< **Elem**, **Tr**>. It also initializes **sb** by calling `basic_filebuf`\< **Elem**, **Tr**>.  
  
 The second and third constructors initializes the base class by calling `basic_iostream`( **sb**). It also initializes **sb** by calling `basic_filebuf`\< **Elem**, **Tr**>, and then **sb.**[open](../standard-library/basic-filebuf-class.md#basic_filebuf__open)(_ *Filename*, `_Mode`). If the latter function returns a null pointer, the constructor calls [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**).  
  
 The fourth constructor initializes the object with the contents of `right`, treated as an rvalue reference.  
  
### Example  
  See [streampos](../standard-library/ios-typedefs.md#streampos) for an example that uses `basic_fstream`.  
  
##  <a name="basic_fstream__close"></a>  basic_fstream::close  
 Closes a file.  
  
```  
void close();
```  
  
### Remarks  
 The member function calls [rdbuf](#basic_fstream__rdbuf)**->** [close](../standard-library/basic-filebuf-class.md#basic_filebuf__close).  
  
### Example  
  See [basic_filebuf::close](../standard-library/basic-filebuf-class.md#basic_filebuf__close) for an example of how to use **close**.  
  
##  <a name="basic_fstream__is_open"></a>  basic_fstream::is_open  
 Determines if a file is open.  
  
```  
bool is_open() const;
```  
  
### Return Value  
 **true** if the file is open, **false** otherwise.  
  
### Remarks  
 The member function returns [rdbuf](#basic_fstream__rdbuf)**->**[is_open](../standard-library/basic-filebuf-class.md#basic_filebuf__is_open).  
  
### Example  
  See [basic_filebuf::is_open](../standard-library/basic-filebuf-class.md#basic_filebuf__is_open) for an example of how to use `is_open`.  
  
##  <a name="basic_fstream__open"></a>  basic_fstream::open  
 Opens a file.  
  
```  
void open(
    const char* _Filename,  
    ios_base::openmode _Mode = ios_base::in | ios_base::out,  
    int _Prot = (int)ios_base::_Openprot);

void open(
    const char* _Filename,  
    ios_base::openmode _Mode);

void open(
    const wchar_t* _Filename,  
    ios_base::openmode _Mode = ios_base::in | ios_base::out,  
    int _Prot = (int)ios_base::_Openprot);

void open(
    const wchar_t* _Filename,  
    ios_base::openmode _Mode);
```  
  
### Parameters  
 `_Filename`  
 The name of the file to open.  
  
 `_Mode`  
 One of the enumerations in [ios_base::openmode](../standard-library/ios-base-class.md#ios_base__openmode).  
  
 `_Prot`  
 The default file opening protection, equivalent to the `shflag` parameter in [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).  
  
### Remarks  
 The member function calls [rdbuf](#basic_fstream__rdbuf) **->** [open](../standard-library/basic-filebuf-class.md#basic_filebuf__open)(_ *Filename*, `_Mode`). If that function returns a null pointer, the function calls [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**).  
  
### Example  
  See [basic_filebuf::open](../standard-library/basic-filebuf-class.md#basic_filebuf__open) for an example of how to use **open**.  
  
##  <a name="basic_fstream__operator_eq"></a>  basic_fstream::operator=  
 Assigns to this object the content from a specified stream object. This is a move assignment that involves an rvalue that does not leave a copy behind.  
  
```  
basic_fstream& operator=(basic_fstream&& right);
```  
  
### Parameters  
 ` right`  
 An lvalue reference to a `basic_fstream` object.  
  
### Return Value  
 Returns `*this`.  
  
### Remarks  
 The member operator replaces the contents of the object by using the contents of ` right`, treated as an rvalue reference.  
  
##  <a name="basic_fstream__rdbuf"></a>  basic_fstream::rdbuf  
 Returns the address of the stored stream buffer, of type pointer to [basic_filebuf](../standard-library/basic-filebuf-class.md)\< **Elem**, **Tr**>.  
  
```  
basic_filebuf<Elem, Tr> *rdbuf() const 
```  
  
### Return Value  
 The address of the stored stream buffer.  
  
### Example  
  See [basic_filebuf::close](../standard-library/basic-filebuf-class.md#basic_filebuf__close) for an example of how to use `rdbuf`.  
  
##  <a name="basic_fstream__swap"></a>  basic_fstream::swap  
 Exchanges the contents of two `basic_fstream` objects.  
  
```  
void swap(basic_fstream& right);
```  
  
### Parameters  
 ` right`  
 An `lvalue` reference to a `basic_fstream` object.  
  
### Remarks  
 The member function exchanges the contents of this object and the contents of ` right`.  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)

