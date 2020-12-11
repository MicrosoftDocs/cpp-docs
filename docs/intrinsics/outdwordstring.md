---
description: "Learn more about: __outdwordstring"
title: "__outdwordstring"
ms.date: "09/02/2019"
f1_keywords: ["__outdwordstring"]
helpviewer_keywords: ["outsd instruction", "__outdwordstring intrinsic", "rep outsd instruction"]
ms.assetid: 55b31a65-aab7-4b5c-b61d-d9e2fb0c497a
---
# __outdwordstring

**Microsoft Specific**

Generates the `rep outsd` instruction, which sends `Count` doublewords starting at `Buffer` out the I/O port specified by `Port`.

## Syntax

```C
void __outdwordstring(
   unsigned short Port,
   unsigned long* Buffer,
   unsigned long Count
);
```

### Parameters

*Port*\
[in] The port to send the data to.

*Buffer*\
[in] A pointer to the data to be sent out the specified port.

*Count*\
[in] The number of doublewords to send.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__outdwordstring`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
