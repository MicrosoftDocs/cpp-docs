---
title: "&lt;istream&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
# &lt;istream&gt;
Defines the template class basic_istream, which mediates extractions for the iostreams, and the template class basic_iostream, which mediates both insertions and extractions. The header also defines a related manipulator. This header file is typically included for you by another iostreams header; you rarely have to include it directly.  
  
## Syntax  
  
```  
#include <istream>  
  
```  
  
### Typedefs  
  
|||  
|-|-|  
|[iostream](../standard-library/istream-typedefs.md#iostream)|A type `basic_iostream` specialized on `char`.|  
|[istream](../standard-library/istream-typedefs.md#istream)|A type `basic_istream` specialized on `char`.|  
|[wiostream](../standard-library/istream-typedefs.md#wiostream)|A type `basic_iostream` specialized on **wchar**.|  
|[wistream](../standard-library/istream-typedefs.md#wistream)|A type `basic_istream` specialized on **wchar**.|  
  
### Manipulators  
  
|||  
|-|-|  
|[ws](../standard-library/istream-functions.md#ws)|Skips white space in the stream.|  
|[swap](../standard-library/istream-functions.md#istream_swap)|Exchanges two stream objects.|  
  
### Operators  
  
|||  
|-|-|  
|[operator>>](../standard-library/istream-operators.md#operator_gt__gt_)|Extracts characters and strings from the stream.|  
  
### Classes  
  
|||  
|-|-|  
|[basic_iostream](../standard-library/basic-iostream-class.md)|A stream class that can do both input and output.|  
|[basic_istream](../standard-library/basic-istream-class.md)|The template class describes an object that controls extraction of elements and encoded objects from a stream buffer with elements of type **Elem**, also known as [char_type](../standard-library/basic-ios-class.md#basic_ios__char_type), whose character traits are determined by the class **Tr**, also known as [traits_type](../standard-library/basic-ios-class.md#basic_ios__traits_type).|  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)



