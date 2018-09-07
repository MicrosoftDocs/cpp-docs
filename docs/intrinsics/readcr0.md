---
title: "__readcr0 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__readcr0"]
dev_langs: ["C++"]
helpviewer_keywords: ["__readcr0 intrinsic"]
ms.assetid: 25bdb093-d83c-48d7-9c0f-224de8e2c61c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __readcr0
**Microsoft Specific**  
  
 Reads the CR0 register and returns its value.  
  
## Syntax  
  
```  
unsigned long __readcr0(void);  /* X86 */  
unsigned __int64 __readcr0(void);  /* X64 */  
  
```  
  
## Return Value  
 The value in the CR0 register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readcr0`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)