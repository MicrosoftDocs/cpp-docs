---
title: "inline_depth | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "inline_depth_CPP"
  - "vc-pragma.inline_depth"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragmas, inline_depth"
  - "inline_depth pragma"
ms.assetid: 2bba60fe-43ea-4d09-90f7-aafaba3bad07
caps.latest.revision: 10
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
# inline_depth
Specifies the inline heuristic search depth, such that, no function will be inlined if it is at a depth (in the call graph) greater than `n`.  
  
## Syntax  
  
```  
  
#pragma inline_depth( [n] )  
```  
  
## Remarks  
 This pragma controls the inlining of functions marked [inline](../cpp/inline-functions-cpp.md) and [__inline](../cpp/inline-functions-cpp.md) or inlined automatically under the /Ob2 option.  
  
 `n` can be a value between 0 and 255, where 255 means unlimited depth in the call graph, and zero inhibits inline expansion.  When `n` is not specified, the default (254) is used.  
  
 The **inline_depth** pragma controls the number of times a series of function calls can be expanded. For example, if the inline depth is four, and if A calls B and B then calls C, all three calls will be expanded inline. However, if the closest inline expansion is two, only A and B are expanded, and C remains as a function call.  
  
 To use this pragma, you must set the /Ob compiler option to 1 or 2. The depth set using this pragma takes effect at the first function call after the pragma.  
  
 The inline depth can be decreased during expansion but not increased. If the inline depth is six and during expansion the preprocessor encounters an **inline_depth** pragma with a value of eight, the depth remains six.  
  
 The **inline_depth** pragma has no effect on functions marked with `__forceinline`.  
  
> [!NOTE]
>  Recursive functions can be substituted inline to a maximum depth of 16 calls.  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)   
 [inline_recursion](../preprocessor/inline-recursion.md)