---
title: "strstream Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "std::strstream"
  - "strstream"
  - "std.strstream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "strstream class"
ms.assetid: 63f3be31-9e36-42b1-9715-a474a5997e2a
caps.latest.revision: 20
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
# strstream Class
Describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [strstreambuf](../stdcpplib/strstreambuf-class.md).  
  
## Syntax  
  
```
class strstream : public iostream
```  
  
## Remarks  
 The object stores an object of class `strstreambuf`.  
  
> [!NOTE]
>  This class is deprecated. Consider using [stringstream](../stdcpplib/-sstream--typedefs.md#stringstream) or [wstringstream](../stdcpplib/-sstream--typedefs.md#wstringstream) instead.  
  
### Constructors  
  
|||  
|-|-|  
|[strstream](#strstream__strstream)|Constructs an object of type `strstream`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[freeze](#strstream__freeze)|Causes a stream buffer to be unavailable through stream buffer operations.|  
|[pcount](#strstream__pcount)|Returns a count of the number of elements written to the controlled sequence.|  
|[rdbuf](#strstream__rdbuf)|Returns a pointer to the stream's associated `strstreambuf` object.|  
|[str](#strstream__str)|Calls [freeze](../stdcpplib/strstreambuf-class.md#strstreambuf__freeze), and then returns a pointer to the beginning of the controlled sequence.|  
  
## Requirements  
 **Header:** \<strstream>  
  
 **Namespace:** std  
  
##  <a name="strstream__freeze"></a>  strstream::freeze  
 Causes a stream buffer to be unavailable through stream buffer operations.  
  
```
void freeze(bool  _Freezeit = true);
```  
  
### Parameters  
 `_Freezeit`  
 A `bool` indicating whether you want the stream to be frozen.  
  
### Remarks  
 The member function calls [rdbuf](#strstream__rdbuf) -> [freeze](../stdcpplib/strstreambuf-class.md#strstreambuf__freeze)(_ *Freezeit*).  
  
### Example  
  See [strstreambuf::freeze](../stdcpplib/strstreambuf-class.md#strstreambuf__freeze) for an example that uses **freeze**.  
  
##  <a name="strstream__pcount"></a>  strstream::pcount  
 Returns a count of the number of elements written to the controlled sequence.  
  
```
streamsize pcount() const;
```  
  
### Return Value  
 The number of elements written to the controlled sequence.  
  
### Remarks  
 The member function returns [rdbuf](#strstream__rdbuf) -> [pcount](../stdcpplib/strstreambuf-class.md#strstreambuf__pcount).  
  
### Example  
  See [strstreambuf::pcount](../stdcpplib/strstreambuf-class.md#strstreambuf__pcount) for a sample of using pcount.  
  
##  <a name="strstream__rdbuf"></a>  strstream::rdbuf  
 Returns a pointer to the stream's associated strstreambuf object.  
  
```
strstreambuf *rdbuf() const
```  
  
### Return Value  
 A pointer to the stream's associated strstreambuf object.  
  
### Remarks  
 The member function returns the address of the stored stream buffer of type **pointer** to [strstreambuf](../stdcpplib/strstreambuf-class.md).  
  
### Example  
  See [strstreambuf::pcount](../stdcpplib/strstreambuf-class.md#strstreambuf__pcount) for a sample that uses `rdbuf`.  
  
##  <a name="strstream__str"></a>  strstream::str  
 Calls [freeze](../stdcpplib/strstreambuf-class.md#strstreambuf__freeze), and then returns a pointer to the beginning of the controlled sequence.  
  
```
char *str();
```  
  
### Return Value  
 A pointer to the beginning of the controlled sequence.  
  
### Remarks  
 The member function returns [rdbuf](#strstream__rdbuf) -> [str](../stdcpplib/strstreambuf-class.md#strstreambuf__str).  
  
### Example  
  See [strstreambuf::str](../stdcpplib/strstreambuf-class.md#strstreambuf__str) for a sample that uses **str**.  
  
##  <a name="strstream__strstream"></a>  strstream::strstream  
 Constructs an object of type `strstream`.  
  
```
strstream();

strstream(char* ptr,
    streamsize  count,
    ios_base::openmode  _Mode = ios_base::in | ios_base::out);
```  
  
### Parameters  
 `count`  
 The size of the buffer.  
  
 `_Mode`  
 The input and output mode of the buffer. See [ios_base::openmode](../stdcpplib/ios_base-class.md#ios_base__openmode) for more information.  
  
 `ptr`  
 The buffer.  
  
### Remarks  
 Both constructors initialize the base class by calling [streambuf](../stdcpplib/-streambuf--typedefs.md#streambuf)( **sb**), where **sb** is the stored object of class [strstreambuf](../stdcpplib/strstreambuf-class.md). The first constructor also initializes **sb** by calling [strstreambuf](../stdcpplib/strstreambuf-class.md#strstreambuf__strstreambuf). The second constructor initializes the base class one of two ways:  
  
-   If `_Mode` & **ios_base::app**== 0, then `ptr` must designate the first element of an array of `count` elements, and the constructor calls `strstreambuf`( `ptr`, `count`, `ptr`).  
  
-   Otherwise, `ptr` must designate the first element of an array of count elements that contains a C string whose first element is designated by `ptr`, and the constructor calls `strstreambuf`( `ptr`, `count`, `ptr` + `strlen`( `ptr`) ).  
  
## See Also  
 [iostream](../stdcpplib/-istream--typedefs.md#iostream)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [iostream Programming](../stdcpplib/iostream-programming.md)   
 [iostreams Conventions](../stdcpplib/iostreams-conventions.md)

