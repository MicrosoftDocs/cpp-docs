---
title: "_ReadWriteBarrier | Microsoft Docs"
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
  - "_ReadWriteBarrier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReadWriteBarrier intrinsic"
  - "_ReadWriteBarrier intrinsic"
ms.assetid: dd9f58b5-8bb6-494e-bb0f-9fe184f3908d
caps.latest.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ReadWriteBarrier
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_ReadWriteBarrier](https://docs.microsoft.com/cpp/intrinsics/readwritebarrier).  
  
  
Microsoft Specific**  
  
 Limits the compiler optimizations that can reorder memory accesses across the point of the call.  
  
> [!CAUTION]
>  The `_ReadBarrier`, `_WriteBarrier`, and `_ReadWriteBarrier` compiler intrinsics and the `MemoryBarrier` macro are all deprecated and should not be used. For inter-thread communication, use mechanisms such as [atomic_thread_fence](../Topic/atomic_thread_fence%20Function.md) and [std::atomic\<T>](../standard-library/atomic.md), which are defined in the [C++ Standard Library](../standard-library/cpp-standard-library-reference.md). For hardware access, use the [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) compiler option together with the [volatile](../cpp/volatile-cpp.md) keyword.  
  
## Syntax  
  
```  
void _ReadWriteBarrier(void);  
```  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_ReadWriteBarrier`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The `_ReadWriteBarrier` intrinsic limits the compiler optimizations that can remove or reorder memory accesses across the point of the call.  
  
## END Microsoft Specific  
  
## See Also  
 [_ReadBarrier](../intrinsics/readbarrier.md)   
 [_WriteBarrier](../intrinsics/writebarrier.md)   
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [Keywords](../cpp/keywords-cpp.md)

