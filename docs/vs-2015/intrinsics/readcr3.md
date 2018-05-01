---
title: "__readcr3 | Microsoft Docs"
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
  - "__readcr3"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__readcr3 intrinsic"
ms.assetid: e24392c3-cad7-4788-8f31-94bf2e9e0053
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __readcr3
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__readcr3](https://docs.microsoft.com/cpp/intrinsics/readcr3).  
  
  
Microsoft Specific**  
  
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
|`__readcr3`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

