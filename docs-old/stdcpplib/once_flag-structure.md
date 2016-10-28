---
title: "once_flag Structure"
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
  - "mutex/std::once_flag"
dev_langs: 
  - "C++"
ms.assetid: 71bfb88d-ca8c-4082-a6e1-ff52151e8629
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
# once_flag Structure
Represents a `struct` that is used with the template function [call_once](../stdcpplib/-mutex--functions.md#call_once_function) to ensure that initialization code is called only once, even in the presence of multiple threads of execution.  
  
## Syntax  
  
```cpp
struct once_flag
{
    constexpr once_flag() noexcept;
    once_flag(const once_flag&);

    once_flag& operator=(const once_flag&);

};
```  
  
## Remarks  
 The `once_flag``struct` has only a default constructor.  
  
 Objects of type `once_flag` can be created, but they cannot be copied.  
  
## Requirements  
 **Header:** mutex  
  
 **Namespace:** std  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [\<mutex>](../stdcpplib/-mutex-.md)

