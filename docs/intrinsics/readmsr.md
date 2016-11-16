---
title: "__readmsr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__readmsr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Read Model Specific Register"
  - "rdmsr instruction"
  - "__readmsr intrinsic"
ms.assetid: 7ab1f8e8-72cb-4ce4-817d-3e728a3c9716
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
# __readmsr
**Microsoft Specific**  
  
 Generates the `rdmsr` instruction, which reads the model-specific register specified by `register` and returns its value.  
  
## Syntax  
  
```  
__int64 __readmsr(   
   int register   
);  
```  
  
#### Parameters  
 [in] `register`  
 The model specific register to read.  
  
## Return Value  
 The value in the specified register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readmsr`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This function is only available in kernel mode, and the routine is only available as an intrinsic.  
  
 For more information, see the AMD documentation.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)