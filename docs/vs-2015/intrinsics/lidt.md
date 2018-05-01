---
title: "__lidt | Microsoft Docs"
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
  - "__lidt"
  - "__lidt_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LIDT instruction"
  - "__lidt intrinsic"
ms.assetid: 8298d25d-a19e-4900-828d-6b3b09841882
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __lidt
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__lidt](https://docs.microsoft.com/cpp/intrinsics/lidt).  
  
  
Microsoft Specific**  
  
 Loads the interrupt descriptor table register (IDTR) with the value in the specified memory location.  
  
## Syntax  
  
```  
void __lidt(  
     void *Source);  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `Source`|Pointer to the value to be copied to the IDTR.|  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__lidt`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The `__lidt` function is equivalent to the `LIDT` machine instruction, and is available only in kernel mode. For more information, search for the document, "Intel Architecture Software Developer's Manual, Volume 2: Instruction Set Reference," at the [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) site.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__sidt](../intrinsics/sidt.md)

