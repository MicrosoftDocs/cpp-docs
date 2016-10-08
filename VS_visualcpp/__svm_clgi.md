---
title: "__svm_clgi"
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
ms.assetid: 6640f5ab-9472-46f9-a042-e15c4f1ff858
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
# __svm_clgi
**Microsoft Specific**  
  
 Clears the global interrupt flag.  
  
## Syntax  
  
```  
void __svm_clgi( void );  
```  
  
## Remarks  
 The `__svm_clgi` function is equivalent to the `CLGI` machine instruction. The global interrupt flag determines whether the microprocessor ignores, postpones, or handles interrupts due to events such as an I/O completion, a hardware temperature alert, or a debug exception.  
  
 This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "AMD64 Architecture Programmer's Manual Volume 2: System Programming," document number 24593, revision 3.11, at the [AMD corporation](http://go.microsoft.com/fwlink/?LinkId=23746) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__svm_clgi`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [__svm_stgi](../VS_visualcpp/__svm_stgi.md)