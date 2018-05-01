---
title: "__sidt | Microsoft Docs"
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
  - "__sidt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sidt instruction"
  - "__sidt intrinsic"
ms.assetid: 01e83d14-6e63-4dea-8f64-5a0339d69641
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __sidt
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__sidt](https://docs.microsoft.com/cpp/intrinsics/sidt).  
  
  
Microsoft Specific**  
  
 Stores the value of the interrupt descriptor table register (IDTR) in the specified memory location.  
  
## Syntax  
  
```  
void __sidt(  
     void *Destination);  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `Destination`|A pointer to the memory location where the IDTR is stored.|  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__sidt`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The `__sidt` function is equivalent to the `SIDT` machine instruction. For more information, search for the document, "Intel Architecture Software Developer's Manual, Volume 2: Instruction Set Reference," at the [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) site.  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__lidt](../intrinsics/lidt.md)

