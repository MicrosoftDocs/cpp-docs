---
title: "loop | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "loop_CPP"
  - "vc-pragma.loop"
dev_langs: 
  - "C++"
ms.assetid: 6d5bb428-cead-47e7-941d-7513bbb162c7
caps.latest.revision: 7
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
# loop
Controls how loop code is to be considered by the auto-parallelizer, and/or excludes a loop from consideration by the auto-vectorizer.  
  
## Syntax  
  
```  
  
#pragma loop( hint_parallel(n) )  
```  
  
```  
  
#pragma loop( no_vector )  
```  
  
```  
  
#pragma loop( ivdep )  
```  
  
#### Parameters  
 `hint_parallel(` `n` `)`  
 Hints to the compiler that this loop should be parallelized across `n` threads, where `n` is a positive integer literal or zero. If `n` is zero, the maximum number of threads is used at run time. This is a hint to the compiler, not a command, and there is no guarantee that the loop will be parallelized. If the loop has data dependencies, or structural issues—for example, the loop stores to a scalar that's used beyond the loop body—then the loop will not be parallelized.  
  
 The compiler ignores this option unless the [/Qpar](../build/reference/qpar-auto-parallelizer.md) compiler switch is specified.  
  
 `no_vector`  
 By default, the auto-vectorizer is on and will attempt to vectorize all loops that it evaluates as benefitting from it. Specify this pragma to disable the auto-vectorizer for the loop that follows it.  
  
 `ivdep`  
 Hints to the compiler to ignore vector dependencies for this loop. Use this in conjunction with `hint_parallel`.  
  
## Remarks  
 To use the `loop` pragma, place it immediately before—not in—a loop definition. The pragma takes effect for the scope of the loop that follows it. You can apply multiple pragmas to a loop, in any order, but you must state each one in a separate pragma statement.  
  
## See Also  
 [Auto-Parallelization and Auto-Vectorization](../parallel/auto-parallelization-and-auto-vectorization.md)   
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)