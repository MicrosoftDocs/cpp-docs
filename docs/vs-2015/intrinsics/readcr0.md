---
title: "__readcr0 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__readcr0"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__readcr0 intrinsic"
ms.assetid: 25bdb093-d83c-48d7-9c0f-224de8e2c61c
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __readcr0
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__readcr0](https://docs.microsoft.com/cpp/intrinsics/readcr0).  
  
  
Microsoft Specific**  
  
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
|`__readcr0`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

