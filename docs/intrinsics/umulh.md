---
title: "__umulh | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__umulh"]
dev_langs: ["C++"]
helpviewer_keywords: ["__umulh intrinsic"]
ms.assetid: d241b53a-e6f7-4af1-9f6e-84e149158f03
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __umulh
**Microsoft Specific**  
  
 Return the high 64 bits of the product of two 64-bit unsigned integers.  
  
## Syntax  
  
```  
unsigned __int64 __umulh(   
   unsigned __int64 a,   
   unsigned __int64 b   
);  
```  
  
#### Parameters  
`a`<br/>
[in] The first number to multiply.  
  
`b`<br/>
[in] The second number to multiply.  
  
## Return Value  
 The high 64 bits of the 128-bit result of the multiplication.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__umulh`|x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 These routines are only available as intrinsics.  
  
## Example  
  
```  
// umulh.cpp  
// processor: X64  
#include <cstdio>  
#include <intrin.h>  
  
int main()  
{  
    unsigned __int64 i = 0x10;  
    unsigned __int64 j = 0xFEDCBA9876543210;  
    unsigned __int64 k = i * j; // k has the low 64 bits  
                                // of the product.  
    unsigned __int64 result;  
    result = __umulh(i, j); // result has the high 64 bits  
                            // of the product.  
    printf_s("0x%I64x * 0x%I64x = 0x%I64x%I64x \n", i, j, result, k);  
    return 0;  
}  
```  
  
```Output  
0x10 * 0xfedcba9876543210 = 0xfedcba98765432100   
```  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)