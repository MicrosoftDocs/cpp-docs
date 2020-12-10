---
description: "Learn more about: __outbyte"
title: "__outbyte"
ms.date: "09/02/2019"
f1_keywords: ["__outbyte"]
helpviewer_keywords: ["out instruction", "__outbyte intrinsic"]
ms.assetid: c4cd1a34-8a02-4e37-993d-3201bc17901a
---
# __outbyte

**Microsoft Specific**

Generates the `out` instruction, which sends 1 byte specified by `Data` out the I/O port specified by `Port`.

## Syntax

```C
void __outbyte(
   unsigned short Port,
   unsigned char Data
);
```

### Parameters

*Port*\
[in] The port to send the data to.

*Data*\
[in] The byte to be sent out the specified port.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__outbyte`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
