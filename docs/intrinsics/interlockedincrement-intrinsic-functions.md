---
title: "_InterlockedIncrement Intrinsic Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_InterlockedIncrement_acq"
  - "_InterlockedIncrement16_rel_cpp"
  - "_InterlockedIncrement16_cpp"
  - "_InterlockedIncrement64_rel"
  - "_InterlockedIncrement_rel"
  - "_InterlockedIncrement64_nf"
  - "_InterlockedIncrement16_acq_cpp"
  - "_InterlockedIncrement_rel_cpp"
  - "_InterlockedIncrement64"
  - "_InterlockedIncrement64_rel_cpp"
  - "_InterlockedIncrement16_nf"
  - "_InterlockedIncrement16_rel"
  - "_InterlockedIncrement16_acq"
  - "_InterlockedIncrement_nf"
  - "_InterlockedIncrement_acq_cpp"
  - "_InterlockedIncrement64_cpp"
  - "_InterlockedIncrement64_acq_cpp"
  - "_InterlockedIncrement"
  - "_InterlockedIncrement_cpp"
  - "_InterlockedIncrement64_acq"
  - "_InterlockedIncrement16"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_InterlockedIncrement64_rel intrinsic"
  - "_InterlockedIncrement16_rel intrinsic"
  - "InterlockedIncrement64_acq intrinsic"
  - "_InterlockedIncrement16 intrinsic"
  - "_InterlockedIncrement16_acq intrinsic"
  - "_InterlockedIncrement_nf intrinsic"
  - "_InterlockedIncrement_rel intrinsic"
  - "_InterlockedIncrement64_nf intrinsic"
  - "InterlockedIncrement_rel intrinsic"
  - "InterlockedIncrement_acq intrinsic"
  - "_InterlockedIncrement64_acq intrinsic"
  - "_InterlockedIncrement16_nf intrinsic"
  - "_InterlockedIncrement intrinsic"
  - "_InterlockedIncrement64 intrinsic"
  - "InterlockedIncrement64_rel intrinsic"
  - "InterlockedIncrement64 intrinsic"
  - "InterlockedIncrement16 intrinsic"
  - "_InterlockedIncrement_acq intrinsic"
  - "InterlockedIncrement intrinsic"
ms.assetid: 37700615-f372-438b-bcef-d76e11839482
caps.latest.revision: 17
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
# _InterlockedIncrement Intrinsic Functions
**Microsoft Specific**  
  
 Provide compiler intrinsic support for the Win32 [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)] [InterlockedIncrement](http://msdn.microsoft.com/library/ms683614.aspx) function.  
  
## Syntax  
  
```  
long _InterlockedIncrement(  
   long * lpAddend  
);  
long _InterlockedIncrement_acq(  
   long * lpAddend  
);  
long _InterlockedIncrement_rel(  
   long * lpAddend  
);  
long _InterlockedIncrement_nf(  
   long * lpAddend  
);  
short _InterlockedIncrement16(  
   short * lpAddend  
);  
short _InterlockedIncrement16_acq(  
   short * lpAddend  
);  
short _InterlockedIncrement16_rel(  
   short * lpAddend  
);  
short _InterlockedIncrement16_nf (  
   short * lpAddend  
);  
__int64 _InterlockedIncrement64(  
   __int64 * lpAddend  
);  
__int64 _InterlockedIncrement64_acq(  
   __int64 * lpAddend  
);  
__int64 _InterlockedIncrement64_rel(  
   __int64 * lpAddend  
);   
__int64 _InterlockedIncrement64_nf(  
   __int64 * lpAddend  
);  
```  
  
#### Parameters  
 [in, out] `lpAddend`  
 Pointer to the variable to be incremented.  
  
## Return Value  
 The return value is the resulting incremented value.  
  
## Requirements  
  
|Intrinsic|Architecture|Header|  
|---------------|------------------|------------|  
|`_InterlockedIncrement`, `_InterlockedIncrement16`, `_InterlockedIncrement64`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h>|  
|`_InterlockedIncrement_acq`, `_InterlockedIncrement_rel`, `_InterlockedIncrement_nf`, `_InterlockedIncrement16_acq`, `_InterlockedIncrement16_rel`, `_InterlockedIncrement16_nf`, `_InterlockedIncrement64_acq`, `_InterlockedIncrement64_rel`, `_InterlockedIncrement64_nf`|ARM|\<intrin.h>|  
  
## Remarks  
 There are several variations on `_InterlockedIncrement` that vary based on the data types they involve and whether processor-specific acquire or release semantics is used.  
  
 While the `_InterlockedIncrement` function operates on 32-bit integer values, `_InterlockedIncrement16` operates on 16-bit integer values and `_InterlockedIncrement64` operates on 64-bit integer values.  
  
 On ARM platforms, use the intrinsics with `_acq` and `_rel` suffixes if you need acquire and release semantics, such as at the beginning and end of a critical section. The intrinsic with an `_nf` ("no fence") suffix does not act as a memory barrier.  
  
 The variable pointed to by the `lpAddend` parameter must be aligned on a 32-bit boundary; otherwise, this function fails on multiprocessor x86 systems and any non-x86 systems. For more information, see [align](../cpp/align-cpp.md).  
  
 The Win32 function is declared in `Wdm.h` or `Ntddk.h`.  
  
 These routines are only available as intrinsics.  
  
## Example  
 For a sample of how to use `_InterlockedIncrement`, see [_InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md).  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [Keywords](../cpp/keywords-cpp.md)   
 [Conflicts with the x86 Compiler](../build/conflicts-with-the-x86-compiler.md)