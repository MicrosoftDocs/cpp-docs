---
title: "_ReadWriteBarrier"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
>  The `_ReadBarrier`, `_WriteBarrier`, and `_ReadWriteBarrier` compiler intrinsics and the `MemoryBarrier` macro are all deprecated and should not be used. For inter-thread communication, use mechanisms such as [atomic_thread_fence](../Topic/atomic_thread_fence%20Function.md) and [std::atomic\<T>](../stdcpplib/-atomic-.md), which are defined in the [C++ Standard Library](../stdcpplib/c---standard-library-reference.md). For hardware access, use the [/volatile:iso](../buildref/-volatile--volatile-keyword-interpretation-.md) compiler option together with the [volatile](../cpp/volatile--c---.md) keyword.  
  
## Syntax  
  
```  
void _ReadWriteBarrier(void);  
```  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_ReadWriteBarrier`|x86, [!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The `_ReadWriteBarrier` intrinsic limits the compiler optimizations that can remove or reorder memory accesses across the point of the call.  
  
## END Microsoft Specific  
  
## See Also  
 [_ReadBarrier](../intrinsics/_readbarrier.md)   
 [_WriteBarrier](../intrinsics/_writebarrier.md)   
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [Keywords](../cpp/keywords--c---.md)