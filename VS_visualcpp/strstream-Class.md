---
title: "strstream Class"
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
ms.assetid: 63f3be31-9e36-42b1-9715-a474a5997e2a
caps.latest.revision: 19
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
# strstream Class
Describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [strstreambuf](../VS_visualcpp/strstreambuf-Class.md).  
  
## Syntax  
  
```  
class strstream : public iostream  
  
```  
  
## Remarks  
 The object stores an object of class `strstreambuf`.  
  
> [!NOTE]
>  This class is deprecated. Consider using [stringstream](../VS_visualcpp/-sstream--typedefs.md#stringstream) or [wstringstream](../VS_visualcpp/-sstream--typedefs.md#wstringstream) instead.  
  
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
|[str](#strstream__str)|Calls [freeze](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__freeze), and then returns a pointer to the beginning of the controlled sequence.|  
  
## Requirements  
 **Header:** <strstream\>  
  
 **Namespace:** std  
  
##  <a name="strstream__freeze"></a>  strstream::freeze  
 Causes a stream buffer to be unavailable through stream buffer operations.  
  
```  
void freeze(    bool  _Freezeit  = true );  
  
```  
  
### Parameters  
 `_Freezeit`  
 A `bool` indicating whether you want the stream to be frozen.  
  
### Remarks  
 The member function calls [rdbuf](#strstream__rdbuf) -> [freeze](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__freeze)(_                        *Freezeit*).  
  
### Example  
  See [strstreambuf::freeze](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__freeze) for an example that uses **freeze**.  
  
##  <a name="strstream__pcount"></a>  strstream::pcount  
 Returns a count of the number of elements written to the controlled sequence.  
  
```  
streamsize pcount( ) const;  
  
```  
  
### Return Value  
 The number of elements written to the controlled sequence.  
  
### Remarks  
 The member function returns [rdbuf](#strstream__rdbuf) -> [pcount](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__pcount).  
  
### Example  
  See [strstreambuf::pcount](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__pcount) for a sample of using pcount.  
  
##  <a name="strstream__rdbuf"></a>  strstream::rdbuf  
 Returns a pointer to the stream's associated strstreambuf object.  
  
```  
strstreambuf *rdbuf( ) const  
  
```  
  
### Return Value  
 A pointer to the stream's associated strstreambuf object.  
  
### Remarks  
 The member function returns the address of the stored stream buffer of type **pointer** to [strstreambuf](../VS_visualcpp/strstreambuf-Class.md).  
  
### Example  
  See [strstreambuf::pcount](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__pcount) for a sample that uses `rdbuf`.  
  
##  <a name="strstream__str"></a>  strstream::str  
 Calls [freeze](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__freeze), and then returns a pointer to the beginning of the controlled sequence.  
  
```  
char *str( );  
  
```  
  
### Return Value  
 A pointer to the beginning of the controlled sequence.  
  
### Remarks  
 The member function returns [rdbuf](#strstream__rdbuf) -> [str](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__str).  
  
### Example  
  See [strstreambuf::str](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__str) for a sample that uses **str**.  
  
##  <a name="strstream__strstream"></a>  strstream::strstream  
 Constructs an object of type `strstream`.  
  
```  
strstream( ); strstream(    char * _Ptr ,     streamsize  _Count ,    ios _ base::openmode  _Mode  = ios _ base::in | ios _ base::out );  
  
```  
  
### Parameters  
 `_Count`  
 The size of the buffer.  
  
 `_Mode`  
 The input and output mode of the buffer. See [ios_base::openmode](../VS_visualcpp/ios_base-Class.md#ios_base__openmode) for more information.  
  
 `_Ptr`  
 The buffer.  
  
### Remarks  
 Both constructors initialize the base class by calling [streambuf](../VS_visualcpp/-streambuf--typedefs.md#streambuf)( **sb**), where **sb** is the stored object of class [strstreambuf](../VS_visualcpp/strstreambuf-Class.md). The first constructor also initializes **sb** by calling [strstreambuf](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__strstreambuf). The second constructor initializes the base class one of two ways:  
  
-   If `_Mode` & **ios_base::app**== 0, then `_Ptr` must designate the first element of an array of `_Count` elements, and the constructor calls `strstreambuf`( `_Ptr`, `_Count`, `_Ptr`).  
  
-   Otherwise, `_Ptr` must designate the first element of an array of count elements that contains a C string whose first element is designated by `_Ptr`, and the constructor calls `strstreambuf`( `_Ptr`, `_Count`, `_Ptr` + `strlen`( `_Ptr`) ).  
  
## See Also  
 [iostream](../VS_visualcpp/-istream--typedefs.md#iostream)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [iostreams Conventions](../VS_visualcpp/iostreams-Conventions.md)