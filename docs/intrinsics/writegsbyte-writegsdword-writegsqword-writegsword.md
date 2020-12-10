---
description: "Learn more about: __writegsbyte, __writegsdword, __writegsqword, __writegsword"
title: "__writegsbyte, __writegsdword, __writegsqword, __writegsword"
ms.date: "09/02/2019"
f1_keywords: ["__writegsbyte", "__writegsqword", "__writegsdword", "__writegsword"]
helpviewer_keywords: ["__writegsqword intrinsic", "__writegsbyte intrinsic", "__writegsword intrinsic", "__writegsdword intrinsic"]
ms.assetid: 7746cf6d-2259-4139-9aab-c07dd75c8037
---
# __writegsbyte, __writegsdword, __writegsqword, __writegsword

**Microsoft Specific**

Write memory to a location specified by an offset relative to the beginning of the GS segment.

## Syntax

```C
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

### Parameters

*Offset*\
[in] The offset from the beginning of GS to write to.

*Data*\
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

[__readgsbyte, \__readgsdword, \__readgsqword, \__readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
