---
title: "__svm_skinit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__svm_skinit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SKINIT instruction"
  - "__svm_skinit intrinsic"
ms.assetid: 787ec781-4cf2-40a2-aa20-5192334b131a
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# __svm_skinit
**Microsoft Specific**  
  
 Initiates the loading of verifiably secure software, such as a virtual machine monitor.  
  
## Syntax  
  
```  
void __svm_skinit(  
   int SLB  
);  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`SLB`|The 32-bit physical address of a 64K byte Secure Loader Block (SLB).|  
  
## Remarks  
 The `__svm_skinit` function is equivalent to the `SKINIT` machine instruction. This function is part of a security system that uses the processor and a Trusted Platform Module (TPM) to verify and load trusted software called a security kernel (SK). A virtual machine monitor is an example of a security kernel. The security system verifies program components loaded during the initialization process, and protects components from tampering by interrupts, device access, or another program if the computer is a multiprocessor.  
  
 The `SLB` parameter specifies the physical address of a 64K block of memory called the *Secure Loader Block* (SLB). The SLB contains a program called the secure loader that establishes the operating environment for the computer, and subsequently loads the security kernel.  
  
 This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "AMD64 Architecture Programmer's Manual Volume 2: System Programming," document number 24593, revision 3.11, at the [AMD corporation](http://go.microsoft.com/fwlink/?LinkId=23746) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__svm_skinit`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)