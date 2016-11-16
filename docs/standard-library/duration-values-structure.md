---
title: "duration_values Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "chrono/std::chrono::duration_values"
dev_langs: 
  - "C++"
ms.assetid: 7f66d2e3-1faf-47c3-b47e-08f2a87f20e8
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
# duration_values Structure
Provides specific values for the [duration](../standard-library/duration-class.md) template parameter `Rep`.  
  
## Syntax  
  
```  
template <class Rep>  
struct duration_values;  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[duration_values::max](#duration_values__max_method)|Static. Specifies the upper limit for a value of type `Rep`.|  
|[duration_values::min](#duration_values__min_method)|Static. Specifies the lower limit for a value of type `Rep`.|  
|[duration_values::zero](#duration_values__zero_method)|Static. Returns `Rep(0)`.|  
  
## Requirements  
 **Header:** chrono  
  
 **Namespace:** std::chrono  
  
##  <a name="duration_values__max_method"></a>  duration_values::max  
 Static method that returns the upper bound for values of type `Ref`.  
  
```  
static constexpr Rep max();
```  
  
### Return Value  
 In effect, returns `numeric_limits<Rep>::max()`.  
  
### Remarks  
 When `Rep` is a user-defined type, the return value must be greater than [duration_values::zero](#duration_values__zero_method).  
  
##  <a name="duration_values__min_method"></a>  duration_values::min  
 Static method that returns the lower bound for values of type `Ref`.  
  
```  
static constexpr Rep min();
```  
  
### Return Value  
 In effect, returns `numeric_limits<Rep>::lowest()`.  
  
### Remarks  
 When `Rep` is a user-defined type, the return value must be less than or equal to [duration_values::zero](#duration_values__zero_method).  
  
##  <a name="duration_values__zero_method"></a>  duration_values::zero  
 Returns `Rep(0)`.  
  
```  
static constexpr Rep zero();
```  
  
### Remarks  
 When `Rep` is a user-defined type, the return value must represent the additive infinity.  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono>](../standard-library/chrono.md)

