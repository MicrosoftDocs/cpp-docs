---
title: "__writeeflags | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__writeeflags"]
dev_langs: ["C++"]
helpviewer_keywords: ["__writeeflags intrinsics"]
ms.assetid: a62a522c-d7fa-4f10-a620-a3b32bdf3f17
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __writeeflags
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
|`__writeeflags`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__readeflags](../intrinsics/readeflags.md)