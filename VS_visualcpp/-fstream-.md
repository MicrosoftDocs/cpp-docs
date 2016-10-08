---
title: "&lt;fstream&gt;"
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
ms.assetid: 660de351-0489-41df-b239-40e0cdcab46b
caps.latest.revision: 17
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
# &lt;fstream&gt;
Defines several classes that support iostreams operations on sequences stored in external files.  
  
## Syntax  
  
```  
#include <fstream>  
  
```  
  
### Typedefs  
  
|||  
|-|-|  
|[filebuf](../VS_visualcpp/-fstream--typedefs.md#filebuf)|A type `basic_filebuf` specialized on `char` template parameters.|  
|[fstream](../VS_visualcpp/-fstream--typedefs.md#fstream)|A type `basic_fstream` specialized on `char` template parameters.|  
|[ifstream](../VS_visualcpp/-fstream--typedefs.md#ifstream)|A type `basic_ifstream` specialized on `char` template parameters.|  
|[ofstream](../VS_visualcpp/-fstream--typedefs.md#ofstream)|A type `basic_ofstream` specialized on `char` template parameters.|  
|[wfstream](../VS_visualcpp/-fstream--typedefs.md#wfstream)|A type `basic_fstream` specialized on `wchar_t` template parameters.|  
|[wifstream](../VS_visualcpp/-fstream--typedefs.md#wifstream)|A type `basic_ifstream` specialized on `wchar_t` template parameters.|  
|[wofstream](../VS_visualcpp/-fstream--typedefs.md#wofstream)|A type `basic_ofstream` specialized on `wchar_t` template parameters.|  
|[wfilebuf](../VS_visualcpp/-fstream--typedefs.md#wfilebuf)|A type `basic_filebuf` specialized on `wchar_t` template parameters.|  
  
### Classes  
  
|||  
|-|-|  
|[basic_filebuf](../VS_visualcpp/basic_filebuf-Class.md)|The template class describes a stream buffer that controls the transmission of elements of type **Elem**, whose character traits are determined by the class **Tr**, to and from a sequence of elements stored in an external file.|  
|[basic_fstream](../VS_visualcpp/basic_fstream-Class.md)|The template class describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [basic_filebuf](../VS_visualcpp/basic_filebuf-Class.md)<**Elem**, **Tr**>, with elements of type **Elem**, whose character traits are determined by the class **Tr**.|  
|[basic_ifstream](../VS_visualcpp/basic_ifstream-Class.md)|The template class describes an object that controls extraction of elements and encoded objects from a stream buffer of class [basic_filebuf](../VS_visualcpp/basic_filebuf-Class.md)<**Elem**, **Tr**>, with elements of type **Elem**, whose character traits are determined by the class **Tr**.|  
|[basic_ofstream](../VS_visualcpp/basic_ofstream-Class.md)|The template class describes an object that controls insertion of elements and encoded objects into a stream buffer of class [basic_filebuf](../VS_visualcpp/basic_filebuf-Class.md)<**Elem**, **Tr**>, with elements of type **Elem**, whose character traits are determined by the class **Tr**.|  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [iostreams Conventions](../VS_visualcpp/iostreams-Conventions.md)