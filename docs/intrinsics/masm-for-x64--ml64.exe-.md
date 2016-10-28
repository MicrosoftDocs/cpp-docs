---
title: "MASM for x64 (ml64.exe)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ml64.exe"
  - "ml"
ms.assetid: 89059103-f372-4968-80ea-0c7f90bb9c91
caps.latest.revision: 12
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# MASM for x64 (ml64.exe)
ml64.exe is the assembler that accepts [!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)] assembly language. For information on ml64.exe compiler options, see [ML and ML64 Command-Line Reference](../intrinsics/ml-and-ml64-command-line-reference.md).  
  
 Inline ASM is not supported for [!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)]. Use MASM or compiler intrinsics ([x64 Intrinsics](assetId:///5d1f5d3e-156e-4ebf-932e-fd09be7ced62)).  
  
 The two workarounds are separate assembly with MASM (which supports x64 fully) and compiler intrinsics. We’ve added a lot of intrinsics to allow customers to make use of special-function instructions (e.g. privileged, bit scan/test, interlocked, etc…) in as close to cross-platform a manner as possible.  
  
## ml64-Specific Directives  
 Use the following directives with ml64.exe:  
  
-   [.ALLOCSTACK](../intrinsics/.allocstack.md)  
  
-   [.ENDPROLOG](../intrinsics/.endprolog.md)  
  
-   [.PUSHFRAME](../intrinsics/.pushframe.md)  
  
-   [.PUSHREG](../intrinsics/.pushreg.md)  
  
-   [.SAVEREG](../intrinsics/.savereg.md)  
  
-   [.SAVEXMM128](../intrinsics/.savexmm128.md)  
  
-   [.SETFRAME](../intrinsics/.setframe.md)  
  
 In addition, the [PROC](../intrinsics/proc.md) directive was updated for use with ml64.exe.  
  
## 32-Bit Address Mode (Address Size Override)  
 MASM will emit the 0x67 address size override if a memory operand includes 32-bit registers. For example, the following examples cause the address size override to be emitted:  
  
```  
mov rax, QWORD PTR [ecx]  
mov eax, DWORD PTR [ecx*2+r10d]  
mov eax, DWORD PTR [ecx*2+r10d+0100h]  
prefetch [eax]  
movnti rax, QWORD PTR [r8d]  
```  
  
 MASM assumes that if a 32-bit displacement appears alone as a memory operand, 64-bit addressing is intended. There is currently no support for 32-bit addressing with such operands.  
  
 Finally, mixing register sizes within a memory operand, as demonstrated in the following code, will generate an error.  
  
```  
mov eax, DWORD PTR [rcx*2+r10d]  
mov eax, DWORD PTR [ecx*2+r10+0100h]  
```  
  
## See Also  
 [Microsoft Macro Assembler Reference](../intrinsics/microsoft-macro-assembler-reference.md)