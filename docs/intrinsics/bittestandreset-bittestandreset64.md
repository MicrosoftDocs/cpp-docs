---
title: "_bittestandreset, _bittestandreset64 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["_bittestandreset64_cpp", "_bittestandreset", "_bittestandreset_cpp", "_bittestandreset64"]
dev_langs: ["C++"]
helpviewer_keywords: ["btr instruction", "_bittestandreset intrinsic", "_bittestandreset64 intrinsic"]
ms.assetid: 8dad63bb-a051-4cd7-a793-3357537dfeaf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _bittestandreset, _bittestandreset64
**Microsoft Specific**  
  
 Generate the instruction which examines bit `b` of the address `a`, returns its current value, and resets the bit to 0.  
  
## Syntax  
  
```  
unsigned char _bittestandreset(  
   long *a,  
   long b  
);  
unsigned char _bittestandreset64(  
   __int64 *a,  
   __int64 b  
);  
```  
  
#### Parameters  
 [in, out] `a`  
 A pointer to the memory to examine.  
  
 [in] `b`  
 The bit position to test.  
  
## Return Value  
 The bit at the position specified.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_bittestandreset`|x86, ARM, x64|  
|`_bittestandreset64`|x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This routine is only available as an intrinsic.  
  
## Example  
  
```  
// bittestandreset.cpp  
// processor: x86, IPF, x64  
#include <stdio.h>  
#include <limits.h>  
#include <intrin.h>  
  
#pragma intrinsic(_bittestandreset)  
  
// Check the sign bit and reset to 0 (taking the absolute value)  
// Returns 0 if the number is positive or zero  
// Returns 1 if the number is negative  
unsigned char absolute_value(long* p)  
{  
   const int SIGN_BIT = 31;  
   return _bittestandreset(p, SIGN_BIT);  
}  
  
int main()  
{  
    long i = -112;  
    unsigned char result;  
  
    // Check the sign bit and reset to 0 (taking the absolute value)  
  
    result = absolute_value(&i);  
    if (result == 1)  
        printf_s("The number was negative.\n");     
}  
```  
  
```Output  
The number was negative.  
```  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)