---
title: "_ReadBarrier | Microsoft Docs"
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
  - "_ReadBarrier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ReadBarrier intrinsic"
ms.assetid: f9e54a92-61bc-4f55-8195-b8932065a796
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ReadBarrier
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_ReadBarrier](https://docs.microsoft.com/cpp/intrinsics/readbarrier).  
  
  
Microsoft Specific**  
  
 Limits the compiler optimizations that can reorder memory access operations across the point of the call.  
  
> [!CAUTION]
>  The `_ReadBarrier`, `_WriteBarrier`, and `_ReadWriteBarrier` compiler intrinsics and the `MemoryBarrier` macro are all deprecated and should not be used. For inter-thread communication, use mechanisms such as [atomic_thread_fence](http://msdn.microsoft.com/library/14d2d5fc-e490-4160-9b1e-4711d78b0577) and [std::atomic\<T>](../standard-library/atomic.md) that are defined in the [C++ Standard Library](../standard-library/cpp-standard-library-reference.md). For hardware access, use the [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) compiler option together with the [volatile](../cpp/volatile-cpp.md) keyword.  
  
## Syntax  
  
```  
void _ReadBarrier(void);  
```  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_ReadBarrier`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The `_ReadBarrier` intrinsic limits the compiler optimizations that can remove or reorder memory access operations across the point of the call.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [Keywords](../cpp/keywords-cpp.md)

