---
title: "independent_bits_engine Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 889e9a82-f457-49a7-9d2e-26e0fc3cd907
caps.latest.revision: 16
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# independent_bits_engine Class
Generates a random sequence of numbers with a specified number of bits by repacking bits from the values returned by its base engine.  
  
## Syntax  
  
```  
template<class Engine, size_t W, class UIntType>  
class independent_bits_engine;  
```  
  
#### Parameters  
 `Engine`  
 The base engine type.  
  
 `W`  
 **Word size**. Size, in bits, of each number generated.                         **Precondition**: `0 < W ≤ numeric_limits<UIntType>::digits`  
  
 `UIntType`  
 The unsigned integer result type. For possible types, see [<random\>](../VS_visualcpp/-random-.md).  
  
## Members  
  
||||  
|-|-|-|  
|`independent_bits_engine::independent_bits_engine`|`independent_bits_engine::base`|`independent_bits_engine::discard`|  
|`independent_bits_engine::operator()`|`independent_bits_engine::base_type`|`independent_bits_engine::seed`|  
  
 For more information about engine members, see [<random\>](../VS_visualcpp/-random-.md).  
  
## Remarks  
 This template class describes an *engine adaptor* that produces values by repacking bits from the values returned by its base engine, resulting in `W`-bit values.  
  
## Requirements  
 **Header:** <random\>  
  
 **Namespace:** std  
  
## See Also  
 [<random\>](../VS_visualcpp/-random-.md)