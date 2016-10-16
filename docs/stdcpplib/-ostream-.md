---
title: "&lt;ostream&gt;"
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
  - "std.<ostream>"
  - "<ostream>"
  - "ostream/std::<ostream>"
  - "std::<ostream>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ostream header"
ms.assetid: 90c3b6fb-57cd-4ae7-99b8-8512f24a67d2
caps.latest.revision: 19
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
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
# &lt;ostream&gt;
Defines the template class [basic_ostream](../stdcpplib/basic_ostream-class.md), which mediates insertions for the iostreams. The header also defines several related manipulators. (This header is typically included for you by another of the iostreams headers. You rarely need to include it directly.)  
  
## Syntax  
  
```  
#include <ostream>  
  
```  
  
### Typedefs  
  
|||  
|-|-|  
|[ostream](../stdcpplib/-ostream--typedefs.md#ostream)|Creates a type from `basic_ostream` that is specialized on `char` and `char_traits` specialized on `char`.|  
|[wostream](../stdcpplib/-ostream--typedefs.md#wostream)|Creates a type from `basic_ostream` that is specialized on `wchar_t` and `char_traits` specialized on `wchar_t`.|  
  
### Manipulators  
  
|||  
|-|-|  
|[endl](../stdcpplib/-ostream--functions.md#endl)|Terminates a line and flushes the buffer.|  
|[ends](../stdcpplib/-ostream--functions.md#ends)|Terminates a string.|  
|[flush](../stdcpplib/-ostream--functions.md#flush)|Flushes the buffer.|  
|[swap](../stdcpplib/-ostream--functions.md#swap)|Exchanges the values of the left `basic_ostream` object parameter for those of the right `basic_ostream` object parameter.|  
  
### Operators  
  
|||  
|-|-|  
|[operator<<](../stdcpplib/-ostream--operators.md#operator_lt__lt_)|Writes various types to the stream.|  
  
### Classes  
  
|||  
|-|-|  
|[basic_ostream](../stdcpplib/basic_ostream-class.md)|The template class describes an object that controls insertion of elements and encoded objects into a stream buffer.|  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [iostream Programming](../stdcpplib/iostream-programming.md)   
 [iostreams Conventions](../stdcpplib/iostreams-conventions.md)

