---
title: "__readmsr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__readmsr"]
dev_langs: ["C++"]
helpviewer_keywords: ["Read Model Specific Register", "rdmsr instruction", "__readmsr intrinsic"]
ms.assetid: 7ab1f8e8-72cb-4ce4-817d-3e728a3c9716
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __readmsr
**Microsoft Specific**  
  
 Generates the `rdmsr` instruction, which reads the model-specific register specified by `register` and returns its value.  
  
## Syntax  
  
```  
__int64 __readmsr(   
   int register   
);  
```  
  
#### Parameters  
 [in] `register`  
 The model specific register to read.  
  
## Return Value  
 The value in the specified register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readmsr`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This function is only available in kernel mode, and the routine is only available as an intrinsic.  
  
 For more information, see the AMD documentation.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)