---
title: "__writedr | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__writedr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__writedr intrinsic"
ms.assetid: ac55c1ee-df2f-41d4-a429-6f369d2a934d
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __writedr
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__writedr](https://docs.microsoft.com/cpp/intrinsics/writedr).  
  
  
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
|`__writedr`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__readdr](../intrinsics/readdr.md)

