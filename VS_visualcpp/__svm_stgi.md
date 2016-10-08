---
title: "__svm_stgi"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 96488da4-5587-4e99-8674-627a9e51be84
caps.latest.revision: 5
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
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
  
 This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "AMD64 Architecture Programmer's Manual Volume 2: System Programming," document number 24593, revision 3.11, at the [AMD corporation](http://go.microsoft.com/fwlink/?LinkId=23746) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__svm_stgi`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [__svm_clgi](../VS_visualcpp/__svm_clgi.md)