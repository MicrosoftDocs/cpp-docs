---
title: "__vmx_vmlaunch | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__vmx_vmlaunch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VMLAUNCH instruction"
  - "__vmx_vmlaunch intrinsic"
ms.assetid: 708f7c38-b7c1-4ee7-bfc4-0daeb9cc9360
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
# __vmx_vmlaunch
**Microsoft Specific**  
  
 Places the calling application in VMX non-root operation state (VM enter) by using the current virtual-machine control structure (VMCS).  
  
## Syntax  
  
```  
unsigned char __vmx_vmlaunch(  
   void);  
```  
  
## Return Value  
  
|Value|Meaning|  
|-----------|-------------|  
|0|The operation succeeded.|  
|1|The operation failed with extended status available in the `VM-instruction error field` of the current VMCS.|  
|2|The operation failed without status available.|  
  
## Remarks  
 An application can perform a VM-enter operation by using either the [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) or [__vmx_vmresume](../intrinsics/vmx-vmresume.md) function. The [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) function can be used only with a VMCS whose launch state is `Clear`, and the [__vmx_vmresume](../intrinsics/vmx-vmresume.md) function can be used only with a VMCS whose launch state is `Launched`. Consequently, use the [__vmx_vmclear](../intrinsics/vmx-vmclear.md) function to set the launch state of a VMCS to `Clear`, and then use the [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) function for your first VM-enter operation and the [__vmx_vmresume](../intrinsics/vmx-vmresume.md) function for subsequent VM-enter operations.  
  
 The `__vmx_vmlaunch` function is equivalent to the `VMLAUNCH` machine instruction. This function supports the interaction of a host's virtual machine monitor with a guest operating system and its applications. For more information, search for the document, "Intel Virtualization Technical Specification for the IA-32 Intel Architecture," document number C97063-002, at the [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__vmx_vmlaunch`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [__vmx_vmresume](../intrinsics/vmx-vmresume.md)   
 [__vmx_vmclear](../intrinsics/vmx-vmclear.md)