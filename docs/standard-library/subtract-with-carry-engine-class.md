---
title: "subtract_with_carry_engine Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tr1.subtract_with_carry_engine"
  - "std::tr1::subtract_with_carry_engine"
  - "random/std::tr1::subtract_with_carry_engine"
  - "subtract_with_carry_engine"
  - "tr1::subtract_with_carry_engine"
  - "std.tr1.subtract_with_carry_engine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "subtract_with_carry_engine class"
ms.assetid: 94a055f2-a620-4a22-ac34-c156924bab31
caps.latest.revision: 20
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
# subtract_with_carry_engine Class
Generates a random sequence by the subtract-with-carry (lagged Fibonacci) algorithm.  
  
## Syntax  
  
```  
template <class UIntType, size_t W, size_t S, size_t R>  
class subtract_with_carry_engine;  
```  
  
#### Parameters  
 `UIntType`  
 The unsigned integer result type. For possible types, see [\<random>](../standard-library/random.md).  
  
 `W`  
 **Word size**. Size of each word, in bits, of the state sequence. **Precondition**: `0 < W ≤ numeric_limits<UIntType>::digits`  
  
 `S`  
 **Short lag**. Number of integer values. **Precondition**: `0 < S < R`  
  
 `R`  
 **Long lag**. Determines recurrence in the series generated.  
  
## Members  
  
||||  
|-|-|-|  
|`subtract_with_carry_engine::subtract_with_carry_engine`|`subtract_with_carry_engine::min`|`subtract_with_carry_engine::discard`|  
|`subtract_with_carry_engine::operator()`|`subtract_with_carry_engine::max`|`subtract_with_carry_engine::seed`|  
|`default_seed` is a member constant, defined as `19780503u`, used as the default parameter value for `subtract_with_carry_engine::seed` and the single value constructor.|||  
  
 For more information about engine members, see [\<random>](../standard-library/random.md).  
  
## Remarks  
 The `substract_with_carry_engine` template class is an improvement over the [linear_congruential_engine](../standard-library/linear-congruential-engine-class.md). Neither for these engines is as fast or with as high quality results as the [mersenne_twister_engine](../standard-library/mersenne-twister-engine-class.md).  
  
 This engine produces values of a user-specified unsigned integral type using the recurrence relation ( *period*) `x(i) = (x(i - R) - x(i - S) - cy(i - 1)) mod M`, where `cy(i)` has the value `1` if `x(i - S) - x(i - R) - cy(i - 1) < 0`, otherwise `0`, and `M` has the value `2`<sup>W</sup>. The engine's state is a carry indicator plus `R` values. These values consist of the last `R` values returned if `operator()` has been called at least `R` times, otherwise the `N` values that have been returned and the last `R - N` values of the seed.  
  
 The template argument `UIntType` must be large enough to hold values up to `M - 1`.  
  
 Although you can construct a generator from this engine directly, you can also use one of these predefined typedefs:  
  
 `ranlux24_base`: Used as a base for `ranlux24`.                   
`typedef subtract_with_carry_engine<unsigned int, 24, 10, 24> ranlux24_base;`  
  
 `ranlux48_base`: Used as a base for `ranlux48`.                   
`typedef subtract_with_carry_engine<unsigned long long, 48, 5, 12> ranlux48_base;`  
  
 For detailed information about the subract with carry engine algorithm, see the Wikipedia article [Lagged Fibonacci generator](http://go.microsoft.com/fwlink/LinkId=402445).  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
## See Also  
 [\<random>](../standard-library/random.md)

