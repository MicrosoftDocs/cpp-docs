---
title: ".MODEL | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: [".MODEL"]
dev_langs: ["C++"]
helpviewer_keywords: [".MODEL directive"]
ms.assetid: 057f00df-1515-4c55-852a-d936c8a34b53
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# .MODEL
Initializes the program memory model.  
  
## Syntax  
  
```  
.MODEL memorymodel [[, langtype]] [[, stackoption]]  
```  
  
#### Parameters  
 `memorymodel`  
 Required parameter that determines the size of code and data pointers.  
  
 `langtype`  
 Optional parameter that sets the calling and naming conventions for procedures and public symbols.  
  
 `stackoption`  
 Optional parameter.  
  
 `stackoption` is not used if `memorymodel` is `FLAT`.  
  
 Specifying `NEARSTACK` groups the stack segment into a single physical segment (`DGROUP`) along with data. The stack segment register (`SS`) is assumed to hold the same address as the data segment register (`DS`). `FARSTACK` does not group the stack with `DGROUP`; thus `SS` does not equal `DS`.  
  
## Remarks  
 .`MODEL` is not used in [MASM for x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
 The following table lists the possible values for each parameter when targeting 16-bit and 32-bit platforms:  
  
|Parameter|32-bit values|16-bit values (support for earlier 16-bit development)|  
|---------------|--------------------|----------------------------------------------------------------|  
|`memorymodel`|`FLAT`|`TINY`, `SMALL`, `COMPACT`, `MEDIUM`, `LARGE`, `HUGE`, `FLAT`|  
|`langtype`|`C`, `STDCALL`|`C`, `BASIC`, `FORTRAN`, `PASCAL`, `SYSCALL`, `STDCALL`|  
|`stackoption`|Not used|`NEARSTACK`, `FARSTACK`|  
  
## Code  
 For MASM-related samples, download the Compiler samples from [Visual C++ Samples](https://github.com/Microsoft/VCSamples) on GitHub.  
  
 The following example demonstrates the use of the `.MODEL` directive.  
  
## Example  
  
```  
; file simple.asm  
; For x86 (32-bit), assemble with debug information:   
;   ml -c -Zi simple.asm  
; For x64 (64-bit), assemble with debug information:   
;   ml64 -c -DX64 -Zi simple.asm  
;  
; In this sample, the 'X64' define excludes source not used   
;  when targeting the x64 architecture  
  
ifndef X64  
.686p  
.XMM  
.model flat, C  
endif  
  
.data  
; user data  
  
.code  
; user code  
  
fxn PROC public  
  xor eax, eax ; zero function return value  
  ret  
fxn ENDP  
  
end  
```  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)   
