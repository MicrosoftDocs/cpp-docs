---
title: "fenv_access | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["vc-pragma.fenv_access", "fenv_access_CPP"]
dev_langs: ["C++"]
helpviewer_keywords: ["pragmas, fenv_access", "fenv_access pragma"]
ms.assetid: 2ccea292-0ae4-42ce-9c67-cc189299857b
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# fenv_access
Disables (ON) or enables (OFF) optimizations that could change flag tests and mode changes.  
  
## Syntax  
  
```  
#pragma fenv_access [ON | OFF]  
```  
  
## Remarks  
 By default, `fenv_access` is OFF.  
  
 For more information on floating-point behavior, see [/fp (Specify Floating-Point Behavior)](../build/reference/fp-specify-floating-point-behavior.md).  
  
 The kinds of optimizations that are subject to `fenv_access` are:  
  
-   Global common subexpression elimination  
  
-   Code motion  
  
-   Constant folding  
  
 Other floating-point pragmas include:  
  
-   [float_control](../preprocessor/float-control.md)  
  
-   [fp_contract](../preprocessor/fp-contract.md)  
  
## Example  
  
```  
// pragma_directive_fenv_access_x86.cpp  
// compile with: /O2  
// processor: x86  
#include <stdio.h>  
#include <float.h>   
#include <errno.h>  
#pragma fenv_access (on)  
  
int main() {  
   double z, b = 0.1, t = 0.1;  
   unsigned int currentControl;  
   errno_t err;  
  
   err = _controlfp_s(&currentControl, _PC_24, _MCW_PC);  
   if (err != 0) {  
      printf_s("The function _controlfp_s failed!\n");  
      return -1;  
   }  
   z = b * t;  
   printf_s ("out=%.15e\n",z);  
}  
```  
  
```Output  
out=9.999999776482582e-003  
```  

## Example  
 When commenting out `#pragma fenv_access (on)` from the previous sample, note that the output is different because the compiler does compile-time evaluation, which does not use the control mode.  
  
```  
// pragma_directive_fenv_access_2.cpp  
// compile with: /O2  
#include <stdio.h>  
#include <float.h>   
  
int main() {  
   double z, b = 0.1, t = 0.1;  
   unsigned int currentControl;  
   errno_t err;  
  
   err = _controlfp_s(&currentControl, _PC_24, _MCW_PC);  
   if (err != 0) {  
      printf_s("The function _controlfp_s failed!\n");  
      return -1;  
   }  
   z = b * t;  
   printf_s ("out=%.15e\n",z);  
}  
```  
  
```Output  
out=1.000000000000000e-002  
```  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
