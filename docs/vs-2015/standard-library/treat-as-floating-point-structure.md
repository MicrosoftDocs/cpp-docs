---
title: "treat_as_floating_point Structure | Microsoft Docs"
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
  - "chrono/std::chrono::treat_as_floating_point"
dev_langs: 
  - "C++"
ms.assetid: d0a2161c-bbb2-4924-8961-7568d5ad5434
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# treat_as_floating_point Structure
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [treat_as_floating_point Structure](https://docs.microsoft.com/cpp/standard-library/treat-as-floating-point-structure).  
  
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





