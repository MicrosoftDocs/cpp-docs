---
title: "istrstream Class"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c2d41c75-bd2c-4437-bd77-5939ce1b97af
caps.latest.revision: 18
manager: ghogen
translation.priority.mt: 
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
# istrstream Class
Describes an object that controls extraction of elements and encoded objects from a stream buffer of class [strstreambuf](../VS_visualcpp/strstreambuf-Class.md).  
  
## Syntax  
  
```  
class istrstream : public istream  
  
```  
  
## Remarks  
 The object stores an object of class `strstreambuf`.  
  
> [!NOTE]
>  This class is deprecated. Consider using [istringstream](../VS_visualcpp/-sstream--typedefs.md#istringstream) or [wistringstream](../VS_visualcpp/-sstream--typedefs.md#wistringstream) instead.  
  
### Constructors  
  
|||  
|-|-|  
|[istrstream](#istrstream__istrstream)|Constructs an object of type `istrstream`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[rdbuf](#istrstream__rdbuf)|Returns a pointer to the stream's associated `strstreambuf` object.|  
|[str](#istrstream__str)|Calls [freeze](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__freeze), and then returns a pointer to the beginning of the controlled sequence.|  
  
## Requirements  
 **Header:** <strstream\>  
  
 **Namespace:** std  
  
##  <a name="istrstream__istrstream"></a>  istrstream::istrstream  
 Constructs an object of type `istrstream`.  
  
```  
explicit istrstream(  
    const char * _Ptr  
);  
explicit istrstream(  
    char * _Ptr  
);  
istrstream(  
    const char * _Ptr,   
    streamsize _Count  
);  
istrstream(  
    char * _Ptr,   
    int _Count  
);  
```  
  
### Parameters  
 `_Count`  
 The length of the buffer ( `_Ptr`).  
  
 `_Ptr`  
 The contents with which the buffer is initialized.  
  
### Remarks  
 All the constructors initialize the base class by calling [istream](../VS_visualcpp/-istream--typedefs.md#istream)( **sb**), where **sb** is the stored object of class [strstreambuf](../VS_visualcpp/strstreambuf-Class.md). The first two constructors also initialize **sb** by calling `strstreambuf`( ( **const**`char` \*) `_Ptr`, 0 ). The remaining two constructors instead call `strstreambuf`( ( **const**`char` *) `_Ptr`, `_Count` ).  
  
##  <a name="istrstream__rdbuf"></a>  istrstream::rdbuf  
 Returns a pointer to the stream's associated strstreambuf object.  
  
```  
strstreambuf *rdbuf( ) const  
  
```  
  
### Return Value  
 A pointer to the stream's associated strstreambuf object.  
  
### Remarks  
 The member function returns the address of the stored stream buffer, of type pointer to [strstreambuf](../VS_visualcpp/strstreambuf-Class.md).  
  
### Example  
  See [strstreambuf::pcount](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__pcount) for a sample that uses `rdbuf`.  
  
##  <a name="istrstream__str"></a>  istrstream::str  
 Calls [freeze](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__freeze), and then returns a pointer to the beginning of the controlled sequence.  
  
```  
char *str( );  
  
```  
  
### Return Value  
 A pointer to the beginning of the controlled sequence.  
  
### Remarks  
 The member function returns [rdbuf](#istrstream__rdbuf) -> [str](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__str).  
  
### Example  
  See [strstream::str](../VS_visualcpp/strstreambuf-Class.md#strstreambuf__str) for a sample that uses **str**.  
  
## See Also  
 [istream](../VS_visualcpp/-istream--typedefs.md#istream)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [iostreams Conventions](../VS_visualcpp/iostreams-Conventions.md)