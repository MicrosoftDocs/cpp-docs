---
title: "__vmx_vmptrld | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__vmx_vmptrld"]
dev_langs: ["C++"]
helpviewer_keywords: ["__vmx_vmptrld intrinsic", "VMPTRLD instruction"]
ms.assetid: 95c9ec5b-1a81-41ba-983e-327bd6a65fcb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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
  
 The `__vmx_vmptrld` function is equivalent to the `VMPTRLD` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," document number C97063-002, at the [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__vmx_vmptrld`|x64|  
  
 **Header file** \<intrin.h>  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__vmx_vmptrst](../intrinsics/vmx-vmptrst.md)