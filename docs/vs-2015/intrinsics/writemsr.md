---
title: "__writemsr | Microsoft Docs"
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
  - "__writemsr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Write Model Specific Register instruction"
  - "wrmsr instruction"
  - "__writemsr intrinsic"
ms.assetid: 938b1553-51a8-4822-a818-6bed79b0fde5
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __writemsr
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__writemsr](https://docs.microsoft.com/cpp/intrinsics/writemsr).  
  
  
Microsoft Specific**  
  
 Generates the Write to Model Specific Register (`wrmsr`) instruction.  
  
## Syntax  
  
```  
void __writemsr(   
   unsigned long Register,   
   unsigned __int64 Value   
);  
```  
  
#### Parameters  
 [in] `Register`  
 The model specific register.  
  
 [in] `Value`  
 The value to write.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__writemsr`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This function may only be used in kernel mode, and this routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

