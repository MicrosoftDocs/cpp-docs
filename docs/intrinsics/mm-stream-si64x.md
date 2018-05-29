---
title: "_mm_stream_si64x | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["_mm_stream_si64x"]
dev_langs: ["C++"]
helpviewer_keywords: ["movnti instruction", "_mm_stream_si64x intrinsic"]
ms.assetid: 114c2cd0-085f-41aa-846e-87bdd56c9ee7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _mm_stream_si64x  
  
**Microsoft Specific**  
  
 Generates the MOVNTI instruction. Writes the data in `Source` to a memory location specified by `Dest`, without polluting the caches.  
  
## Syntax  
  
```  
void _mm_stream_si64x(   
   __int64 * Dest,   
   __int64 Source   
);  
```  
  
#### Parameters  
  
 [out] `Dest`  
 A pointer to the location to write the source data to.  
  
 [in] `Source`  
 The data to write.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`_mm_stream_si64x`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
  
 This routine is only available as an intrinsic.  
  
## Example  
  
```C  
// _mm_stream_si64x.c  
// processor: x64  
  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(_mm_stream_si64x)  
  
int main()  
{  
    __int64 val = 0xFFFFFFFFFFFFI64;  
    __int64 a[10];  
  
    memset(a, 0, sizeof(a));  
    _mm_stream_si64x(a+1, val);  
    printf_s( "%I64x %I64x %I64x %I64x", a[0], a[1], a[2], a[3]);   
}  
```  
  
```Output  
0 ffffffffffff 0 0  
```  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)