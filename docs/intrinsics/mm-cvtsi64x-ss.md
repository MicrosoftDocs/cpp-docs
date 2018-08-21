---
title: "_mm_cvtsi64x_ss | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["_mm_cvtsi64x_ss"]
dev_langs: ["C++"]
helpviewer_keywords: ["cvtsi2ss instruction", "_mm_cvtsi64x_ss intrinsic"]
ms.assetid: 01e5d321-c18a-46fd-a6f6-324364514e1f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _mm_cvtsi64x_ss
**Microsoft Specific**  
  
 Generates the x64 extended version of the Convert 64-Bit Integer to Scalar Single-Precision Floating-Point Value (`cvtsi2ss`) instruction.  
  
## Syntax  
  
```  
__m128 _mm_cvtsi64x_ss(   
   __m128 a,   
   __int64 b   
);  
```  
  
#### Parameters  
 [in] `a`  
 An `__m128` structure containing four single-precision floating-point values.  
  
 [in] `b`  
 A 64-bit integer to be converted into a floating-point value.  
  
## Return Value  
 An `__m128` structure whose first floating-point value is the result of the conversion. The other three values are copied unchanged from `a`.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_mm_cvtsi64x_ss`|x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The `__m128` structure represents an XMM register, so this intrinsic allows the value `b` from system memory to be moved into an XMM register.  
  
 This routine is only available as an intrinsic.  
  
## Example  
  
```  
// _mm_cvtsi64x_ss.cpp  
// processor: x64  
  
#include <intrin.h>  
#include <stdio.h>  
  
#pragma intrinsic(_mm_cvtsi64x_ss)  
  
int main()  
{  
    __m128 a;  
    __int64 b = 54;  
  
    a.m128_f32[0] = 0;  
    a.m128_f32[1] = 0;  
    a.m128_f32[2] = 0;  
    a.m128_f32[3] = 0;  
    a = _mm_cvtsi64x_ss(a, b);  
  
    printf_s( "%lf %lf %lf %lf\n",  
              a.m128_f32[0], a.m128_f32[1],   
              a.m128_f32[2], a.m128_f32[3] );  
}  
```  
  
```Output  
54.000000 0.000000 0.000000 0.000000  
```  
  
**END Microsoft Specific**  
  
## See Also  
 [__m128](../cpp/m128.md)   
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)