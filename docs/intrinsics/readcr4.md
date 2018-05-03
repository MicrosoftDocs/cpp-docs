---
title: "__readcr4 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__readcr4"]
dev_langs: ["C++"]
helpviewer_keywords: ["__readcr4 intrinsic"]
ms.assetid: b841a27b-fe0d-4ee9-b76b-f91d3eb061fa
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __readcr4
**Microsoft Specific**  
  
 Reads the CR4 register and returns its value.  
  
## Syntax  
  
```  
unsigned __int64 __readcr4(void);  
```  
  
## Return Value  
 The value in the CR4 register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readcr4`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)