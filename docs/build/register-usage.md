---
title: "Register Usage | Microsoft Docs"
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
ms.assetid: ce58e2cf-afd3-4068-980e-28a209298265
caps.latest.revision: 10
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
# Register Usage
The [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] architecture provides for 16 general-purpose registers (hereafter referred to as integer registers) as well as 16 XMM/YMM registers available for floating-point use. Volatile registers are scratch registers presumed by the caller to be destroyed across a call. Nonvolatile registers are required to retain their values across a function call and must be saved by the callee if used.  
  
 The following table describes how each register is used across function calls:  
  
||||  
|-|-|-|  
|Register|Status|Use|  
|RAX|Volatile|Return value register|  
|RCX|Volatile|First integer argument|  
|RDX|Volatile|Second integer argument|  
|R8|Volatile|Third integer argument|  
|R9|Volatile|Fourth integer argument|  
|R10:R11|Volatile|Must be preserved as needed by caller; used in syscall/sysret instructions|  
|R12:R15|Nonvolatile|Must be preserved by callee|  
|RDI|Nonvolatile|Must be preserved by callee|  
|RSI|Nonvolatile|Must be preserved by callee|  
|RBX|Nonvolatile|Must be preserved by callee|  
|RBP|Nonvolatile|May be used as a frame pointer; must be preserved by callee|  
|RSP|Nonvolatile|Stack pointer|  
|XMM0, YMM0|Volatile|First FP argument; first vector-type argument when `__vectorcall` is used|  
|XMM1, YMM1|Volatile|Second FP argument; second vector-type argument when `__vectorcall` is used|  
|XMM2, YMM2|Volatile|Third FP argument; third vector-type argument when `__vectorcall` is used|  
|XMM3, YMM3|Volatile|Fourth FP argument; fourth vector-type argument when `__vectorcall` is used|  
|XMM4, YMM4|Volatile|Must be preserved as needed by caller; fifth vector-type argument when `__vectorcall` is used|  
|XMM5, YMM5|Volatile|Must be preserved as needed by caller; sixth vector-type argument when `__vectorcall` is used|  
|XMM6:XMM15, YMM6:YMM15|Nonvolatile (XMM), Volatile (upper half of YMM)|Must be preserved as needed by callee. YMM registers must be preserved as needed by caller.|  
  
## See Also  
 [x64 Software Conventions](../build/x64-software-conventions.md)   
 [__vectorcall](../cpp/vectorcall.md)