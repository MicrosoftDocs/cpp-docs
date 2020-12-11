---
description: "Learn more about: __inbytestring"
title: "__inbytestring"
ms.date: "09/02/2019"
f1_keywords: ["__inbytestring", "__inbytestring_cpp"]
helpviewer_keywords: ["rep insb instruction", "__inbytestring intrinsic"]
ms.assetid: fe549556-e7a3-4af3-8ebf-8a7dc3cb233b
---
# __inbytestring

**Microsoft Specific**

Reads data from the specified port using the `rep insb` instruction.

## Syntax

```C
void __inbytestring(
   unsigned short Port,
   unsigned char* Buffer,
   unsigned long Count
);
```

### Parameters

*Port*\
[in] The port to read from.

*Buffer*\
[out] The data read from the port is written here.

*Count*\
[in] The number of bytes of data to read.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__inbytestring`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
