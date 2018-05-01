---
title: "__svm_stgi | Microsoft Docs"
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
  - "__svm_stgi"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__svm_stgi intrinsic"
  - "STGI instruction"
ms.assetid: 96488da4-5587-4e99-8674-627a9e51be84
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __svm_stgi
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__svm_stgi](https://docs.microsoft.com/cpp/intrinsics/svm-stgi).  
  
  
Microsoft Specific**  
  
 Sets the global interrupt flag.  
  
## Syntax  
  
```  
void __svm_stgi(void);  
```  
  
## Remarks  
 The `__svm_stgi` function is equivalent to the `STGI` machine instruction. The global interrupt flag determines whether the microprocessor ignores, postpones, or handles interrupts due to events such as an I/O completion, a hardware temperature alert, or a debug exception.  
  
 This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "AMD64 Architecture Programmer's Manual Volume 2: System Programming," document number 24593, revision 3.11, at the [AMD corporation](http://go.microsoft.com/fwlink/?LinkId=23746) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__svm_stgi`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
 **Header file** \<intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__svm_clgi](../intrinsics/svm-clgi.md)

