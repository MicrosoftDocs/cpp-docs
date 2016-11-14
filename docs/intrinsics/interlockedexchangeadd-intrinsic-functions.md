---
title: "_InterlockedExchangeAdd Intrinsic Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_InterlockedExchangeAdd64_nf"
  - "_InterlockedExchangeAdd64_rel"
  - "_InterlockedExchangeAdd16_rel"
  - "_InterlockedExchangeAdd_acq"
  - "_InterlockedExchangeAdd_nf"
  - "_InterlockedExchangeAdd_rel"
  - "_InterlockedExchangeAdd8_acq"
  - "_InterlockedExchangeAdd16_nf"
  - "_InterlockedExchangeAdd_acq_cpp"
  - "_InterlockedExchangeAdd64_acq_cpp"
  - "_InterlockedExchangeAdd16_acq"
  - "_InterlockedExchangeAdd_HLERelease"
  - "_InterlockedExchangeAdd64_cpp"
  - "_InterlockedExchangeAdd64_HLERelease"
  - "_InterlockedExchangeAdd64_acq"
  - "_InterlockedExchangeAdd8"
  - "_InterlockedExchangeAdd64"
  - "_InterlockedExchangeAdd8_nf"
  - "_InterlockedExchangeAdd16"
  - "_InterlockedExchangeAdd64_rel_cpp"
  - "_InterlockedExchangeAdd_cpp"
  - "_InterlockedExchangeAdd8_rel"
  - "_InterlockedExchangeAdd_HLEAcquire"
  - "_InterlockedExchangeAdd64_HLEAcquire"
  - "_InterlockedExchangeAdd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_InterlockedExchangeAdd8_nf intrinsic"
  - "InterlockedExchangeAdd64_acq intrinsic"
  - "_InterlockedExchangeAdd8_acq intrinsic"
  - "_InterlockedExchangeAdd64 intrinsic"
  - "_InterlockedExchangeAdd intrinsic"
  - "_InterlockedExchangeAdd8_rel intrinsic"
  - "_InterlockedExchangeAdd_acq intrinsic"
  - "_InterlockedExchangeAdd_HLEAcquire intrinsic"
  - "_InterlockedExchangeAdd8 intrinsic"
  - "_InterlockedExchangeAdd_rel intrinsic"
  - "_InterlockedExchangeAdd64_HLERelease intrinsic"
  - "_InterlockedExchangeAdd64_nf intrinsic"
  - "InterlockedExchangeAdd_rel intrinsic"
  - "InterlockedExchangeAdd intrinsic"
  - "_InterlockedExchangeAdd_nf intrinsic"
  - "_InterlockedExchangeAdd16_rel intrinsic"
  - "InterlockedExchangeAdd_acq intrinsic"
  - "_InterlockedExchangeAdd64_HLEAcquire intrinsic"
  - "_InterlockedExchangeAdd16 intrinsic"
  - "_InterlockedExchangeAdd64_acq intrinsic"
  - "InterlockedExchangeAdd64_rel intrinsic"
  - "_InterlockedExchangeAdd16_acq intrinsic"
  - "InterlockedExchangeAdd64 intrinsic"
  - "_InterlockedExchangeAdd_HLERelease intrinsic"
  - "_InterlockedExchangeAdd16_nf intrinsic"
  - "_InterlockedExchangeAdd64_rel intrinsic"
ms.assetid: 25809e1f-9c60-4492-9f7c-0fb59c8d13d2
caps.latest.revision: 19
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
# _InterlockedExchangeAdd Intrinsic Functions
**Microsoft Specific**  
  
 Provide compiler intrinsic support for the Win32 [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)] [_InterlockedExchangeAdd Intrinsic Functions](../intrinsics/interlockedexchangeadd-intrinsic-functions.md) function.  
  
## Syntax  
  
