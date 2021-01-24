---
description: "Learn more about: __inwordstring"
title: "__inwordstring"
ms.date: "09/02/2019"
f1_keywords: ["__inwordstring", "__inwordstring_cpp"]
helpviewer_keywords: ["__inwordstring intrinsic", "rep insw instruction"]
ms.assetid: 6de37939-017a-4740-9e3d-7de78a30daba
---
# __inwordstring

**Microsoft Specific**

Reads data from the specified port using the `rep insw` instruction.

## Syntax

```C
void __inwordstring(
   unsigned short Port,
   unsigned short* Buffer,
   unsigned long Count
);
```

### Parameters

*Port*\
[in] The port to read from.

*Buffer*\
[out] The data read from the port is written here.

*Count*\
[in] The number of words of data to read.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__inwordstring`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
