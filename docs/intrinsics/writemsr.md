---
title: "__writemsr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__writemsr"]
dev_langs: ["C++"]
helpviewer_keywords: ["Write Model Specific Register instruction", "wrmsr instruction", "__writemsr intrinsic"]
ms.assetid: 938b1553-51a8-4822-a818-6bed79b0fde5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __writemsr
**Microsoft Specific**  
  
 Generates the Write to Model Specific Register (`wrmsr`) instruction.  
  
## Syntax  
  
```  
void __writemsr(   
   unsigned long Register,   
   unsigned __int64 Value   
);  
```  
  
#### Parameters  
 [in] `Register`  
 The model specific register.  
  
 [in] `Value`  
 The value to write.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__writemsr`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This function may only be used in kernel mode, and this routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)