---
title: "_disable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["_disable_cpp", "_disable"]
dev_langs: ["C++"]
helpviewer_keywords: ["_disable intrinsic", "rsm instruction", "disable intrinsic"]
ms.assetid: 52da3df9-815c-4524-9839-6d1742cff5c6
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _disable
**Microsoft Specific**  
  
 Disables interrupts.  
  
## Syntax  
  
```  
void _disable(void);  
```  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_disable`|x86, ARM, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 `_disable` instructs the processor to clear the interrupt flag. On x86 systems, this function generates the Clear Interrupt Flag (`cli`) instruction.  
  
 This function is only available in kernel mode. If used in user mode, a Privileged Instruction exception is thrown at run time.  
  
 On ARM platforms, this routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)