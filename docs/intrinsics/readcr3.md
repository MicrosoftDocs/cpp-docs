---
title: "__readcr3 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__readcr3"]
dev_langs: ["C++"]
helpviewer_keywords: ["__readcr3 intrinsic"]
ms.assetid: e24392c3-cad7-4788-8f31-94bf2e9e0053
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __readcr3
**Microsoft Specific**  
  
 Reads the CR3 register and returns its value.  
  
## Syntax  
  
```  
unsigned __int64 __readcr3(void);  
```  
  
## Return Value  
 The value in the CR3 register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readcr3`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)