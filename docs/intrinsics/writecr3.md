---
title: "__writecr3 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["_writecr3"]
dev_langs: ["C++"]
helpviewer_keywords: ["_writecr3 intrinsic"]
ms.assetid: 959d49fa-69d5-47cf-88d2-7688367fe38f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __writecr3
**Microsoft Specific**  
  
 Writes the value `Data` to the CR3 register.  
  
## Syntax  
  
```  
void writecr3(   
   unsigned __int64 Data   
);  
```  
  
#### Parameters  
*Data*<br/>
[in] The value to write to the CR3 register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__writecr3`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)