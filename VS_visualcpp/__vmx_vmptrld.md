---
title: "__vmx_vmptrld"
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
ms.assetid: 95c9ec5b-1a81-41ba-983e-327bd6a65fcb
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
# __vmx_vmptrld
**Microsoft Specific**  
  
 Loads the pointer to the current virtual-machine control structure (VMCS) from the specified address.  
  
## Syntax  
  
```  
int __vmx_vmptrld(   
   unsigned __int64 *VmcsPhysicalAddress   
);  
```  
  
#### Parameters  
 [in] *`VmcsPhysicalAddress`  
 The address where the VMCS pointer is stored.  
  
## Return Value  
 0  
 The operation succeeded.  
  
 1  
 The operation failed with extended status available in the `VM-instruction error field` of the current VMCS.  
  
 2  
 The operation failed without status available.  
  
## Remarks  
 The VMCS pointer is a 64-bit physical address.  
  
 The `__vmx_vmptrld` function is equivalent to the `VMPTRLD` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," document number C97063-002, at the [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__vmx_vmptrld`|x64|  
  
 **Header file** <intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [__vmx_vmptrst](../VS_visualcpp/__vmx_vmptrst.md)