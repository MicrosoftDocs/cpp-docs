---
title: "__faststorefence | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 16
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
# __faststorefence
**Microsoft Specific**  
  
 Guarantees that every previous memory reference, including both load and store memory references, is globally visible before any subsequent memory reference.  
  
## Syntax  
  
```  
void __faststorefence();  
```  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__faststorefence`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 Generates a full memory barrier instruction sequence that guarantees load and store operations issued before this intrinsic are globally visible before execution continues. The effect is comparable to but faster than the `_mm_mfence` intrinsic on all x64 platforms.  
  
 On the AMD64 platform, this routine generates an instruction that is a faster store fence than the `sfence` instruction. For time-critical code, use this intrinsic instead of `_mm_sfence` only on AMD64 platforms. On Intel x64 platforms, the `_mm_sfence` instruction is faster.  
  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)