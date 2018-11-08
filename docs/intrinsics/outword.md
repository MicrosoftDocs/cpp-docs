---
title: "__outword"
ms.date: "11/04/2016"
f1_keywords: ["__outword"]
helpviewer_keywords: ["__outword intrinsic", "out instruction"]
ms.assetid: 995f8834-0f50-4b4f-a7a2-af0e7c371cda
---
# __outword

**Microsoft Specific**

Generates the `out` instruction, which sends the word `Data` out the I/O port specified by `Port`.

## Syntax

```
void __outword(
   unsigned short Port,
   unsigned short Data
);
```

#### Parameters

*Port*<br/>
[in] The port to send the data to.

*Data*<br/>
[in] The data to be sent.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__outword`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

**END Microsoft Specific**

## See Also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)