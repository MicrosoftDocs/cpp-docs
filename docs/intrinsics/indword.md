---
title: "__indword"
ms.date: "11/04/2016"
f1_keywords: ["__indword_cpp", "__indword"]
helpviewer_keywords: ["in instruction", "__indword intrinsic"]
ms.assetid: 1068d686-586e-4e36-b962-d1d7c3315260
---
# __indword

**Microsoft Specific**

Reads one double word of data from the specified port using the `in` instruction.

## Syntax

```
unsigned long __indword(
   unsigned short Port
);
```

#### Parameters

*Port*<br/>
[in] The port to read from.

## Return Value

The word read from the port.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__indword`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

- [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
