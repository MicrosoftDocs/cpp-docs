---
title: "__movsd | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__movsd"]
dev_langs: ["C++"]
helpviewer_keywords: ["rep movsd instruction", "__movsd intrinsic", "movsd instruction"]
ms.assetid: eb5cccf3-aa76-47f0-b9fc-eeca38fd943f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __movsd
**Microsoft Specific**  
  
 Generates a Move String (`rep movsd`) instruction.  
  
## Syntax  
  
```  
void __movsd(   
   unsigned long* Dest,   
   unsigned long* Source,   
   size_t Count   
);  
```  
  
#### Parameters  
 [out] `Dest`  
 The destination of the operation.  
  
 [in] `Source`  
 The source of the operation.  
  
 [in] `Count`  
 The number of doublewords to copy.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__movsd`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The result is that the first `Count` doublewords pointed to by `Source` are copied to the `Dest` string.  
  
 This routine is only available as an intrinsic.  
  
## Example  
  
```  
// movsd.cpp  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__movsd)  
  
int main()  
{  
    unsigned long a1[10];  
    unsigned long a2[10] = {950, 850, 750, 650, 550, 450, 350,  
                            250, 150, 50};  
    __movsd(a1, a2, 10);  
  
    for (int i = 0; i < 10; i++)  
        printf_s("%d ", a1[i]);  
    printf_s("\n");  
}  
```  
  
```Output  
950 850 750 650 550 450 350 250 150 50   
```  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)