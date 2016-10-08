---
title: "_InterlockedExchangePointer Intrinsic Functions"
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
ms.assetid: 0eaca0b0-d79e-406b-892d-b3b462c50bbb
caps.latest.revision: 17
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
# _InterlockedExchangePointer Intrinsic Functions
**Microsoft Specific**  
  
 Perform an atomic exchange operation, which copies the address passed in as the second argument to the first and returns the original address of the first.  
  
## Syntax  
  
```  
void * _InterlockedExchangePointer(  
   void * volatile * Target,  
   void * Value  
);   
void * _InterlockedExchangePointer_acq(  
   void * volatile * Target,  
   void * Value  
);   
void * _InterlockedExchangePointer_rel(  
   void * volatile * Target,  
   void * Value  
);   
void * _InterlockedExchangePointer_nf(  
   void * volatile * Target,  
   void * Value  
);   
void * _InterlockedExchangePointer_HLEAcquire(  
   void * volatile * Target,  
   void * Value  
);   
void * _InterlockedExchangePointer_HLERelease(  
   void * volatile * Target,  
   void * Value  
);  
```  
  
#### Parameters  
 [in, out] `Target`  
 Pointer to the pointer to the value to exchange. The function sets the value to `Value` and returns its previous value.  
  
 [in] `Value`  
 Value to be exchanged with the value pointed to by `Target`.  
  
## Return Value  
 The function returns the initial value pointed to by `Target`.  
  
## Requirements  
  
|Intrinsic|Architecture|Header|  
|---------------|------------------|------------|  
|`_InterlockedExchangePointer`|x86, ARM, x64|<intrin.h>|  
|`_InterlockedExchangePointer_acq`, `_InterlockedExchangePointer_rel`, `_InterlockedExchangePointer_nf`|ARM|<intrin.h>|  
|`_InterlockedExchangePointer_HLEAcquire`, `_InterlockedExchangePointer_HLERelease`|x64 with HLE support|<immintrin.h>|  
  
 On the x86 architecture, `_InterlockedExchangePointer` is a macro that calls `_InterlockedExchange`.  
  
## Remarks  
 On a 64-bit system, the parameters are 64 bits and must be aligned on 64-bit boundaries; otherwise, the function fails. On a 32-bit system, the parameters are 32 bits and must be aligned on 32-bit boundaries. For more information, see [align](../VS_visualcpp/align--C---.md).  
  
 On ARM platforms, use the intrinsics with `_acq` and `_rel` suffixes if you need acquire and release semantics, such as at the beginning and end of a critical section. The intrinsic with an `_nf` ("no fence") suffix does not act as a memory barrier.  
  
 On Intel platforms that support Hardware Lock Elision (HLE) instructions, the intrinsics with `_HLEAcquire` and `_HLERelease` suffixes include a hint to the processor that can accelerate performance by eliminating a lock write step in hardware. If these intrinsics are called on platforms that do not support HLE, the hint is ignored.  
  
 These routines are only available as intrinsics.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [Conflicts with the x86 Compiler](../VS_visualcpp/Conflicts-with-the-x86-Compiler.md)