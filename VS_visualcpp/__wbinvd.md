---
title: "__wbinvd"
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
ms.assetid: 628d0981-39e5-49e1-bd43-706d123af121
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
# __wbinvd
**Microsoft Specific**  
  
 Generates the Write Back and Invalidate Cache (`wbinvd`) instruction.  
  
## Syntax  
  
```  
void __wbinvd(void);  
```  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__wbinvd`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 This function is only available in kernel mode with a privilege level (CPL) of 0, and the routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)