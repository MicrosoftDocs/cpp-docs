---
title: "MxCsr"
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
ms.assetid: 4f3c229d-0862-4733-acc7-9ed7a0b870ce
caps.latest.revision: 7
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
# MxCsr
The register state also includes MxCsr. The calling convention divides this register into a volatile portion and a nonvolatile portion. The volatile portion consists of the 6 status flags, MXCSR[0:5], while the remainder of the register, MXCSR[6:15], is considered nonvolatile.  
  
 The nonvolatile portion is set to the following standard values at the start of program execution:  
  
```  
MXCSR[6]         : Denormals are zeros - 0  
MXCSR[7:12]      : Exception masks all 1's (all exceptions masked)  
MXCSR[13:14]   : Rounding  control - 0 (round to nearest)  
MXCSR[15]      : Flush to zero for masked underflow - 0 (off)  
```  
  
 A callee that modifies any of the nonvolatile fields within MXCSR must restore them before returning to its caller. Furthermore, a caller that has modified any of these fields must restore them to their standard values before invoking a callee unless by agreement the callee expects the modified values.  
  
 There are two exceptions to the rules regarding the non-volatility of the control flags:  
  
-   In functions where the documented purpose of the given function is to modify the nonvolatile MxCsr flags.  
  
-   When it is provably correct that the violation of these rules results in a programs that behaves/means the same as a program where these rules are not violated, for example, through whole-program analysis.  
  
 No assumptions can be made about the state of the volatile portion of MXCSR across a function boundary, unless specifically described in a function's documentation.  
  
## See Also  
 [Calling Convention](../build/calling-convention.md)