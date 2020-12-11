---
description: "Learn more about: __readgsbyte, __readgsdword, __readgsqword, __readgsword"
title: "__readgsbyte, __readgsdword, __readgsqword, __readgsword"
ms.date: "09/02/2019"
f1_keywords: ["__readgsbyte", "__readgsdword", "__readgsqword", "__readgsword"]
helpviewer_keywords: ["__readgsword intrinsic", "__readgsdword intrinsic", "__readgsqword intrinsic", "__readgsbyte intrinsic"]
ms.assetid: f822632d-854c-4558-a71b-cdfc3eea2236
---
# __readgsbyte, __readgsdword, __readgsqword, __readgsword

**Microsoft Specific**

Read memory from a location specified by an offset relative to the beginning of the GS segment.

## Syntax

```C
unsigned char __readgsbyte(
   unsigned long Offset
);
unsigned short __readgsword(
   unsigned long Offset
);
unsigned long __readgsdword(
   unsigned long Offset
);
unsigned __int64 __readgsqword(
   unsigned long Offset
);
```

### Parameters

*Offset*\
[in] The offset from the beginning of `GS` to read from.

## Return value

The memory contents of the byte, word, double word, or quadword (as indicated by the name of the function called) at the location `GS:[Offset]`.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__readgsbyte`|x64|
|`__readgsdword`|x64|
|`__readgsqword`|x64|
|`__readgsword`|x64|

**Header file** \<intrin.h>

## Remarks

These routines are only available as an intrinsic.

**END Microsoft Specific**

## See also

[__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
