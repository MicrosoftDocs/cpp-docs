---
title: "_InterlockedAddLargeStatistic | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_InterlockedAddLargeStatistic"
  - "_InterlockedAddLargeStatistic_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_InterlockedAddLargeStatistic intrinsic"
  - "InterlockedAddLargeStatistic intrinsic"
ms.assetid: 2802e74b-bcee-46e4-b562-894908d44409
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
# _InterlockedAddLargeStatistic
**Microsoft Specific**  
  
 Performs an interlocked addition in which the first operand is a 64-bit value.  
  
## Syntax  
  
```  
long _InterlockedAddLargeStatistic(  
   __int64 volatile * Addend,  
   long Value  
);  
```  
  
#### Parameters  
 [in, out] `Addend`  
 A pointer to the first operand to the add operation. The value pointed to is replaced by the result of the addition.  
  
 [in] `Value`  
 The second operand; value to add to the first operand.  
  
## Return Value  
 The value of the second operand.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_InterlockedAddLargeStatistic`|x86|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is not atomic because it is implemented as two separate locked instructions. An atomic 64-bit read that occurs on another thread during the execution of this intrinsic could result in an inconsistent value being read.  
  
 This function behaves as a read-write barrier. For more information, see [_ReadWriteBarrier](../intrinsics/readwritebarrier.md).  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [Conflicts with the x86 Compiler](../build/conflicts-with-the-x86-compiler.md)