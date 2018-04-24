---
title: "Concurrency::fast_math Namespace | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp_math/Concurrency::fast_math"
dev_langs: 
  - "C++"
ms.assetid: 54fed939-9902-49db-9f29-e98fd9821508
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Concurrency::fast_math Namespace
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

Functions in the `fast_math` namespace have lower accuracy, support only single-precision (`float`), and call the DirectX intrinsics. There are two versions of each function, for example `cos` and `cosf`. Both versions take and return a `float`, but each calls the same DirectX intrinsic.  
  
## Syntax  
  
```  
namespace fast_math;  
```  
  
## Members  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[cos Function  (fast_math)](http://msdn.microsoft.com/library/d41e952a-9a7e-45fa-9ffb-9c1466de534b)|Calculates the arccosine of the argument|  
|[cosf Function (fast_math)](http://msdn.microsoft.com/library/8d194776-eef5-48b8-871e-a4f5998c9170)|Calculates the arccosine of the argument|  
|[asin Function (fast_math)](http://msdn.microsoft.com/library/e282baf4-8b59-44e5-a7e8-dc9059775205)|Calculates the arcsine of the argument|  
|[asinf Function (fast_math)](http://msdn.microsoft.com/library/ea7b79a4-a775-4611-b56d-6597863167ef)|Calculates the arcsine of the argument|  
|[atan Function (fast_math)](http://msdn.microsoft.com/library/8a3f0df5-9107-4c12-8b4c-af296f249d47)|Calculates the arctangent of the argument|  
|[atan2 Function (fast_math)](http://msdn.microsoft.com/library/7493b454-a490-4d83-8ab1-dd4ad82b7538)|Calculates the arctangent of _Y/_X|  
|[atan2f Function (fast_math)](http://msdn.microsoft.com/library/8ef7ab93-46d2-450e-a6b8-d0bf6035e902)|Calculates the arctangent of _Y/_X|  
|[atanf Function (fast_math)](http://msdn.microsoft.com/library/4710ec0e-5532-4970-afd2-ed0481960daa)|Calculates the arctangent of the argument|  
|[ceil Function (fast_math)](http://msdn.microsoft.com/library/b911272e-5228-4c50-9483-6c84b7340ccc)|Calculates the ceiling of the argument|  
|[ceilf Function (fast_math)](http://msdn.microsoft.com/library/f69ec990-481d-4ed7-8df3-592fd6cfe9a0)|Calculates the ceiling of the argument|  
|[cos Function  (fast_math)](http://msdn.microsoft.com/library/d41e952a-9a7e-45fa-9ffb-9c1466de534b)|Calculates the cosine of the argument|  
|[cosf Function (fast_math)](http://msdn.microsoft.com/library/8d194776-eef5-48b8-871e-a4f5998c9170)|Calculates the cosine of the argument|  
|[cosh Function (fast_math)](http://msdn.microsoft.com/library/f4e22941-baed-47e9-92dc-1b2f70ef4623)|Calculates the hyperbolic cosine value of the argument|  
|[coshf Function (fast_math)](http://msdn.microsoft.com/library/37b98be0-20ed-47cf-aec3-fff703cf6353)|Calculates the hyperbolic cosine value of the argument|  
|[exp Function (fast_math)](http://msdn.microsoft.com/library/4b83afe4-783f-410c-a661-c2f92f962606)|Calculates the base-e exponential of the argument|  
|[exp2 Function (fast_math)](http://msdn.microsoft.com/library/506ff84e-77e5-45a3-997f-b912c135d7d1)|Calculates the base-2 exponential of the argument|  
|[exp2f Function (fast_math)](http://msdn.microsoft.com/library/80576068-8f55-43f0-ac51-4c39727eef86)|Calculates the base-2 exponential of the argument|  
|[expf Function (fast_math)](http://msdn.microsoft.com/library/1b8b354a-3da6-49b7-93df-879ecc3b3d73)|Calculates the base-e exponential of the argument|  
|[fabs Function (fast_math)](http://msdn.microsoft.com/library/58c987da-2225-4659-a77f-8934a361cd9b)|Returns the absolute value of the argument|  
|[fabsf Function (fast_math)](http://msdn.microsoft.com/library/6ed94033-51ad-4a5f-bada-d674c4aeb50c)|Returns the absolute value of the argument|  
|[floor Function (fast_math)](http://msdn.microsoft.com/library/c279bc77-f92f-4faf-b438-775b4256297b)|Calculates the floor of the argument|  
|[floorf Function (fast_math)](http://msdn.microsoft.com/library/e40dc059-926e-4242-a558-891ba32a05af)|Calculates the floor of the argument|  
|[fmax Function (fast_math)](http://msdn.microsoft.com/library/773166f8-c086-4791-ba10-4442044edf37)|Determine the maximum numeric value of the arguments|  
|[fmaxf Function (fast_math)](http://msdn.microsoft.com/library/52c1746c-a60f-4713-b558-5fc0e1e894bf)|Determine the maximum numeric value of the arguments|  
|[fmin Function (fast_math)](http://msdn.microsoft.com/library/73297c51-8271-47cb-8230-ec175c234e6e)|Determine the minimum numeric value of the arguments|  
|[fminf Function (fast_math)](http://msdn.microsoft.com/library/1376fc56-0c92-4a2c-bc02-9096790da99d)|Determine the minimum numeric value of the arguments|  
|[fmod Function (fast_math)](http://msdn.microsoft.com/library/eed15acf-02c0-4f2f-9f45-3a91223ae974)|Calculates the floating-point remainder of _X/_Y|  
|[fmodf Function (fast_math)](http://msdn.microsoft.com/library/2bddb864-bb35-40d9-9808-2e23b8891418)|Calculates the floating-point remainder of _X/_Y|  
|[frexp Function (fast_math)](http://msdn.microsoft.com/library/afa379bc-5edd-477c-a722-6dd576e7c950)|Gets the mantissa and exponent of _X|  
|[frexpf Function (fast_math)](http://msdn.microsoft.com/library/685995c3-b055-4e8d-a74b-7f799563822d)|Gets the mantissa and exponent of _X|  
|[isfinite Function (fast_math)](http://msdn.microsoft.com/library/47061f49-f6d4-4c33-8bdf-96bd4f908c78)|Determines whether the argument has a finite value|  
|[isinf Function (fast_math)](http://msdn.microsoft.com/library/14edf7ce-64c8-4e2b-afbf-7fd842e7b159)|Determines whether the argument is an infinity|  
|[isnan Function (fast_math)](http://msdn.microsoft.com/library/86d7a8d7-2607-4097-a399-801ebfe74730)|Determines whether the argument is a NaN|  
|[ldexp Function (fast_math)](http://msdn.microsoft.com/library/29e2052b-341f-4d68-8b87-af5f5026c16b)|Computes a real number from the mantissa and exponent|  
|[ldexpf Function (fast_math)](http://msdn.microsoft.com/library/d3e46d8a-1b8b-4534-8ef4-2e7becd31ca0)|Computes a real number from the mantissa and exponent|  
|[log Function (fast_math)](http://msdn.microsoft.com/library/774b42b9-f0d8-428b-a9a2-03729e1f258c)|Calculates the base-e logarithm of the argument|  
|[log10 Function (fast_math)](http://msdn.microsoft.com/library/74262d29-db3e-439d-9b8a-13c272411e83)|Calculates the base-10 logarithm of the argument|  
|[log10f Function (fast_math)](http://msdn.microsoft.com/library/0e5ee9eb-7ed3-403e-90e4-09699e4e3884)|Calculates the base-10 logarithm of the argument|  
|[log2 Function (fast_math)](http://msdn.microsoft.com/library/ad31e396-0a0c-4fc6-b058-ba0e17563826)|Calculates the base-2 logarithm of the argument|  
|[log2f Function (fast_math)](http://msdn.microsoft.com/library/170838f4-b4f4-4f65-b6ec-be7d2a37e334)|Calculates the base-2 logarithm of the argument|  
|[logf Function (fast_math)](http://msdn.microsoft.com/library/e624d853-b1ac-4ba7-9b21-ec8df3519054)|Calculates the base-e logarithm of the argument|  
|[modf Function (fast_math)](http://msdn.microsoft.com/library/bcaee455-243c-419d-af92-8de5253f0662)|Splits _X into fractional and integer parts.|  
|[modff Function (fast_math)](http://msdn.microsoft.com/library/ec72a38b-234a-4f6b-b20f-8531f938254b)|Splits _X into fractional and integer parts.|  
|[pow Function (fast_math)](http://msdn.microsoft.com/library/9ef4a5fe-4052-4e7f-9577-aa2b039eb139)|Calculates _X raised to the power of _Y|  
|[powf Function (fast_math)](http://msdn.microsoft.com/library/7bade7ac-b7ea-4970-b2b6-35eaa05002de)|Calculates _X raised to the power of _Y|  
|[round Function (fast_math)](http://msdn.microsoft.com/library/3d0bb300-543e-481e-9626-e0a03e5d2c9e)|Rounds _X to the nearest integer|  
|[roundf Function (fast_math)](http://msdn.microsoft.com/library/94687530-02f6-4c99-8110-23abfd487c96)|Rounds _X to the nearest integer|  
|[rsqrt Function (fast_math)](http://msdn.microsoft.com/library/09a9ea05-e47a-409f-be64-d51a3d4e964e)|Returns the reciprocal of the square root of the argument|  
|[rsqrtf Function (fast_math)](http://msdn.microsoft.com/library/c9f4aaff-017e-4bbb-8c4d-eae8e517de80)|Returns the reciprocal of the square root of the argument|  
|[signbit Function (fast_math)](http://msdn.microsoft.com/library/30e26c14-1004-48d1-980d-f32249bfe248)|Returns the sign of the argument|  
|[signbitf Function (fast_math)](http://msdn.microsoft.com/library/b4c1602c-6088-492b-9732-80b7d0deb6cd)|Returns the sign of the argument|  
|[sin Function (fast_math)](http://msdn.microsoft.com/library/34c3b71d-91bf-489c-abfe-611367def6fd)|Calculates the sine value of the argument|  
|[sincos Function (fast_math)](http://msdn.microsoft.com/library/f35ae426-6ae7-46d4-a894-dedb76566c3e)|Calculates sine and cosine value of _X|  
|[sincosf Function (fast_math)](http://msdn.microsoft.com/library/59b8a66d-0073-409c-a7de-ee75d4962131)|Calculates sine and cosine value of _X|  
|[sinf Function (fast_math)](http://msdn.microsoft.com/library/a0bab964-25e1-4e0b-a80b-8d57f7967529)|Calculates the sine value of the argument|  
|[sinh Function (fast_math)](http://msdn.microsoft.com/library/aaba46ff-599c-4e71-a888-55db623bf764)|Calculates the hyperbolic sine value of the argument|  
|[sinhf Function (fast_math)](http://msdn.microsoft.com/library/a027e76e-4ac8-4147-a1c2-664a55fbfaae)|Calculates the hyperbolic sine value of the argument|  
|[sqrt Function (fast_math)](http://msdn.microsoft.com/library/19b1ba0e-c3ad-4258-bd4d-addc827913b3)|Calculates the square root of the argument|  
|[sqrtf Function (fast_math)](http://msdn.microsoft.com/library/f4477a31-162e-4a74-98ee-d5f67ba7a2bf)|Calculates the square root of the argument|  
|[tan Function (fast_math)](http://msdn.microsoft.com/library/274722bf-3391-4a16-92f5-279a5dd91c10)|Calculates the tangent value of the argument|  
|[tanf Function (fast_math)](http://msdn.microsoft.com/library/19f3ca17-726e-46e9-bde3-2fe70845f508)|Calculates the tangent value of the argument|  
|[tanh Function (fast_math)](http://msdn.microsoft.com/library/09d4b22f-976f-41b2-8f65-647b8913383a)|Calculates the hyperbolic tangent value of the argument|  
|[tanhf Function (fast_math)](http://msdn.microsoft.com/library/0acc4ffb-5c34-4ff5-a7fd-bb0612052096)|Calculates the hyperbolic tangent value of the argument|  
|[trunc Function (fast_math)](http://msdn.microsoft.com/library/3f07d65f-fc79-4d95-9f6c-d05fa2a8133e)|Truncates the argument to the integer component|  
|[truncf Function (fast_math)](http://msdn.microsoft.com/library/3e57e953-611d-44f9-9115-6e45241d2c1b)|Truncates the argument to the integer component|  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency::fast_math  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
