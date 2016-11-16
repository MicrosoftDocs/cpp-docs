---
title: "_ReadWriteBarrier | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 27
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
# _ReadWriteBarrier
**Microsoft Specific**  
  
 Limits the compiler optimizations that can reorder memory accesses across the point of the call.  
  
> [!CAUTION]
>  The `_ReadBarrier`, `_WriteBarrier`, and `_ReadWriteBarrier` compiler intrinsics and the `MemoryBarrier` macro are all deprecated and should not be used. For inter-thread communication, use mechanisms such as [atomic_thread_fence](http://msdn.microsoft.com/Library/14d2d5fc-e490-4160-9b1e-4711d78b0577) and [std::atomic\<T>](../standard-library/atomic.md), which are defined in the [C++ Standard Library](../standard-library/cpp-standard-library-reference.md). For hardware access, use the [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) compiler option together with the [volatile](../cpp/volatile-cpp.md) keyword.  
  
## Syntax  
  
```  
void _ReadWriteBarrier(void);  
```  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_ReadWriteBarrier`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The `_ReadWriteBarrier` intrinsic limits the compiler optimizations that can remove or reorder memory accesses across the point of the call.  
  
## END Microsoft Specific  
  
## See Also  
 [_ReadBarrier](../intrinsics/readbarrier.md)   
 [_WriteBarrier](../intrinsics/writebarrier.md)   
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [Keywords](../cpp/keywords-cpp.md)