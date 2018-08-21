---
title: "__vmx_vmread | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__vmx_vmread"]
dev_langs: ["C++"]
helpviewer_keywords: ["VMREAD instruction", "__vmx_vmread intrinsic"]
ms.assetid: 08bdd7a0-6435-4ea6-b9a0-f592d870e5aa
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __vmx_vmread
**Microsoft Specific**  
  
 Reads a specified field from the current virtual machine control structure (VMCS) and places it in the specified location.  
  
## Syntax  
  
```  
unsigned char __vmx_vmread(  
   size_t Field,  
   size_t *FieldValue  
);  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `Field`|The VMCS field to read.|  
|[in] `FieldValue`|A pointer to the location to store the value read from the VMCS field specified by the `Field` parameter.|  
  
## Return Value  
  
|Value|Meaning|  
|-----------|-------------|  
|0|The operation succeeded.|  
|1|The operation failed with extended status available in the `VM-instruction error field` of the current VMCS.|  
|2|The operation failed without status available.|  
  
## Remarks  
 The `__vmx_vmread` function is equivalent to the `VMREAD` machine instruction. The value of the `Field` parameter is an encoded field index that is described in Intel documentation. For more information, search for the document, "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," document number C97063-002, at the [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) site, then consult Appendix C of that document.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__vmx_vmread`|x64|  
  
 **Header file** \<intrin.h>  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__vmx_vmwrite](../intrinsics/vmx-vmwrite.md)