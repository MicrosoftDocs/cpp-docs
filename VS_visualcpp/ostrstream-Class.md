---
title: "ostrstream Class"
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
ms.assetid: e2e34679-b266-4728-a8e1-8eda5d400e46
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
# ostrstream Class
Describes an object that controls insertion of elements and encoded objects into a stream buffer of class [strstreambuf](../VS_visualcpp/strstreambuf-Class.md).  
  
## Syntax  
  
```  
class ostrstream : public ostream  
  
```  
  
## Remarks  
 The object stores an object of class `strstreambuf`.  
  
> [!NOTE]
>  This class is deprecated. Consider using [ostringstream](../VS_visualcpp/-sstream--typedefs.md#ostringstream) or [wostringstream](../VS_visualcpp/-sstream--typedefs.md#wostringstream) instead.  
  
### Constructors  
  
|||  
|-|-|  
|[ostrstream](#ostrstream__ostrstream)|Constructs an object of type `ostrstream`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[freeze](#ostrstream__freeze)|Causes a stream buffer to be unavailable through stream buffer operations.|  
|[pcount](#ostrstream__pcount)|Returns a count of the number of elements written to the controlled sequence.|  
|[rdbuf](#ostrstream__rdbuf)|Returns a pointer to the stream's associated `strstreambuf` object.|  
|[str](#ostrstream__str)|Calls [freeze](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__freeze), and then returns a pointer to the beginning of the controlled sequence.|  
  
## Requirements  
 **Header:** <strstream\>  
  
 **Namespace:** std  
  
##  <a name="ostrstream__freeze"></a>  ostrstream::freeze  
 Causes a stream buffer to be unavailable through stream buffer operations.  
  
```  
void freeze(    bool  _Freezeit  = true );  
  
```  
  
### Parameters  
 `_Freezeit`  
 A `bool` indicating whether you want the stream to be frozen.  
  
### Remarks  
 The member function calls [rdbuf](#ostrstream__rdbuf) -> [freeze](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__freeze)(_                        *Freezeit*).  
  
### Example  
  See [strstream::freeze](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__freeze) for an example that uses **freeze**.  
  
##  <a name="ostrstream__ostrstream"></a>  ostrstream::ostrstream  
 Constructs an object of type `ostrstream`.  
  
```  
ostrstream( ); ostrstream(    char * _Ptr ,     streamsize  _Count ,    ios _ base::openmode  _Mode  = ios _ base::out );  
  
```  
  
### Parameters  
 `_Ptr`  
 The buffer.  
  
 `_Count`  
 The size of the buffer in bytes.  
  
 `_Mode`  
 The input and output mode of the buffer. See [ios_base::openmode](../VS_visualcpp/ios_base-Class.md#ios_base__openmode) for more information.  
  
### Remarks  
 Both constructors initialize the base class by calling [ostream](../VS_visualcpp/-ostream--typedefs.md#ostream)( **sb**), where **sb** is the stored object of class [strstreambuf](../VS_visualcpp/strstreambuf-Class.md). The first constructor also initializes **sb** by calling `strstreambuf`. The second constructor initializes the base class one of two ways:  
  
-   If `_Mode` & **ios_base::app**== 0, then `_Ptr` must designate the first element of an array of `_Count` elements, and the constructor calls `strstreambuf`( `_Ptr`, `_Count`, `_Ptr`).  
  
-   Otherwise, `_Ptr` must designate the first element of an array of count elements that contains a C string whose first element is designated by `_Ptr`, and the constructor calls `strstreambuf`( `_Ptr`, `_Count`, `_Ptr` + `strlen`( `_Ptr`) ).  
  
##  <a name="ostrstream__pcount"></a>  ostrstream::pcount  
 Returns a count of the number of elements written to the controlled sequence.  
  
```  
streamsize pcount( ) const;  
  
```  
  
### Return Value  
 The number of elements written to the controlled sequence.  
  
### Remarks  
 The member function returns [rdbuf](#ostrstream__rdbuf) -> [pcount](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__pcount).  
  
### Example  
  See [strstream::pcount](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__pcount) for a sample that uses `pcount`.  
  
##  <a name="ostrstream__rdbuf"></a>  ostrstream::rdbuf  
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
  
##  <a name="ostrstream__str"></a>  ostrstream::str  
 Calls [freeze](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__freeze), and then returns a pointer to the beginning of the controlled sequence.  
  
```  
char *str( );  
  
```  
  
### Return Value  
 A pointer to the beginning of the controlled sequence.  
  
### Remarks  
 The member function returns [rdbuf](#ostrstream__rdbuf) -> [str](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__str).  
  
### Example  
  See [strstream::str](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__str) for a sample that uses **str**.  
  
## See Also  
 [ostream](../VS_visualcpp/-ostream--typedefs.md#ostream)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [iostreams Conventions](../VS_visualcpp/iostreams-Conventions.md)