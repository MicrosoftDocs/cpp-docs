---
title: "__writeeflags | Microsoft Docs"
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
  - "__writeeflags"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__writeeflags intrinsics"
ms.assetid: a62a522c-d7fa-4f10-a620-a3b32bdf3f17
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __writeeflags
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__writeeflags](https://docs.microsoft.com/cpp/intrinsics/writeeflags).  
  
  
Writes the specified value to the program status and control (EFLAGS) register.  
  
## Syntax  
  
```  
void __writeeflags(unsigned Value);  
void __writeeflags(unsigned __int64 Value);  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `Value`|The value to write to the EFLAGS register. The `Value` parameter is 32 bits long for a 32-bit platform and 64 bits long for a 64-bit platform.|  
  
## Remarks  
 These routines are available only as intrinsics.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__writeeflags`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__readeflags](../intrinsics/readeflags.md)

