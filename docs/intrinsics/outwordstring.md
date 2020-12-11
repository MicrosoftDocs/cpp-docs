---
description: "Learn more about: __outwordstring"
title: "__outwordstring"
ms.date: "09/02/2019"
f1_keywords: ["__outwordstring"]
helpviewer_keywords: ["rep outsw instruction", "__outwordstring intrinsic", "outsw instruction"]
ms.assetid: b470c7a0-1de9-4370-886a-b2c3a1f842f4
---
# __outwordstring

**Microsoft Specific**

Generates the `rep outsw` instruction, which sends *Count* words starting at *Buffer* out the I/O port specified by *Port*.

## Syntax

```C
void __outwordstring(
   unsigned short Port,
   unsigned short* Buffer,
   unsigned long Count
);
```

### Parameters

*Port*\
[in] The port to send the data to.

*Buffer*\
[in] A pointer to the data to be sent out the specified port.

*Count*\
[in] The number of words to send.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__outwordstring`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
