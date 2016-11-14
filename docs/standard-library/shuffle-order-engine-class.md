---
title: "shuffle_order_engine Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "shuffle_order_engine"
  - "std.tr1.shuffle_order_engine"
  - "tr1::shuffle_order_engine"
  - "tr1.shuffle_order_engine"
  - "std::tr1::shuffle_order_engine"
  - "random/std::tr1::shuffle_order_engine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "shuffle_order_engine class"
ms.assetid: 0bcd1fb0-44d7-4e59-bb1b-4a9b673a960d
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# shuffle_order_engine Class
Generates a random sequence by reordering the values returned from its base engine.  
  
## Syntax  
  
```  
template <class Engine, size_t K>  
class shuffle_order_engine;  
```  
  
#### Parameters  
 `Engine`  
 The base engine type.  
  
 `K`  
 **Table size**. Number of elements in the buffer (table). **Precondition**: `0 < K`  
  
## Members  
  
||||  
|-|-|-|  
|`shuffle_order_engine::shuffle_order_engine`|`shuffle_order_engine::base`|`shuffle_order_engine::discard`|  
|`shuffle_order_engine::operator()`|`shuffle_order_engine::base_type`|`shuffle_order_engine::seed`|  
  
 For more information about engine members, see [\<random>](../standard-library/random.md).  
  
## Remarks  
 This template class describes an *engine adaptor* that produces values by reordering the values returned by its base engine. Each constructor fills the internal table with `K` values returned by the base engine, and a random element is selected from the table when a value is requested.  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
## See Also  
 [\<random>](../standard-library/random.md)

