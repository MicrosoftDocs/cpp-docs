---
title: "hash Structure (STL)"
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
  - "thread/std::hash"
dev_langs: 
  - "C++"
ms.assetid: 4a8bf5bc-4334-4070-936b-98585f8a073b
caps.latest.revision: 11
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
# hash Structure (STL)
Defines a member function that returns a value that's uniquely determined by `Val`. The member function defines a "hash"" function that's suitable for mapping values of type `thread::id` to a distribution of index values.  
  
## Syntax  
  
```  
template<>  
struct hash<thread::id> :   
   public unary_function<thread::id, size_t>  
{  
   size_t operator()(thread::id Val) const;  
};  
```  
  
## Requirements  
 **Header:** thread  
  
 **Namespace:** std  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [\<thread>](../stdcpplib/-thread-.md)   
 [unary_function Struct](../stdcpplib/unary_function-struct.md)