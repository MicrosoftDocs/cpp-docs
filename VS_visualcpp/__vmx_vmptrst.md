---
title: "__vmx_vmptrst"
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
ms.assetid: 8dc66e47-03a0-41b0-8e25-c1485f42817a
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
# __vmx_vmptrst
**Microsoft Specific**  
  
 Stores the pointer to the current virtual-machine control structure (VMCS) at the specified address.  
  
## Syntax  
  
```  
void __vmx_vmptrst(   
   unsigned __int64 *VmcsPhysicalAddress   
);  
```  
  
#### Parameters  
 [in] *`VmcsPhysicalAddress`  
 The address where the current VMCS pointer is stored.  
  
## Remarks  
 The VMCS pointer is a 64-bit physical address.  
  
 The `__vmx_vmptrst` function is equivalent to the `VMPTRST` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," document number C97063-002, at the [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__vmx_vmptrst`|x86, x64|  
  
 **Header file** <intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [__vmx_vmptrld](../VS_visualcpp/__vmx_vmptrld.md)