---
title: "__fastfail | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 9cd32639-e395-4c75-9f3a-ac3ba7f49921
caps.latest.revision: 3
author: "corob-msft"
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
# __fastfail
**Microsoft Specific**  
  
 Immediately terminates the calling process with minimum overhead.  
  
## Syntax  
  
```  
void __fastfail(unsigned int code);  
```  
  
#### Parameters  
 [in] `code`  
 A `FAST_FAIL_<description>` symbolic constant from winnt.h or wdm.h that indicates the reason for process termination.  
  
## Return Value  
 The `__fastfail` intrinsic does not return.  
  
## Remarks  
 The `__fastfail` intrinsic provides a mechanism for a *fast fail* request—a way for a potentially corrupted process to request immediate process termination. Critical failures that may have corrupted program state and stack beyond recovery cannot be handled by the regular exception handling facility. Use `__fastfail` to terminate the process using minimal overhead.  
  
 Internally, `__fastfail` is implemented by using several architecture-specific mechanisms:  
  
|Architecture|Instruction|Location of code argument|  
|------------------|-----------------|-------------------------------|  
|x86|int 0x29|ecx|  
|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|int 0x29|rcx|  
|ARM|Opcode 0xDEFB|r0|  
  
 A fast fail request is self-contained and typically requires just two instructions to execute. Once a fast fail request has been executed the kernel then takes the appropriate action. In user-mode code, there are no memory dependencies beyond the instruction pointer itself when a fast fail event is raised. This maximizes its reliability even if there is severe memory corruption.  
  
 The `code` argument—one of the `FAST_FAIL_<description>` symbolic constants from winnt.h or wdm.h—describes the type of failure condition and is incorporated into failure reports in an environment-specific manner.  
  
 User-mode fast fail requests appear as a second chance non-continuable exception with exception code 0xC0000409 and with at least one exception parameter. The first exception parameter is the `code` value. This exception code indicates to the Windows Error Reporting (WER) and debugging infrastructure that the process is corrupted and that minimal in-process actions should be taken in response to the failure. Kernel-mode fast fail requests are implemented by using a dedicated bugcheck code, `KERNEL_SECURITY_CHECK_FAILURE` (0x139). In both cases, no exception handlers are invoked because the program is expected to be in a corrupted state. If a debugger is present, it is given an opportunity to examine the state of the program before termination.  
  
 Support for the native fast fail mechanism began in Windows 8. Windows operating systems that do not support the fast fail instruction natively will typically treat a fast fail request as an access violation, or as an `UNEXPECTED_KERNEL_MODE_TRAP` bugcheck. In these cases, the program is still terminated, but not necessarily as quickly.  
  
 `__fastfail` is only available as an intrinsic.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__fastfail`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)], ARM|  
  
 **Header file** \<intrin.h>  
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)