---
title: "__readpmc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__readpmc"]
dev_langs: ["C++"]
helpviewer_keywords: ["Read Performance Monitoring Counters instruction", "__readpmc intrinsic", "rdpmc instruction"]
ms.assetid: 14ed45a6-28b6-4635-8437-a597c04b43d4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __readpmc
**Microsoft Specific**  
  
 Generates the `rdpmc` instruction, which reads the performance monitoring counter specified by `counter`.  
  
## Syntax  
  
```  
unsigned __int64 __readpmc(   
   unsigned long counter   
);  
```  
  
#### Parameters  
*counter*<br/>
[in] The performance counter to read.  
  
## Return Value  
 The value of the specified performance counter.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readpmc`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is available in kernel mode only, and the routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)