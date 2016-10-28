---
title: "&lt;random&gt; functions"
ms.custom: na
ms.date: "10/14/2016"
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: 2ac9ec59-619b-4b85-a425-f729277c1bc8
caps.latest.revision: 9
---
# &lt;random&gt; functions
||  
|-|  
|[generate_canonical](#generate_canonical)|  
  
##  <a name="generate_canonical"></a>  generate_canonical  
 Returns a floating-point value from a random sequence.  
  
> [!NOTE]
>  The ISO C++ Standard states that this function should return values in the range [ `0`, `1`). Visual Studio is not yet compliant with this constraint. As a workaround to generate values in this range, use [uniform_real_distribution](../stdcpplib/uniform_real_distribution-class.md).  
  
```  
template<class RealType, size_t Bits, class Generator>  
RealType generate_canonical(Generator& Gen);  
```  
  
### Parameters  
 `RealType`  
 The floating point integral type. For possible types, see [\<random>](../stdcpplib/-random-.md).  
  
 `Bits`  
 The random number generator.  
  
 `Gen`  
 The random number generator.  
  
### Remarks  
 The template function calls `operator()` of `Gen` repeatedly and packs the returned values into a floating-point value `x` of type `RealType` until it has gathered the specified number of mantissa bits in `x`. The specified number is the smaller of `Bits` (which must be nonzero) and the full number of mantissa bits in `RealType`. The first call supplies the lowest-order bits. The function returns `x`.  
  
## See Also  
 [\<random>](../stdcpplib/-random-.md)