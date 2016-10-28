---
title: "treat_as_floating_point Structure"
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
  - "chrono/std::chrono::treat_as_floating_point"
dev_langs: 
  - "C++"
ms.assetid: d0a2161c-bbb2-4924-8961-7568d5ad5434
caps.latest.revision: 12
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
# treat_as_floating_point Structure
Specifies whether `Rep` can be treated as a floating-point type.  
  
## Syntax  
  
```  
template<class Rep>  
struct treat_as_floating_point : is_floating_point< Rep>;  
```  
  
## Remarks  
 `Rep` can be treated as a floating-point type only when the specialization `treat_as_floating_point<Rep>` is derived from [true_type](../stdcpplib/-type_traits--typedefs.md#true_type_typedef). The template class can be specialized for a user-defined type.  
  
## Requirements  
 **Header:** chrono  
  
 **Namespace:** std::chrono  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [\<chrono>](../stdcpplib/-chrono-.md)