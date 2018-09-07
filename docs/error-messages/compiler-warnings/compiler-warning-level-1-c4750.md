---
title: "Compiler Warning (level 1) C4750 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4750"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4750"]
ms.assetid: b0b2c938-7d2a-4c36-8270-7daee15ffee3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4750
'identifier': function with _alloca() inlined into a loop  
  
 The 'identifier' function forces inline expansion of the [_alloca](../../c-runtime-library/reference/alloca.md) function within a loop, which might cause a stack overflow when the loop is executed.  
  
### To correct this error  
  
1.  Ensure that the 'identifier' function is not modified with the [__forceinline](../../cpp/inline-functions-cpp.md) specifier.  
  
2.  Ensure that the 'identifier' function does not contain a [_alloca](../../c-runtime-library/reference/alloca.md) function that is contained in a loop.  
  
3.  Do not specify the [/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md), [/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md), [/Ox](../../build/reference/ox-full-optimization.md), or [/Og](../../build/reference/og-global-optimizations.md) compilation switch.  
  
4.  Place the [_alloca](../../c-runtime-library/reference/alloca.md) function in a [try-except statement](../../cpp/try-except-statement.md) that will catch a stack overflow.  
  
## Example  
 The following code example calls `MyFunction` in a loop, and `MyFunction` calls the `_alloca` function. The `__forceinline` modifier causes the inline expansion of the `_alloca` function.  
  
```  
// c4750.cpp  
// compile with: /O2 /W1 /c  
#include <intrin.h>  
  
char * volatile newstr;  
  
__forceinline void myFunction(void) // C4750 warning  
{  
// The _alloca function does not require a __try/__except   
// block because the example uses compiler option /c.  
    newstr = (char * volatile) _alloca(1000);  
}  
  
int main(void)  
{  
    for (int i=0; i<50000; i++)  
       myFunction();  
    return 0;  
}  
```  
  
## See Also  
 [_alloca](../../c-runtime-library/reference/alloca.md)