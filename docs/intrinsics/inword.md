---
description: "Learn more about: __inword"
title: "__inword"
ms.date: "09/02/2019"
f1_keywords: ["__inword_cpp", "__inword"]
helpviewer_keywords: ["in instruction", "__inword intrinsic"]
ms.assetid: 5c617edd-6709-40a1-aad2-40d5e39283c6
---
# __inword

**Microsoft Specific**

Reads data from the specified port using the `in` instruction.

## Syntax

```C
unsigned short __inword(
   unsigned short Port
);
```

### Parameters

*Port*\
[in] The port to read from.

## Return value

The word of data read.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__inword`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
