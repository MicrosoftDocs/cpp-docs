---
title: "__readdr"
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
ms.assetid: 061b05da-c85e-4052-b392-106f14bb84f1
caps.latest.revision: 6
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
# __readdr
Reads the value of the specified debug register.  
  
## Syntax  
  
```  
unsigned         __readdr(unsigned int DebugRegister);  
unsigned __int64 __readdr(unsigned int DebugRegister);  
```  
  
#### Parameters  
 [in] `DebugRegister`  
 A constant from 0 through 7 that identifies the debug register.  
  
## Return Value  
 The value of the specified debug register.  
  
## Remarks  
 These intrinsics are available only in kernel mode, and the routines are available only as intrinsics.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__readdr`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [__readeflags](../VS_visualcpp/__readeflags.md)