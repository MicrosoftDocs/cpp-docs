---
title: "__stosw | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__stosw"]
dev_langs: ["C++"]
helpviewer_keywords: ["stosw instruction", "__stosw intrinsic", "rep stosw instruction"]
ms.assetid: 7620fd1d-dba5-40e3-8e07-01aa68895133
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __stosw
**Microsoft Specific**  
  
 Generates a store string instruction (`rep stosw`).  
  
## Syntax  
  
```  
void __stosw(   
   unsigned short* Dest,   
   unsigned short Data,   
   size_t Count   
);  
```  
  
#### Parameters  
 [out] `Dest`  
 The destination of the operation.  
  
 [in] `Data`  
 The data to store.  
  
 [in] `Count`  
 The length of the block of words to write.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__stosw`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
## Remarks  
 The result is that the word `Data` is written into a block of `Count` words in the `Dest` string.  
  
 This routine is only available as an intrinsic.  
  
## Example  
  
```  
// stosw.c  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__stosw)  
  
int main()  
{  
    unsigned short val = 128;  
    unsigned short a[100];  
    memset(a, 0, sizeof(a));  
    __stosw(a+10, val, 2);  
    printf_s("%u %u %u %u", a[9], a[10], a[11], a[12]);     
}  
```  
  
```Output  
0 128 128 0  
```  
  
**END Microsoft Specific**  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)