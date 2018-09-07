---
title: "__readcr2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__readcr2"]
dev_langs: ["C++"]
helpviewer_keywords: ["__readcr2 intrinsic"]
ms.assetid: d02c97d8-1953-46e7-a79e-a781e2c5bf27
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __readcr2
**Microsoft Specific**  
  
 Reads the CR2 register and returns its value.  
  
## Syntax  
  
```  
unsigned __int64 __readcr2(void);  
```  
  
## Return Value  
 The value in the CR2 register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readcr2`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)