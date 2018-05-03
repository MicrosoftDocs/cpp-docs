---
title: "__noop | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__noop_cpp", "__noop"]
dev_langs: ["C++"]
helpviewer_keywords: ["__noop keyword [C++]"]
ms.assetid: 81ac6e97-7bf8-496b-b3c4-fd02837573e5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __noop
**Microsoft Specific**  
  
 The `__noop` intrinsic specifies that a function should be ignored and the argument list be parsed but no code be generated for the arguments. It is intended for use in global debug functions that take a variable number of arguments.  
  
 The compiler converts the `__noop` intrinsic to 0 at compile time.  
  
## Example  
 The following code shows how you could use `__noop`.  
  
```  
// compiler_intrinsics__noop.cpp  
// compile with or without /DDEBUG  
#include <stdio.h>  
  
#if DEBUG  
   #define PRINT   printf_s  
#else  
   #define PRINT   __noop  
#endif  
  
int main() {  
   PRINT("\nhello\n");  
}  
```  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [Keywords](../cpp/keywords-cpp.md)