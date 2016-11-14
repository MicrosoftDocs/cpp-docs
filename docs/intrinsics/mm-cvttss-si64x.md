---
title: "_mm_cvttss_si64x | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mm_cvttss_si64x"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_mm_cvttss_si64x intrinsic"
  - "cvttss2si instruction"
ms.assetid: f9a3fd07-5bd8-4758-8744-6315c082cf87
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# _mm_cvttss_si64x
**Microsoft Specific**  
  
 Emits the x64 extended version of the Convert with Truncation Single-Precision Floating-Point Number to 64-Bit Integer (`cvttss2si`) instruction.  
  
## Syntax  
  
```  
__int64 _mm_cvttss_si64x(   
   __m128 value   
);  
```  
  
#### Parameters  
 [in] `value`  
 An `__m128` structure containing single-precision floating-point values.  
  
## Return Value  
 The result of the conversion of the first floating-point value to a 64-bit integer.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_mm_cvttss_si64x`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The intrinsic differs from `_mm_cvtss_si64x` only in that inexact conversions are truncated toward zero. Because the `__m128` structure represents an XMM register, the instruction generated moves data from an XMM register into system memory.  
  
 This routine is only available as an intrinsic.  
  
## Example  
  
```  
// _mm_cvttss_si64x.cpp  
// processor: x64  
#include <intrin.h>  
#include <stdio.h>  
  
#pragma intrinsic(_mm_cvttss_si64x)  
  
int main()  
{  
    __m128 a;  
    __int64 b = 54;  
  
    // _mm_load_ps requires an aligned buffer.  
    __declspec(align(16)) float af[4] = { 101.5, 200.75,  
                                          300.5, 400.5 };  
  
    // Load a with the floating point values.  
    // The values will be copied to the XMM registers.  
    a = _mm_load_ps(af);  
  
    // Extract the first element of a and convert to an integer  
    b = _mm_cvttss_si64x(a);  
  
    printf_s("%I64d\n", b);  
}  
```  
  
```Output  
101  
```  
  
## END Microsoft Specific  
  
## See Also  
 [__m128](../cpp/m128.md)   
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)