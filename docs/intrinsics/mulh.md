---
title: "__mulh | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__mulh"]
dev_langs: ["C++"]
helpviewer_keywords: ["__mulh intrinsic"]
ms.assetid: cd2ab093-9ef6-404d-ac34-0bee033882f3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __mulh
**Microsoft Specific**  
  
 Returns the high 64 bits of the product of two 64-bit signed integers.  
  
## Syntax  
  
```  
__int64 __mulh(   
   __int64 a,   
   __int64 b   
);  
```  
  
#### Parameters  
 [in] `a`  
 The first number to multiply.  
  
 [in] `b`  
 The second number to multiply.  
  
## Return Value  
 The high 64 bits of the 128-bit result of the multiplication.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__mulh`|x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## Example  
  
```  
// mulh.cpp  
// processor: x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic (__mulh)  
  
int main()  
{  
    __int64 a = 0x0fffffffffffffffI64;  
    __int64 b = 0xf0000000I64;  
  
    __int64 result = __mulh(a, b); // the high 64 bits  
    __int64 result2 = a * b; // the low 64 bits  
  
    printf_s(" %#I64x * %#I64x = %#I64x%I64x\n",  
             a, b, result, result2);  
}  
```  
  
```Output  
0xfffffffffffffff * 0xf0000000 = 0xeffffffffffffff10000000  
```  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)