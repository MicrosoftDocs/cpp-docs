---
title: "&lt;istream&gt;"
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
  - "istream/std::<istream>"
  - "std.<istream>"
  - "<istream>"
  - "std::<istream>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "istream header"
ms.assetid: efcf24e4-05d1-4719-ab0b-9e7ebe845d89
caps.latest.revision: 19
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
# &lt;istream&gt;
Defines the template class basic_istream, which mediates extractions for the iostreams, and the template class basic_iostream, which mediates both insertions and extractions. The header also defines a related manipulator. This header file is typically included for you by another iostreams header; you rarely have to include it directly.  
  
## Syntax  
  
```  
#include <istream>  
  
```  
  
### Typedefs  
  
|||  
|-|-|  
|[iostream](../stdcpplib/-istream--typedefs.md#iostream)|A type `basic_iostream` specialized on `char`.|  
|[istream](../stdcpplib/-istream--typedefs.md#istream)|A type `basic_istream` specialized on `char`.|  
|[wiostream](../stdcpplib/-istream--typedefs.md#wiostream)|A type `basic_iostream` specialized on **wchar**.|  
|[wistream](../stdcpplib/-istream--typedefs.md#wistream)|A type `basic_istream` specialized on **wchar**.|  
  
### Manipulators  
  
|||  
|-|-|  
|[ws](../stdcpplib/-istream--functions.md#ws)|Skips white space in the stream.|  
|[swap](../stdcpplib/-istream--functions.md#istream_swap)|Exchanges two stream objects.|  
  
### Operators  
  
|||  
|-|-|  
|[operator>>](../stdcpplib/-istream--operators.md#operator_gt__gt_)|Extracts characters and strings from the stream.|  
  
### Classes  
  
|||  
|-|-|  
|[basic_iostream](../stdcpplib/basic_iostream-class.md)|A stream class that can do both input and output.|  
|[basic_istream](../stdcpplib/basic_istream-class.md)|The template class describes an object that controls extraction of elements and encoded objects from a stream buffer with elements of type **Elem**, also known as [char_type](../stdcpplib/basic_ios-class.md#basic_ios__char_type), whose character traits are determined by the class **Tr**, also known as [traits_type](../stdcpplib/basic_ios-class.md#basic_ios__traits_type).|  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [iostream Programming](../stdcpplib/iostream-programming.md)   
 [iostreams Conventions](../stdcpplib/iostreams-conventions.md)

