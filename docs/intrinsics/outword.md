---
description: "Learn more about: __outword"
title: "__outword"
ms.date: "09/02/2019"
f1_keywords: ["__outword"]
helpviewer_keywords: ["__outword intrinsic", "out instruction"]
ms.assetid: 995f8834-0f50-4b4f-a7a2-af0e7c371cda
---
# __outword

**Microsoft Specific**

Generates the `out` instruction, which sends the word *Data* out the I/O port specified by *Port*.

## Syntax

```C
void __outword(
   unsigned short Port,
   unsigned short Data
);
```

### Parameters

*Port*\
[in] The port to send the data to.

*Data*\
[in] The data to be sent.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__outword`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
