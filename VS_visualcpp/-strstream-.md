---
title: "&lt;strstream&gt;"
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
ms.assetid: eaa9d0d4-d217-4f28-8a68-9b9ad7b1c0f5
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
# &lt;strstream&gt;
Defines several classes that support iostreams operations on sequences stored in an allocated array of `char` object. Such sequences are easily converted to and from C strings.  
  
## Syntax  
  
```  
#include <strstream>  
  
```  
  
## Remarks  
 Objects of type `strstream` work with `char` *, which are C strings. Use [<sstream\>](../VS_visualcpp/-sstream-.md) to work with objects of type [basic_string](../VS_visualcpp/basic_string-Class.md).  
  
> [!NOTE]
>  The classes in `<strstream>` are deprecated. Consider using the classes in `<sstream>` instead.  
  
### Classes  
  
|||  
|-|-|  
|[strstreambuf Class](../VS_visualcpp/strstreambuf-Class.md)|The class describes a stream buffer that controls the transmission of elements to and from a sequence of elements stored in a `char` array object.|  
|[istrstream Class](../VS_visualcpp/istrstream-Class.md)|The class describes an object that controls extraction of elements and encoded objects from a stream buffer of class [strstreambuf](../VS_visualcpp/strstreambuf-Class.md).|  
|[ostrstream Class](../VS_visualcpp/ostrstream-Class.md)|The class describes an object that controls insertion of elements and encoded objects into a stream buffer of class [strstreambuf](../VS_visualcpp/strstreambuf-Class.md).|  
|[strstream Class](../VS_visualcpp/strstream-Class.md)|The class describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [strstreambuf](../VS_visualcpp/strstreambuf-Class.md).|  
  
## See Also  
 [<strstream\>](../VS_visualcpp/-strstream-.md)   
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [iostreams Conventions](../VS_visualcpp/iostreams-Conventions.md)