---
title: "hash Structure (STL) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "thread/std::hash"
dev_langs: 
  - "C++"
ms.assetid: 4a8bf5bc-4334-4070-936b-98585f8a073b
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# hash Structure (STL)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [hash Structure (C++ Standard Library)  Microsoft Docs](https://docs.microsoft.com/cpp/standard-library/hash-structure-stl).  
  
Defines a member function that returns a value that's uniquely determined by `Val`. The member function defines a [hash](../standard-library/hash-class.md) function that's suitable for mapping values of type `thread::id` to a distribution of index values.  
  
## Syntax  
  
```  
template <>  
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
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<thread>](../standard-library/thread.md)   
 [unary_function Struct](../standard-library/unary-function-struct.md)




