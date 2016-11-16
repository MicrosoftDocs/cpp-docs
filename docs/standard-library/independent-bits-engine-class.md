---
title: "independent_bits_engine Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.independent_bits_engine"
  - "std::tr1::independent_bits_engine"
  - "tr1::independent_bits_engine"
  - "tr1.independent_bits_engine"
  - "independent_bits_engine"
  - "random/std::tr1::independent_bits_engine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "independent_bits_engine class"
ms.assetid: 889e9a82-f457-49a7-9d2e-26e0fc3cd907
caps.latest.revision: 17
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
# independent_bits_engine Class
Generates a random sequence of numbers with a specified number of bits by repacking bits from the values returned by its base engine.  
  
## Syntax  
  
```  
template <class Engine, size_t W, class UIntType>  
class independent_bits_engine;  
```  
  
#### Parameters  
 `Engine`  
 The base engine type.  
  
 `W`  
 **Word size**. Size, in bits, of each number generated. **Precondition**: `0 < W ≤ numeric_limits<UIntType>::digits`  
  
 `UIntType`  
 The unsigned integer result type. For possible types, see [\<random>](../standard-library/random.md).  
  
## Members  
  
||||  
|-|-|-|  
|`independent_bits_engine::independent_bits_engine`|`independent_bits_engine::base`|`independent_bits_engine::discard`|  
|`independent_bits_engine::operator()`|`independent_bits_engine::base_type`|`independent_bits_engine::seed`|  
  
 For more information about engine members, see [\<random>](../standard-library/random.md).  
  
## Remarks  
 This template class describes an *engine adaptor* that produces values by repacking bits from the values returned by its base engine, resulting in `W`-bit values.  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
## See Also  
 [\<random>](../standard-library/random.md)

