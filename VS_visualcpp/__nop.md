---
title: "__nop"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 7a2a938b-87e0-476d-a348-03ea7635b6b9
caps.latest.revision: 5
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# __nop
**Microsoft Specific**  
  
 Generates platform-specific machine code that performs no operation.  
  
## Syntax  
  
```  
void __nop();  
```  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__nop`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## END Microsoft Specific  
  
## Remarks  
 The `__nop` function is equivalent to the `NOP` machine instruction. For more information, search for the document, "Intel Architecture Software Developer's Manual, Volume 2: Instruction Set Reference," at the [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) site.  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [__noop](../VS_visualcpp/__noop.md)