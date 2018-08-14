---
title: "__writecr0 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["_writecr0"]
dev_langs: ["C++"]
helpviewer_keywords: ["_writecr0 intrinsic"]
ms.assetid: a143d08d-0333-4e1b-91b4-4acb2ae91b5a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __writecr0
**Microsoft Specific**  
  
 Writes the value `Data` to the CR0 register.  
  
## Syntax  
  
```  
void writecr0(   
   unsigned __int64 Data   
);  
```  
  
#### Parameters  
 [in] `Data`  
 The value to write to the CR0 register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__writecr0`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)