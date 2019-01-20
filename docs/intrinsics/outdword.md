---
title: "__outdword"
ms.date: "11/04/2016"
f1_keywords: ["__outdword"]
helpviewer_keywords: ["out instruction", "outdword instruction", "__outdword intrinsic"]
ms.assetid: ed1e4994-a84b-4759-8bf9-cd48fb073f4d
---
# __outdword

**Microsoft Specific**

Generates the `out` instruction to send a doubleword `Data` out the port `Port`.

## Syntax

```
void __outdword(
   unsigned short Port,
   unsigned long Data
);
```

#### Parameters

*Port*<br/>
[in] The port to send the data to.

*Data*<br/>
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

- [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
