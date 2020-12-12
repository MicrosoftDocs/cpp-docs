---
description: "Learn more about: __outdword"
title: "__outdword"
ms.date: "09/02/2019"
f1_keywords: ["__outdword"]
helpviewer_keywords: ["out instruction", "outdword instruction", "__outdword intrinsic"]
ms.assetid: ed1e4994-a84b-4759-8bf9-cd48fb073f4d
---
# __outdword

**Microsoft Specific**

Generates the `out` instruction to send a doubleword *Data* out the port *Port*.

## Syntax

```C
void __outdword(
   unsigned short Port,
   unsigned long Data
);
```

### Parameters

*Port*\
[in] The port to send the data to.

*Data*\
[in] The doubleword to be sent.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__outdword`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
