---
title: "__writegsbyte, __writegsdword, __writegsqword, __writegsword"
ms.date: "11/04/2016"
f1_keywords: ["__writegsbyte", "__writegsqword", "__writegsdword", "__writegsword"]
helpviewer_keywords: ["__writegsqword intrinsic", "__writegsbyte intrinsic", "__writegsword intrinsic", "__writegsdword intrinsic"]
ms.assetid: 7746cf6d-2259-4139-9aab-c07dd75c8037
---
# __writegsbyte, __writegsdword, __writegsqword, __writegsword

**Microsoft Specific**

Write memory to a location specified by an offset relative to the beginning of the GS segment.

## Syntax

```
void __writegsbyte(
   unsigned long Offset,
   unsigned char Data
);
void __writegsword(
   unsigned long Offset,
   unsigned short Data
);
void __writegsdword(
   unsigned long Offset,
   unsigned long Data
);
void __writegsqword(
   unsigned long Offset,
   unsigned __int64 Data
);
```

#### Parameters

*Offset*<br/>
[in] The offset from the beginning of GS to write to.

*Data*<br/>
[in] The value to write.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__writegsbyte`|x64|
|`__writegsdword`|x64|
|`__writegsqword`|x64|
|`__writegsword`|x64|

**Header file** \<intrin.h>

## Remarks

These routines are only available as an intrinsic.

**END Microsoft Specific**

## See also

[__readgsbyte, \__readgsdword, \__readgsqword, \__readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)<br/>
[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
