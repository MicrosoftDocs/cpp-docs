---
title: "_enable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_enable"
  - "_enable_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "enable intrinsic"
  - "_enable intrinsic"
  - "ssm instruction"
ms.assetid: 8bee669b-6bd8-4e25-9383-bb7d57295b4d
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# _enable
**Microsoft Specific**  
  
 Enables interrupts.  
  
## Syntax  
  
```  
void _enable(void);  
```  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_enable`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 `_enable` instructs the processor to set the interrupt flag. On x86 systems, this function generates the Set Interrupt Flag (`sti`) instruction.  
  
 This function is only available in kernel mode. If used in user mode, a Privileged Instruction exception is thrown.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)