---
title: "&lt;ostream&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 20
author: "corob-msft"
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
Defines the template class [basic_ostream](../standard-library/basic-ostream-class.md), which mediates insertions for the iostreams. The header also defines several related manipulators. (This header is typically included for you by another of the iostreams headers. You rarely need to include it directly.)  
  
## Syntax  
  
```  
#include <ostream>  
  
```  
  
### Typedefs  
  
|||  
|-|-|  
|[ostream](../standard-library/ostream-typedefs.md#ostream)|Creates a type from `basic_ostream` that is specialized on `char` and `char_traits` specialized on `char`.|  
|[wostream](../standard-library/ostream-typedefs.md#wostream)|Creates a type from `basic_ostream` that is specialized on `wchar_t` and `char_traits` specialized on `wchar_t`.|  
  
### Manipulators  
  
|||  
|-|-|  
|[endl](../standard-library/ostream-functions.md#endl)|Terminates a line and flushes the buffer.|  
|[ends](../standard-library/ostream-functions.md#ends)|Terminates a string.|  
|[flush](../standard-library/ostream-functions.md#flush)|Flushes the buffer.|  
|[swap](../standard-library/ostream-functions.md#swap)|Exchanges the values of the left `basic_ostream` object parameter for those of the right `basic_ostream` object parameter.|  
  
### Operators  
  
|||  
|-|-|  
|[operator<<](../standard-library/ostream-operators.md#operator_lt__lt_)|Writes various types to the stream.|  
  
### Classes  
  
|||  
|-|-|  
|[basic_ostream](../standard-library/basic-ostream-class.md)|The template class describes an object that controls insertion of elements and encoded objects into a stream buffer.|  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)



