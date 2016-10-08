---
title: "__vmx_off"
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
ms.assetid: 78a32d46-9291-406c-b982-a550855aff18
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
# __vmx_off
**Microsoft Specific**  
  
 Deactivates virtual machine extensions (VMX) operation in the processor.  
  
## Syntax  
  
```  
void __vmx_off();  
```  
  
## Remarks  
 The `__vmx_off` function is equivalent to the `VMXOFF` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," document number C97063-002, at the [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__vmx_off`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)