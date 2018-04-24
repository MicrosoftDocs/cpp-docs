---
title: "__faststorefence | Microsoft Docs"
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
  - "__faststorefence_cpp"
  - "__faststorefence"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__faststorefence intrinsic"
  - "sfence instruction"
ms.assetid: 6c6eb973-3cf0-4306-b3af-cfde9b0210a5
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __faststorefence
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__faststorefence](https://docs.microsoft.com/cpp/intrinsics/faststorefence).  
  
  
Microsoft Specific**  
  
 Guarantees that every previous memory reference, including both load and store memory references, is globally visible before any subsequent memory reference.  
  
## Syntax  
  
```  
void __faststorefence();  
```  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__faststorefence`|[!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 Generates a full memory barrier instruction sequence that guarantees load and store operations issued before this intrinsic are globally visible before execution continues. The effect is comparable to but faster than the `_mm_mfence` intrinsic on all x64 platforms.  
  
 On the AMD64 platform, this routine generates an instruction that is a faster store fence than the `sfence` instruction. For time-critical code, use this intrinsic instead of `_mm_sfence` only on AMD64 platforms. On Intel x64 platforms, the `_mm_sfence` instruction is faster.  
  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

