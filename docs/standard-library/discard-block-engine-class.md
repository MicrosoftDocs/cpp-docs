---
title: "discard_block_engine Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tr1.discard_block_engine"
  - "std.tr1.discard_block_engine"
  - "std::tr1::discard_block_engine"
  - "random/std::tr1::discard_block_engine"
  - "discard_block_engine"
  - "tr1::discard_block_engine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "discard_block_engine class"
ms.assetid: aa84808e-38fe-4fa0-9f73-d5b9a653345b
caps.latest.revision: 18
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
# discard_block_engine Class
Generates a random sequence by discarding values returned by its base engine.  
  
## Syntax  
  
```  
template <class Engine, size_t P, size_t R>  
class discard_block_engine;  
```  
  
#### Parameters  
 `Engine`  
 The base engine type.  
  
 `P`  
 **Block size**. The number of values in each block.  
  
 `R`  
 **Used block**. The number of values in each block that are used. The rest are discarded ( `P` - `R`). **Precondition**: `0 < R ≤ P`  
  
## Members  
  
||||  
|-|-|-|  
|`discard_block_engine::discard_block_engine`|`discard_block_engine::base`|`discard_block_engine::discard`|  
|`discard_block_engine::operator()`|`discard_block_engine::base_type`|`discard_block_engine::seed`|  
  
 For more information about engine members, see [\<random>](../standard-library/random.md).  
  
## Remarks  
 This template class describes an engine adaptor that produces values by discarding some of the values returned by its base engine.  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
## See Also  
 [\<random>](../standard-library/random.md)

