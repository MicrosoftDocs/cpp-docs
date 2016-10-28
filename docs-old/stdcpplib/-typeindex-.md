---
title: "&lt;typeindex&gt;"
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
  - "<typeindex>"
dev_langs: 
  - "C++"
ms.assetid: a9551137-f74b-4f02-af64-ff00214cea1f
caps.latest.revision: 13
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
# &lt;typeindex&gt;
Include the standard header \<typeindex> to define a class and function that support the indexing of objects of class [type_info](../cpp/type_info-class.md).  
  
## Syntax  
  
```cpp  
#include <typeindex>  
```  
  
## Remarks  
 The [hash Structure](../stdcpplib/hash-structure.md) defines a `hash function` that's suitable for mapping values of type [type_index](../stdcpplib/type_index-class.md) to a distribution of index values.  
  
 The `type_index` class wraps a pointer to a `type_info` object to assist in indexing.  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [Standard Template Library](../notintoc/standard-template-library.md)

