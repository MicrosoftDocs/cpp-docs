---
title: "_ReadBarrier"
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
ms.assetid: f9e54a92-61bc-4f55-8195-b8932065a796
caps.latest.revision: 25
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
# _ReadBarrier
**Microsoft Specific**  
  
 Limits the compiler optimizations that can reorder memory access operations across the point of the call.  
  
> [!CAUTION]
>  The `_ReadBarrier`, `_WriteBarrier`, and `_ReadWriteBarrier` compiler intrinsics and the `MemoryBarrier` macro are all deprecated and should not be used. For inter-thread communication, use mechanisms such as [atomic_thread_fence](../Topic/atomic_thread_fence%20Function.md) and [std::atomic<T\>](../VS_visualcpp/-atomic-.md) that are defined in the [C++ Standard Library](../VS_visualcpp/C---Standard-Library-Reference.md). For hardware access, use the [/volatile:iso](../VS_visualcpp/-volatile--volatile-Keyword-Interpretation-.md) compiler option together with the [volatile](../VS_visualcpp/volatile--C---.md) keyword.  
  
## Syntax  
  
```  
void _ReadBarrier(void);  
```  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_ReadBarrier`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 The `_ReadBarrier` intrinsic limits the compiler optimizations that can remove or reorder memory access operations across the point of the call.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)