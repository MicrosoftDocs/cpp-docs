---
title: "_ReturnAddress | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_ReturnAddress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ReturnAddress intrinsic"
  - "ReturnAddress intrinsic"
ms.assetid: 7f4a5811-35e6-4f64-ba7c-21203380eeda
caps.latest.revision: 8
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
# _ReturnAddress
## Microsoft Specific  
 The `_ReturnAddress` intrinsic provides the address of the instruction in the calling function that will be executed after control returns to the caller.  
  
 Build the following program and step through it in the debugger. As you step through the program, note the address that is returned from `_ReturnAddress`. Then, immediately after returning from the function where `_ReturnAddress` was used, open the [How to: Use the Disassembly Window](http://msdn.microsoft.com/Library/eaf84dd0-c82d-481b-af51-690b74e7794c) and note that the address of the next instruction to be executed matches the address returned from `_ReturnAddress`.  
  
 Optimizations such as inlining may affect the return address. For example, if the sample program below is compiled with [/Ob1](../build/reference/ob-inline-function-expansion.md), `inline_func` will be inlined into the calling function, `main`. Therefore, the calls to `_ReturnAddress` from `inline_func` and `main` will each produce the same value.  
  
 When `_ReturnAddress` is used in a program compiled with [/clr](../build/reference/clr-common-language-runtime-compilation.md), the function containing the `_ReturnAddress` call will be compiled as a native function. When a function compiled as managed calls into the function containing `_ReturnAddress`, `_ReturnAddress` may not behave as expected.  
  
## Requirements  
 **Header file** \<intrin.h>  
  
## Example  
  
```  
// compiler_intrinsics__ReturnAddress.cpp  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(_ReturnAddress)  
  
__declspec(noinline)  
void noinline_func(void)  
{  
   printf("Return address from %s: %p\n", __FUNCTION__, _ReturnAddress());  
}  
  
__forceinline  
void inline_func(void)  
{  
   printf("Return address from %s: %p\n", __FUNCTION__, _ReturnAddress());  
}  
  
int main(void)  
{  
   noinline_func();   
   inline_func();  
   printf("Return address from %s: %p\n", __FUNCTION__, _ReturnAddress());  
  
   return 0;  
}  
```  
  
## END Microsoft Specific  
  
## See Also  
 [_AddressOfReturnAddress](../intrinsics/addressofreturnaddress.md)   
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [Keywords](../cpp/keywords-cpp.md)