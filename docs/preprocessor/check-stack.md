---
title: "check_stack | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["vc-pragma.check_stack", "check_stack_CPP"]
dev_langs: ["C++"]
helpviewer_keywords: ["check_stack pragma", "pragmas, check_stack", "pragmas, check_stack usage table"]
ms.assetid: f18e20cc-9abb-48b7-ad62-8d384875b996
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# check_stack
Instructs the compiler to turn off stack probes if `off` (or `-`) is specified, or to turn on stack probes if `on` (or `+`) is specified.  
  
## Syntax  
  
```  
#pragma check_stack([ {on | off}] )  
#pragma check_stack{+ | -}  
```  
  
## Remarks 

If no argument is given, stack probes are treated according to the default. This pragma takes effect at the first function defined after the pragma is seen. Stack probes are neither a part of macros nor of functions that are generated inline.  
  
If you don't give an argument for the **check_stack** pragma, stack checking reverts to the behavior specified on the command line. For more information, see [Compiler Reference](../build/reference/compiler-options.md). The interaction of the `#pragma check_stack` and the [/Gs](../build/reference/gs-control-stack-checking-calls.md) option is summarized in the following table.  
  
### Using the check_stack Pragma  
  
|Syntax|Compiled with<br /><br /> /Gs option?|Action|  
|------------|------------------------------------|------------|  
|`#pragma check_stack( )` or<br /><br /> `#pragma check_stack`|Yes|Turns off stack checking for functions that follow|  
|`#pragma check_stack( )` or<br /><br /> `#pragma check_stack`|No|Turns on stack checking for functions that follow|  
|`#pragma check_stack(on)`<br /><br /> or `#pragma check_stack +`|Yes or No|Turns on stack checking for functions that follow|  
|`#pragma check_stack(off)`<br /><br /> or `#pragma check_stack -`|Yes or No|Turns off stack checking for functions that follow|  
  
## See Also  
 
[Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)