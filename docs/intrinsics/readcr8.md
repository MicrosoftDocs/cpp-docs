---
title: "__readcr8 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__readcr8"]
dev_langs: ["C++"]
helpviewer_keywords: ["__readcr8 intrinsic"]
ms.assetid: fce16953-87ff-4fbe-8081-7962b97ae46c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __readcr8
**Microsoft Specific**  
  
 Reads the CR8 register and returns its value.  
  
## Syntax  
  
```  
unsigned __int64 __readcr8(void);  
```  
  
## Return Value  
 The value in the CR8 register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readcr8`|x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)