```  
long _InterlockedExchangeAdd(  
   long volatile * Addend,  
   long Value  
);  
long _InterlockedExchangeAdd_acq(  
   long volatile * Addend,  
   long Value  
);  
long _InterlockedExchangeAdd_rel(  
   long volatile * Addend,  
   long Value  
);  
long _InterlockedExchangeAdd_nf(  
   long volatile * Addend,  
   long Value  
);  
long _InterlockedExchangeAdd_HLEAcquire(  
   long volatile * Addend,  
   long Value  
);  
long _InterlockedExchangeAdd_HLERelease(  
   long volatile * Addend,  
   long Value  
);  
char _InterlockedExchangeAdd8(  
   char volatile * Addend,  
   char Value  
);  
char _InterlockedExchangeAdd8_acq(  
   char volatile * Addend,  
   char Value  
);  
char _InterlockedExchangeAdd8_rel(  
   char volatile * Addend,  
   char Value  
);  
char _InterlockedExchangeAdd8_nf(  
   char volatile * Addend,  
   char Value  
);  
short _InterlockedExchangeAdd16(  
   short volatile * Addend,  
   short Value  
);  
short _InterlockedExchangeAdd16_acq(  
   short volatile * Addend,  
   short Value  
);  
short _InterlockedExchangeAdd16_rel(  
   short volatile * Addend,  
   short Value  
);  
short _InterlockedExchangeAdd16_nf(  
   short volatile * Addend,  
   short Value  
);  
__int64 _InterlockedExchangeAdd64(  
   __int64 volatile * Addend,  
   __int64 Value  
);  
__int64 _InterlockedExchangeAdd64_acq(  
   __int64 volatile * Addend,  
   __int64 Value  
);  
__int64 _InterlockedExchangeAdd64_rel(  
   __int64 volatile * Addend,  
   __int64 Value  
);  
__int64 _InterlockedExchangeAdd64_nf(  
   __int64 volatile * Addend,  
   __int64 Value  
);  
__int64 _InterlockedExchangeAdd64_HLEAcquire(  
   __int64 volatile * Addend,  
   __int64 Value  
);  
__int64 _InterlockedExchangeAdd64_HLERelease(  
   __int64 volatile * Addend,  
   __int64 Value  
);  
  
```  
  
#### Parameters  
 [in, out] `Addend`  
 The value to be added to; replaced by the result of the addition.  
  
 [in] `Value`  
 The value to add.  
  
## Return Value  
 The return value is the initial value of the variable pointed to by the `Addend` parameter.  
  
## Requirements  
  
|Intrinsic|Architecture|Header|  
|---------------|------------------|------------|  
|`_InterlockedExchangeAdd`, `_InterlockedExchangeAdd8`, `_InterlockedExchangeAdd16`, `_InterlockedExchangeAdd64`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h>|  
|`_InterlockedExchangeAdd_acq`, `_InterlockedExchangeAdd_rel`, `_InterlockedExchangeAdd_nf`, `_InterlockedExchangeAdd8_acq`, `_InterlockedExchangeAdd8_rel`, `_InterlockedExchangeAdd8_nf`,`_InterlockedExchangeAdd16_acq`, `_InterlockedExchangeAdd16_rel`, `_InterlockedExchangeAdd16_nf`, `_InterlockedExchangeAdd64_acq`, `_InterlockedExchangeAdd64_rel`, `_InterlockedExchangeAdd64_nf`|ARM|\<intrin.h>|  
|`_InterlockedExchangeAdd_HLEAcquire`, `_InterlockedExchangeAdd_HLERelease`, `_InterlockedExchangeAdd64_HLEAcquire`, `_InterlockedExchangeAdd64_HLErelease`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<immintrin.h>|  
  
## Remarks  
 There are several variations on `_InterlockedExchangeAdd` that vary based on the data types they involve and whether processor-specific acquire or release semantics is used.  
  
 While the `_InterlockedExchangeAdd` function operates on 32-bit integer values, `_InterlockedExchangeAdd8` operates on 8-bit integer values, `_InterlockedExchangeAdd16` operates on 16-bit integer values, and `_InterlockedExchangeAdd64` operates on 64-bit integer values.  
  
 On ARM platforms, use the intrinsics with `_acq` and `_rel` suffixes if you need acquire and release semantics, such as at the beginning and end of a critical section. The intrinsics with an `_nf` ("no fence") suffix do not act as a memory barrier.  
  
 On Intel platforms that support Hardware Lock Elision (HLE) instructions, the intrinsics with `_HLEAcquire` and `_HLERelease` suffixes include a hint to the processor that can accelerate performance by eliminating a lock write step in hardware. If these intrinsics are called on platforms that do not support HLE, the hint is ignored.  
  
 These routines are only available as intrinsics. Thus, they are intrinsic whether or not [/Oi](../build/reference/oi-generate-intrinsic-functions.md) or [#pragma intrinsic](../preprocessor/intrinsic.md) is used. It is not possible to use [#pragma function](../preprocessor/function-c-cpp.md) on these intrinsics.  
  
## Example  
 For a sample of how to use `_InterlockedExchangeAdd`, see [_InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md).  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [Keywords](../cpp/keywords-cpp.md)   
 [Conflicts with the x86 Compiler](../build/conflicts-with-the-x86-compiler.md)