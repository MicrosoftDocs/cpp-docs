---
title: "_disable"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 52da3df9-815c-4524-9839-6d1742cff5c6
caps.latest.revision: 11
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
|`_disable`|x86, ARM, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 `_disable` instructs the processor to clear the interrupt flag. On x86 systems, this function generates the Clear Interrupt Flag (`cli`) instruction.  
  
 This function is only available in kernel mode. If used in user mode, a Privileged Instruction exception is thrown at run time.  
  
 On ARM platforms, this routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)