---
title: "_ReturnAddress"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 7f4a5811-35e6-4f64-ba7c-21203380eeda
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# _ReturnAddress
## Microsoft Specific  
 The `_ReturnAddress` intrinsic provides the address of the instruction in the calling function that will be executed after control returns to the caller.  
  
 Build the following program and step through it in the debugger. As you step through the program, note the address that is returned from `_ReturnAddress`. Then, immediately after returning from the function where `_ReturnAddress` was used, open the [How to: Use the Disassembly Window](../Topic/How%20to:%20Use%20the%20Disassembly%20Window.md) and note that the address of the next instruction to be executed matches the address returned from `_ReturnAddress`.  
  
 Optimizations such as inlining may affect the return address. For example, if the sample program below is compiled with [/Ob1](../VS_visualcpp/-Ob--Inline-Function-Expansion-.md), `inline_func` will be inlined into the calling function, `main`. Therefore, the calls to `_ReturnAddress` from `inline_func` and `main` will each produce the same value.  
  
 When `_ReturnAddress` is used in a program compiled with [/clr](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md), the function containing the `_ReturnAddress` call will be compiled as a native function. When a function compiled as managed calls into the function containing `_ReturnAddress`, `_ReturnAddress` may not behave as expected.  
  
## Requirements  
 **Header file** <intrin.h>  
  
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
 [_AddressOfReturnAddress](../VS_visualcpp/_AddressOfReturnAddress.md)   
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)