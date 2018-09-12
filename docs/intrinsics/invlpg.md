---
title: "__invlpg | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__invlpg", "__invlpg_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["invlpg instruction", "__invlpg intrinsic"]
ms.assetid: 3fb3633f-d9b7-4ec0-9e7f-a7f2fa8ed794
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __invlpg
**Microsoft Specific**  
  
 Generates the x86 `invlpg` instruction, which invalidates the translation lookaside buffer (TLB) for the page associated with memory pointed to by `Address`.  
  
## Syntax  
  
```  
void __invlpg(  
   void* Address  
);  
```  
  
#### Parameters  
`Address`<br/>
[in] A 64-bit address.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__invlpg`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The intrinsic `__invlpg` emits a privileged instruction and is only available in kernel mode with a privilege level (CPL) of 0.  
  
 This routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)