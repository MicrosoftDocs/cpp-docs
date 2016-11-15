---
title: "_InterlockedCompareExchange128 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_InterlockedCompareExchange128_cpp"
  - "_InterlockedCompareExchange128"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cmpxchg16b instruction"
  - "_InterlockedCompareExchange128 intrinsic"
ms.assetid: f05918fc-716a-4f6d-b746-1456d6b96c56
caps.latest.revision: 17
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
# _InterlockedCompareExchange128
**Microsoft Specific**  
  
 Performs a 128-bit interlocked compare and exchange.  
  
## Syntax  
  
```  
unsigned char _InterlockedCompareExchange128(  
   __int64 volatile * Destination,  
   __int64 ExchangeHigh,  
   __int64 ExchangeLow,  
   __int64 * ComparandResult  
);  
```  
  
#### Parameters  
 [in, out] `Destination`  
 Pointer to the destination, which is an array of two 64-bit integers considered as a 128-bit field. The destination data must be 16-byte aligned to avoid a general protection fault.  
  
 [in] `ExchangeHigh`  
 A 64-bit integer that may be exchanged with the high part of the destination.  
  
 [in] `ExchangeLow`  
 A 64-bit integer that may be exchanged with the low part of the destination.  
  
 [in, out] `ComparandResult`  
 Pointer to an array of two 64-bit integers (considered as a 128-bit field) to compare with the destination.  On output, this is overwritten with the original value of the destination.  
  
## Return Value  
 1 if the 128-bit comparand equals the original value of the destination. `ExchangeHigh` and `ExchangeLow` overwrite the 128-bit destination.  
  
 0 if the comparand does not equal the original value of the destination. The value of the destination is unchanged and the value of the comparand is overwritten with the value of the destination.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_InterlockedCompareExchange128`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 This intrinsic generates the `cmpxchg16b` instruction (with the `lock` prefix) to perform a 128-bit locked compare and exchange. Early versions of AMD 64-bit hardware do not support this instruction. To check for hardware support for the `cmpxchg16b` instruction, call the `__cpuid` intrinsic with `InfoType=0x00000001 (standard function 1)`. Bit 13 of `CPUInfo[2]` (ECX) is 1 if the instruction is supported.  
  
> [!NOTE]
>  The value of `ComparandResult` is always overwritten. After the `lock` instruction, this intrinsic immediately copies the initial value of `Destination` to `ComparandResult`. For this reason, `ComparandResult` and `Destination` should point to separate memory locations to avoid unexpected behavior.  
  
 Although you can use `_InterlockedCompareExchange128` for low-level thread synchronization, you do not need to synchronize over 128 bits if you can use smaller synchronization functions (such as the other `_InterlockedCompareExchange` intrinsics) instead. Use `_InterlockedCompareExchange128` if you want atomic access to a 128-bit value in memory.  
  
 If you run code that uses this intrinsic on hardware that does not support the `cmpxchg16b` instruction, the results are unpredictable.  
  
 This routine is available only as an intrinsic.  
  
## Example  
 This example uses `_InterlockedCompareExchange128` to replace the high word of an array of two 64-bit integers with the sum of its high and low words and to increment the low word. The access to the BigInt.Int array is atomic, but this example uses a single thread and ignores the locking for simplicity.  
  
```  
// cmpxchg16b.c  
// processor: x64  
// compile with: /EHsc /O2  
#include <stdio.h>  
#include <intrin.h>  
  
typedef struct _LARGE_INTEGER_128 {  
    __int64 Int[2];  
} LARGE_INTEGER_128, *PLARGE_INTEGER_128;  
  
volatile LARGE_INTEGER_128 BigInt;  
  
// This AtomicOp() function atomically performs:  
//   BigInt.Int[1] += BigInt.Int[0]  
//   BigInt.Int[0] += 1  
void AtomicOp ()  
{  
    LARGE_INTEGER_128 Comparand;  
    Comparand.Int[0] = BigInt.Int[0];  
    Comparand.Int[1] = BigInt.Int[1];  
    do {  
        ; // nothing  
    } while (_InterlockedCompareExchange128(BigInt.Int,  
                                            Comparand.Int[0] + Comparand.Int[1],  
                                            Comparand.Int[0] + 1,  
                                            Comparand.Int) == 0);  
}  
  
// In a real application, several threads contend for the value  
// of BigInt.  
// Here we focus on the compare and exchange for simplicity.  
int main(void)  
{  
   BigInt.Int[1] = 23;  
   BigInt.Int[0] = 11;  
   AtomicOp();  
   printf("BigInt.Int[1] = %d, BigInt.Int[0] = %d\n",  
      BigInt.Int[1],BigInt.Int[0]);  
}  
```  
  
```Output  
BigInt.Int[1] = 34, BigInt.Int[0] = 12  
```  
  
## END Microsoft Specific  
 Copyright 2007 by Advanced Micro Devices, Inc. All rights reserved. Reproduced with permission from Advanced Micro Devices, Inc.  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)   
 [_InterlockedCompareExchange Intrinsic Functions](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)   
 [Conflicts with the x86 Compiler](../build/conflicts-with-the-x86-compiler.md)