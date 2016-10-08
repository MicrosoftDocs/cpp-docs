---
title: "__writemsr"
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
ms.assetid: 938b1553-51a8-4822-a818-6bed79b0fde5
caps.latest.revision: 11
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
# __writemsr
**Microsoft Specific**  
  
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
|`__writemsr`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 This function may only be used in kernel mode, and this routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)