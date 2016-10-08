---
title: "__writedr"
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
ms.assetid: ac55c1ee-df2f-41d4-a429-6f369d2a934d
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
# __writedr
Writes the specified value to the specified debug register.  
  
## Syntax  
  
```  
void __writedr(unsigned DebugRegister, unsigned DebugValue);  
void __writedr(unsigned DebugRegister, unsigned __int64 DebugValue);  
```  
  
#### Parameters  
 [in] `DebugRegister`  
 A number from 0 through 7 that identifies the debug register.  
  
 [in] `DebugValue`  
 A value to write to the debug register.  
  
## Remarks  
 These intrinsics are available only in kernel mode, and the routines are available only as intrinsics.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__writedr`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [__readdr](../VS_visualcpp/__readdr.md)