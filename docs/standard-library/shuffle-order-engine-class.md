---
title: "shuffle_order_engine Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["random/std::shuffle_order_engine", "random/std::shuffle_order_engine::base", "random/std::shuffle_order_engine::discard", "random/std::shuffle_order_engine::operator()", "random/std::shuffle_order_engine::base_type", "random/std::shuffle_order_engine::seed"]
dev_langs: ["C++"]
helpviewer_keywords: ["std::shuffle_order_engine [C++]", "std::shuffle_order_engine [C++], base", "std::shuffle_order_engine [C++], discard", "std::shuffle_order_engine [C++], base_type", "std::shuffle_order_engine [C++], seed"]
ms.assetid: 0bcd1fb0-44d7-4e59-bb1b-4a9b673a960d
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
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

