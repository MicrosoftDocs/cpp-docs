---
title: "__stosb | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__stosb"]
dev_langs: ["C++"]
helpviewer_keywords: ["rep stosb instruction", "__stosb intrinsic", "stosb instruction"]
ms.assetid: 634589ed-2da3-439b-a381-a214d89bf10c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __stosb

**Microsoft Specific**

Generates a store string instruction (`rep stosb`).

## Syntax

```
void __stosb(
   unsigned char* Dest,
   unsigned char Data,
   size_t Count
);
```

#### Parameters

*Dest*<br/>
[out] The destination of the operation.

*Data*<br/>
[in] The data to store.

*Count*<br/>
[in] The length of the block of bytes to write.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__stosb`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The result is that the character `Data` is written into a block of `Count` bytes in the `Dest` string.

This routine is only available as an intrinsic.

## Example

```C
// stosb.c
// processor: x86, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__stosb)  

int main()  
{
    unsigned char c = 0x40; /* '@' character */
    unsigned char s[] = "*********************************";

    printf_s("%s\n", s);
    __stosb((unsigned char*)s+1, c, 6);
    printf_s("%s\n", s);

}
```  

```Output
*********************************  
*@@@@@@**************************  
```  

**END Microsoft Specific**

## See Also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)