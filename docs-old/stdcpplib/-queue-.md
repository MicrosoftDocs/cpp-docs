---
title: "&lt;queue&gt;"
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
  - "std::<queue>"
  - "std.<queue>"
  - "<queue>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "queue header"
ms.assetid: 24fcf350-eb0e-48cf-9fef-978be1aeda1f
caps.latest.revision: 18
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
# &lt;queue&gt;
Defines the template classes priority_queue and queue and several supporting templates.  
  
## Syntax  
  
```  
#include <queue>  
  
```  
  
### Operators  
  
|||  
|-|-|  
|[operator!=](../stdcpplib/-queue--operators.md#operator_neq)|Tests if the queue object on the left side of the operator is not equal to the queue object on the right side.|  
|[operator<](../stdcpplib/-queue--operators.md#operator_lt_)|Tests if the queue object on the left side of the operator is less than the queue object on the right side.|  
|[operator\<=](../stdcpplib/-queue--operators.md#operator_lt__eq)|Tests if the queue object on the left side of the operator is less than or equal to the queue object on the right side.|  
|[operator==](../stdcpplib/-queue--operators.md#operator_eq_eq)|Tests if the queue object on the left side of the operator is equal to the queue object on the right side.|  
|[operator>](../stdcpplib/-queue--operators.md#operator_gt_)|Tests if the queue object on the left side of the operator is greater than the queue object on the right side.|  
|[operator>=](../stdcpplib/-queue--operators.md#operator_gt__eq)|Tests if the queue object on the left side of the operator is greater than or equal to the queue object on the right side.|  
  
### Classes  
  
|||  
|-|-|  
|queue Class|A template container adaptor class that provides a restriction of functionality limiting access to the front and back elements of some underlying container type.|  
|[priority_queue Class](../stdcpplib/priority_queue-class.md)|A template container adaptor class that provides a restriction of functionality limiting access to the top element of some underlying container type, which is always the largest.|  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [Standard Template Library](../notintoc/standard-template-library.md)