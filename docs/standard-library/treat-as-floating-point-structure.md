---
title: "treat_as_floating_point Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "chrono/std::chrono::treat_as_floating_point"
dev_langs: 
  - "C++"
ms.assetid: d0a2161c-bbb2-4924-8961-7568d5ad5434
caps.latest.revision: 13
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
# treat_as_floating_point Structure
Specifies whether `Rep` can be treated as a floating-point type.  
  
## Syntax  
  
```  
template <class Rep>  
struct treat_as_floating_point : is_floating_point<Rep>;  
```  
  
## Remarks  
 `Rep` can be treated as a floating-point type only when the specialization `treat_as_floating_point<Rep>` is derived from [true_type](../standard-library/type-traits-typedefs.md#true_type_typedef). The template class can be specialized for a user-defined type.  
  
## Requirements  
 **Header:** chrono  
  
 **Namespace:** std::chrono  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono>](../standard-library/chrono.md)

