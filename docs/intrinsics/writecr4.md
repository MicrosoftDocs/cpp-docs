---
title: "__writecr4 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_writecr4"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_writecr4 intrinsic"
ms.assetid: ab7651d7-b86b-4be7-a0a0-7263099c70fc
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# __writecr4
**Microsoft Specific**  
  
 Writes the value `Data` to the CR4 register.  
  
## Syntax  
  
```  
void writecr4(   
   unsigned __int64 Data   
);  
```  
  
#### Parameters  
 [in] `Data`  
 The value to write to the CR4 register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__writecr4`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)