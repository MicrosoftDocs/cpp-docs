---
title: "__svm_vmsave | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__svm_vmsave"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VMSAVE instruction"
  - "__svm_vmsave intrinsic"
ms.assetid: 617a60bd-8514-4ba1-8066-bcf4dd481030
caps.latest.revision: 6
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
# __svm_vmsave
**Microsoft Specific**  
  
 Stores a subset of processor state in the specified virtual machine control block (VMCB).  
  
## Syntax  
  
```  
void __svm_vmsave(  
   size_t VmcbPhysicalAddress  
);  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `VmcbPhysicalAddress`|The physical address of the VMCB.|  
  
## Remarks  
 The `__svm_vmsave` function is equivalent to the `VMSAVE` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "AMD64 Architecture Programmer's Manual Volume 2: System Programming," document number 24593, revision 3.11 or later, at the [AMD Corporation](http://go.microsoft.com/fwlink/?LinkId=23746) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__svm_vmsave`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__svm_vmrun](../intrinsics/svm-vmrun.md)   
 [__svm_vmload](../intrinsics/svm-vmload.md)