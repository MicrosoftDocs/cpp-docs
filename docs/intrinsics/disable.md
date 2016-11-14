---
title: "_disable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_disable_cpp"
  - "_disable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_disable intrinsic"
  - "rsm instruction"
  - "disable intrinsic"
ms.assetid: 52da3df9-815c-4524-9839-6d1742cff5c6
caps.latest.revision: 11
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
# _disable
**Microsoft Specific**  
  
 Disables interrupts.  
  
## Syntax  
  
```  
void _disable(void);  
```  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_disable`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 `_disable` instructs the processor to clear the interrupt flag. On x86 systems, this function generates the Clear Interrupt Flag (`cli`) instruction.  
  
 This function is only available in kernel mode. If used in user mode, a Privileged Instruction exception is thrown at run time.  
  
 On ARM platforms, this routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)