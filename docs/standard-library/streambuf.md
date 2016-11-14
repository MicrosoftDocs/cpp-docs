---
title: "&lt;streambuf&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::<streambuf>"
  - "<streambuf>"
  - "streambuf/std::<streambuf>"
  - "std.<streambuf>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "streambuf header"
ms.assetid: 4365b25c-5831-488b-b9c2-867bfe961b89
caps.latest.revision: 19
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
# &lt;streambuf&gt;
Include the iostreams standard header \<streambuf> to define the template class [basic_streambuf](../standard-library/basic-streambuf-class.md), which is basic to the operation of the iostreams classes. This header is typically included for you by another of the iostreams headers; you rarely need to include it directly.  
  
## Syntax  
  
```  
#include <streambuf>  
  
```  
  
### Typedefs  
  
|||  
|-|-|  
|[streambuf](../standard-library/streambuf-typedefs.md#streambuf)|A specialization of `basic_streambuf` that uses `char` as the template parameters.|  
|[wstreambuf](../standard-library/streambuf-typedefs.md#wstreambuf)|A specialization of `basic_streambuf` that uses `wchar_t` as the template parameters.|  
  
### Classes  
  
|||  
|-|-|  
|[basic_streambuf Class](http://msdn.microsoft.com/en-us/d9c706ba-ce01-43e0-b0b2-a558fc53ea8d)|The template class describes an abstract base class for deriving a stream buffer, which controls the transmission of elements to and from a specific representation of a stream.|  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [iostream Programming](../standard-library/iostream-programming.md)   
 [iostreams Conventions](../standard-library/iostreams-conventions.md)



