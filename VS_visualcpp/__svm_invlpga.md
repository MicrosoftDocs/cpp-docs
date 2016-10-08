---
title: "__svm_invlpga"
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
ms.assetid: aa6578ce-8278-464b-8815-a0fc45330915
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
# __svm_invlpga
**Microsoft Specific**  
  
 Invalidates the address mapping entry in the computer's translation look-aside buffer. Parameters specify the virtual address and address space identifier of the page to invalidate.  
  
## Syntax  
  
```  
void __svm_invlpga(  
     void *Va,  
     int ASID);  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `Va`|The virtual address of the page to invalidate.|  
|[in] `ASID`|The address space identifier (ASID) of the page to invalidate.|  
  
## Remarks  
 The `__svm_invlpga` function is equivalent to the `INVLPGA` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "AMD64 Architecture Programmer's Manual Volume 2: System Programming," document number 24593, revision 3.11, at the [AMD corporation](http://go.microsoft.com/fwlink/?LinkId=23746) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__svm_invlpga`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)