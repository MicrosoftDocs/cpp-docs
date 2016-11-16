---
title: "strstream Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
# strstream Class
Describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [strstreambuf](../standard-library/strstreambuf-class.md).  
  
## Syntax  
  
```
class strstream : public iostream
```  
  
## Remarks  
 The object stores an object of class `strstreambuf`.  
  
> [!NOTE]
>  This class is deprecated. Consider using [stringstream](../standard-library/sstream-typedefs.md#stringstream) or [wstringstream](../standard-library/sstream-typedefs.md#wstringstream) instead.  
  
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
|[str](#strstream__str)|Calls [freeze](../standard-library/strstreambuf-class.md#strstreambuf__freeze), and then returns a pointer to the beginning of the controlled sequence.|  
  
## Requirements  
 **Header:** \<strstream>  
  
 **Namespace:** std  
  
##  <a name="strstream__freeze"></a>  strstream::freeze  
 Causes a stream buffer to be unavailable through stream buffer operations.  
  
```
void freeze(bool _Freezeit = true);
```  
  
### Parameters  
 `_Freezeit`  
 A `bool` indicating whether you want the stream to be frozen.  
  
### Remarks  
 The member function calls [rdbuf](#strstream__rdbuf) -> [freeze](../standard-library/strstreambuf-class.md#strstreambuf__freeze)(_ *Freezeit*).  
  
### Example  
  See [strstreambuf::freeze](../standard-library/strstreambuf-class.md#strstreambuf__freeze) for an example that uses **freeze**.  
  
##  <a name="strstream__pcount"></a>  strstream::pcount  
 Returns a count of the number of elements written to the controlled sequence.  
  
```
streamsize pcount() const;
```  
  
### Return Value  
 The number of elements written to the controlled sequence.  
  
### Remarks  
 The member function returns [rdbuf](#strstream__rdbuf) -> [pcount](../standard-library/strstreambuf-class.md#strstreambuf__pcount).  
  
### Example  
  See [strstreambuf::pcount](../standard-library/strstreambuf-class.md#strstreambuf__pcount) for a sample of using pcount.  
  
##  <a name="strstream__rdbuf"></a>  strstream::rdbuf  
 Returns a pointer to the stream's associated strstreambuf object.  
  
```
strstreambuf *rdbuf() const
```  
  
### Return Value  
 A pointer to the stream's associated strstreambuf object.  
  
### Remarks  
 The member function returns the address of the stored stream buffer of type **pointer** to [strstreambuf](../standard-library/strstreambuf-class.md).  
  
### Example  
  See [strstreambuf::pcount](../standard-library/strstreambuf-class.md#strstreambuf__pcount) for a sample that uses `rdbuf`.  
  
##  <a name="strstream__str"></a>  strstream::str  
 Calls [freeze](../standard-library/strstreambuf-class.md#strstreambuf__freeze), and then returns a pointer to the beginning of the controlled sequence.  
  
```
char *str();
```  
  
### Return Value  
 A pointer to the beginning of the controlled sequence.  
  
### Remarks  
 The member function returns [rdbuf](#strstream__rdbuf) -> [str](../standard-library/strstreambuf-class.md#strstreambuf__str).  
  
### Example  
  See [strstreambuf::str](../standard-library/strstreambuf-class.md#strstreambuf__str) for a sample that uses **str**.  
  
##  <a name="strstream__strstream"></a>  strstream::strstream  
 Constructs an object of type `strstream`.  
  
```
strstream();

strstream(char* ptr,
    streamsize count,
    ios_base::openmode _Mode = ios_base::in | ios_base::out);
```  
  
### Parameters  
 `count`  
 The size of the buffer.  
  
 `_Mode`  
 The input and output mode of the buffer. See [ios_base::openmode](../standard-library/ios-base-class.md#ios_base__openmode) for more information.  
  
 `ptr`  
 The buffer.  
  
### Remarks  
 Both constructors initialize the base class by calling [streambuf](../standard-library/streambuf-typedefs.md#streambuf)( **sb**), where **sb** is the stored object of class [strstreambuf](../standard-library/strstreambuf-class.md). The first constructor also initializes **sb** by calling [strstreambuf](../standard-library/strstreambuf-class.md#strstreambuf__strstreambuf). The second constructor initializes the base class one of two ways:  
  
-   If `_Mode` & **ios_base::app**== 0, then `ptr` must designate the first element of an array of `count` elements, and the constructor calls `strstreambuf`( `ptr`, `count`, `ptr`).  
  
-   Otherwise, `ptr` must designate the first element of an array of count elements that contains a C string whose first element is designated by `ptr`, and the constructor calls `strstreambuf`( `ptr`, `count`, `ptr` + `strlen`( `ptr`) ).  
  
## See Also  
 [iostream](../standard-library/istream-typedefs.md#iostream)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)



