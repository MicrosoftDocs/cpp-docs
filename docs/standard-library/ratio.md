---
title: "&lt;ratio&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ratio/std::mega"
  - "ratio/std::peta"
  - "ratio/std::ratio_greater"
  - "ratio/std::micro"
  - "ratio/std::ratio_add"
  - "ratio/std::ratio_not_equal"
  - "ratio/std::hecto"
  - "ratio/std::nano"
  - "ratio/std::ratio_less_equal"
  - "ratio/std::ratio_less"
  - "ratio/std::centi"
  - "ratio/std::ratio_greater_equal"
  - "ratio/std::ratio_subtract"
  - "<ratio>"
  - "ratio/std::atto"
  - "ratio/std::tera"
  - "ratio/std::milli"
  - "ratio/std::ratio_multiply"
  - "ratio/std::kilo"
  - "ratio/std::ratio_divide"
  - "ratio/std::giga"
  - "ratio/std::pico"
  - "ratio/std::femto"
  - "ratio/std::ratio_equal"
  - "ratio/std::ratio"
  - "ratio/std::exa"
  - "ratio/std::deci"
  - "ratio/std::deca"
dev_langs: 
  - "C++"
ms.assetid: 8543e912-2d84-45ea-b3c0-bd7bfacee405
caps.latest.revision: 14
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
# &lt;ratio&gt;
Include the standard header \<ratio> to define constants and templates that are used to store and manipulate rational numbers at compile time.  
  
## Syntax  
  
```cpp  
#include <ratio>  
```  
  
### ratio Structure  

```
struct ratio
{
    static constexpr intmax_t num;
    static constexpr intmax_t den;
    typedef ratio<num, den>  type;
};
```  
 The [ratio Structure](http://msdn.microsoft.com/en-us/3f7961f4-802b-4251-b3c3-090ef91c0dba) defines the static constants `num` and `den` such that `num` / `den` == N / D and `num` and `den` have no common factors. `num` / `den` is the `value` that is represented by the template class. Therefore, `type` designates the instantiation `ratio<N0, D0>` for which `num` == N0 and `den` == D0.  
  
### Specializations  
 \<ratio> also defines specializations of `ratio` that have the following form.  
  
 `template <class R1, class R2> struct ratio_specialization`  
  
 Each specialization takes two template parameters that must also be specializations of `ratio`. The value of `type` is determined by an associated logical operation.  
  
|Name|`type` Value|  
|----------|------------------|  
|`ratio_add`|`R1 + R2`|  
|`ratio_divide`|`R1 / R2`|  
|`ratio_equal`|`R1 == R2`|  
|`ratio_greater`|`R1 > R2`|  
|`ratio_greater_equal`|`R1 >= R2`|  
|`ratio_less`|`R1 < R2`|  
|`ratio_less_equal`|`R1 <= R2`|  
|`ratio_multiply`|`R1 * R2`|  
|`ratio_not_equal`|`!(R1 == R2)`|  
|`ratio_subtract`|`R1 - R2`|  
  
### typedefs  
  
```
typedef ratio<1,  1000000000000000000> atto;
typedef ratio<1,     1000000000000000> femto;
typedef ratio<1,        1000000000000> pico;
typedef ratio<1, 1000000000> nano;
typedef ratio<1, 1000000> micro;
typedef ratio<1, 1000> milli;
typedef ratio<1,  100> centi;
typedef ratio<1,   10> deci;
typedef ratio<10, 1> deca;
typedef ratio<100, 1> hecto;
typedef ratio<1000, 1> kilo;
typedef ratio<1000000, 1> mega;
typedef ratio<1000000000, 1> giga;
typedef ratio<1000000000000, 1> tera;
typedef ratio<1000000000000000, 1> peta;
typedef ratio<1000000000000000000, 1> exa;
```  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)



