---
title: "__getcallerseflags | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_getcallerseflags"
  - "_getcallerseflags_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_getcallerseflags intrinsic"
ms.assetid: 2386596f-33aa-4cc7-b026-5a834637270a
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __getcallerseflags
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__getcallerseflags](https://docs.microsoft.com/cpp/intrinsics/getcallerseflags).  
  
  
Microsoft Specific**  
  
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
|`__getcallerseflags`|x86, [!INCLUDE[vcprx64](../includes/vcprx64-md.md)]|  
  
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
  
## END Microsoft Specific  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)

