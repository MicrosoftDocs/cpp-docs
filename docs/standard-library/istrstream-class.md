---
title: "istrstream Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "istrstream"
  - "std::istrstream"
  - "std.istrstream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "istrstream class"
ms.assetid: c2d41c75-bd2c-4437-bd77-5939ce1b97af
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# istrstream Class
Describes an object that controls extraction of elements and encoded objects from a stream buffer of class [strstreambuf](../standard-library/strstreambuf-class.md).  
  
## Syntax  
  
```
class istrstream : public istream
```  
  
## Remarks  
 The object stores an object of class `strstreambuf`.  
  
> [!NOTE]
>  This class is deprecated. Consider using [istringstream](../standard-library/sstream-typedefs.md#istringstream) or [wistringstream](../standard-library/sstream-typedefs.md#wistringstream) instead.  
  
### Constructors  
  
|||  
|-|-|  
|[istrstream](#istrstream__istrstream)|Constructs an object of type `istrstream`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[rdbuf](#istrstream__rdbuf)|Returns a pointer to the stream's associated `strstreambuf` object.|  
|[str](#istrstream__str)|Calls [freeze](../standard-library/strstreambuf-class.md#strstreambuf__freeze), and then returns a pointer to the beginning of the controlled sequence.|  
  
## Requirements  
 **Header:** \<strstream>  
  
 **Namespace:** std  
  
##  <a name="istrstream__istrstream"></a>  istrstream::istrstream  
 Constructs an object of type `istrstream`.  
  
```
explicit istrstream(
    const char* ptr);

explicit istrstream(
    char* ptr);

istrstream(
    const char* ptr,
    streamsize count);

istrstream(
    char* ptr,
    int count);
```  
  
### Parameters  
 `count`  
 The length of the buffer ( `ptr`).  
  
 `ptr`  
 The contents with which the buffer is initialized.  
  
### Remarks  
 All the constructors initialize the base class by calling [istream](../standard-library/istream-typedefs.md#istream)( **sb**), where **sb** is the stored object of class [strstreambuf](../standard-library/strstreambuf-class.md). The first two constructors also initialize **sb** by calling `strstreambuf`( ( **const**`char` \*) `ptr`, 0 ). The remaining two constructors instead call `strstreambuf`( ( **const**`char` *) `ptr`, `count` ).  
  
##  <a name="istrstream__rdbuf"></a>  istrstream::rdbuf  
 Returns a pointer to the stream's associated strstreambuf object.  
  
```
strstreambuf *rdbuf() const
```  
  
### Return Value  
 A pointer to the stream's associated strstreambuf object.  
  
### Remarks  
 The member function returns the address of the stored stream buffer, of type pointer to [strstreambuf](../standard-library/strstreambuf-class.md).  
  
### Example  
  See [strstreambuf::pcount](../standard-library/strstreambuf-class.md#strstreambuf__pcount) for a sample that uses `rdbuf`.  
  
##  <a name="istrstream__str"></a>  istrstream::str  
 Calls [freeze](../standard-library/strstreambuf-class.md#strstreambuf__freeze), and then returns a pointer to the beginning of the controlled sequence.  
  
```
char *str();
```  
  
### Return Value  
 A pointer to the beginning of the controlled sequence.  
  
### Remarks  
 The member function returns [rdbuf](#istrstream__rdbuf) -> [str](../standard-library/strstreambuf-class.md#strstreambuf__str).  
  
### Example  
  See [strstream::str](../standard-library/strstreambuf-class.md#strstreambuf__str) for a sample that uses **str**.  
  
## See Also  
 [istream](../standard-library/istream-typedefs.md#istream)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)



