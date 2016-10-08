---
title: "__readcr8"
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
ms.assetid: fce16953-87ff-4fbe-8081-7962b97ae46c
caps.latest.revision: 10
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
# __readcr8
**Microsoft Specific**  
  
 Reads the CR8 register and returns its value.  
  
## Syntax  
  
```  
unsigned __int64 __readcr8(void);  
```  
  
## Return Value  
 The value in the CR8 register.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readcr8`|x64|  
  
 **Header file** <intrin.h>  
  
## Remarks  
 This intrinsic is only available in kernel mode, and the routine is only available as an intrinsic.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)