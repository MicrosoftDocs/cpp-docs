---
title: "__svm_stgi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__svm_stgi"]
dev_langs: ["C++"]
helpviewer_keywords: ["__svm_stgi intrinsic", "STGI instruction"]
ms.assetid: 96488da4-5587-4e99-8674-627a9e51be84
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __svm_stgi
**Microsoft Specific**  
  
 Sets the global interrupt flag.  
  
## Syntax  
  
```  
void __svm_stgi(void);  
```  
  
## Remarks  
 The `__svm_stgi` function is equivalent to the `STGI` machine instruction. The global interrupt flag determines whether the microprocessor ignores, postpones, or handles interrupts due to events such as an I/O completion, a hardware temperature alert, or a debug exception.  
  
 This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "AMD64 Architecture Programmer's Manual Volume 2: System Programming," document number 24593, revision 3.11, at the [AMD corporation](https://developer.amd.com/resources/developer-guides-manuals/) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__svm_stgi`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__svm_clgi](../intrinsics/svm-clgi.md)