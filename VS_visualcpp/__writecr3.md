---
title: "__writecr3"
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
ms.assetid: 959d49fa-69d5-47cf-88d2-7688367fe38f
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
# __writecr3
**Microsoft Specific**  
  
 Writes the value `Data` to the CR3 register.  
  
## Syntax  
  
```  
void writecr3(   
   unsigned __int64 Data   
);  
```  
  
#### Parameters  
 [in] `Data`  
 The value to write to the CR3 register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__writecr3`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)