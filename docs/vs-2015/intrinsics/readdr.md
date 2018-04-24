---
title: "__readdr | Microsoft Docs"
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
  - "__readdr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__readdr intrinsic"
ms.assetid: 061b05da-c85e-4052-b392-106f14bb84f1
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __readdr
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__readdr](https://docs.microsoft.com/cpp/intrinsics/readdr).  
  
  
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
|`__readdr`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__readeflags](../intrinsics/readeflags.md)

