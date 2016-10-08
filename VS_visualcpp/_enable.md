---
title: "_enable"
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
ms.assetid: 8bee669b-6bd8-4e25-9383-bb7d57295b4d
caps.latest.revision: 12
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
|`_enable`|x86, ARM, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 `_enable` instructs the processor to set the interrupt flag. On x86 systems, this function generates the Set Interrupt Flag (`sti`) instruction.  
  
 This function is only available in kernel mode. If used in user mode, a Privileged Instruction exception is thrown.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)