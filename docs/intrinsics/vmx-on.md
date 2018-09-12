---
title: "__vmx_on | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__vmx_on"]
dev_langs: ["C++"]
helpviewer_keywords: ["VMXON instruction", "__vmx_on intrinsic"]
ms.assetid: 16804991-6a75-4adf-8ec2-bc95acfa4801
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __vmx_on
**Microsoft Specific**  
  
 Activates virtual machine extensions (VMX) operation in the processor.  
  
## Syntax  
  
```  
unsigned char __vmx_on(  
   unsigned __int64 *VmsSupportPhysicalAddress  
);  
```  
  
#### Parameters  
`VmsSupportPhysicalAddress`<br/>
[in] A pointer to a 64-bit physical address that points to a virtual-machine control structure (VMCS).  
  
## Return Value  
  
|Value|Meaning|  
|-----------|-------------|  
|0|The operation succeeded.|  
|1|The operation failed with extended status available in the `VM-instruction error field` of the current VMCS.|  
|2|The operation failed without status available.|  
  
## Remarks  
 The `__vmx_on` function corresponds to the `VMXON` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," document number C97063-002, at the [Intel Corporation](https://software.intel.com/en-us/articles/intel-sdm) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__vmx_on`|x64|  
  
 **Header file** \<intrin.h>  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)