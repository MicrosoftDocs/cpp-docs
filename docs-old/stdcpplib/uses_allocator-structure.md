---
title: "uses_allocator Structure"
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
  - "future/std::uses_allocator"
dev_langs: 
  - "C++"
ms.assetid: c418f002-62e9-4806-b70c-41c663cae583
caps.latest.revision: 12
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# uses_allocator Structure
Specializations that always hold true.  
  
## Syntax  
  
```
template<class Ty, class Alloc>
struct uses_allocator<promise<Ty>, Alloc> : true_type;
template<class Ty, class Alloc>
struct uses_allocator<packaged_task<Ty>, Alloc> : true_type;
```  
  
## Requirements  
 **Header:** future  
  
 **Namespace:** std  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [\<future>](../stdcpplib/-future-.md)

