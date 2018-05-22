---
title: "__readpmc | Microsoft Docs"
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
  - "__readpmc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Read Performance Monitoring Counters instruction"
  - "__readpmc intrinsic"
  - "rdpmc instruction"
ms.assetid: 14ed45a6-28b6-4635-8437-a597c04b43d4
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __readpmc
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__readpmc](https://docs.microsoft.com/cpp/intrinsics/readpmc).  
  
  
Microsoft Specific**  
  
 Generates the `rdpmc` instruction, which reads the performance monitoring counter specified by `counter`.  
  
## Syntax  
  
```  
unsigned __int64 __readpmc(   
   unsigned long counter   
);  
```  
  
#### Parameters  
 [in] `counter`  
 The performance counter to read.  
  
## Return Value  
 The value of the specified performance counter.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readpmc`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is available in kernel mode only, and the routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

