---
title: "__vmx_vmwrite | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__vmx_vmwrite"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__vmx_vmwrite intrinsic"
  - "VMWRITE instruction"
ms.assetid: 88139792-fd3f-4210-97ca-9d84f43a0252
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# __vmx_vmwrite
**Microsoft Specific**  
  
 Writes the specified value to the specified field in the current virtual machine control structure (VMCS).  
  
## Syntax  
  
```  
unsigned char __vmx_vmwrite(   
   size_t Field,  
   size_t FieldValue  
);  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `Field`|The VMCS field to write.|  
|[in] `FieldValue`|The value to write to the VMCS field.|  
  
## Return Value  
 0  
 The operation succeeded.  
  
 1  
 The operation failed with extended status available in the `VM-instruction error field` of the current VMCS.  
  
 2  
 The operation failed without status available.  
  
## Remarks  
 The `__vmx_vmwrite` function is equivalent to the `VMWRITE` machine instruction. The value of the `Field` parameter is an encoded field index that is described in Intel documentation. For more information, search for the document, "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," document number C97063-002, at the [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) site, and then consult Appendix C of that document.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__vmx_vmwrite`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__vmx_vmread](../intrinsics/vmx-vmread.md)