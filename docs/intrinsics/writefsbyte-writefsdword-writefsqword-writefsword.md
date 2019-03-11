---
title: "__writefsbyte, __writefsdword, __writefsqword, __writefsword"
ms.date: "11/04/2016"
f1_keywords: ["__writefsword", "__writefsbyte", "__writefsqword", "__writefsdword"]
helpviewer_keywords: ["writefsbyte intrinsic", "__writefsword intrinsic", "writefsqword intrinsic", "writefsdword intrinsic", "__writefsdword intrinsic", "__writefsqword intrinsic", "__writefsbyte intrinsic", "writefsword intrinsic"]
ms.assetid: 23ac6e8e-bc91-4e90-a4c6-da02993637ad
---
# __writefsbyte, __writefsdword, __writefsqword, __writefsword

**Microsoft Specific**

Write memory to a location specified by an offset relative to the beginning of the FS segment.

## Syntax

```
void __writefsbyte(
   unsigned long Offset,
   unsigned char Data
);
void __writefsword(
   unsigned long Offset,
   unsigned short Data
);
void __writefsdword(
   unsigned long Offset,
   unsigned long Data
);
void __writefsqword(
   unsigned long Offset,
   unsigned __int64 Data
);
```

#### Parameters

*Offset*<br/>
[in] The offset from the beginning of FS to write to.

*Data*<br/>
[in] The value to write.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__writefsbyte`|x86|
|`__writefsword`|x86|
|`__writefsdword`|x86|
|`__writefsqword`|x86|

**Header file** \<intrin.h>

## Remarks

These routines are available only as intrinsics.

**END Microsoft Specific**

## See also

[__readfsbyte, \__readfsdword, \__readfsqword, \__readfsword](../intrinsics/readfsbyte-readfsdword-readfsqword-readfsword.md)<br/>
[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
