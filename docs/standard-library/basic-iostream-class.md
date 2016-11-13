---
title: "basic_iostream Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "istream/std::basic_iostream"
  - "std.basic_iostream"
  - "basic_iostream"
  - "std::basic_iostream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_iostream class"
ms.assetid: 294b680b-eb49-4066-8db2-6d52dac9d6e3
caps.latest.revision: 22
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
# basic_iostream Class
A stream class that can do both input and output.  
  
## Syntax  
  
```  
template <class Elem, class Tr = char_traits<Elem>>  
class basic_iostream : public basic_istream<Elem, Tr>,  
    public basic_ostream<Elem, Tr>  
{  
public:  
    explicit basic_iostream(basic_streambuf<Elem, Tr>* strbuf);

    virtual ~basic_iostream();

};  
```  
  
## Remarks  
 The template class describes an object that controls insertions, through its base class [basic_ostream](../standard-library/basic-ostream-class.md)< `Elem`, `Tr`>, and extractions, through its base class [basic_istream](../standard-library/basic-istream-class.md)< `Elem`, `Tr`>. The two objects share a common virtual base class [basic_ios](../standard-library/basic-ios-class.md)< `Elem`, `Tr`>. They also manage a common stream buffer, with elements of type `Elem`, whose character traits are determined by the class `Tr`. The constructor initializes its base classes through `basic_istream`( **strbuf**) and `basic_ostream`( **strbuf**).  
  
### Constructors  
  
|||  
|-|-|  
|[basic_iostream](#basic_iostream__basic_iostream)|Create a `basic_iostream` object.|  
  
### Member Functions  
  
|||  
|-|-|  
|[swap](#basic_iostream__swap)|Exchanges the contents of the provided `basic_iostream` object for the contents of this object.|  
  
### Operators  
  
|||  
|-|-|  
|[operator=](#basic_iostream__operator_eq)|Assigns the value of a specified `basic_iostream` object to this object. This is a move assignment involving an `rvalue` that does not leave a copy behind.|  
  
## Requirements  
 **Header:** \<istream>  
  
 **Namespace:** std  
  
##  <a name="basic_iostream__basic_iostream"></a>  basic_iostream::basic_iostream  
 Create a `basic_iostream` object.  
  
```  
explicit basic_iostream(basic_streambuf<Elem, Tr>* strbuf);

basic_iostream(basic_iostream&& right);

basic_iostream();
```  
  
### Parameters  
 ` strbuf`  
 An existing `basic_streambuf` object.  
  
 ` right`  
 An existing `basic_iostream` object that is used to construct a new `basic_iostream`.  
  
### Remarks  
 The first constructor initializes the base objects by way of `basic_istream(`` strbuf``)` and `basic_ostream(`` strbuf``)`.  
  
 The second constructor initializes the base objects by calling move `(`` right``)`.  
  
##  <a name="basic_iostream__operator_eq"></a>  basic_iostream::operator=  
 Assign the value of a specified `basic_iostream` object to this object. This is a move assignment involving an `rvalue` that does not leave a copy behind.  
  
```  
basic_iostream& operator=(basic_iostream&& right);
```  
  
### Parameters  
 ` right`  
 An `rvalue` reference to a `basic_iostream` object to assign from.  
  
### Remarks  
 The member operator calls swap `(`` right``)`.  
  
##  <a name="basic_iostream__swap"></a>  basic_iostream::swap  
 Exchanges the contents of the provided `basic_iostream` object for the contents of this object.  
  
```  
void swap(basic_iostream& right);
```  
  
### Parameters  
 ` right`  
 The `basic_iostream` object to swap.  
  
### Remarks  
 The member function calls swap `(`` right``)`  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)

