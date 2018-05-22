---
title: "Concurrency::precise_math Namespace | Microsoft Docs"
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
  - "amp_math/Concurrency::precise_math"
dev_langs: 
  - "C++"
ms.assetid: ba653308-dc28-4384-b2fd-6cd718a72f91
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Concurrency::precise_math Namespace
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

Functions in the `precise_math` namespace are C99 compliant. Both single precision and double precision versions of each function are included. For example, `acos` is the double-precision version and `acosf` is the single-precision version. These functions, including the single-precision functions, require extended double-precision support on the accelerator. You can use the [accelerator::supports_double_precision Data Member](http://msdn.microsoft.com/library/8d075a9b-b202-4ba2-be82-bd43222287e9) to determine if you can run these functions on a specific accelerator.  
  
## Syntax  
  
```cpp  
namespace precise_math;  
```  
  
#### Parameters  
  
## Members  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[acos Function](http://msdn.microsoft.com/library/e16bc8bf-51ee-4df0-a63e-dee7d5510b1c)|Overloaded. Calculates the arccosine of the argument|  
|[acosf Function](http://msdn.microsoft.com/library/5247961f-e57e-4c12-b77c-ebf6020b186e)|Calculates the arccosine of the argument|  
|[acosh Function](http://msdn.microsoft.com/library/8e3c15ef-1c7a-4d9c-b8b0-5fc81491475b)|Overloaded. Calculates the inverse hyperbolic cosine of the argument|  
|[acoshf Function](http://msdn.microsoft.com/library/78d510bc-7325-41df-b7de-8b309ec2ca42)|Calculates the inverse hyperbolic cosine of the argument|  
|[asin Function](http://msdn.microsoft.com/library/1795fc00-b096-4289-ae36-102d216f0038)|Overloaded. Calculates the arcsine of the argument|  
|[asinf Function](http://msdn.microsoft.com/library/906d0988-9c55-4196-8bf4-edd0622c9320)|Calculates the arcsine of the argument|  
|[asinh Function](http://msdn.microsoft.com/library/9aab3d16-76f0-44e0-8a4a-3d7faea45bfa)|Overloaded. Calculates the inverse hyperbolic sine of the argument|  
|[asinhf Function](http://msdn.microsoft.com/library/2b87f944-30b6-4d0f-bdb6-bf5036aa52e9)|Calculates the inverse hyperbolic sine of the argument|  
|[atan Function](http://msdn.microsoft.com/library/511140af-2586-4d0a-92ae-552beb0b9561)|Overloaded. Calculates the arctangent of the argument|  
|[atan2 Function](http://msdn.microsoft.com/library/92cc3291-2067-4996-9748-03bed8cbab43)|Overloaded. Calculates the arctangent of _Y/_X|  
|[atan2f Function](http://msdn.microsoft.com/library/fd66c17b-592c-4cdc-8351-a7ba57912bf2)|Calculates the arctangent of _Y/_X|  
|[atanf Function](http://msdn.microsoft.com/library/cc49bf10-f879-45b5-91d5-2fdb094b2d38)|Calculates the arctangent of the argument|  
|[atanh Function](http://msdn.microsoft.com/library/628812d0-41a1-4833-a2ee-fcce45334a5f)|Overloaded. Calculates the inverse hyperbolic tangent of the argument|  
|[atanhf Function](http://msdn.microsoft.com/library/925f31d0-f2d1-4545-9ac3-8f805ad7ce1b)|Calculates the inverse hyperbolic tangent of the argument|  
|[cbrt Function](http://msdn.microsoft.com/library/8696db19-6de1-4e0f-bfac-9c5f3b55ea2b)|Overloaded. Computes the real cube root of the argument|  
|[cbrtf Function](http://msdn.microsoft.com/library/26db6e00-50ef-4e5e-a78b-6a0434fbf006)|Computes the real cube root of the argument|  
|[ceil Function](http://msdn.microsoft.com/library/04917c3a-ebd5-4aa8-b06a-d01085dda916)|Overloaded. Calculates the ceiling of the argument|  
|[ceilf Function](http://msdn.microsoft.com/library/1038764c-acfd-47cb-9379-ca3a259c2465)|Calculates the ceiling of the argument|  
|[copysign Function](http://msdn.microsoft.com/library/62130931-82ee-4c3f-b816-cbb878736c27)|Overloaded. Produces a value with the magnitude of _X and the sign of _Y|  
|[copysignf Function](http://msdn.microsoft.com/library/ac935ebb-3d00-4adb-9e78-b8135626cf62)|Produces a value with the magnitude of _X and the sign of _Y|  
|[cos Function](http://msdn.microsoft.com/library/407b1075-3b3f-406f-83b8-cffce988eaa5)|Overloaded. Calculates the cosine of the argument|  
|[cosf Function](http://msdn.microsoft.com/library/5369dfb4-34a4-4056-93af-0e9744dfef79)|Calculates the cosine of the argument|  
|[cosh Function](http://msdn.microsoft.com/library/3392e004-db3c-4567-80a0-4cfcfdd6980d)|Overloaded. Calculates the hyperbolic cosine value of the argument|  
|[coshf Function](http://msdn.microsoft.com/library/328be907-3141-4c56-96cf-2f37e0af1a0b)|Calculates the hyperbolic cosine value of the argument|  
|[cospi Function](http://msdn.microsoft.com/library/0a9dc33a-213f-40c9-aeb4-eef080d8741a)|Overloaded. Calculates the cosine value of pi * _X|  
|[cospif Function](http://msdn.microsoft.com/library/f8938b98-0555-4740-9f65-c15050becb74)|Calculates the cosine value of pi * _X|  
|[erf Function](http://msdn.microsoft.com/library/c9451a4f-cd5d-4dc0-850a-6fdf64314b69)|Overloaded. Computes the error function of _X|  
|[erfc Function](http://msdn.microsoft.com/library/3bf20427-4e98-4448-9aa9-cfb1e75219b7)|Overloaded. Computes the complementary error function of _X|  
|[erfcf Function](http://msdn.microsoft.com/library/394fbaa8-1a51-437e-b939-5d2e7fdba3d0)|Computes the complementary error function of _X|  
|[erfcinv Function](http://msdn.microsoft.com/library/0af94e5c-e879-4b3d-b4eb-52f154e21761)|Overloaded. Computes the inverse complementary error function of _X|  
|[erfcinvf Function](http://msdn.microsoft.com/library/107917bc-09e2-4c88-875b-942dbeea6518)|Computes the inverse complementary error function of _X|  
|[erff Function](http://msdn.microsoft.com/library/1973425f-28d9-43ef-a890-5406441e4022)|Computes the error function of _X|  
|[erfinv Function](http://msdn.microsoft.com/library/db56cd2e-b166-4514-9edb-ab3c7eb3fbfa)|Overloaded. Computes the inverse error function of _X|  
|[erfinvf Function](http://msdn.microsoft.com/library/1ca6865f-74c8-4987-89c1-db68f8eda566)|Computes the inverse error function of _X|  
|[exp Function](http://msdn.microsoft.com/library/ba989627-708d-4919-b73b-eca4aafba9bd)|Overloaded. Calculates the base-e exponential of the argument|  
|[exp10 Function](http://msdn.microsoft.com/library/e89f0b43-342b-4572-8235-826d61d15b2d)|Overloaded. Calculates the base-10 exponential of the argument|  
|[exp10f Function](http://msdn.microsoft.com/library/c8cdc826-b1da-4f51-b972-7cea1c44d947)|Calculates the base-10 exponential of the argument|  
|[exp2 Function](http://msdn.microsoft.com/library/99821f5b-9500-4c07-9c9c-83eaf1b64d9b)|Overloaded. Calculates the base-2 exponential of the argument|  
|[exp2f Function](http://msdn.microsoft.com/library/92b21fa9-9105-491e-96d1-3fea5f297d31)|Calculates the base-2 exponential of the argument|  
|[expf Function](http://msdn.microsoft.com/library/beed65f4-a2ea-439a-9997-83584f49e6d7)|Calculates the base-e exponential of the argument|  
|[expm1 Function](http://msdn.microsoft.com/library/db9024be-e691-4bd2-92d1-94ff36595c44)|Overloaded. Calculates the base-e exponential of the argument, minus 1|  
|[expm1f Function](http://msdn.microsoft.com/library/d1a805ec-8c4b-4d81-8bea-454767b1375e)|Calculates the base-e exponential of the argument, minus 1|  
|[fabs Function](http://msdn.microsoft.com/library/745f7885-3e3e-4c1c-be2f-cd0add75dddb)|Overloaded. Returns the absolute value of the argument|  
|[fabsf Function](http://msdn.microsoft.com/library/aa6e7caf-71e4-412b-bac0-06e35fd23d18)|Returns the absolute value of the argument|  
|[fdim Function](http://msdn.microsoft.com/library/7b4622b2-1b61-4fed-b5af-c9bb0170af2f)|Overloaded. Determines the positive difference between the arguments|  
|[fdimf Function](http://msdn.microsoft.com/library/ee499280-d640-460c-bf8e-2ecbb3f2c641)|Determines the positive difference between the arguments|  
|[floor Function](http://msdn.microsoft.com/library/1aaf7122-8f0a-4eb2-b7cc-82f9f2155d3b)|Overloaded. Calculates the floor of the argument|  
|[floorf Function](http://msdn.microsoft.com/library/63c69f63-b676-4429-9b09-3805256b84f9)|Calculates the floor of the argument|  
|[fma Function](http://msdn.microsoft.com/library/4d6ca878-988c-4d65-9438-071586e61f7d)|Overloaded. Compute (_X * _Y) + _Z, rounded as one ternary operation|  
|[fmaf Function](http://msdn.microsoft.com/library/3b922de7-2852-4d16-b79f-1bc0f301e5b9)|Compute (_X * _Y) + _Z, rounded as one ternary operation|  
|[fmax Function](http://msdn.microsoft.com/library/d45483d0-70ab-4873-b76b-58b9e8d3af71)|Overloaded. Determine the maximum numeric value of the arguments|  
|[fmaxf Function](http://msdn.microsoft.com/library/4fb97a19-fd6c-4a0b-99de-526d0922a700)|Determine the maximum numeric value of the arguments|  
|[fmin Function](http://msdn.microsoft.com/library/41594e91-8298-4ddd-aa1f-1995eb858cb7)|Overloaded. Determine the minimum numeric value of the arguments|  
|[fminf Function](http://msdn.microsoft.com/library/8fce9430-69a8-4514-a5f3-2f20506f54f6)|Determine the minimum numeric value of the arguments|  
|[fmod Function (C++ AMP)](http://msdn.microsoft.com/library/9d4dfd2b-963b-4316-acec-a4421176a7e6)|Overloaded. Calculates the floating-point remainder of _X/_Y|  
|[fmodf Function](http://msdn.microsoft.com/library/5fbd325e-bfc2-4aca-87d2-08e65ffe55f3)|Calculates the floating-point remainder of _X/_Y|  
|[fpclassify Function](http://msdn.microsoft.com/library/28c1d518-c48c-42c8-aa19-f429703d9286)|Overloaded. Classifies the argument value as NaN, infinite, normal, subnormal, zero|  
|[frexp Function](http://msdn.microsoft.com/library/f437222e-f6bb-4b0c-ae19-e65955256c66)|Overloaded. Gets the mantissa and exponent of _X|  
|[frexpf Function](http://msdn.microsoft.com/library/8b17253c-dda3-481d-a9b7-949171c695fe)|Gets the mantissa and exponent of _X|  
|[hypot Function](http://msdn.microsoft.com/library/65742040-165a-4fb7-8644-9eaf8e4c15d7)|Overloaded. Computes the square root of the sum of the squares of _X and _Y|  
|[hypotf Function](http://msdn.microsoft.com/library/250f96bd-3627-4157-ac4d-396cd11ac407)|Computes the square root of the sum of the squares of _X and _Y|  
|[ilogb Function](http://msdn.microsoft.com/library/8c98b516-c4bb-46fd-a3b0-fc67a0fa9746)|Overloaded. Extract the exponent of _X as a signed int value|  
|[ilogbf Function](http://msdn.microsoft.com/library/cd19f542-6c06-4c4b-8fa2-2434e4922ebd)|Extract the exponent of _X as a signed int value|  
|[isfinite Function](http://msdn.microsoft.com/library/39d5ddcb-0f13-40a9-9f9e-50b74e44f31d)|Overloaded. Determines whether the argument has a finite value|  
|[isinf Function](http://msdn.microsoft.com/library/69c0c41a-5002-4a5c-9815-181131e2deb5)|Overloaded. Determines whether the argument is an infinity|  
|[isnan Function](http://msdn.microsoft.com/library/c1654e14-65ad-4a13-8c0d-c9e26ae759e5)|Overloaded. Determines whether the argument is a NaN|  
|[isnormal Function](http://msdn.microsoft.com/library/a8fef126-f182-49e6-aa4e-8d63df0c15ac)|Overloaded. Determines whether the argument is a normal|  
|[ldexp Function](http://msdn.microsoft.com/library/9a0299ef-cb0e-40f3-b371-da226d733954)|Overloaded. Computes a real number from the mantissa and exponent|  
|[ldexpf Function](http://msdn.microsoft.com/library/e5696a8a-9f10-479a-b6e0-2d37a1f357d3)|Computes a real number from the mantissa and exponent|  
|[lgamma Function](http://msdn.microsoft.com/library/05c2b608-77a0-4100-a977-2b5227e688b3)|Overloaded. Computes the natural logarithm of the absolute value of gamma of the argument|  
|[lgammaf Function](http://msdn.microsoft.com/library/579eec2f-fcd6-46dd-84f8-03e3077a8bd6)|Computes the natural logarithm of the absolute value of gamma of the argument|  
|[log Function](http://msdn.microsoft.com/library/12ad7b47-c9ef-49fb-bd6e-13a666c14e3a)|Overloaded. Calculates the base-e logarithm of the argument|  
|[log10 Function](http://msdn.microsoft.com/library/97a6d51b-9d54-4d47-a4e8-ef43ff72b8d4)|Overloaded. Calculates the base-10 logarithm of the argument|  
|[log10f Function](http://msdn.microsoft.com/library/3bf93dd1-2e44-4cf0-a42f-2d632543faef)|Calculates the base-10 logarithm of the argument|  
|[log1p Function](http://msdn.microsoft.com/library/16a3b40a-5323-4ac1-9816-29aea218a9f2)|Overloaded. Calculates the base-e logarithm of 1 plus the argument|  
|[log1pf Function](http://msdn.microsoft.com/library/4baa7689-cf5e-43c9-8472-91b5e3947b34)|Calculates the base-e logarithm of 1 plus the argument|  
|[log2 Function](http://msdn.microsoft.com/library/12ccce5d-1fd2-496a-9248-81f694016353)|Overloaded. Calculates the base-2 logarithm of the argument|  
|[log2f Function](http://msdn.microsoft.com/library/2a9ab4b1-995c-4759-87ff-4a8c94a6c33b)|Calculates the base-2 logarithm of the argument|  
|[logb Function](http://msdn.microsoft.com/library/633fb9be-963e-4e77-80cc-3811f1244b21)|Overloaded. Extracts the exponent of _X, as a signed integer value in floating-point format|  
|[logbf Function](http://msdn.microsoft.com/library/59f9b00e-b739-45a8-98fc-e306eb31410c)|Extracts the exponent of _X, as a signed integer value in floating-point format|  
|[logf Function](http://msdn.microsoft.com/library/5248bf9e-3330-4fc2-998c-d1ba550bfce8)|Calculates the base-e logarithm of the argument|  
|[modf Function](http://msdn.microsoft.com/library/38823a15-e457-4813-8e55-8741fa3615ff)|Overloaded. Splits _X into fractional and integer parts.|  
|[modff Function](http://msdn.microsoft.com/library/fc650947-160e-4ddb-b2d5-4b36f9d3c929)|Splits _X into fractional and integer parts.|  
|[nan Function](http://msdn.microsoft.com/library/d86fdf30-035e-4b40-9206-82729d08353a)|Returns a quiet NaN|  
|[nanf Function](http://msdn.microsoft.com/library/82abb93e-5732-4148-b2da-7e1aec9c3d59)|Returns a quiet NaN|  
|[nearbyint Function](http://msdn.microsoft.com/library/c119dd98-6d73-4852-8a26-c0fa9705fefe)|Overloaded. Rounds the argument to an integer value in floating-point format, using the current rounding direction.|  
|[nearbyintf Function](http://msdn.microsoft.com/library/a22561a9-e569-4563-8a56-7d4db068d64b)|Rounds the argument to an integer value in floating-point format, using the current rounding direction.|  
|[nextafter Function](http://msdn.microsoft.com/library/d0b7e07c-6a1b-444e-af5d-9663a3662256)|Overloaded. Determine the next representable value, in the type of the function, after _X in the direction of _Y|  
|[nextafterf Function](http://msdn.microsoft.com/library/199a9da9-051c-44dd-88d9-ea6e259bacbc)|Determine the next representable value, in the type of the function, after _X in the direction of _Y|  
|[phi Function](http://msdn.microsoft.com/library/ccb9b40d-38a5-4801-a2ce-7c5102213cae)|Overloaded. Returns the cumulative distribution function of the argument|  
|[phif Function](http://msdn.microsoft.com/library/b8170f65-e3a3-4c87-8b71-7515f4ea50ac)|Returns the cumulative distribution function of the argument|  
|[pow Function](http://msdn.microsoft.com/library/f16b321c-e000-4b1b-bdb0-1a8406970157)|Overloaded. Calculates _X raised to the power of _Y|  
|[powf Function](http://msdn.microsoft.com/library/1c1af794-2cc2-4ae5-b5e5-1769fc323442)|Calculates _X raised to the power of _Y|  
|[probit Function](http://msdn.microsoft.com/library/955dacfb-b5ea-49cf-9b44-707b00b54ff8)|Overloaded. Returns the inverse cumulative distribution function of the argument|  
|[probitf Function](http://msdn.microsoft.com/library/be78f77a-a864-4a74-8ff9-9cf964834105)|Returns the inverse cumulative distribution function of the argument|  
|[rcbrt Function](http://msdn.microsoft.com/library/ec33e028-b3c3-46df-a3d8-42efad8075fd)|Overloaded. Returns the reciprocal of the cube root of the argument|  
|[rcbrtf Function](http://msdn.microsoft.com/library/ac56642b-c8f5-4bdc-acc1-df355edb0ab1)|Returns the reciprocal of the cube root of the argument|  
|[remainder Function](http://msdn.microsoft.com/library/d8524e61-8c33-4a76-b201-5866c257c576)|Overloaded. Computes the remainder: _X REM _Y|  
|[remainderf Function](http://msdn.microsoft.com/library/a49d8d1b-a72f-418e-80d5-d2b8b4ee9524)|Computes the remainder: _X REM _Y|  
|[remquo Function](http://msdn.microsoft.com/library/edc4a465-802c-4d19-921f-5bc3cd6f677f)|Overloaded. Computes the same remainder as _X REM _Y. Also calculates the lower 23 bits of the integral quotient _X/_Y, and gives that value the same sign as _X/_Y. It stores this signed value in the integer pointed to by _Quo.|  
|[remquof Function](http://msdn.microsoft.com/library/9153e983-84d0-4dcb-9278-f389bfd5d828)|Computes the same remainder as _X REM _Y. Also calculates the lower 23 bits of the integral quotient _X/_Y, and gives that value the same sign as _X/_Y. It stores this signed value in the integer pointed to by _Quo.|  
|[round Function](http://msdn.microsoft.com/library/ae8355df-eac2-499c-8b8d-40ed7008f6ee)|Overloaded. Rounds _X to the nearest integer|  
|[roundf Function](http://msdn.microsoft.com/library/dc549418-099f-4ef3-a9f0-e5b9bef8a43d)|Rounds _X to the nearest integer|  
|[rsqrt Function](http://msdn.microsoft.com/library/b97087e4-a0b0-450e-8b6d-e97156bbbc67)|Overloaded. Returns the reciprocal of the square root of the argument|  
|[rsqrtf Function](http://msdn.microsoft.com/library/d4cc6a69-2d55-4f5c-b5fd-4e6d92fbfe2b)|Returns the reciprocal of the square root of the argument|  
|[scalb Function](http://msdn.microsoft.com/library/79140f81-2c1c-4085-a148-899ff9bf1977)|Overloaded. Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbf Function](http://msdn.microsoft.com/library/dac95563-379e-4693-b1b5-978dad53f9a7)|Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbn Function](http://msdn.microsoft.com/library/a583d7ef-e412-41c7-97b0-0ac1c5844825)|Overloaded. Multiplies _X by FLT_RADIX to the power _Y|  
|[scalbnf Function](http://msdn.microsoft.com/library/e2bf9fa6-d748-41e4-9f28-9117d73f4294)|Multiplies _X by FLT_RADIX to the power _Y|  
|[signbit Function](http://msdn.microsoft.com/library/661a217d-f7dc-46e8-8585-2c37cbcae3a9)|Overloaded. Determines whether the sign of _X is negative|  
|[signbitf Function](http://msdn.microsoft.com/library/45832301-61d9-4d9f-ae0a-d0611dd88041)|Determines whether the sign of _X is negative|  
|[sin Function](http://msdn.microsoft.com/library/461c65e6-c6b5-4e19-885a-d072da5b1c76)|Overloaded. Calculates the sine value of the argument|  
|[sincos Function](http://msdn.microsoft.com/library/18e5d6e6-1f94-49ba-999b-33b698b33ddd)|Overloaded. Calculates sine and cosine value of _X|  
|[sincosf Function](http://msdn.microsoft.com/library/4753e5a7-f654-4c25-8150-da4a34e2cab2)|Calculates sine and cosine value of _X|  
|[sinf Function](http://msdn.microsoft.com/library/441638e9-95b7-494e-85a0-e1eb51f13e4b)|Calculates the sine value of the argument|  
|[sinh Function](http://msdn.microsoft.com/library/0a409b50-c074-4012-9708-3d2d6b902638)|Overloaded. Calculates the hyperbolic sine value of the argument|  
|[sinhf Function](http://msdn.microsoft.com/library/f18e8823-1d19-46ae-8de1-74e63041509c)|Calculates the hyperbolic sine value of the argument|  
|[sinpi Function](http://msdn.microsoft.com/library/f17b18c3-d2a1-423f-a529-06453bde6560)|Overloaded. Calculates the sine value of pi * _X|  
|[sinpif Function](http://msdn.microsoft.com/library/09e317e5-f2d7-499d-8033-5a6d0ed1632a)|Calculates the sine value of pi * _X|  
|[sqrt Function](http://msdn.microsoft.com/library/aeb7fa8a-137f-40d7-993c-23204c5ed828)|Overloaded. Calculates the squre root of the argument|  
|[sqrtf Function](http://msdn.microsoft.com/library/d217633d-3e36-403f-bf8d-d83210f0840b)|Calculates the squre root of the argument|  
|[tan Function](http://msdn.microsoft.com/library/fdf12b68-3fb0-4dd4-b2d0-779ab86b6cfe)|Overloaded. Calculates the tangent value of the argument|  
|[tanf Function](http://msdn.microsoft.com/library/c96f05f1-80a0-4a95-b4b7-75c002dd9e2b)|Calculates the tangent value of the argument|  
|[tanh Function](http://msdn.microsoft.com/library/82109abc-86c4-48a5-ae1b-98defb29c3c3)|Overloaded. Calculates the hyperbolic tangent value of the argument|  
|[tanhf Function](http://msdn.microsoft.com/library/c67f5310-7d36-4e42-83dd-e6d720c6e697)|Calculates the hyperbolic tangent value of the argument|  
|[tanpi Function](http://msdn.microsoft.com/library/3befdd9f-c935-4547-91c4-36946d88d336)|Overloaded. Calculates the tangent value of pi * _X|  
|[tanpif Function](http://msdn.microsoft.com/library/34698f31-345e-4a47-9c94-0fd0d3d95306)|Calculates the tangent value of pi * _X|  
|[tgamma Function](http://msdn.microsoft.com/library/c5565d2f-dcd9-49e8-8f48-d149b94cf763)|Overloaded. Computes the gamma function of _X|  
|[tgammaf Function](http://msdn.microsoft.com/library/2e864d6f-8c2b-40aa-92b1-34b4f600d07d)|Computes the gamma function of _X|  
|[trunc Function](http://msdn.microsoft.com/library/ddeea8d7-694a-45d1-9ff5-c496381097fd)|Overloaded. Truncates the argument to the integer component|  
|[truncf Function](http://msdn.microsoft.com/library/1eb2a59b-8b79-4726-9d3e-847a659a68e5)|Truncates the argument to the integer component|  
  
## Requirements  
 **Header:** amp_math.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
