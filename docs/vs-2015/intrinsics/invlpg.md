---
title: "__invlpg | Microsoft Docs"
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
  - "__invlpg"
  - "__invlpg_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invlpg instruction"
  - "__invlpg intrinsic"
ms.assetid: 3fb3633f-d9b7-4ec0-9e7f-a7f2fa8ed794
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __invlpg
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__invlpg](https://docs.microsoft.com/cpp/intrinsics/invlpg).  
  
  
Microsoft Specific**  
  
 Generates the x86 `invlpg` instruction, which invalidates the translation lookaside buffer (TLB) for the page associated with memory pointed to by `Address`.  
  
## Syntax  
  
```  
void __invlpg(  
   void* Address  
);  
```  
  
#### Parameters  
 [in]  `Address`  
 A 64-bit address.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__invlpg`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The intrinsic `__invlpg` emits a privileged instruction and is only available in kernel mode with a privilege level (CPL) of 0.  
  
 This routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

