---
title: "basic_ifstream Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "basic_ifstream"
  - "fstream/std::basic_ifstream"
  - "std::basic_ifstream"
  - "std.basic_ifstream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_ifstream class"
ms.assetid: 366cd9a7-efc4-4b7f-ba10-c8271e47ffcf
caps.latest.revision: 23
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
# basic_ifstream Class
Describes an object that controls extraction of elements and encoded objects from a stream buffer of class [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`>, with elements of type `Elem`, whose character traits are determined by the class `Tr`.  
  
## Syntax  
  
```  
template <class Elem, class Tr = char_traits<Elem>>  
class basic_ifstream : public basic_istream<Elem, Tr>  
```  
  
#### Parameters  
 `Elem`  
 The basic element of the file buffer.  
  
 `Tr`  
 The traits of the basic element of the file buffer (usually `char_traits`< `Elem`>).  
  
## Remarks  
 The object stores an object of class `basic_filebuf`< `Elem`, `Tr`>.  
  
## Example  
 The following example shows how to read in text from a file.  
  
```  
// basic_ifstream_class.cpp  
// compile with: /EHsc  
  
#include <fstream>  
#include <iostream>  
  
using namespace std;  
  
int main(int argc, char **argv)  
{  
    ifstream ifs("basic_ifstream_class.txt");  
    if (!ifs.bad())  
    {  
        // Dump the contents of the file to cout.  
        cout << ifs.rdbuf();  
        ifs.close();  
    }  
}  
```  
  
## Input: basic_ifstream_class.txt  
  
```  
This is the contents of basic_ifstream_class.txt.  
```  
  
## Output  
  
```  
This is the contents of basic_ifstream_class.txt.  
```  
  
### Constructors  
  
|||  
|-|-|  
|[basic_ifstream](#basic_ifstream__basic_ifstream)|Initializes a new instance of a `basic_ifstream` object.|  
  
### Member Functions  
  
|||  
|-|-|  
|[close](#basic_ifstream__close)|Closes a file.|  
|[is_open](#basic_ifstream__is_open)|Determines if a file is open.|  
|[open](#basic_ifstream__open)|Opens a file.|  
|[rdbuf](#basic_ifstream__rdbuf)|Returns the address of the stored stream buffer.|  
|[swap](#basic_ifstream__swap)|Exchanges the content of this `basic_ifstream` for the content of the provided `basic_ifstream`.|  
  
### Operators  
  
|||  
|-|-|  
|[operator=](#basic_ifstream__operator_eq)|Assigns the content of this stream object. This is a move assignment involving an `rvalue` that does not leave a copy behind.|  
  
## Requirements  
 **Header:** \<fstream>  
  
 **Namespace:** std  
  
##  <a name="basic_ifstream__basic_ifstream"></a>  basic_ifstream::basic_ifstream  
 Constructs an object of type `basic_ifstream`.  
  
```  
basic_ifstream();

explicit basic_ifstream(
    const char* _Filename,  
    ios_base::openmode _Mode = ios_base::in,  
    int _Prot = (int)ios_base::_Openprot);

explicit basic_ifstream(
    const wchar_t* _Filename,  
    ios_base::openmode _Mode = ios_base::in,  
    int _Prot = (int)ios_base::_Openprot);

basic_ifstream(basic_ifstream&& right);
```  
  
### Parameters  
 `_Filename`  
 The name of the file to open.  
  
 `_Mode`  
 One of the enumerations in [ios_base::openmode](../standard-library/ios-base-class.md#ios_base__openmode).  
  
 `_Prot`  
 The default file opening protection, equivalent to the `shflag` parameter in [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).  
  
### Remarks  
 The first constructor initializes the base class by calling [basic_istream](../standard-library/basic-istream-class.md)( `sb`), where `sb` is the stored object of class [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`>. It also initializes `sb` by calling `basic_filebuf`< `Elem`, `Tr`>.  
  
 The second and third constructors initializes the base class by calling `basic_istream`( `sb`). It also initializes `sb` by calling [basic_filebuf](../standard-library/basic-filebuf-class.md#basic_filebuf__basic_filebuf)< `Elem`, `Tr`>, then `sb`. [open](../standard-library/basic-filebuf-class.md#basic_filebuf__open)( `_Filename`, `_Mode` &#124; `ios_base::in`). If the latter function returns a null pointer, the constructor calls **setstate**( `failbit`).  
  
 The fourth constructor initializes the object with the contents of `right`, treated as an rvalue reference.  
  
### Example  
  The following example shows how to read in text from a file. To create the file, see the example for [basic_ofstream::basic_ofstream](../standard-library/basic-ofstream-class.md#basic_ofstream__basic_ofstream).  
  
```  
// basic_ifstream_ctor.cpp  
// compile with: /EHsc  
  
#include <fstream>  
#include <iostream>  
  
using namespace std;  
  
int main(int argc, char **argv)  
{  
    ifstream ifs("basic_ifstream_ctor.txt");  
    if (!ifs.bad())  
    {  
        // Dump the contents of the file to cout.  
        cout << ifs.rdbuf();  
        ifs.close();  
    }  
}  
```  
  
##  <a name="basic_ifstream__close"></a>  basic_ifstream::close  
 Closes a file.  
  
```  
void close();
```  
  
### Remarks  
 The member function calls [rdbuf](#basic_ifstream__rdbuf) **->** [close](../standard-library/basic-filebuf-class.md#basic_filebuf__close).  
  
### Example  
  See [basic_filebuf::close](../standard-library/basic-filebuf-class.md#basic_filebuf__close) for an example that uses **close**.  
  
##  <a name="basic_ifstream__is_open"></a>  basic_ifstream::is_open  
 Determines if a file is open.  
  
```  
bool is_open() const;
```  
  
### Return Value  
 **true** if the file is open, **false** otherwise.  
  
### Remarks  
 The member function returns [rdbuf](#basic_ifstream__rdbuf) **->** [is_open](../standard-library/basic-filebuf-class.md#basic_filebuf__is_open).  
  
### Example  
  See [basic_filebuf::is_open](../standard-library/basic-filebuf-class.md#basic_filebuf__is_open) for an example that uses `is_open`.  
  
##  <a name="basic_ifstream__open"></a>  basic_ifstream::open  
 Opens a file.  
  
```  
void open(
    const char* _Filename,  
    ios_base::openmode _Mode = ios_base::in,  
    int _Prot = (int)ios_base::_Openprot);

void open(
    const char* _Filename,  
    ios_base::openmode _Mode);

void open(
    const wchar_t* _Filename,  
    ios_base::openmode _Mode = ios_base::in,  
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
 The member function calls [rdbuf](#basic_ifstream__rdbuf) **->** [open](../standard-library/basic-filebuf-class.md#basic_filebuf__open)(_ *Filename*, `_Mode` &#124; **ios_base::in**). If open fails, the function calls [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**), which may throw an ios_base::failure exception.  
  
### Example  
  See [basic_filebuf::open](../standard-library/basic-filebuf-class.md#basic_filebuf__open) for an example that uses **open**.  
  
##  <a name="basic_ifstream__operator_eq"></a>  basic_ifstream::operator=  
 Assigns the content of this stream object. This is a move assignment involving an rvalue that does not leave a copy behind.  
  
```  
basic_ifstream& operator=(basic_ifstream&& right);
```  
  
### Parameters  
 ` right`  
 An rvalue reference to a `basic_ifstream` object.  
  
### Return Value  
 Returns `*this`.  
  
### Remarks  
 The member operator replaces the contents of the object by using the contents of ` right`, treated as an rvalue reference. For more information, see [Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md).  
  
##  <a name="basic_ifstream__rdbuf"></a>  basic_ifstream::rdbuf  
 Returns the address of the stored stream buffer.  
  
```  
basic_filebuf<Elem, Tr> *rdbuf() const 
```  
  
### Return Value  
 A pointer to a [basic_filebuf](../standard-library/basic-filebuf-class.md) object representing the stored stream buffer.  
  
### Example  
  See [basic_filebuf::close](../standard-library/basic-filebuf-class.md#basic_filebuf__close) for an example that uses `rdbuf`.  
  
##  <a name="basic_ifstream__swap"></a>  basic_ifstream::swap  
 Exchanges the contents of two `basic_ifstream` objects.  
  
```  
void swap(basic_ifstream& right);
```  
  
### Parameters  
 ` right`  
 A reference to another stream buffer.  
  
### Remarks  
 The member function exchanges the contents of this object for the contents of ` right`.  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)


