---
title: "__getcallerseflags | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["_getcallerseflags", "_getcallerseflags_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["_getcallerseflags intrinsic"]
ms.assetid: 2386596f-33aa-4cc7-b026-5a834637270a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __getcallerseflags
**Microsoft Specific**  
  
 Returns the EFLAGS value from the caller's context.  
  
## Syntax  
  
```  
unsigned int __getcallerseflags(void);  
```  
  
## Return Value  
 EFLAGS value from the caller's context.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__getcallerseflags`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## Example  
  
```  
// getcallerseflags.cpp  
// processor: x86, x64  
  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__getcallerseflags)  
  
unsigned int g()  
{  
    unsigned int EFLAGS = __getcallerseflags();  
    printf_s("EFLAGS 0x%x\n", EFLAGS);  
    return EFLAGS;  
}  
unsigned int f()  
{  
    return g();  
}  
  
int main()  
{  
    unsigned int i;  
    i = f();  
    i = g();  
    return 0;  
}  
```  
  
```Output  
EFLAGS 0x202  
EFLAGS 0x206  
```  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)