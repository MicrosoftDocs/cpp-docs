---
title: "__readcr4"
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
ms.assetid: b841a27b-fe0d-4ee9-b76b-f91d3eb061fa
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
# __readcr4
**Microsoft Specific**  
  
 Reads the CR4 register and returns its value.  
  
## Syntax  
  
```  
unsigned __int64 __readcr4(void);  
```  
  
## Return Value  
 The value in the CR4 register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readcr4`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)