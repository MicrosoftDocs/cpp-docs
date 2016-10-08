---
title: "&lt;streambuf&gt;"
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
ms.assetid: 4365b25c-5831-488b-b9c2-867bfe961b89
caps.latest.revision: 17
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
# &lt;streambuf&gt;
Include the iostreams standard header <streambuf\> to define the template class [basic_streambuf](../VS_visualcpp/basic_streambuf-Class.md), which is basic to the operation of the iostreams classes. This header is typically included for you by another of the iostreams headers; you rarely need to include it directly.  
  
## Syntax  
  
```  
#include <streambuf>  
  
```  
  
### Typedefs  
  
|||  
|-|-|  
|[streambuf](../VS_visualcpp/-streambuf--typedefs.md#streambuf)|A specialization of `basic_streambuf` that uses `char` as the template parameters.|  
|[wstreambuf](../VS_visualcpp/-streambuf--typedefs.md#wstreambuf)|A specialization of `basic_streambuf` that uses `wchar_t` as the template parameters.|  
  
### Classes  
  
|||  
|-|-|  
|[basic_streambuf Class](assetId:///d9c706ba-ce01-43e0-b0b2-a558fc53ea8d)|The template class describes an abstract base class for deriving a stream buffer, which controls the transmission of elements to and from a specific representation of a stream.|  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [iostreams Conventions](../VS_visualcpp/iostreams-Conventions.md)