---
title: "__sidt | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__sidt"]
dev_langs: ["C++"]
helpviewer_keywords: ["sidt instruction", "__sidt intrinsic"]
ms.assetid: 01e83d14-6e63-4dea-8f64-5a0339d69641
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __sidt
**Microsoft Specific**  
  
 Stores the value of the interrupt descriptor table register (IDTR) in the specified memory location.  
  
## Syntax  
  
```  
void __sidt(  
     void *Destination);  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `Destination`|A pointer to the memory location where the IDTR is stored.|  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__sidt`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The `__sidt` function is equivalent to the `SIDT` machine instruction. For more information, search for the document, "Intel Architecture Software Developer's Manual, Volume 2: Instruction Set Reference," at the [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) site.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__lidt](../intrinsics/lidt.md)