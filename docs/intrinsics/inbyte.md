---
description: "Learn more about: __inbyte"
title: "__inbyte"
ms.date: "09/02/2019"
f1_keywords: ["__inbyte", "__inbyte_cpp"]
helpviewer_keywords: ["in instruction", "__inbyte intrinsic"]
ms.assetid: 03b61799-2a08-474d-adc4-2cbf7c81a4d5
---
# __inbyte

**Microsoft Specific**

Generates the `in` instruction, returning a single byte read from the port specified by `Port`.

## Syntax

```C
unsigned char __inbyte(
   unsigned short Port
);
```

### Parameters

*Port*\
[in] The port to read from.

## Return value

The byte read from the specified port.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__inbyte`|x86, x64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## Remarks

This routine is only available as an intrinsic.

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
