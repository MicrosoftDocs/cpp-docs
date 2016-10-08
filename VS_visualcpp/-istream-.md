---
title: "&lt;istream&gt;"
ms.custom: na
ms.date: 10/05/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: efcf24e4-05d1-4719-ab0b-9e7ebe845d89
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
# &lt;istream&gt;
Defines the template class basic_istream, which mediates extractions for the iostreams, and the template class basic_iostream, which mediates both insertions and extractions. The header also defines a related manipulator. This header file is typically included for you by another iostreams header; you rarely have to include it directly.  
  
## Syntax  
  
```  
#include <istream>  
  
```  
  
### Typedefs  
  
|||  
|-|-|  
|[iostream](../VS_visualcpp/-istream--typedefs.md#iostream)|A type `basic_iostream` specialized on `char`.|  
|[istream](../VS_visualcpp/-istream--typedefs.md#istream)|A type `basic_istream` specialized on `char`.|  
|[wiostream](../VS_visualcpp/-istream--typedefs.md#wiostream)|A type `basic_iostream` specialized on **wchar**.|  
|[wistream](../VS_visualcpp/-istream--typedefs.md#wistream)|A type `basic_istream` specialized on **wchar**.|  
  
### Manipulators  
  
|||  
|-|-|  
|[ws](../VS_visualcpp/-istream--functions.md#ws)|Skips white space in the stream.|  
|[swap](../VS_visualcpp/-istream--functions.md#istream_swap)|Exchanges two stream objects.|  
  
### Operators  
  
|||  
|-|-|  
|[operator>>](../VS_visualcpp/-istream--operators.md#operator_gt__gt_)|Extracts characters and strings from the stream.|  
  
### Classes  
  
|||  
|-|-|  
|[basic_iostream](../VS_visualcpp/basic_iostream-Class.md)|A stream class that can do both input and output.|  
|[basic_istream](../VS_visualcpp/basic_istream-Class.md)|The template class describes an object that controls extraction of elements and encoded objects from a stream buffer with elements of type **Elem**, also known as [char_type](../VS_visualcpp/basic_ios-Class.md#basic_ios__char_type), whose character traits are determined by the class **Tr**, also known as [traits_type](../VS_visualcpp/basic_ios-Class.md#basic_ios__traits_type).|  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [iostream Programming](../VS_visualcpp/iostream-Programming.md)   
 [iostreams Conventions](../VS_visualcpp/iostreams-Conventions.md)